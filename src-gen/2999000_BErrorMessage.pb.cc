// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: 2999000_BErrorMessage.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "2999000_BErrorMessage.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)

namespace {

const ::google::protobuf::Descriptor* BErrorParamBean_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  BErrorParamBean_reflection_ = NULL;
const ::google::protobuf::Descriptor* BErrorDown_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  BErrorDown_reflection_ = NULL;
const ::google::protobuf::EnumDescriptor* BErrorCommondIdEnum_descriptor_ = NULL;
const ::google::protobuf::EnumDescriptor* BErrorTypeEnum_descriptor_ = NULL;
const ::google::protobuf::EnumDescriptor* BErrorLvelEnum_descriptor_ = NULL;

}  // namespace


void protobuf_AssignDesc_2999000_5fBErrorMessage_2eproto() {
  protobuf_AddDesc_2999000_5fBErrorMessage_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "2999000_BErrorMessage.proto");
  GOOGLE_CHECK(file != NULL);
  BErrorParamBean_descriptor_ = file->message_type(0);
  static const int BErrorParamBean_offsets_[1] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(BErrorParamBean, param_),
  };
  BErrorParamBean_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      BErrorParamBean_descriptor_,
      BErrorParamBean::default_instance_,
      BErrorParamBean_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(BErrorParamBean, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(BErrorParamBean, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(BErrorParamBean));
  BErrorDown_descriptor_ = file->message_type(1);
  static const int BErrorDown_offsets_[4] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(BErrorDown, errormessage_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(BErrorDown, errortype_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(BErrorDown, errorlevel_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(BErrorDown, param_),
  };
  BErrorDown_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      BErrorDown_descriptor_,
      BErrorDown::default_instance_,
      BErrorDown_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(BErrorDown, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(BErrorDown, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(BErrorDown));
  BErrorCommondIdEnum_descriptor_ = file->enum_type(0);
  BErrorTypeEnum_descriptor_ = file->enum_type(1);
  BErrorLvelEnum_descriptor_ = file->enum_type(2);
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_2999000_5fBErrorMessage_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    BErrorParamBean_descriptor_, &BErrorParamBean::default_instance());
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    BErrorDown_descriptor_, &BErrorDown::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_2999000_5fBErrorMessage_2eproto() {
  delete BErrorParamBean::default_instance_;
  delete BErrorParamBean_reflection_;
  delete BErrorDown::default_instance_;
  delete BErrorDown_reflection_;
}

void protobuf_AddDesc_2999000_5fBErrorMessage_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\0332999000_BErrorMessage.proto\" \n\017BErrorP"
    "aramBean\022\r\n\005param\030\001 \003(\t\"z\n\nBErrorDown\022\024\n"
    "\014errorMessage\030\001 \002(\t\022\"\n\terrorType\030\002 \002(\0162\017"
    ".BErrorTypeEnum\022#\n\nerrorLevel\030\003 \002(\0162\017.BE"
    "rrorLvelEnum\022\r\n\005param\030\004 \003(\t*)\n\023BErrorCom"
    "mondIdEnum\022\022\n\013_BErrorDown\020\331\205\267\001*1\n\016BError"
    "TypeEnum\022\037\n\030Error_Prx_ServerShutDown\020\331\205\267"
    "\001*;\n\016BErrorLvelEnum\022\023\n\017ErrorLevel_Tips\020\001"
    "\022\024\n\020ErrorLevel_Error\020\002B \n\017com.cwa.messag"
    "eB\rBErrorMessage", 376);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "2999000_BErrorMessage.proto", &protobuf_RegisterTypes);
  BErrorParamBean::default_instance_ = new BErrorParamBean();
  BErrorDown::default_instance_ = new BErrorDown();
  BErrorParamBean::default_instance_->InitAsDefaultInstance();
  BErrorDown::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_2999000_5fBErrorMessage_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_2999000_5fBErrorMessage_2eproto {
  StaticDescriptorInitializer_2999000_5fBErrorMessage_2eproto() {
    protobuf_AddDesc_2999000_5fBErrorMessage_2eproto();
  }
} static_descriptor_initializer_2999000_5fBErrorMessage_2eproto_;
const ::google::protobuf::EnumDescriptor* BErrorCommondIdEnum_descriptor() {
  protobuf_AssignDescriptorsOnce();
  return BErrorCommondIdEnum_descriptor_;
}
bool BErrorCommondIdEnum_IsValid(int value) {
  switch(value) {
    case 2999001:
      return true;
    default:
      return false;
  }
}

const ::google::protobuf::EnumDescriptor* BErrorTypeEnum_descriptor() {
  protobuf_AssignDescriptorsOnce();
  return BErrorTypeEnum_descriptor_;
}
bool BErrorTypeEnum_IsValid(int value) {
  switch(value) {
    case 2999001:
      return true;
    default:
      return false;
  }
}

const ::google::protobuf::EnumDescriptor* BErrorLvelEnum_descriptor() {
  protobuf_AssignDescriptorsOnce();
  return BErrorLvelEnum_descriptor_;
}
bool BErrorLvelEnum_IsValid(int value) {
  switch(value) {
    case 1:
    case 2:
      return true;
    default:
      return false;
  }
}


// ===================================================================

#ifndef _MSC_VER
const int BErrorParamBean::kParamFieldNumber;
#endif  // !_MSC_VER

BErrorParamBean::BErrorParamBean()
  : ::google::protobuf::Message() {
  SharedCtor();
}

void BErrorParamBean::InitAsDefaultInstance() {
}

BErrorParamBean::BErrorParamBean(const BErrorParamBean& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
}

void BErrorParamBean::SharedCtor() {
  _cached_size_ = 0;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

BErrorParamBean::~BErrorParamBean() {
  SharedDtor();
}

void BErrorParamBean::SharedDtor() {
  if (this != default_instance_) {
  }
}

void BErrorParamBean::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* BErrorParamBean::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return BErrorParamBean_descriptor_;
}

const BErrorParamBean& BErrorParamBean::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_2999000_5fBErrorMessage_2eproto();
  return *default_instance_;
}

