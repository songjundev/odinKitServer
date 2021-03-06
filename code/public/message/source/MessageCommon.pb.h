// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: MessageCommon.proto

#ifndef PROTOBUF_MessageCommon_2eproto__INCLUDED
#define PROTOBUF_MessageCommon_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 2005000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 2005000 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)

namespace Message {

// Internal implementation detail -- do not call these.
void  protobuf_AddDesc_MessageCommon_2eproto();
void protobuf_AssignDesc_MessageCommon_2eproto();
void protobuf_ShutdownFile_MessageCommon_2eproto();

class ErrorNo;
class EventSync;

// ===================================================================

class ErrorNo : public ::google::protobuf::Message {
 public:
  ErrorNo();
  virtual ~ErrorNo();

  ErrorNo(const ErrorNo& from);

  inline ErrorNo& operator=(const ErrorNo& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _unknown_fields_;
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return &_unknown_fields_;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const ErrorNo& default_instance();

  void Swap(ErrorNo* other);

  // implements Message ----------------------------------------------

  ErrorNo* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const ErrorNo& from);
  void MergeFrom(const ErrorNo& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:

  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // optional int32 error = 1;
  inline bool has_error() const;
  inline void clear_error();
  static const int kErrorFieldNumber = 1;
  inline ::google::protobuf::int32 error() const;
  inline void set_error(::google::protobuf::int32 value);

  // optional int64 userid = 2;
  inline bool has_userid() const;
  inline void clear_userid();
  static const int kUseridFieldNumber = 2;
  inline ::google::protobuf::int64 userid() const;
  inline void set_userid(::google::protobuf::int64 value);

  // optional int32 type = 3;
  inline bool has_type() const;
  inline void clear_type();
  static const int kTypeFieldNumber = 3;
  inline ::google::protobuf::int32 type() const;
  inline void set_type(::google::protobuf::int32 value);

  // optional int32 paramint1 = 4;
  inline bool has_paramint1() const;
  inline void clear_paramint1();
  static const int kParamint1FieldNumber = 4;
  inline ::google::protobuf::int32 paramint1() const;
  inline void set_paramint1(::google::protobuf::int32 value);

  // optional int32 paramint2 = 5;
  inline bool has_paramint2() const;
  inline void clear_paramint2();
  static const int kParamint2FieldNumber = 5;
  inline ::google::protobuf::int32 paramint2() const;
  inline void set_paramint2(::google::protobuf::int32 value);

  // optional int32 paramint3 = 6;
  inline bool has_paramint3() const;
  inline void clear_paramint3();
  static const int kParamint3FieldNumber = 6;
  inline ::google::protobuf::int32 paramint3() const;
  inline void set_paramint3(::google::protobuf::int32 value);

  // optional int64 paramlong1 = 7;
  inline bool has_paramlong1() const;
  inline void clear_paramlong1();
  static const int kParamlong1FieldNumber = 7;
  inline ::google::protobuf::int64 paramlong1() const;
  inline void set_paramlong1(::google::protobuf::int64 value);

  // optional int64 paramlong2 = 8;
  inline bool has_paramlong2() const;
  inline void clear_paramlong2();
  static const int kParamlong2FieldNumber = 8;
  inline ::google::protobuf::int64 paramlong2() const;
  inline void set_paramlong2(::google::protobuf::int64 value);

  // optional int64 paramlong3 = 9;
  inline bool has_paramlong3() const;
  inline void clear_paramlong3();
  static const int kParamlong3FieldNumber = 9;
  inline ::google::protobuf::int64 paramlong3() const;
  inline void set_paramlong3(::google::protobuf::int64 value);

  // optional string paramstr1 = 10;
  inline bool has_paramstr1() const;
  inline void clear_paramstr1();
  static const int kParamstr1FieldNumber = 10;
  inline const ::std::string& paramstr1() const;
  inline void set_paramstr1(const ::std::string& value);
  inline void set_paramstr1(const char* value);
  inline void set_paramstr1(const char* value, size_t size);
  inline ::std::string* mutable_paramstr1();
  inline ::std::string* release_paramstr1();
  inline void set_allocated_paramstr1(::std::string* paramstr1);

  // optional string paramstr2 = 11;
  inline bool has_paramstr2() const;
  inline void clear_paramstr2();
  static const int kParamstr2FieldNumber = 11;
  inline const ::std::string& paramstr2() const;
  inline void set_paramstr2(const ::std::string& value);
  inline void set_paramstr2(const char* value);
  inline void set_paramstr2(const char* value, size_t size);
  inline ::std::string* mutable_paramstr2();
  inline ::std::string* release_paramstr2();
  inline void set_allocated_paramstr2(::std::string* paramstr2);

  // optional string paramstr3 = 12;
  inline bool has_paramstr3() const;
  inline void clear_paramstr3();
  static const int kParamstr3FieldNumber = 12;
  inline const ::std::string& paramstr3() const;
  inline void set_paramstr3(const ::std::string& value);
  inline void set_paramstr3(const char* value);
  inline void set_paramstr3(const char* value, size_t size);
  inline ::std::string* mutable_paramstr3();
  inline ::std::string* release_paramstr3();
  inline void set_allocated_paramstr3(::std::string* paramstr3);

  // @@protoc_insertion_point(class_scope:Message.ErrorNo)
 private:
  inline void set_has_error();
  inline void clear_has_error();
  inline void set_has_userid();
  inline void clear_has_userid();
  inline void set_has_type();
  inline void clear_has_type();
  inline void set_has_paramint1();
  inline void clear_has_paramint1();
  inline void set_has_paramint2();
  inline void clear_has_paramint2();
  inline void set_has_paramint3();
  inline void clear_has_paramint3();
  inline void set_has_paramlong1();
  inline void clear_has_paramlong1();
  inline void set_has_paramlong2();
  inline void clear_has_paramlong2();
  inline void set_has_paramlong3();
  inline void clear_has_paramlong3();
  inline void set_has_paramstr1();
  inline void clear_has_paramstr1();
  inline void set_has_paramstr2();
  inline void clear_has_paramstr2();
  inline void set_has_paramstr3();
  inline void clear_has_paramstr3();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::int64 userid_;
  ::google::protobuf::int32 error_;
  ::google::protobuf::int32 type_;
  ::google::protobuf::int32 paramint1_;
  ::google::protobuf::int32 paramint2_;
  ::google::protobuf::int64 paramlong1_;
  ::google::protobuf::int64 paramlong2_;
  ::google::protobuf::int64 paramlong3_;
  ::std::string* paramstr1_;
  ::std::string* paramstr2_;
  ::std::string* paramstr3_;
  ::google::protobuf::int32 paramint3_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(12 + 31) / 32];

