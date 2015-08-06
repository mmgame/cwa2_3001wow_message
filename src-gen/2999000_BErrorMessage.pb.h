// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: 2999000_BErrorMessage.proto

#ifndef PROTOBUF_2999000_5fBErrorMessage_2eproto__INCLUDED
#define PROTOBUF_2999000_5fBErrorMessage_2eproto__INCLUDED

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
#include <google/protobuf/generated_enum_reflection.h>
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)

// Internal implementation detail -- do not call these.
void  protobuf_AddDesc_2999000_5fBErrorMessage_2eproto();
void protobuf_AssignDesc_2999000_5fBErrorMessage_2eproto();
void protobuf_ShutdownFile_2999000_5fBErrorMessage_2eproto();

class BErrorParamBean;
class BErrorDown;

enum BErrorCommondIdEnum {
  _BErrorDown = 2999001
};
bool BErrorCommondIdEnum_IsValid(int value);
const BErrorCommondIdEnum BErrorCommondIdEnum_MIN = _BErrorDown;
const BErrorCommondIdEnum BErrorCommondIdEnum_MAX = _BErrorDown;
const int BErrorCommondIdEnum_ARRAYSIZE = BErrorCommondIdEnum_MAX + 1;

const ::google::protobuf::EnumDescriptor* BErrorCommondIdEnum_descriptor();
inline const ::std::string& BErrorCommondIdEnum_Name(BErrorCommondIdEnum value) {
  return ::google::protobuf::internal::NameOfEnum(
    BErrorCommondIdEnum_descriptor(), value);
}
inline bool BErrorCommondIdEnum_Parse(
    const ::std::string& name, BErrorCommondIdEnum* value) {
  return ::google::protobuf::internal::ParseNamedEnum<BErrorCommondIdEnum>(
    BErrorCommondIdEnum_descriptor(), name, value);
}
enum BErrorTypeEnum {
  Error_Prx_ServerShutDown = 2999001
};
bool BErrorTypeEnum_IsValid(int value);
const BErrorTypeEnum BErrorTypeEnum_MIN = Error_Prx_ServerShutDown;
const BErrorTypeEnum BErrorTypeEnum_MAX = Error_Prx_ServerShutDown;
const int BErrorTypeEnum_ARRAYSIZE = BErrorTypeEnum_MAX + 1;

const ::google::protobuf::EnumDescriptor* BErrorTypeEnum_descriptor();
inline const ::std::string& BErrorTypeEnum_Name(BErrorTypeEnum value) {
  return ::google::protobuf::internal::NameOfEnum(
    BErrorTypeEnum_descriptor(), value);
}
inline bool BErrorTypeEnum_Parse(
    const ::std::string& name, BErrorTypeEnum* value) {
  return ::google::protobuf::internal::ParseNamedEnum<BErrorTypeEnum>(
    BErrorTypeEnum_descriptor(), name, value);
}
enum BErrorLvelEnum {
  ErrorLevel_Tips = 1,
  ErrorLevel_Error = 2
};
bool BErrorLvelEnum_IsValid(int value);
const BErrorLvelEnum BErrorLvelEnum_MIN = ErrorLevel_Tips;
const BErrorLvelEnum BErrorLvelEnum_MAX = ErrorLevel_Error;
const int BErrorLvelEnum_ARRAYSIZE = BErrorLvelEnum_MAX + 1;

const ::google::protobuf::EnumDescriptor* BErrorLvelEnum_descriptor();
inline const ::std::string& BErrorLvelEnum_Name(BErrorLvelEnum value) {
  return ::google::protobuf::internal::NameOfEnum(
    BErrorLvelEnum_descriptor(), value);
}
inline bool BErrorLvelEnum_Parse(
    const ::std::string& name, BErrorLvelEnum* value) {
  return ::google::protobuf::internal::ParseNamedEnum<BErrorLvelEnum>(
    BErrorLvelEnum_descriptor(), name, value);
}
// ===================================================================