BErrorParamBean* BErrorParamBean::default_instance_ = NULL;

BErrorParamBean* BErrorParamBean::New() const {
  return new BErrorParamBean;
}

void BErrorParamBean::Clear() {
  param_.Clear();
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool BErrorParamBean::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // repeated string param = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_param:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->add_param()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8String(
            this->param(this->param_size() - 1).data(),
            this->param(this->param_size() - 1).length(),
            ::google::protobuf::internal::WireFormat::PARSE);
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(10)) goto parse_param;
        if (input->ExpectAtEnd()) return true;
        break;
      }

      default: {
      handle_uninterpreted:
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          return true;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, mutable_unknown_fields()));
        break;
      }
    }
  }
  return true;
#undef DO_
}

void BErrorParamBean::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // repeated string param = 1;
  for (int i = 0; i < this->param_size(); i++) {
  ::google::protobuf::internal::WireFormat::VerifyUTF8String(
    this->param(i).data(), this->param(i).length(),
    ::google::protobuf::internal::WireFormat::SERIALIZE);
    ::google::protobuf::internal::WireFormatLite::WriteString(
      1, this->param(i), output);
  }

  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
}

::google::protobuf::uint8* BErrorParamBean::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // repeated string param = 1;
  for (int i = 0; i < this->param_size(); i++) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->param(i).data(), this->param(i).length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    target = ::google::protobuf::internal::WireFormatLite::
      WriteStringToArray(1, this->param(i), target);
  }

  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  return target;
}

