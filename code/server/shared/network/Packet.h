#ifndef SHARED_PACKET_H
#define SHARED_PACKET_H

#include <string.h>
#include <stdlib.h>
#include <string>
#include "NetHeader.h"
#include "platform.h"
#include "crc.h"

using namespace std;

#define USE_SHARED_PARSER		0
#define USE_PROTOCOL_BUFFER		1

#define PACKET_BUFFER_SIZE		4096

const char BYTE_FLAG	= 1;	//%b
const char WORD_FLAG	= 2;	//%w
const char INT_FLAG		= 3;	//%d
const char INT64_FLAG	= 4;	//%i
const char STRING_FLAG	= 5;	//%s

//////////////////////////////////////////
////	Packet ���ݽṹ���壺
////	���緢�ͺͽ��յ���Ϣ���ݱ����� data �ڴ����
////	���� HEAD_SIZE Ϊ��Ϣ�������ݵ���ʼλ�ã���������ռһ��uint16
////		 HEAD_TYPE Ϊ��Ϣ�������ݵ���ʼλ�ã���������ռһ��uint16
////		 DATA_PARAM Ϊ��Ϣ�������ݵ���ʵλ�ã�
////	��Ϣ�ܳ��Ȳ����� PACKET_BUFFER_SIZE
//////////////////////////////////////////
class PACKET_COMMAND
{
private:
	SOCKET	sock;			//���͵�����id,�ڽ���Packetʱ����
	uint16	_rpos, _wpos, _cpos;	//ƴ������հ�ʱ�Ķ�дָ��

	static const int8 HEAD_SIZE = 0;	//��Ϣ����
	static const int8 HEAD_TYPE = 2;	//��Ϣ��
	static const int8 HEAD_CRC16 = 4;	//����У��λ
	static const int8 HEAD_COMPRESS = 6;//����ѹ��λ
	static const int8 HEAD_TRANS = 8;	//���Ͷ���
	static const int8 DATA_PARAM = 16;	//����λ
	char data[PACKET_BUFFER_SIZE];		//��Ϣ����

	static char _Format[10240];


public:
	PACKET_COMMAND();
	~PACKET_COMMAND();

	void			init();

	inline SOCKET	GetNetID()			{return sock;}
	inline void		SetNetID(SOCKET netid){sock = netid;}

	inline int64	GetTrans()			{return *(int64*)(data + HEAD_TRANS);}
	inline void		SetTrans(int64 s)	{*(int64*)(data + HEAD_TRANS) = s;}

	inline uint16	Type()				{return *(uint16*)(data + HEAD_TYPE);}
	inline bool		Compress()			{return *(uint16*)(data + HEAD_COMPRESS) == 1;}
	inline char *	Data()				{return data;}
	inline uint16	Size()				{return *(uint16*)(data + HEAD_SIZE);}

	inline int	GetLeftSize()		{return Size() - _cpos;}
	inline int	GetHeadLeftSize()	{return DATA_PARAM - _cpos;}

	void Copy(char * buf, uint16 size);
	bool crcCheck();

	/*����packetͷ�����ڲ���put��֮���ٵ���*/
	void end(uint16 wType);

	char * toFormat()
	{
		sprintf(_Format, "socket=%d _rpos=%d _wpos=%d _cpos=%d HEAD(size=%d type=%d crc16=%d cpmpress=%d trans=%lld) [",
				sock, _rpos, _wpos, _cpos, Size(), Type(), *(uint16*)(data+HEAD_CRC16), Compress(), GetTrans());
		return _Format;

		for (int i = 0; i < Size(); i++) {
			char v = data[i];
			int len = strlen(_Format);
			sprintf(_Format + len,"%d,", (int)v);
		}

		strcat(_Format, "]");

		return _Format;
	}


#if USE_SHARED_PARSER
	void put(int8 value);
	void put(uint16 value);
	void put(int value);
	void put(int64 value);
	void put(const char * value, uint16 size);

	void get(int8 & value);
	void get(uint16 & value);
	void get(int & value);
	void get(int64 & value);
	void get(char * value, uint16 size);
#endif

#if USE_PROTOCOL_BUFFER

#define PROTOBUF_CMD_PARSER( pack, messge )	\
	{										\
		std::string buf;					\
		pack->getBuffer(buf);				\
		messge.ParseFromString(buf);		\
		Log.Debug("[Packet]Recv Message %d size %u: {%s}", pack->Type(), pack->Size(), messge.Utf8DebugString().c_str()); \
	}										\

#define PROTOBUF_CMD_PACKAGE( pack, messge, type )		\
	{													\
		std::string buf;								\
		messge.SerializeToString(&buf);					\
		pack.setBuffer(type, buf.c_str(), buf.size());	\
		Log.Debug("[Packet]Send Message %d size %u: {%s}", type, pack.Size(), messge.Utf8DebugString().c_str()); \
	}													\

	void setBuffer(uint16 wType, const char* buf, uint16 size);
	void getBuffer(std::string& buf);
#endif
	//uint16 _GetCompress(){return *(uint16*)(data + HEAD_COMPRESS);}

private:
	inline void		_SetSize(uint16 wSize) {*(uint16*)(data + HEAD_SIZE) = wSize;}
	inline void		_SetType(uint16 wType) {*(uint16*)(data + HEAD_TYPE) = wType;}
	inline void		_SetCompress(uint16 flag)	{*(uint16*)(data + HEAD_COMPRESS) = flag;}

	inline uint16	_HeadSize()				{return DATA_PARAM;}
	inline char *	_DataBuffer()			{return data + DATA_PARAM;}
	inline uint16	_DataSize()				{return Size() - _HeadSize();}

	inline uint16	_CRC16()				{return *(uint16*)(data + HEAD_CRC16);}
	inline void		_SetCRC16(uint16 CRC16)	{*(uint16*)(data + HEAD_CRC16) = CRC16;}

#if USE_SHARED_PARSER
	template <typename T> void append(T value);
	template <typename T> void read(T & value);

	void append(const char * value, uint16 size);
	void read(char * value, int size);

	void _append(const char * value, uint16 size);
	void _read(void * value, int size);

	void appendFlag(int8 flag);
	bool checkFlag(int8 flag);
#endif

};

#endif	//SHARED_PACKET_H