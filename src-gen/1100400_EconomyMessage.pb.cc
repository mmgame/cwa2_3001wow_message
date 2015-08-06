// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: 1100400_EconomyMessage.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "1100400_EconomyMessage.pb.h"

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

const ::google::protobuf::Descriptor* UserEconomyBean_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  UserEconomyBean_reflection_ = NULL;
const ::google::protobuf::Descriptor* GetUserEconomyUp_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  GetUserEconomyUp_reflection_ = NULL;
const ::google::protobuf::Descriptor* GetUserEconomyDown_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  GetUserEconomyDown_reflection_ = NULL;
const ::google::protobuf::Descriptor* ExchangeMoneyUp_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  ExchangeMoneyUp_reflection_ = NULL;
const ::google::protobuf::EnumDescriptor* EconomyCommondIdEnum_descriptor_ = NULL;

}  // namespace


void protobuf_AssignDesc_1100400_5fEconomyMessage_2eproto() {
  protobuf_AddDesc_1100400_5fEconomyMessage_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "1100400_EconomyMessage.proto");
  GOOGLE_CHECK(file != NULL);
  UserEconomyBean_descriptor_ = file->message_type(0);
  static const int UserEconomyBean_offsets_[2] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(UserEconomyBean, moneytype_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(UserEconomyBean, moneycount_),
  };
  UserEconomyBean_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      UserEconomyBean_descriptor_,
      UserEconomyBean::default_instance_,
      UserEconomyBean_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(UserEconomyBean, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(UserEconomyBean, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(UserEconomyBean));
  GetUserEconomyUp_descriptor_ = file->message_type(1);
  static const int GetUserEconomyUp_offsets_[1] = {
  };
  GetUserEconomyUp_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      GetUserEconomyUp_descriptor_,
      GetUserEconomyUp::default_instance_,
      GetUserEconomyUp_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(GetUserEconomyUp, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(GetUserEconomyUp, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(GetUserEconomyUp));
  GetUserEconomyDown_descriptor_ = file->message_type(2);
  static const int GetUserEconomyDown_offsets_[1] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(GetUserEconomyDown, usereconomybean_),
  };
  GetUserEconomyDown_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      GetUserEconomyDown_descriptor_,
      GetUserEconomyDown::default_instance_,
      GetUserEconomyDown_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(GetUserEconomyDown, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(GetUserEconomyDown, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(GetUserEconomyDown));
  ExchangeMoneyUp_descriptor_ = file->message_type(3);
  static const int ExchangeMoneyUp_offsets_[1] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ExchangeMoneyUp, exchangecount_),
  };
  ExchangeMoneyUp_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      ExchangeMoneyUp_descriptor_,
      ExchangeMoneyUp::default_instance_,
      ExchangeMoneyUp_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ExchangeMoneyUp, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ExchangeMoneyUp, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(ExchangeMoneyUp));
  EconomyCommondIdEnum_descriptor_ = file->enum_type(0);
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_1100400_5fEconomyMessage_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    UserEconomyBean_descriptor_, &UserEconomyBean::default_instance());
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    GetUserEconomyUp_descriptor_, &GetUserEconomyUp::default_instance());
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    GetUserEconomyDown_descriptor_, &GetUserEconomyDown::default_instance());
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    ExchangeMoneyUp_descriptor_, &ExchangeMoneyUp::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_1100400_5fEconomyMessage_2eproto() {
  delete UserEconomyBean::default_instance_;
  delete UserEconomyBean_reflection_;
  delete GetUserEconomyUp::default_instance_;
  delete GetUserEconomyUp_reflection_;
  delete GetUserEconomyDown::default_instance_;
  delete GetUserEconomyDown_reflection_;
  delete ExchangeMoneyUp::default_instance_;
  delete ExchangeMoneyUp_reflection_;
}