int BErrorParamBean::ByteSize() const {
  int total_size = 0;

  // repeated string param = 1;
  total_size += 1 * this->param_size();
  for (int i = 0; i < this->param_size(); i++) {
    total_size += ::google::protobuf::internal::WireFormatLite::StringSize(
      this->param(i));
  }

  if (!unknown_fields().empty()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        unknown_fields());
  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void BErrorParamBean::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const BErrorParamBean* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const BErrorParamBean*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void BErrorParamBean::MergeFrom(const BErrorParamBean& from) {
  GOOGLE_CHECK_NE(&from, this);
  param_.MergeFrom(from.param_);
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void BErrorParamBean::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void BErrorParamBean::CopyFrom(const BErrorParamBean& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool BErrorParamBean::IsInitialized() const {

  return true;
}

void BErrorParamBean::Swap(BErrorParamBean* other) {
  if (other != this) {
    param_.Swap(&other->param_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata BErrorParamBean::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = BErrorParamBean_descriptor_;
  metadata.reflection = BErrorParamBean_reflection_;
  return metadata;
}


// ===================================================================

#ifndef _MSC_VER
const int BErrorDown::kErrorMessageFieldNumber;
const int BErrorDown::kErrorTypeFieldNumber;
const int BErrorDown::kErrorLevelFieldNumber;
const int BErrorDown::kParamFieldNumber;
#endif  // !_MSC_VER

BErrorDown::BErrorDown()
  : ::google::protobuf::Message() {
  SharedCtor();
}

void BErrorDown::InitAsDefaultInstance() {
}

BErrorDown::BErrorDown(const BErrorDown& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
}

void BErrorDown::SharedCtor() {
  _cached_size_ = 0;
  errormessage_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  errortype_ = 2999001;
  errorlevel_ = 1;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

BErrorDown::~BErrorDown() {
  SharedDtor();
}

void BErrorDown::SharedDtor() {
  if (errormessage_ != &::google::protobuf::internal::kEmptyString) {
    delete errormessage_;
  }
  if (this != default_instance_) {
  }
}

void BErrorDown::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* BErrorDown::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return BErrorDown_descriptor_;
}

const BErrorDown& BErrorDown::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_2999000_5fBErrorMessage_2eproto();
  return *default_instance_;
}

BErrorDown* BErrorDown::default_instance_ = NULL;

BErrorDown* BErrorDown::New() const {
  return new BErrorDown;
}

void BErrorDown::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (has_errormessage()) {
      if (errormessage_ != &::google::protobuf::internal::kEmptyString) {
        errormessage_->clear();
      }
    }
    errortype_ = 2999001;
    errorlevel_ = 1;
  }
  param_.Clear();
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool BErrorDown::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // required string errorMessage = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_errormessage()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8String(
            this->errormessage().data(), this->errormessage().length(),
            ::google::protobuf::internal::WireFormat::PARSE);
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(16)) goto parse_errorType;
        break;
      }

      // required .BErrorTypeEnum errorType = 2;
      case 2: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_errorType:
          int value;
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   int, ::google::protobuf::internal::WireFormatLite::TYPE_ENUM>(
                 input, &value)));
          if (::BErrorTypeEnum_IsValid(value)) {
            set_errortype(static_cast< ::BErrorTypeEnum >(value));
          } else {
            mutable_unknown_fields()->AddVarint(2, value);
          }
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(24)) goto parse_errorLevel;
        break;
      }

      // required .BErrorLvelEnum errorLevel = 3;
      case 3: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_errorLevel:
          int value;
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   int, ::google::protobuf::internal::WireFormatLite::TYPE_ENUM>(
                 input, &value)));
          if (::BErrorLvelEnum_IsValid(value)) {
            set_errorlevel(static_cast< ::BErrorLvelEnum >(value));
          } else {
            mutable_unknown_fields()->AddVarint(3, value);
          }
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(34)) goto parse_param;
        break;
      }

      // repeated string param = 4;
      case 4: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_param:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->add_param()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8String(
            this->param(this->param_size() - 1).data(),
            this->param(this->param_size() - 1).length(),
            ::google::protobuf::internal::WireFormat::PARSE);
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(34)) goto parse_param;
        if (input->ExpectAtEnd()) return true;
        break;
      }

      default: {
      handle_uninterpreted:
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          return true;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, mutable_unknown_fields()));
        break;
      }
    }
  }
  return true;