class BErrorParamBean : public ::google::protobuf::Message {
 public:
  BErrorParamBean();
  virtual ~BErrorParamBean();

  BErrorParamBean(const BErrorParamBean& from);

  inline BErrorParamBean& operator=(const BErrorParamBean& from) {
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
  static const BErrorParamBean& default_instance();

  void Swap(BErrorParamBean* other);

  // implements Message ----------------------------------------------

  BErrorParamBean* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const BErrorParamBean& from);
  void MergeFrom(const BErrorParamBean& from);
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

  // repeated string param = 1;
  inline int param_size() const;
  inline void clear_param();
  static const int kParamFieldNumber = 1;
  inline const ::std::string& param(int index) const;
  inline ::std::string* mutable_param(int index);
  inline void set_param(int index, const ::std::string& value);
  inline void set_param(int index, const char* value);
  inline void set_param(int index, const char* value, size_t size);
  inline ::std::string* add_param();
  inline void add_param(const ::std::string& value);
  inline void add_param(const char* value);
  inline void add_param(const char* value, size_t size);
  inline const ::google::protobuf::RepeatedPtrField< ::std::string>& param() const;
  inline ::google::protobuf::RepeatedPtrField< ::std::string>* mutable_param();

  // @@protoc_insertion_point(class_scope:BErrorParamBean)
 private:

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::RepeatedPtrField< ::std::string> param_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(1 + 31) / 32];

  friend void  protobuf_AddDesc_2999000_5fBErrorMessage_2eproto();
  friend void protobuf_AssignDesc_2999000_5fBErrorMessage_2eproto();
  friend void protobuf_ShutdownFile_2999000_5fBErrorMessage_2eproto();

  void InitAsDefaultInstance();
  static BErrorParamBean* default_instance_;
};
// -------------------------------------------------------------------

class BErrorDown : public ::google::protobuf::Message {
 public:
  BErrorDown();
  virtual ~BErrorDown();

  BErrorDown(const BErrorDown& from);

  inline BErrorDown& operator=(const BErrorDown& from) {
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
  static const BErrorDown& default_instance();

  void Swap(BErrorDown* other);

  // implements Message ----------------------------------------------

  BErrorDown* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const BErrorDown& from);
  void MergeFrom(const BErrorDown& from);
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

  // required string errorMessage = 1;
  inline bool has_errormessage() const;
  inline void clear_errormessage();
  static const int kErrorMessageFieldNumber = 1;
  inline const ::std::string& errormessage() const;
  inline void set_errormessage(const ::std::string& value);
  inline void set_errormessage(const char* value);
  inline void set_errormessage(const char* value, size_t size);
  inline ::std::string* mutable_errormessage();
  inline ::std::string* release_errormessage();
  inline void set_allocated_errormessage(::std::string* errormessage);

  // required .BErrorTypeEnum errorType = 2;
  inline bool has_errortype() const;
  inline void clear_errortype();
  static const int kErrorTypeFieldNumber = 2;
  inline ::BErrorTypeEnum errortype() const;
  inline void set_errortype(::BErrorTypeEnum value);

  // required .BErrorLvelEnum errorLevel = 3;
  inline bool has_errorlevel() const;
  inline void clear_errorlevel();
  static const int kErrorLevelFieldNumber = 3;
  inline ::BErrorLvelEnum errorlevel() const;
  inline void set_errorlevel(::BErrorLvelEnum value);

  // repeated string param = 4;
  inline int param_size() const;
  inline void clear_param();
  static const int kParamFieldNumber = 4;
  inline const ::std::string& param(int index) const;
  inline ::std::string* mutable_param(int index);
  inline void set_param(int index, const ::std::string& value);
  inline void set_param(int index, const char* value);
  inline void set_param(int index, const char* value, size_t size);
  inline ::std::string* add_param();
  inline void add_param(const ::std::string& value);
  inline void add_param(const char* value);
  inline void add_param(const char* value, size_t size);
  inline const ::google::protobuf::RepeatedPtrField< ::std::string>& param() const;
  inline ::google::protobuf::RepeatedPtrField< ::std::string>* mutable_param();