  friend void  protobuf_AddDesc_MessageCommon_2eproto();
  friend void protobuf_AssignDesc_MessageCommon_2eproto();
  friend void protobuf_ShutdownFile_MessageCommon_2eproto();

  void InitAsDefaultInstance();
  static ErrorNo* default_instance_;
};
// -------------------------------------------------------------------

class EventSync : public ::google::protobuf::Message {
 public:
  EventSync();
  virtual ~EventSync();

  EventSync(const EventSync& from);

  inline EventSync& operator=(const EventSync& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _unknown_fields_;
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return &_unknown_fields_;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const EventSync& default_instance();

  void Swap(EventSync* other);

  // implements Message ----------------------------------------------

  EventSync* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const EventSync& from);
  void MergeFrom(const EventSync& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:

  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // optional int32 evid = 1;
  inline bool has_evid() const;
  inline void clear_evid();
  static const int kEvidFieldNumber = 1;
  inline ::google::protobuf::int32 evid() const;
  inline void set_evid(::google::protobuf::int32 value);

  // optional int64 pid = 2;
  inline bool has_pid() const;
  inline void clear_pid();
  static const int kPidFieldNumber = 2;
  inline ::google::protobuf::int64 pid() const;
  inline void set_pid(::google::protobuf::int64 value);

  // optional int64 param1 = 3;
  inline bool has_param1() const;
  inline void clear_param1();
  static const int kParam1FieldNumber = 3;
  inline ::google::protobuf::int64 param1() const;
  inline void set_param1(::google::protobuf::int64 value);

  // optional int64 param2 = 4;
  inline bool has_param2() const;
  inline void clear_param2();
  static const int kParam2FieldNumber = 4;
  inline ::google::protobuf::int64 param2() const;
  inline void set_param2(::google::protobuf::int64 value);

  // optional int64 param3 = 5;
  inline bool has_param3() const;
  inline void clear_param3();
  static const int kParam3FieldNumber = 5;
  inline ::google::protobuf::int64 param3() const;
  inline void set_param3(::google::protobuf::int64 value);

  // optional int64 param4 = 6;
  inline bool has_param4() const;
  inline void clear_param4();
  static const int kParam4FieldNumber = 6;
  inline ::google::protobuf::int64 param4() const;
  inline void set_param4(::google::protobuf::int64 value);

  // optional int64 param5 = 7;
  inline bool has_param5() const;
  inline void clear_param5();
  static const int kParam5FieldNumber = 7;
  inline ::google::protobuf::int64 param5() const;
  inline void set_param5(::google::protobuf::int64 value);

  // optional int64 param6 = 8;
  inline bool has_param6() const;
  inline void clear_param6();
  static const int kParam6FieldNumber = 8;
  inline ::google::protobuf::int64 param6() const;
  inline void set_param6(::google::protobuf::int64 value);

  // optional string param7 = 9;
  inline bool has_param7() const;
  inline void clear_param7();
  static const int kParam7FieldNumber = 9;
  inline const ::std::string& param7() const;
  inline void set_param7(const ::std::string& value);
  inline void set_param7(const char* value);
  inline void set_param7(const char* value, size_t size);
  inline ::std::string* mutable_param7();
  inline ::std::string* release_param7();
  inline void set_allocated_param7(::std::string* param7);

  // optional string stime = 10;
  inline bool has_stime() const;
  inline void clear_stime();
  static const int kStimeFieldNumber = 10;
  inline const ::std::string& stime() const;
  inline void set_stime(const ::std::string& value);
  inline void set_stime(const char* value);
  inline void set_stime(const char* value, size_t size);
  inline ::std::string* mutable_stime();
  inline ::std::string* release_stime();
  inline void set_allocated_stime(::std::string* stime);

  // optional int64 parent = 11;
  inline bool has_parent() const;
  inline void clear_parent();
  static const int kParentFieldNumber = 11;
  inline ::google::protobuf::int64 parent() const;
  inline void set_parent(::google::protobuf::int64 value);

  // @@protoc_insertion_point(class_scope:Message.EventSync)
 private:
  inline void set_has_evid();
  inline void clear_has_evid();
  inline void set_has_pid();
  inline void clear_has_pid();
  inline void set_has_param1();
  inline void clear_has_param1();
  inline void set_has_param2();
  inline void clear_has_param2();
  inline void set_has_param3();
  inline void clear_has_param3();
  inline void set_has_param4();
  inline void clear_has_param4();
  inline void set_has_param5();
  inline void clear_has_param5();
  inline void set_has_param6();
  inline void clear_has_param6();
  inline void set_has_param7();
  inline void clear_has_param7();
  inline void set_has_stime();
  inline void clear_has_stime();
  inline void set_has_parent();
  inline void clear_has_parent();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::int64 pid_;
  ::google::protobuf::int64 param1_;
  ::google::protobuf::int64 param2_;
  ::google::protobuf::int64 param3_;
  ::google::protobuf::int64 param4_;
  ::google::protobuf::int64 param5_;
  ::google::protobuf::int64 param6_;
  ::std::string* param7_;
  ::std::string* stime_;
  ::google::protobuf::int64 parent_;
  ::google::protobuf::int32 evid_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(11 + 31) / 32];