#undef DO_
}

void BErrorDown::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // required string errorMessage = 1;
  if (has_errormessage()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->errormessage().data(), this->errormessage().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    ::google::protobuf::internal::WireFormatLite::WriteString(
      1, this->errormessage(), output);
  }

  // required .BErrorTypeEnum errorType = 2;
  if (has_errortype()) {
    ::google::protobuf::internal::WireFormatLite::WriteEnum(
      2, this->errortype(), output);
  }

  // required .BErrorLvelEnum errorLevel = 3;
  if (has_errorlevel()) {
    ::google::protobuf::internal::WireFormatLite::WriteEnum(
      3, this->errorlevel(), output);
  }

  // repeated string param = 4;
  for (int i = 0; i < this->param_size(); i++) {
  ::google::protobuf::internal::WireFormat::VerifyUTF8String(
    this->param(i).data(), this->param(i).length(),
    ::google::protobuf::internal::WireFormat::SERIALIZE);
    ::google::protobuf::internal::WireFormatLite::WriteString(
      4, this->param(i), output);
  }

  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
}

::google::protobuf::uint8* BErrorDown::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // required string errorMessage = 1;
  if (has_errormessage()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->errormessage().data(), this->errormessage().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        1, this->errormessage(), target);
  }

  // required .BErrorTypeEnum errorType = 2;
  if (has_errortype()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteEnumToArray(
      2, this->errortype(), target);
  }

  // required .BErrorLvelEnum errorLevel = 3;
  if (has_errorlevel()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteEnumToArray(
      3, this->errorlevel(), target);
  }

  // repeated string param = 4;
  for (int i = 0; i < this->param_size(); i++) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->param(i).data(), this->param(i).length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    target = ::google::protobuf::internal::WireFormatLite::
      WriteStringToArray(4, this->param(i), target);
  }

  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  return target;
}

int BErrorDown::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // required string errorMessage = 1;
    if (has_errormessage()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->errormessage());
    }

    // required .BErrorTypeEnum errorType = 2;
    if (has_errortype()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::EnumSize(this->errortype());
    }

    // required .BErrorLvelEnum errorLevel = 3;
    if (has_errorlevel()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::EnumSize(this->errorlevel());
    }

  }
  // repeated string param = 4;
  total_size += 1 * this->param_size();
  for (int i = 0; i < this->param_size(); i++) {
    total_size += ::google::protobuf::internal::WireFormatLite::StringSize(
      this->param(i));
  }

  if (!unknown_fields().empty()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        unknown_fields());
  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void BErrorDown::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const BErrorDown* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const BErrorDown*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void BErrorDown::MergeFrom(const BErrorDown& from) {
  GOOGLE_CHECK_NE(&from, this);
  param_.MergeFrom(from.param_);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_errormessage()) {
      set_errormessage(from.errormessage());
    }
    if (from.has_errortype()) {
      set_errortype(from.errortype());
    }
    if (from.has_errorlevel()) {
      set_errorlevel(from.errorlevel());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void BErrorDown::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void BErrorDown::CopyFrom(const BErrorDown& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool BErrorDown::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000007) != 0x00000007) return false;

  return true;
}

void BErrorDown::Swap(BErrorDown* other) {
  if (other != this) {
    std::swap(errormessage_, other->errormessage_);
    std::swap(errortype_, other->errortype_);
    std::swap(errorlevel_, other->errorlevel_);
    param_.Swap(&other->param_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata BErrorDown::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = BErrorDown_descriptor_;
  metadata.reflection = BErrorDown_reflection_;
  return metadata;
}


// @@protoc_insertion_point(namespace_scope)

// @@protoc_insertion_point(global_scope)
