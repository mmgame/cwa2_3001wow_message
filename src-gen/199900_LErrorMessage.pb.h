// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: 199900_LErrorMessage.proto

#ifndef PROTOBUF_199900_5fLErrorMessage_2eproto__INCLUDED
#define PROTOBUF_199900_5fLErrorMessage_2eproto__INCLUDED

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
void  protobuf_AddDesc_199900_5fLErrorMessage_2eproto();
void protobuf_AssignDesc_199900_5fLErrorMessage_2eproto();
void protobuf_ShutdownFile_199900_5fLErrorMessage_2eproto();

class LErrorDown;

enum LErrorCommondIdEnum {
  _BErrorDown = 1999001
};
bool LErrorCommondIdEnum_IsValid(int value);
const LErrorCommondIdEnum LErrorCommondIdEnum_MIN = _BErrorDown;
const LErrorCommondIdEnum LErrorCommondIdEnum_MAX = _BErrorDown;
const int LErrorCommondIdEnum_ARRAYSIZE = LErrorCommondIdEnum_MAX + 1;

const ::google::protobuf::EnumDescriptor* LErrorCommondIdEnum_descriptor();
inline const ::std::string& LErrorCommondIdEnum_Name(LErrorCommondIdEnum value) {
  return ::google::protobuf::internal::NameOfEnum(
    LErrorCommondIdEnum_descriptor(), value);
}
inline bool LErrorCommondIdEnum_Parse(
    const ::std::string& name, LErrorCommondIdEnum* value) {
  return ::google::protobuf::internal::ParseNamedEnum<LErrorCommondIdEnum>(
    LErrorCommondIdEnum_descriptor(), name, value);
}
enum LErrorTypeEnum {
  InputError = 1,
  DataError = 2,
  SystemError = 3
};
bool LErrorTypeEnum_IsValid(int value);
const LErrorTypeEnum LErrorTypeEnum_MIN = InputError;
const LErrorTypeEnum LErrorTypeEnum_MAX = SystemError;
const int LErrorTypeEnum_ARRAYSIZE = LErrorTypeEnum_MAX + 1;

const ::google::protobuf::EnumDescriptor* LErrorTypeEnum_descriptor();
inline const ::std::string& LErrorTypeEnum_Name(LErrorTypeEnum value) {
  return ::google::protobuf::internal::NameOfEnum(
    LErrorTypeEnum_descriptor(), value);
}
inline bool LErrorTypeEnum_Parse(
    const ::std::string& name, LErrorTypeEnum* value) {
  return ::google::protobuf::internal::ParseNamedEnum<LErrorTypeEnum>(
    LErrorTypeEnum_descriptor(), name, value);
}
enum ModuleTypeEnum {
  MT_User = 0,
  MT_Item = 1,
  MT_Room = 2,
  MT_Hero = 3,
  MT_Economy = 4,
  MT_Equipment = 5,
  MT_Formation = 6,
  MT_Vip = 7
};
bool ModuleTypeEnum_IsValid(int value);
const ModuleTypeEnum ModuleTypeEnum_MIN = MT_User;
const ModuleTypeEnum ModuleTypeEnum_MAX = MT_Vip;
const int ModuleTypeEnum_ARRAYSIZE = ModuleTypeEnum_MAX + 1;

const ::google::protobuf::EnumDescriptor* ModuleTypeEnum_descriptor();
inline const ::std::string& ModuleTypeEnum_Name(ModuleTypeEnum value) {
  return ::google::protobuf::internal::NameOfEnum(
    ModuleTypeEnum_descriptor(), value);
}
inline bool ModuleTypeEnum_Parse(
    const ::std::string& name, ModuleTypeEnum* value) {
  return ::google::protobuf::internal::ParseNamedEnum<ModuleTypeEnum>(
    ModuleTypeEnum_descriptor(), name, value);
}
enum InputErrorTypeEnum {
  IE_UserName = 1,
  IE_ConsumeType = 2,
  IE_FormationType = 3,
  IE_IconType = 4
};
bool InputErrorTypeEnum_IsValid(int value);
const InputErrorTypeEnum InputErrorTypeEnum_MIN = IE_UserName;
const InputErrorTypeEnum InputErrorTypeEnum_MAX = IE_IconType;
const int InputErrorTypeEnum_ARRAYSIZE = InputErrorTypeEnum_MAX + 1;