void protobuf_AddDesc_1100400_5fEconomyMessage_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\0341100400_EconomyMessage.proto\"8\n\017UserEc"
    "onomyBean\022\021\n\tmoneyType\030\001 \002(\r\022\022\n\nmoneyCou"
    "nt\030\002 \002(\r\"\022\n\020GetUserEconomyUp\"\?\n\022GetUserE"
    "conomyDown\022)\n\017userEconomyBean\030\001 \003(\0132\020.Us"
    "erEconomyBean\"(\n\017ExchangeMoneyUp\022\025\n\rexch"
    "angeCount\030\001 \002(\r*b\n\024EconomyCommondIdEnum\022"
    "\027\n\021_GetUserEconomyUp\020\361\224C\022\031\n\023_GetUserEcon"
    "omyDown\020\362\224C\022\026\n\020_ExchangeMoneyUp\020\363\224CB!\n\017c"
    "om.cwa.messageB\016EconomyMessage", 350);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "1100400_EconomyMessage.proto", &protobuf_RegisterTypes);
  UserEconomyBean::default_instance_ = new UserEconomyBean();
  GetUserEconomyUp::default_instance_ = new GetUserEconomyUp();
  GetUserEconomyDown::default_instance_ = new GetUserEconomyDown();
  ExchangeMoneyUp::default_instance_ = new ExchangeMoneyUp();
  UserEconomyBean::default_instance_->InitAsDefaultInstance();
  GetUserEconomyUp::default_instance_->InitAsDefaultInstance();
  GetUserEconomyDown::default_instance_->InitAsDefaultInstance();
  ExchangeMoneyUp::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_1100400_5fEconomyMessage_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_1100400_5fEconomyMessage_2eproto {
  StaticDescriptorInitializer_1100400_5fEconomyMessage_2eproto() {
    protobuf_AddDesc_1100400_5fEconomyMessage_2eproto();
  }
} static_descriptor_initializer_1100400_5fEconomyMessage_2eproto_;
const ::google::protobuf::EnumDescriptor* EconomyCommondIdEnum_descriptor() {
  protobuf_AssignDescriptorsOnce();
  return EconomyCommondIdEnum_descriptor_;
}
bool EconomyCommondIdEnum_IsValid(int value) {
  switch(value) {
    case 1100401:
    case 1100402:
    case 1100403:
      return true;
    default:
      return false;
  }
}


// ===================================================================

#ifndef _MSC_VER
const int UserEconomyBean::kMoneyTypeFieldNumber;
const int UserEconomyBean::kMoneyCountFieldNumber;
#endif  // !_MSC_VER

UserEconomyBean::UserEconomyBean()
  : ::google::protobuf::Message() {
  SharedCtor();
}

void UserEconomyBean::InitAsDefaultInstance() {
}

UserEconomyBean::UserEconomyBean(const UserEconomyBean& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
}

void UserEconomyBean::SharedCtor() {
  _cached_size_ = 0;
  moneytype_ = 0u;
  moneycount_ = 0u;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

UserEconomyBean::~UserEconomyBean() {
  SharedDtor();
}

void UserEconomyBean::SharedDtor() {
  if (this != default_instance_) {
  }
}

void UserEconomyBean::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* UserEconomyBean::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return UserEconomyBean_descriptor_;
}

const UserEconomyBean& UserEconomyBean::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_1100400_5fEconomyMessage_2eproto();
  return *default_instance_;
}

UserEconomyBean* UserEconomyBean::default_instance_ = NULL;

UserEconomyBean* UserEconomyBean::New() const {
  return new UserEconomyBean;
}

void UserEconomyBean::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    moneytype_ = 0u;
    moneycount_ = 0u;
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool UserEconomyBean::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // required uint32 moneyType = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &moneytype_)));
          set_has_moneytype();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(16)) goto parse_moneyCount;
        break;
      }

      // required uint32 moneyCount = 2;
      case 2: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_moneyCount:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &moneycount_)));
          set_has_moneycount();
        } else {
          goto handle_uninterpreted;
        }
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

void UserEconomyBean::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // required uint32 moneyType = 1;
  if (has_moneytype()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(1, this->moneytype(), output);
  }

  // required uint32 moneyCount = 2;
  if (has_moneycount()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(2, this->moneycount(), output);
  }

  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
}

::google::protobuf::uint8* UserEconomyBean::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // required uint32 moneyType = 1;
  if (has_moneytype()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(1, this->moneytype(), target);
  }

  // required uint32 moneyCount = 2;
  if (has_moneycount()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(2, this->moneycount(), target);
  }

  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  return target;
}

int UserEconomyBean::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // required uint32 moneyType = 1;
    if (has_moneytype()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt32Size(
          this->moneytype());
    }

    // required uint32 moneyCount = 2;
    if (has_moneycount()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt32Size(
          this->moneycount());
    }

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

void UserEconomyBean::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const UserEconomyBean* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const UserEconomyBean*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void UserEconomyBean::MergeFrom(const UserEconomyBean& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_moneytype()) {
      set_moneytype(from.moneytype());
    }
    if (from.has_moneycount()) {
      set_moneycount(from.moneycount());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void UserEconomyBean::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void UserEconomyBean::CopyFrom(const UserEconomyBean& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool UserEconomyBean::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000003) != 0x00000003) return false;

  return true;
}