  // @@protoc_insertion_point(class_scope:BErrorDown)
 private:
  inline void set_has_errormessage();
  inline void clear_has_errormessage();
  inline void set_has_errortype();
  inline void clear_has_errortype();
  inline void set_has_errorlevel();
  inline void clear_has_errorlevel();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::std::string* errormessage_;
  int errortype_;
  int errorlevel_;
  ::google::protobuf::RepeatedPtrField< ::std::string> param_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(4 + 31) / 32];

  friend void  protobuf_AddDesc_2999000_5fBErrorMessage_2eproto();
  friend void protobuf_AssignDesc_2999000_5fBErrorMessage_2eproto();
  friend void protobuf_ShutdownFile_2999000_5fBErrorMessage_2eproto();

  void InitAsDefaultInstance();
  static BErrorDown* default_instance_;
};
// ===================================================================


// ===================================================================

// BErrorParamBean

// repeated string param = 1;
inline int BErrorParamBean::param_size() const {
  return param_.size();
}
inline void BErrorParamBean::clear_param() {
  param_.Clear();
}
inline const ::std::string& BErrorParamBean::param(int index) const {
  return param_.Get(index);
}
inline ::std::string* BErrorParamBean::mutable_param(int index) {
  return param_.Mutable(index);
}
inline void BErrorParamBean::set_param(int index, const ::std::string& value) {
  param_.Mutable(index)->assign(value);
}
inline void BErrorParamBean::set_param(int index, const char* value) {
  param_.Mutable(index)->assign(value);
}
inline void BErrorParamBean::set_param(int index, const char* value, size_t size) {
  param_.Mutable(index)->assign(
    reinterpret_cast<const char*>(value), size);
}
inline ::std::string* BErrorParamBean::add_param() {
  return param_.Add();
}
inline void BErrorParamBean::add_param(const ::std::string& value) {
  param_.Add()->assign(value);
}
inline void BErrorParamBean::add_param(const char* value) {
  param_.Add()->assign(value);
}
inline void BErrorParamBean::add_param(const char* value, size_t size) {
  param_.Add()->assign(reinterpret_cast<const char*>(value), size);
}
inline const ::google::protobuf::RepeatedPtrField< ::std::string>&
BErrorParamBean::param() const {
  return param_;
}
inline ::google::protobuf::RepeatedPtrField< ::std::string>*
BErrorParamBean::mutable_param() {
  return &param_;
}

// -------------------------------------------------------------------

// BErrorDown