const ::google::protobuf::EnumDescriptor* InputErrorTypeEnum_descriptor();
inline const ::std::string& InputErrorTypeEnum_Name(InputErrorTypeEnum value) {
  return ::google::protobuf::internal::NameOfEnum(
    InputErrorTypeEnum_descriptor(), value);
}
inline bool InputErrorTypeEnum_Parse(
    const ::std::string& name, InputErrorTypeEnum* value) {
  return ::google::protobuf::internal::ParseNamedEnum<InputErrorTypeEnum>(
    InputErrorTypeEnum_descriptor(), name, value);
}
// ===================================================================

class LErrorDown : public ::google::protobuf::Message {
 public:
  LErrorDown();
  virtual ~LErrorDown();

  LErrorDown(const LErrorDown& from);

  inline LErrorDown& operator=(const LErrorDown& from) {
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
  static const LErrorDown& default_instance();

  void Swap(LErrorDown* other);

  // implements Message ----------------------------------------------

  LErrorDown* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const LErrorDown& from);
  void MergeFrom(const LErrorDown& from);
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

  // required .LErrorTypeEnum errorType = 2;
  inline bool has_errortype() const;
  inline void clear_errortype();
  static const int kErrorTypeFieldNumber = 2;
  inline ::LErrorTypeEnum errortype() const;
  inline void set_errortype(::LErrorTypeEnum value);

  // optional .ModuleTypeEnum moduleType = 3;
  inline bool has_moduletype() const;
  inline void clear_moduletype();
  static const int kModuleTypeFieldNumber = 3;
  inline ::ModuleTypeEnum moduletype() const;
  inline void set_moduletype(::ModuleTypeEnum value);

  // optional .InputErrorTypeEnum inputErrorType = 4;
  inline bool has_inputerrortype() const;
  inline void clear_inputerrortype();
  static const int kInputErrorTypeFieldNumber = 4;
  inline ::InputErrorTypeEnum inputerrortype() const;
  inline void set_inputerrortype(::InputErrorTypeEnum value);

  // @@protoc_insertion_point(class_scope:LErrorDown)
 private:
  inline void set_has_errormessage();
  inline void clear_has_errormessage();
  inline void set_has_errortype();
  inline void clear_has_errortype();
  inline void set_has_moduletype();
  inline void clear_has_moduletype();
  inline void set_has_inputerrortype();
  inline void clear_has_inputerrortype();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::std::string* errormessage_;
  int errortype_;
  int moduletype_;
  int inputerrortype_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(4 + 31) / 32];

  friend void  protobuf_AddDesc_199900_5fLErrorMessage_2eproto();
  friend void protobuf_AssignDesc_199900_5fLErrorMessage_2eproto();
  friend void protobuf_ShutdownFile_199900_5fLErrorMessage_2eproto();

  void InitAsDefaultInstance();
  static LErrorDown* default_instance_;
};
// ===================================================================


// ===================================================================

// LErrorDown