void UserEconomyBean::Swap(UserEconomyBean* other) {
  if (other != this) {
    std::swap(moneytype_, other->moneytype_);
    std::swap(moneycount_, other->moneycount_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata UserEconomyBean::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = UserEconomyBean_descriptor_;
  metadata.reflection = UserEconomyBean_reflection_;
  return metadata;
}


// ===================================================================

#ifndef _MSC_VER
#endif  // !_MSC_VER

GetUserEconomyUp::GetUserEconomyUp()
  : ::google::protobuf::Message() {
  SharedCtor();
}

void GetUserEconomyUp::InitAsDefaultInstance() {
}

GetUserEconomyUp::GetUserEconomyUp(const GetUserEconomyUp& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
}

void GetUserEconomyUp::SharedCtor() {
  _cached_size_ = 0;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

GetUserEconomyUp::~GetUserEconomyUp() {
  SharedDtor();
}

void GetUserEconomyUp::SharedDtor() {
  if (this != default_instance_) {
  }
}

void GetUserEconomyUp::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* GetUserEconomyUp::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return GetUserEconomyUp_descriptor_;
}

const GetUserEconomyUp& GetUserEconomyUp::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_1100400_5fEconomyMessage_2eproto();
  return *default_instance_;
}

GetUserEconomyUp* GetUserEconomyUp::default_instance_ = NULL;

GetUserEconomyUp* GetUserEconomyUp::New() const {
  return new GetUserEconomyUp;
}

void GetUserEconomyUp::Clear() {
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool GetUserEconomyUp::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
        ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
      return true;
    }
    DO_(::google::protobuf::internal::WireFormat::SkipField(
          input, tag, mutable_unknown_fields()));
  }
  return true;
#undef DO_
}

void GetUserEconomyUp::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
}

::google::protobuf::uint8* GetUserEconomyUp::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  return target;
}

int GetUserEconomyUp::ByteSize() const {
  int total_size = 0;

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

void GetUserEconomyUp::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const GetUserEconomyUp* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const GetUserEconomyUp*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void GetUserEconomyUp::MergeFrom(const GetUserEconomyUp& from) {
  GOOGLE_CHECK_NE(&from, this);
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void GetUserEconomyUp::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void GetUserEconomyUp::CopyFrom(const GetUserEconomyUp& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool GetUserEconomyUp::IsInitialized() const {

  return true;
}

void GetUserEconomyUp::Swap(GetUserEconomyUp* other) {
  if (other != this) {
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata GetUserEconomyUp::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = GetUserEconomyUp_descriptor_;
  metadata.reflection = GetUserEconomyUp_reflection_;
  return metadata;
}


// ===================================================================

#ifndef _MSC_VER
const int GetUserEconomyDown::kUserEconomyBeanFieldNumber;
#endif  // !_MSC_VER

GetUserEconomyDown::GetUserEconomyDown()
  : ::google::protobuf::Message() {
  SharedCtor();
}

void GetUserEconomyDown::InitAsDefaultInstance() {
}

GetUserEconomyDown::GetUserEconomyDown(const GetUserEconomyDown& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
}

void GetUserEconomyDown::SharedCtor() {
  _cached_size_ = 0;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

GetUserEconomyDown::~GetUserEconomyDown() {
  SharedDtor();
}

void GetUserEconomyDown::SharedDtor() {
  if (this != default_instance_) {
  }
}

void GetUserEconomyDown::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* GetUserEconomyDown::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return GetUserEconomyDown_descriptor_;
}

const GetUserEconomyDown& GetUserEconomyDown::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_1100400_5fEconomyMessage_2eproto();
  return *default_instance_;
}

GetUserEconomyDown* GetUserEconomyDown::default_instance_ = NULL;

GetUserEconomyDown* GetUserEconomyDown::New() const {
  return new GetUserEconomyDown;
}

void GetUserEconomyDown::Clear() {
  usereconomybean_.Clear();
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool GetUserEconomyDown::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // repeated .UserEconomyBean userEconomyBean = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_userEconomyBean:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
                input, add_usereconomybean()));
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(10)) goto parse_userEconomyBean;
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

void GetUserEconomyDown::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // repeated .UserEconomyBean userEconomyBean = 1;
  for (int i = 0; i < this->usereconomybean_size(); i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      1, this->usereconomybean(i), output);
  }

  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
}