// required string errorMessage = 1;
inline bool BErrorDown::has_errormessage() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void BErrorDown::set_has_errormessage() {
  _has_bits_[0] |= 0x00000001u;
}
inline void BErrorDown::clear_has_errormessage() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void BErrorDown::clear_errormessage() {
  if (errormessage_ != &::google::protobuf::internal::kEmptyString) {
    errormessage_->clear();
  }
  clear_has_errormessage();
}
inline const ::std::string& BErrorDown::errormessage() const {
  return *errormessage_;
}
inline void BErrorDown::set_errormessage(const ::std::string& value) {
  set_has_errormessage();
  if (errormessage_ == &::google::protobuf::internal::kEmptyString) {
    errormessage_ = new ::std::string;
  }
  errormessage_->assign(value);
}
inline void BErrorDown::set_errormessage(const char* value) {
  set_has_errormessage();
  if (errormessage_ == &::google::protobuf::internal::kEmptyString) {
    errormessage_ = new ::std::string;
  }
  errormessage_->assign(value);
}
inline void BErrorDown::set_errormessage(const char* value, size_t size) {
  set_has_errormessage();
  if (errormessage_ == &::google::protobuf::internal::kEmptyString) {
    errormessage_ = new ::std::string;
  }
  errormessage_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* BErrorDown::mutable_errormessage() {
  set_has_errormessage();
  if (errormessage_ == &::google::protobuf::internal::kEmptyString) {
    errormessage_ = new ::std::string;
  }
  return errormessage_;
}
inline ::std::string* BErrorDown::release_errormessage() {
  clear_has_errormessage();
  if (errormessage_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = errormessage_;
    errormessage_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}
inline void BErrorDown::set_allocated_errormessage(::std::string* errormessage) {
  if (errormessage_ != &::google::protobuf::internal::kEmptyString) {
    delete errormessage_;
  }
  if (errormessage) {
    set_has_errormessage();
    errormessage_ = errormessage;
  } else {
    clear_has_errormessage();
    errormessage_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  }
}

// required .BErrorTypeEnum errorType = 2;
inline bool BErrorDown::has_errortype() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void BErrorDown::set_has_errortype() {
  _has_bits_[0] |= 0x00000002u;
}
inline void BErrorDown::clear_has_errortype() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void BErrorDown::clear_errortype() {
  errortype_ = 2999001;
  clear_has_errortype();
}
inline ::BErrorTypeEnum BErrorDown::errortype() const {
  return static_cast< ::BErrorTypeEnum >(errortype_);
}
inline void BErrorDown::set_errortype(::BErrorTypeEnum value) {
  assert(::BErrorTypeEnum_IsValid(value));
  set_has_errortype();
  errortype_ = value;
}

// required .BErrorLvelEnum errorLevel = 3;
inline bool BErrorDown::has_errorlevel() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void BErrorDown::set_has_errorlevel() {
  _has_bits_[0] |= 0x00000004u;
}
inline void BErrorDown::clear_has_errorlevel() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void BErrorDown::clear_errorlevel() {
  errorlevel_ = 1;
  clear_has_errorlevel();
}
inline ::BErrorLvelEnum BErrorDown::errorlevel() const {
  return static_cast< ::BErrorLvelEnum >(errorlevel_);
}
inline void BErrorDown::set_errorlevel(::BErrorLvelEnum value) {
  assert(::BErrorLvelEnum_IsValid(value));
  set_has_errorlevel();
  errorlevel_ = value;
}

// repeated string param = 4;
inline int BErrorDown::param_size() const {
  return param_.size();
}
inline void BErrorDown::clear_param() {
  param_.Clear();
}
inline const ::std::string& BErrorDown::param(int index) const {
  return param_.Get(index);
}
inline ::std::string* BErrorDown::mutable_param(int index) {
  return param_.Mutable(index);
}
inline void BErrorDown::set_param(int index, const ::std::string& value) {
  param_.Mutable(index)->assign(value);
}
inline void BErrorDown::set_param(int index, const char* value) {
  param_.Mutable(index)->assign(value);
}
inline void BErrorDown::set_param(int index, const char* value, size_t size) {
  param_.Mutable(index)->assign(
    reinterpret_cast<const char*>(value), size);
}
inline ::std::string* BErrorDown::add_param() {
  return param_.Add();
}
inline void BErrorDown::add_param(const ::std::string& value) {
  param_.Add()->assign(value);
}
inline void BErrorDown::add_param(const char* value) {
  param_.Add()->assign(value);
}
inline void BErrorDown::add_param(const char* value, size_t size) {
  param_.Add()->assign(reinterpret_cast<const char*>(value), size);
}
inline const ::google::protobuf::RepeatedPtrField< ::std::string>&
BErrorDown::param() const {
  return param_;
}
inline ::google::protobuf::RepeatedPtrField< ::std::string>*
BErrorDown::mutable_param() {
  return &param_;
}


// @@protoc_insertion_point(namespace_scope)

#ifndef SWIG
namespace google {
namespace protobuf {

template <>
inline const EnumDescriptor* GetEnumDescriptor< ::BErrorCommondIdEnum>() {
  return ::BErrorCommondIdEnum_descriptor();
}
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::BErrorTypeEnum>() {
  return ::BErrorTypeEnum_descriptor();
}
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::BErrorLvelEnum>() {
  return ::BErrorLvelEnum_descriptor();
}

}  // namespace google
}  // namespace protobuf
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_2999000_5fBErrorMessage_2eproto__INCLUDED