  friend void  protobuf_AddDesc_MessageCommon_2eproto();
  friend void protobuf_AssignDesc_MessageCommon_2eproto();
  friend void protobuf_ShutdownFile_MessageCommon_2eproto();

  void InitAsDefaultInstance();
  static EventSync* default_instance_;
};
// ===================================================================


// ===================================================================

// ErrorNo

// optional int32 error = 1;
inline bool ErrorNo::has_error() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void ErrorNo::set_has_error() {
  _has_bits_[0] |= 0x00000001u;
}
inline void ErrorNo::clear_has_error() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void ErrorNo::clear_error() {
  error_ = 0;
  clear_has_error();
}
inline ::google::protobuf::int32 ErrorNo::error() const {
  return error_;
}
inline void ErrorNo::set_error(::google::protobuf::int32 value) {
  set_has_error();
  error_ = value;
}

// optional int64 userid = 2;
inline bool ErrorNo::has_userid() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void ErrorNo::set_has_userid() {
  _has_bits_[0] |= 0x00000002u;
}
inline void ErrorNo::clear_has_userid() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void ErrorNo::clear_userid() {
  userid_ = GOOGLE_LONGLONG(0);
  clear_has_userid();
}
inline ::google::protobuf::int64 ErrorNo::userid() const {
  return userid_;
}
inline void ErrorNo::set_userid(::google::protobuf::int64 value) {
  set_has_userid();
  userid_ = value;
}

// optional int32 type = 3;
inline bool ErrorNo::has_type() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void ErrorNo::set_has_type() {
  _has_bits_[0] |= 0x00000004u;
}
inline void ErrorNo::clear_has_type() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void ErrorNo::clear_type() {
  type_ = 0;
  clear_has_type();
}
inline ::google::protobuf::int32 ErrorNo::type() const {
  return type_;
}
inline void ErrorNo::set_type(::google::protobuf::int32 value) {
  set_has_type();
  type_ = value;
}

// optional int32 paramint1 = 4;
inline bool ErrorNo::has_paramint1() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void ErrorNo::set_has_paramint1() {
  _has_bits_[0] |= 0x00000008u;
}
inline void ErrorNo::clear_has_paramint1() {
  _has_bits_[0] &= ~0x00000008u;
}
inline void ErrorNo::clear_paramint1() {
  paramint1_ = 0;
  clear_has_paramint1();
}
inline ::google::protobuf::int32 ErrorNo::paramint1() const {
  return paramint1_;
}
inline void ErrorNo::set_paramint1(::google::protobuf::int32 value) {
  set_has_paramint1();
  paramint1_ = value;
}

// optional int32 paramint2 = 5;
inline bool ErrorNo::has_paramint2() const {
  return (_has_bits_[0] & 0x00000010u) != 0;
}
inline void ErrorNo::set_has_paramint2() {
  _has_bits_[0] |= 0x00000010u;
}
inline void ErrorNo::clear_has_paramint2() {
  _has_bits_[0] &= ~0x00000010u;
}
inline void ErrorNo::clear_paramint2() {
  paramint2_ = 0;
  clear_has_paramint2();
}
inline ::google::protobuf::int32 ErrorNo::paramint2() const {
  return paramint2_;
}
inline void ErrorNo::set_paramint2(::google::protobuf::int32 value) {
  set_has_paramint2();
  paramint2_ = value;
}

// optional int32 paramint3 = 6;
inline bool ErrorNo::has_paramint3() const {
  return (_has_bits_[0] & 0x00000020u) != 0;
}
inline void ErrorNo::set_has_paramint3() {
  _has_bits_[0] |= 0x00000020u;
}
inline void ErrorNo::clear_has_paramint3() {
  _has_bits_[0] &= ~0x00000020u;
}
inline void ErrorNo::clear_paramint3() {
  paramint3_ = 0;
  clear_has_paramint3();
}
inline ::google::protobuf::int32 ErrorNo::paramint3() const {
  return paramint3_;
}
inline void ErrorNo::set_paramint3(::google::protobuf::int32 value) {
  set_has_paramint3();
  paramint3_ = value;
}

// optional int64 paramlong1 = 7;
inline bool ErrorNo::has_paramlong1() const {
  return (_has_bits_[0] & 0x00000040u) != 0;
}
inline void ErrorNo::set_has_paramlong1() {
  _has_bits_[0] |= 0x00000040u;
}
inline void ErrorNo::clear_has_paramlong1() {
  _has_bits_[0] &= ~0x00000040u;
}
inline void ErrorNo::clear_paramlong1() {
  paramlong1_ = GOOGLE_LONGLONG(0);
  clear_has_paramlong1();
}
inline ::google::protobuf::int64 ErrorNo::paramlong1() const {
  return paramlong1_;
}
inline void ErrorNo::set_paramlong1(::google::protobuf::int64 value) {
  set_has_paramlong1();
  paramlong1_ = value;
}

// optional int64 paramlong2 = 8;
inline bool ErrorNo::has_paramlong2() const {
  return (_has_bits_[0] & 0x00000080u) != 0;
}
inline void ErrorNo::set_has_paramlong2() {
  _has_bits_[0] |= 0x00000080u;
}
inline void ErrorNo::clear_has_paramlong2() {
  _has_bits_[0] &= ~0x00000080u;
}
inline void ErrorNo::clear_paramlong2() {
  paramlong2_ = GOOGLE_LONGLONG(0);
  clear_has_paramlong2();
}
inline ::google::protobuf::int64 ErrorNo::paramlong2() const {
  return paramlong2_;
}
inline void ErrorNo::set_paramlong2(::google::protobuf::int64 value) {
  set_has_paramlong2();
  paramlong2_ = value;
}

// optional int64 paramlong3 = 9;
inline bool ErrorNo::has_paramlong3() const {
  return (_has_bits_[0] & 0x00000100u) != 0;
}
inline void ErrorNo::set_has_paramlong3() {
  _has_bits_[0] |= 0x00000100u;
}
inline void ErrorNo::clear_has_paramlong3() {
  _has_bits_[0] &= ~0x00000100u;
}
inline void ErrorNo::clear_paramlong3() {
  paramlong3_ = GOOGLE_LONGLONG(0);
  clear_has_paramlong3();
}
inline ::google::protobuf::int64 ErrorNo::paramlong3() const {
  return paramlong3_;
}
inline void ErrorNo::set_paramlong3(::google::protobuf::int64 value) {
  set_has_paramlong3();
  paramlong3_ = value;
}

// optional string paramstr1 = 10;
inline bool ErrorNo::has_paramstr1() const {
  return (_has_bits_[0] & 0x00000200u) != 0;
}
inline void ErrorNo::set_has_paramstr1() {
  _has_bits_[0] |= 0x00000200u;
}
inline void ErrorNo::clear_has_paramstr1() {
  _has_bits_[0] &= ~0x00000200u;
}
inline void ErrorNo::clear_paramstr1() {
  if (paramstr1_ != &::google::protobuf::internal::kEmptyString) {
    paramstr1_->clear();
  }
  clear_has_paramstr1();
}
inline const ::std::string& ErrorNo::paramstr1() const {
  return *paramstr1_;
}
inline void ErrorNo::set_paramstr1(const ::std::string& value) {
  set_has_paramstr1();
  if (paramstr1_ == &::google::protobuf::internal::kEmptyString) {
    paramstr1_ = new ::std::string;
  }
  paramstr1_->assign(value);
}
inline void ErrorNo::set_paramstr1(const char* value) {
  set_has_paramstr1();
  if (paramstr1_ == &::google::protobuf::internal::kEmptyString) {
    paramstr1_ = new ::std::string;
  }
  paramstr1_->assign(value);
}
inline void ErrorNo::set_paramstr1(const char* value, size_t size) {
  set_has_paramstr1();
  if (paramstr1_ == &::google::protobuf::internal::kEmptyString) {
    paramstr1_ = new ::std::string;
  }
  paramstr1_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* ErrorNo::mutable_paramstr1() {
  set_has_paramstr1();
  if (paramstr1_ == &::google::protobuf::internal::kEmptyString) {
    paramstr1_ = new ::std::string;
  }
  return paramstr1_;
}
inline ::std::string* ErrorNo::release_paramstr1() {
  clear_has_paramstr1();
  if (paramstr1_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = paramstr1_;
    paramstr1_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}
inline void ErrorNo::set_allocated_paramstr1(::std::string* paramstr1) {
  if (paramstr1_ != &::google::protobuf::internal::kEmptyString) {
    delete paramstr1_;
  }
  if (paramstr1) {
    set_has_paramstr1();
    paramstr1_ = paramstr1;
  } else {
    clear_has_paramstr1();
    paramstr1_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  }
}

// optional string paramstr2 = 11;
inline bool ErrorNo::has_paramstr2() const {
  return (_has_bits_[0] & 0x00000400u) != 0;
}
inline void ErrorNo::set_has_paramstr2() {
  _has_bits_[0] |= 0x00000400u;
}
inline void ErrorNo::clear_has_paramstr2() {
  _has_bits_[0] &= ~0x00000400u;
}
inline void ErrorNo::clear_paramstr2() {
  if (paramstr2_ != &::google::protobuf::internal::kEmptyString) {
    paramstr2_->clear();
  }
  clear_has_paramstr2();
}
inline const ::std::string& ErrorNo::paramstr2() const {
  return *paramstr2_;
}
inline void ErrorNo::set_paramstr2(const ::std::string& value) {
  set_has_paramstr2();
  if (paramstr2_ == &::google::protobuf::internal::kEmptyString) {
    paramstr2_ = new ::std::string;
  }
  paramstr2_->assign(value);
}
inline void ErrorNo::set_paramstr2(const char* value) {
  set_has_paramstr2();
  if (paramstr2_ == &::google::protobuf::internal::kEmptyString) {
    paramstr2_ = new ::std::string;
  }
  paramstr2_->assign(value);
}
inline void ErrorNo::set_paramstr2(const char* value, size_t size) {
  set_has_paramstr2();
  if (paramstr2_ == &::google::protobuf::internal::kEmptyString) {
    paramstr2_ = new ::std::string;
  }
  paramstr2_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* ErrorNo::mutable_paramstr2() {
  set_has_paramstr2();
  if (paramstr2_ == &::google::protobuf::internal::kEmptyString) {
    paramstr2_ = new ::std::string;
  }
  return paramstr2_;
}
inline ::std::string* ErrorNo::release_paramstr2() {
  clear_has_paramstr2();
  if (paramstr2_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = paramstr2_;
    paramstr2_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}
inline void ErrorNo::set_allocated_paramstr2(::std::string* paramstr2) {
  if (paramstr2_ != &::google::protobuf::internal::kEmptyString) {
    delete paramstr2_;
  }
  if (paramstr2) {
    set_has_paramstr2();
    paramstr2_ = paramstr2;
  } else {
    clear_has_paramstr2();
    paramstr2_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  }
}

// optional string paramstr3 = 12;
inline bool ErrorNo::has_paramstr3() const {
  return (_has_bits_[0] & 0x00000800u) != 0;
}
inline void ErrorNo::set_has_paramstr3() {
  _has_bits_[0] |= 0x00000800u;
}
inline void ErrorNo::clear_has_paramstr3() {
  _has_bits_[0] &= ~0x00000800u;
}
inline void ErrorNo::clear_paramstr3() {
  if (paramstr3_ != &::google::protobuf::internal::kEmptyString) {
    paramstr3_->clear();
  }
  clear_has_paramstr3();
}
inline const ::std::string& ErrorNo::paramstr3() const {
  return *paramstr3_;
}
inline void ErrorNo::set_paramstr3(const ::std::string& value) {
  set_has_paramstr3();
  if (paramstr3_ == &::google::protobuf::internal::kEmptyString) {
    paramstr3_ = new ::std::string;
  }
  paramstr3_->assign(value);
}
inline void ErrorNo::set_paramstr3(const char* value) {
  set_has_paramstr3();
  if (paramstr3_ == &::google::protobuf::internal::kEmptyString) {
    paramstr3_ = new ::std::string;
  }
  paramstr3_->assign(value);
}
inline void ErrorNo::set_paramstr3(const char* value, size_t size) {
  set_has_paramstr3();
  if (paramstr3_ == &::google::protobuf::internal::kEmptyString) {
    paramstr3_ = new ::std::string;
  }
  paramstr3_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* ErrorNo::mutable_paramstr3() {
  set_has_paramstr3();
  if (paramstr3_ == &::google::protobuf::internal::kEmptyString) {
    paramstr3_ = new ::std::string;
  }
  return paramstr3_;
}
inline ::std::string* ErrorNo::release_paramstr3() {
  clear_has_paramstr3();
  if (paramstr3_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = paramstr3_;
    paramstr3_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}
inline void ErrorNo::set_allocated_paramstr3(::std::string* paramstr3) {
  if (paramstr3_ != &::google::protobuf::internal::kEmptyString) {
    delete paramstr3_;
  }
  if (paramstr3) {
    set_has_paramstr3();
    paramstr3_ = paramstr3;
  } else {
    clear_has_paramstr3();
    paramstr3_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  }
}

// -------------------------------------------------------------------

// EventSync

// optional int32 evid = 1;
inline bool EventSync::has_evid() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void EventSync::set_has_evid() {
  _has_bits_[0] |= 0x00000001u;
}
inline void EventSync::clear_has_evid() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void EventSync::clear_evid() {
  evid_ = 0;
  clear_has_evid();
}
inline ::google::protobuf::int32 EventSync::evid() const {
  return evid_;
}
inline void EventSync::set_evid(::google::protobuf::int32 value) {
  set_has_evid();
  evid_ = value;
}

// optional int64 pid = 2;
inline bool EventSync::has_pid() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void EventSync::set_has_pid() {
  _has_bits_[0] |= 0x00000002u;
}
inline void EventSync::clear_has_pid() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void EventSync::clear_pid() {
  pid_ = GOOGLE_LONGLONG(0);
  clear_has_pid();
}
inline ::google::protobuf::int64 EventSync::pid() const {
  return pid_;
}
inline void EventSync::set_pid(::google::protobuf::int64 value) {
  set_has_pid();
  pid_ = value;
}

// optional int64 param1 = 3;
inline bool EventSync::has_param1() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void EventSync::set_has_param1() {
  _has_bits_[0] |= 0x00000004u;
}
inline void EventSync::clear_has_param1() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void EventSync::clear_param1() {
  param1_ = GOOGLE_LONGLONG(0);
  clear_has_param1();
}
inline ::google::protobuf::int64 EventSync::param1() const {
  return param1_;
}
inline void EventSync::set_param1(::google::protobuf::int64 value) {
  set_has_param1();
  param1_ = value;
}

// optional int64 param2 = 4;
inline bool EventSync::has_param2() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void EventSync::set_has_param2() {
  _has_bits_[0] |= 0x00000008u;
}
inline void EventSync::clear_has_param2() {
  _has_bits_[0] &= ~0x00000008u;
}
inline void EventSync::clear_param2() {
  param2_ = GOOGLE_LONGLONG(0);
  clear_has_param2();
}
inline ::google::protobuf::int64 EventSync::param2() const {
  return param2_;
}
inline void EventSync::set_param2(::google::protobuf::int64 value) {
  set_has_param2();
  param2_ = value;
}

// optional int64 param3 = 5;
inline bool EventSync::has_param3() const {
  return (_has_bits_[0] & 0x00000010u) != 0;
}
inline void EventSync::set_has_param3() {
  _has_bits_[0] |= 0x00000010u;
}
inline void EventSync::clear_has_param3() {
  _has_bits_[0] &= ~0x00000010u;
}
inline void EventSync::clear_param3() {
  param3_ = GOOGLE_LONGLONG(0);
  clear_has_param3();
}
inline ::google::protobuf::int64 EventSync::param3() const {
  return param3_;
}
inline void EventSync::set_param3(::google::protobuf::int64 value) {
  set_has_param3();
  param3_ = value;
}

// optional int64 param4 = 6;
inline bool EventSync::has_param4() const {
  return (_has_bits_[0] & 0x00000020u) != 0;
}
inline void EventSync::set_has_param4() {
  _has_bits_[0] |= 0x00000020u;
}
inline void EventSync::clear_has_param4() {
  _has_bits_[0] &= ~0x00000020u;
}
inline void EventSync::clear_param4() {
  param4_ = GOOGLE_LONGLONG(0);
  clear_has_param4();
}
inline ::google::protobuf::int64 EventSync::param4() const {
  return param4_;
}
inline void EventSync::set_param4(::google::protobuf::int64 value) {
  set_has_param4();
  param4_ = value;
}

// optional int64 param5 = 7;
inline bool EventSync::has_param5() const {
  return (_has_bits_[0] & 0x00000040u) != 0;
}
inline void EventSync::set_has_param5() {
  _has_bits_[0] |= 0x00000040u;
}
inline void EventSync::clear_has_param5() {
  _has_bits_[0] &= ~0x00000040u;
}
inline void EventSync::clear_param5() {
  param5_ = GOOGLE_LONGLONG(0);
  clear_has_param5();
}
inline ::google::protobuf::int64 EventSync::param5() const {
  return param5_;
}
inline void EventSync::set_param5(::google::protobuf::int64 value) {
  set_has_param5();
  param5_ = value;
}

// optional int64 param6 = 8;
inline bool EventSync::has_param6() const {
  return (_has_bits_[0] & 0x00000080u) != 0;
}
inline void EventSync::set_has_param6() {
  _has_bits_[0] |= 0x00000080u;
}
inline void EventSync::clear_has_param6() {
  _has_bits_[0] &= ~0x00000080u;
}
inline void EventSync::clear_param6() {
  param6_ = GOOGLE_LONGLONG(0);
  clear_has_param6();
}
inline ::google::protobuf::int64 EventSync::param6() const {
  return param6_;
}
inline void EventSync::set_param6(::google::protobuf::int64 value) {
  set_has_param6();
  param6_ = value;
}

// optional string param7 = 9;
inline bool EventSync::has_param7() const {
  return (_has_bits_[0] & 0x00000100u) != 0;
}
inline void EventSync::set_has_param7() {
  _has_bits_[0] |= 0x00000100u;
}
inline void EventSync::clear_has_param7() {
  _has_bits_[0] &= ~0x00000100u;
}
inline void EventSync::clear_param7() {
  if (param7_ != &::google::protobuf::internal::kEmptyString) {
    param7_->clear();
  }
  clear_has_param7();
}
inline const ::std::string& EventSync::param7() const {
  return *param7_;
}
inline void EventSync::set_param7(const ::std::string& value) {
  set_has_param7();
  if (param7_ == &::google::protobuf::internal::kEmptyString) {
    param7_ = new ::std::string;
  }
  param7_->assign(value);
}
inline void EventSync::set_param7(const char* value) {
  set_has_param7();
  if (param7_ == &::google::protobuf::internal::kEmptyString) {
    param7_ = new ::std::string;
  }
  param7_->assign(value);
}
inline void EventSync::set_param7(const char* value, size_t size) {
  set_has_param7();
  if (param7_ == &::google::protobuf::internal::kEmptyString) {
    param7_ = new ::std::string;
  }
  param7_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* EventSync::mutable_param7() {
  set_has_param7();
  if (param7_ == &::google::protobuf::internal::kEmptyString) {
    param7_ = new ::std::string;
  }
  return param7_;
}
inline ::std::string* EventSync::release_param7() {
  clear_has_param7();
  if (param7_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = param7_;
    param7_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}
inline void EventSync::set_allocated_param7(::std::string* param7) {
  if (param7_ != &::google::protobuf::internal::kEmptyString) {
    delete param7_;
  }
  if (param7) {
    set_has_param7();
    param7_ = param7;
  } else {
    clear_has_param7();
    param7_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  }
}

// optional string stime = 10;
inline bool EventSync::has_stime() const {
  return (_has_bits_[0] & 0x00000200u) != 0;
}
inline void EventSync::set_has_stime() {
  _has_bits_[0] |= 0x00000200u;
}
inline void EventSync::clear_has_stime() {
  _has_bits_[0] &= ~0x00000200u;
}
inline void EventSync::clear_stime() {
  if (stime_ != &::google::protobuf::internal::kEmptyString) {
    stime_->clear();
  }
  clear_has_stime();
}
inline const ::std::string& EventSync::stime() const {
  return *stime_;
}
inline void EventSync::set_stime(const ::std::string& value) {
  set_has_stime();
  if (stime_ == &::google::protobuf::internal::kEmptyString) {
    stime_ = new ::std::string;
  }
  stime_->assign(value);
}
inline void EventSync::set_stime(const char* value) {
  set_has_stime();
  if (stime_ == &::google::protobuf::internal::kEmptyString) {
    stime_ = new ::std::string;
  }
  stime_->assign(value);
}
inline void EventSync::set_stime(const char* value, size_t size) {
  set_has_stime();
  if (stime_ == &::google::protobuf::internal::kEmptyString) {
    stime_ = new ::std::string;
  }
  stime_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* EventSync::mutable_stime() {
  set_has_stime();
  if (stime_ == &::google::protobuf::internal::kEmptyString) {
    stime_ = new ::std::string;
  }
  return stime_;
}
inline ::std::string* EventSync::release_stime() {
  clear_has_stime();
  if (stime_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = stime_;
    stime_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}
inline void EventSync::set_allocated_stime(::std::string* stime) {
  if (stime_ != &::google::protobuf::internal::kEmptyString) {
    delete stime_;
  }
  if (stime) {
    set_has_stime();
    stime_ = stime;
  } else {
    clear_has_stime();
    stime_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  }
}

// optional int64 parent = 11;
inline bool EventSync::has_parent() const {
  return (_has_bits_[0] & 0x00000400u) != 0;
}
inline void EventSync::set_has_parent() {
  _has_bits_[0] |= 0x00000400u;
}
inline void EventSync::clear_has_parent() {
  _has_bits_[0] &= ~0x00000400u;
}
inline void EventSync::clear_parent() {
  parent_ = GOOGLE_LONGLONG(0);
  clear_has_parent();
}
inline ::google::protobuf::int64 EventSync::parent() const {
  return parent_;
}
inline void EventSync::set_parent(::google::protobuf::int64 value) {
  set_has_parent();
  parent_ = value;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace Message

#ifndef SWIG
namespace google {
namespace protobuf {


}  // namespace google
}  // namespace protobuf
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_MessageCommon_2eproto__INCLUDED