::google::protobuf::uint8* GetUserEconomyDown::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // repeated .UserEconomyBean userEconomyBean = 1;
  for (int i = 0; i < this->usereconomybean_size(); i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      WriteMessageNoVirtualToArray(
        1, this->usereconomybean(i), target);
  }

  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  return target;
}

int GetUserEconomyDown::ByteSize() const {
  int total_size = 0;

  // repeated .UserEconomyBean userEconomyBean = 1;
  total_size += 1 * this->usereconomybean_size();
  for (int i = 0; i < this->usereconomybean_size(); i++) {
    total_size +=
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        this->usereconomybean(i));
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

void GetUserEconomyDown::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const GetUserEconomyDown* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const GetUserEconomyDown*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void GetUserEconomyDown::MergeFrom(const GetUserEconomyDown& from) {
  GOOGLE_CHECK_NE(&from, this);
  usereconomybean_.MergeFrom(from.usereconomybean_);
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void GetUserEconomyDown::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void GetUserEconomyDown::CopyFrom(const GetUserEconomyDown& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool GetUserEconomyDown::IsInitialized() const {

  for (int i = 0; i < usereconomybean_size(); i++) {
    if (!this->usereconomybean(i).IsInitialized()) return false;
  }
  return true;
}

void GetUserEconomyDown::Swap(GetUserEconomyDown* other) {
  if (other != this) {
    usereconomybean_.Swap(&other->usereconomybean_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata GetUserEconomyDown::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = GetUserEconomyDown_descriptor_;
  metadata.reflection = GetUserEconomyDown_reflection_;
  return metadata;
}


// ===================================================================

#ifndef _MSC_VER
const int ExchangeMoneyUp::kExchangeCountFieldNumber;
#endif  // !_MSC_VER

ExchangeMoneyUp::ExchangeMoneyUp()
  : ::google::protobuf::Message() {
  SharedCtor();
}

void ExchangeMoneyUp::InitAsDefaultInstance() {
}

ExchangeMoneyUp::ExchangeMoneyUp(const ExchangeMoneyUp& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
}

void ExchangeMoneyUp::SharedCtor() {
  _cached_size_ = 0;
  exchangecount_ = 0u;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

ExchangeMoneyUp::~ExchangeMoneyUp() {
  SharedDtor();
}

void ExchangeMoneyUp::SharedDtor() {
  if (this != default_instance_) {
  }
}

void ExchangeMoneyUp::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* ExchangeMoneyUp::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return ExchangeMoneyUp_descriptor_;
}

const ExchangeMoneyUp& ExchangeMoneyUp::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_1100400_5fEconomyMessage_2eproto();
  return *default_instance_;
}

ExchangeMoneyUp* ExchangeMoneyUp::default_instance_ = NULL;

ExchangeMoneyUp* ExchangeMoneyUp::New() const {
  return new ExchangeMoneyUp;
}

void ExchangeMoneyUp::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    exchangecount_ = 0u;
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool ExchangeMoneyUp::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // required uint32 exchangeCount = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &exchangecount_)));
          set_has_exchangecount();
        } else {
          goto handle_uninterpreted;
        }
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

void ExchangeMoneyUp::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // required uint32 exchangeCount = 1;
  if (has_exchangecount()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(1, this->exchangecount(), output);
  }

  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
}

::google::protobuf::uint8* ExchangeMoneyUp::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // required uint32 exchangeCount = 1;
  if (has_exchangecount()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(1, this->exchangecount(), target);
  }

  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  return target;
}

int ExchangeMoneyUp::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // required uint32 exchangeCount = 1;
    if (has_exchangecount()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt32Size(
          this->exchangecount());
    }

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

void ExchangeMoneyUp::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const ExchangeMoneyUp* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const ExchangeMoneyUp*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void ExchangeMoneyUp::MergeFrom(const ExchangeMoneyUp& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_exchangecount()) {
      set_exchangecount(from.exchangecount());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void ExchangeMoneyUp::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void ExchangeMoneyUp::CopyFrom(const ExchangeMoneyUp& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool ExchangeMoneyUp::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000001) != 0x00000001) return false;

  return true;
}

void ExchangeMoneyUp::Swap(ExchangeMoneyUp* other) {
  if (other != this) {
    std::swap(exchangecount_, other->exchangecount_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata ExchangeMoneyUp::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = ExchangeMoneyUp_descriptor_;
  metadata.reflection = ExchangeMoneyUp_reflection_;
  return metadata;
}


// @@protoc_insertion_point(namespace_scope)

// @@protoc_insertion_point(global_scope)