// required string errorMessage = 1;
inline bool LErrorDown::has_errormessage() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void LErrorDown::set_has_errormessage() {
  _has_bits_[0] |= 0x00000001u;
}
inline void LErrorDown::clear_has_errormessage() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void LErrorDown::clear_errormessage() {
  if (errormessage_ != &::google::protobuf::internal::kEmptyString) {
    errormessage_->clear();
  }
  clear_has_errormessage();
}
inline const ::std::string& LErrorDown::errormessage() const {
  return *errormessage_;
}
inline void LErrorDown::set_errormessage(const ::std::string& value) {
  set_has_errormessage();
  if (errormessage_ == &::google::protobuf::internal::kEmptyString) {
    errormessage_ = new ::std::string;
  }
  errormessage_->assign(value);
}
inline void LErrorDown::set_errormessage(const char* value) {
  set_has_errormessage();
  if (errormessage_ == &::google::protobuf::internal::kEmptyString) {
    errormessage_ = new ::std::string;
  }
  errormessage_->assign(value);
}
inline void LErrorDown::set_errormessage(const char* value, size_t size) {
  set_has_errormessage();
  if (errormessage_ == &::google::protobuf::internal::kEmptyString) {
    errormessage_ = new ::std::string;
  }
  errormessage_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* LErrorDown::mutable_errormessage() {
  set_has_errormessage();
  if (errormessage_ == &::google::protobuf::internal::kEmptyString) {
    errormessage_ = new ::std::string;
  }
  return errormessage_;
}
inline ::std::string* LErrorDown::release_errormessage() {
  clear_has_errormessage();
  if (errormessage_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = errormessage_;
    errormessage_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}
inline void LErrorDown::set_allocated_errormessage(::std::string* errormessage) {
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

// required .LErrorTypeEnum errorType = 2;
inline bool LErrorDown::has_errortype() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void LErrorDown::set_has_errortype() {
  _has_bits_[0] |= 0x00000002u;
}
inline void LErrorDown::clear_has_errortype() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void LErrorDown::clear_errortype() {
  errortype_ = 1;
  clear_has_errortype();
}
inline ::LErrorTypeEnum LErrorDown::errortype() const {
  return static_cast< ::LErrorTypeEnum >(errortype_);
}
inline void LErrorDown::set_errortype(::LErrorTypeEnum value) {
  assert(::LErrorTypeEnum_IsValid(value));
  set_has_errortype();
  errortype_ = value;
}

// optional .ModuleTypeEnum moduleType = 3;
inline bool LErrorDown::has_moduletype() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void LErrorDown::set_has_moduletype() {
  _has_bits_[0] |= 0x00000004u;
}
inline void LErrorDown::clear_has_moduletype() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void LErrorDown::clear_moduletype() {
  moduletype_ = 0;
  clear_has_moduletype();
}
inline ::ModuleTypeEnum LErrorDown::moduletype() const {
  return static_cast< ::ModuleTypeEnum >(moduletype_);
}
inline void LErrorDown::set_moduletype(::ModuleTypeEnum value) {
  assert(::ModuleTypeEnum_IsValid(value));
  set_has_moduletype();
  moduletype_ = value;
}

// optional .InputErrorTypeEnum inputErrorType = 4;
inline bool LErrorDown::has_inputerrortype() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void LErrorDown::set_has_inputerrortype() {
  _has_bits_[0] |= 0x00000008u;
}
inline void LErrorDown::clear_has_inputerrortype() {
  _has_bits_[0] &= ~0x00000008u;
}
inline void LErrorDown::clear_inputerrortype() {
  inputerrortype_ = 1;
  clear_has_inputerrortype();
}
inline ::InputErrorTypeEnum LErrorDown::inputerrortype() const {
  return static_cast< ::InputErrorTypeEnum >(inputerrortype_);
}
inline void LErrorDown::set_inputerrortype(::InputErrorTypeEnum value) {
  assert(::InputErrorTypeEnum_IsValid(value));
  set_has_inputerrortype();
  inputerrortype_ = value;
}


// @@protoc_insertion_point(namespace_scope)

#ifndef SWIG
namespace google {
namespace protobuf {

template <>
inline const EnumDescriptor* GetEnumDescriptor< ::LErrorCommondIdEnum>() {
  return ::LErrorCommondIdEnum_descriptor();
}
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::LErrorTypeEnum>() {
  return ::LErrorTypeEnum_descriptor();
}
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::ModuleTypeEnum>() {
  return ::ModuleTypeEnum_descriptor();
}
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::InputErrorTypeEnum>() {
  return ::InputErrorTypeEnum_descriptor();
}

}  // namespace google
}  // namespace protobuf
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_199900_5fLErrorMessage_2eproto__INCLUDED
