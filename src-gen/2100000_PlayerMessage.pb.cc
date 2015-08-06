// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: 2100000_PlayerMessage.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "2100000_PlayerMessage.pb.h"

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

const ::google::protobuf::Descriptor* PlayerLoginUp_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  PlayerLoginUp_reflection_ = NULL;
const ::google::protobuf::Descriptor* PlayerLoginDown_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  PlayerLoginDown_reflection_ = NULL;
const ::google::protobuf::Descriptor* PlayerLogoutUp_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  PlayerLogoutUp_reflection_ = NULL;
const ::google::protobuf::EnumDescriptor* PlayerCommondIdEnum_descriptor_ = NULL;

}  // namespace


void protobuf_AssignDesc_2100000_5fPlayerMessage_2eproto() {
  protobuf_AddDesc_2100000_5fPlayerMessage_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "2100000_PlayerMessage.proto");
  GOOGLE_CHECK(file != NULL);
  PlayerLoginUp_descriptor_ = file->message_type(0);
  static const int PlayerLoginUp_offsets_[2] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(PlayerLoginUp, userid_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(PlayerLoginUp, createtime_),
  };
  PlayerLoginUp_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      PlayerLoginUp_descriptor_,
      PlayerLoginUp::default_instance_,
      PlayerLoginUp_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(PlayerLoginUp, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(PlayerLoginUp, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(PlayerLoginUp));
  PlayerLoginDown_descriptor_ = file->message_type(1);
  static const int PlayerLoginDown_offsets_[2] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(PlayerLoginDown, loginstate_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(PlayerLoginDown, logouttime_),
  };
  PlayerLoginDown_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      PlayerLoginDown_descriptor_,
      PlayerLoginDown::default_instance_,
      PlayerLoginDown_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(PlayerLoginDown, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(PlayerLoginDown, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(PlayerLoginDown));
  PlayerLogoutUp_descriptor_ = file->message_type(2);
  static const int PlayerLogoutUp_offsets_[1] = {
  };
  PlayerLogoutUp_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      PlayerLogoutUp_descriptor_,
      PlayerLogoutUp::default_instance_,
      PlayerLogoutUp_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(PlayerLogoutUp, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(PlayerLogoutUp, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(PlayerLogoutUp));
  PlayerCommondIdEnum_descriptor_ = file->enum_type(0);
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_2100000_5fPlayerMessage_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    PlayerLoginUp_descriptor_, &PlayerLoginUp::default_instance());
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    PlayerLoginDown_descriptor_, &PlayerLoginDown::default_instance());
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    PlayerLogoutUp_descriptor_, &PlayerLogoutUp::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_2100000_5fPlayerMessage_2eproto() {
  delete PlayerLoginUp::default_instance_;
  delete PlayerLoginUp_reflection_;
  delete PlayerLoginDown::default_instance_;
  delete PlayerLoginDown_reflection_;
  delete PlayerLogoutUp::default_instance_;
  delete PlayerLogoutUp_reflection_;
}

void protobuf_AddDesc_2100000_5fPlayerMessage_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\0332100000_PlayerMessage.proto\"3\n\rPlayerL"
    "oginUp\022\016\n\006userId\030\001 \002(\004\022\022\n\ncreateTime\030\002 \002"
    "(\004\"9\n\017PlayerLoginDown\022\022\n\nloginState\030\001 \002("
    "\r\022\022\n\nlogoutTime\030\002 \002(\004\"\020\n\016PlayerLogoutUp*"
    "]\n\023PlayerCommondIdEnum\022\025\n\016_PlayerLoginUp"
    "\020\241\226\200\001\022\027\n\020_PlayerLoginDown\020\242\226\200\001\022\026\n\017_Playe"
    "rLogoutUp\020\243\226\200\001B \n\017com.cwa.messageB\rPlaye"
    "rMessage", 288);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "2100000_PlayerMessage.proto", &protobuf_RegisterTypes);
  PlayerLoginUp::default_instance_ = new PlayerLoginUp();
  PlayerLoginDown::default_instance_ = new PlayerLoginDown();
  PlayerLogoutUp::default_instance_ = new PlayerLogoutUp();
  PlayerLoginUp::default_instance_->InitAsDefaultInstance();
  PlayerLoginDown::default_instance_->InitAsDefaultInstance();
  PlayerLogoutUp::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_2100000_5fPlayerMessage_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_2100000_5fPlayerMessage_2eproto {
  StaticDescriptorInitializer_2100000_5fPlayerMessage_2eproto() {
    protobuf_AddDesc_2100000_5fPlayerMessage_2eproto();
  }
} static_descriptor_initializer_2100000_5fPlayerMessage_2eproto_;
const ::google::protobuf::EnumDescriptor* PlayerCommondIdEnum_descriptor() {
  protobuf_AssignDescriptorsOnce();
  return PlayerCommondIdEnum_descriptor_;
}
bool PlayerCommondIdEnum_IsValid(int value) {
  switch(value) {
    case 2100001:
    case 2100002:
    case 2100003:
      return true;
    default:
      return false;
  }
}


// ===================================================================

#ifndef _MSC_VER
const int PlayerLoginUp::kUserIdFieldNumber;
const int PlayerLoginUp::kCreateTimeFieldNumber;
#endif  // !_MSC_VER

PlayerLoginUp::PlayerLoginUp()
  : ::google::protobuf::Message() {
  SharedCtor();
}

void PlayerLoginUp::InitAsDefaultInstance() {
}

PlayerLoginUp::PlayerLoginUp(const PlayerLoginUp& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
}

void PlayerLoginUp::SharedCtor() {
  _cached_size_ = 0;
  userid_ = GOOGLE_ULONGLONG(0);
  createtime_ = GOOGLE_ULONGLONG(0);
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

PlayerLoginUp::~PlayerLoginUp() {
  SharedDtor();
}

void PlayerLoginUp::SharedDtor() {
  if (this != default_instance_) {
  }
}

void PlayerLoginUp::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* PlayerLoginUp::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return PlayerLoginUp_descriptor_;
}

const PlayerLoginUp& PlayerLoginUp::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_2100000_5fPlayerMessage_2eproto();
  return *default_instance_;
}

PlayerLoginUp* PlayerLoginUp::default_instance_ = NULL;

PlayerLoginUp* PlayerLoginUp::New() const {
  return new PlayerLoginUp;
}

void PlayerLoginUp::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    userid_ = GOOGLE_ULONGLONG(0);
    createtime_ = GOOGLE_ULONGLONG(0);
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool PlayerLoginUp::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // required uint64 userId = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint64, ::google::protobuf::internal::WireFormatLite::TYPE_UINT64>(
                 input, &userid_)));
          set_has_userid();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(16)) goto parse_createTime;
        break;
      }

      // required uint64 createTime = 2;
      case 2: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_createTime:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint64, ::google::protobuf::internal::WireFormatLite::TYPE_UINT64>(
                 input, &createtime_)));
          set_has_createtime();
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

void PlayerLoginUp::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // required uint64 userId = 1;
  if (has_userid()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt64(1, this->userid(), output);
  }

  // required uint64 createTime = 2;
  if (has_createtime()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt64(2, this->createtime(), output);
  }

  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
}

::google::protobuf::uint8* PlayerLoginUp::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // required uint64 userId = 1;
  if (has_userid()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt64ToArray(1, this->userid(), target);
  }

  // required uint64 createTime = 2;
  if (has_createtime()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt64ToArray(2, this->createtime(), target);
  }

  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  return target;
}

int PlayerLoginUp::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // required uint64 userId = 1;
    if (has_userid()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt64Size(
          this->userid());
    }

    // required uint64 createTime = 2;
    if (has_createtime()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt64Size(
          this->createtime());
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

void PlayerLoginUp::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const PlayerLoginUp* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const PlayerLoginUp*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void PlayerLoginUp::MergeFrom(const PlayerLoginUp& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_userid()) {
      set_userid(from.userid());
    }
    if (from.has_createtime()) {
      set_createtime(from.createtime());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void PlayerLoginUp::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void PlayerLoginUp::CopyFrom(const PlayerLoginUp& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool PlayerLoginUp::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000003) != 0x00000003) return false;

  return true;
}

void PlayerLoginUp::Swap(PlayerLoginUp* other) {
  if (other != this) {
    std::swap(userid_, other->userid_);
    std::swap(createtime_, other->createtime_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata PlayerLoginUp::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = PlayerLoginUp_descriptor_;
  metadata.reflection = PlayerLoginUp_reflection_;
  return metadata;
}


// ===================================================================

#ifndef _MSC_VER
const int PlayerLoginDown::kLoginStateFieldNumber;
const int PlayerLoginDown::kLogoutTimeFieldNumber;
#endif  // !_MSC_VER

PlayerLoginDown::PlayerLoginDown()
  : ::google::protobuf::Message() {
  SharedCtor();
}

void PlayerLoginDown::InitAsDefaultInstance() {
}

PlayerLoginDown::PlayerLoginDown(const PlayerLoginDown& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
}

void PlayerLoginDown::SharedCtor() {
  _cached_size_ = 0;
  loginstate_ = 0u;
  logouttime_ = GOOGLE_ULONGLONG(0);
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

PlayerLoginDown::~PlayerLoginDown() {
  SharedDtor();
}

void PlayerLoginDown::SharedDtor() {
  if (this != default_instance_) {
  }
}

void PlayerLoginDown::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* PlayerLoginDown::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return PlayerLoginDown_descriptor_;
}

const PlayerLoginDown& PlayerLoginDown::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_2100000_5fPlayerMessage_2eproto();
  return *default_instance_;
}

PlayerLoginDown* PlayerLoginDown::default_instance_ = NULL;

PlayerLoginDown* PlayerLoginDown::New() const {
  return new PlayerLoginDown;
}

void PlayerLoginDown::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    loginstate_ = 0u;
    logouttime_ = GOOGLE_ULONGLONG(0);
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool PlayerLoginDown::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // required uint32 loginState = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &loginstate_)));
          set_has_loginstate();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(16)) goto parse_logoutTime;
        break;
      }

      // required uint64 logoutTime = 2;
      case 2: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_logoutTime:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint64, ::google::protobuf::internal::WireFormatLite::TYPE_UINT64>(
                 input, &logouttime_)));
          set_has_logouttime();
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

void PlayerLoginDown::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // required uint32 loginState = 1;
  if (has_loginstate()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(1, this->loginstate(), output);
  }

  // required uint64 logoutTime = 2;
  if (has_logouttime()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt64(2, this->logouttime(), output);
  }

  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
}

::google::protobuf::uint8* PlayerLoginDown::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // required uint32 loginState = 1;
  if (has_loginstate()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(1, this->loginstate(), target);
  }

  // required uint64 logoutTime = 2;
  if (has_logouttime()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt64ToArray(2, this->logouttime(), target);
  }

  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  return target;
}

int PlayerLoginDown::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // required uint32 loginState = 1;
    if (has_loginstate()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt32Size(
          this->loginstate());
    }

    // required uint64 logoutTime = 2;
    if (has_logouttime()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt64Size(
          this->logouttime());
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

void PlayerLoginDown::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const PlayerLoginDown* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const PlayerLoginDown*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void PlayerLoginDown::MergeFrom(const PlayerLoginDown& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_loginstate()) {
      set_loginstate(from.loginstate());
    }
    if (from.has_logouttime()) {
      set_logouttime(from.logouttime());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void PlayerLoginDown::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void PlayerLoginDown::CopyFrom(const PlayerLoginDown& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool PlayerLoginDown::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000003) != 0x00000003) return false;

  return true;
}

void PlayerLoginDown::Swap(PlayerLoginDown* other) {
  if (other != this) {
    std::swap(loginstate_, other->loginstate_);
    std::swap(logouttime_, other->logouttime_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata PlayerLoginDown::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = PlayerLoginDown_descriptor_;
  metadata.reflection = PlayerLoginDown_reflection_;
  return metadata;
}


// ===================================================================

#ifndef _MSC_VER
#endif  // !_MSC_VER

PlayerLogoutUp::PlayerLogoutUp()
  : ::google::protobuf::Message() {
  SharedCtor();
}

void PlayerLogoutUp::InitAsDefaultInstance() {
}

PlayerLogoutUp::PlayerLogoutUp(const PlayerLogoutUp& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
}

void PlayerLogoutUp::SharedCtor() {
  _cached_size_ = 0;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

PlayerLogoutUp::~PlayerLogoutUp() {
  SharedDtor();
}

void PlayerLogoutUp::SharedDtor() {
  if (this != default_instance_) {
  }
}

void PlayerLogoutUp::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* PlayerLogoutUp::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return PlayerLogoutUp_descriptor_;
}

const PlayerLogoutUp& PlayerLogoutUp::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_2100000_5fPlayerMessage_2eproto();
  return *default_instance_;
}

PlayerLogoutUp* PlayerLogoutUp::default_instance_ = NULL;

PlayerLogoutUp* PlayerLogoutUp::New() const {
  return new PlayerLogoutUp;
}

void PlayerLogoutUp::Clear() {
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool PlayerLogoutUp::MergePartialFromCodedStream(
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

void PlayerLogoutUp::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
}

::google::protobuf::uint8* PlayerLogoutUp::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  return target;
}

int PlayerLogoutUp::ByteSize() const {
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

void PlayerLogoutUp::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const PlayerLogoutUp* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const PlayerLogoutUp*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void PlayerLogoutUp::MergeFrom(const PlayerLogoutUp& from) {
  GOOGLE_CHECK_NE(&from, this);
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void PlayerLogoutUp::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void PlayerLogoutUp::CopyFrom(const PlayerLogoutUp& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool PlayerLogoutUp::IsInitialized() const {

  return true;
}

void PlayerLogoutUp::Swap(PlayerLogoutUp* other) {
  if (other != this) {
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata PlayerLogoutUp::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = PlayerLogoutUp_descriptor_;
  metadata.reflection = PlayerLogoutUp_reflection_;
  return metadata;
}


// @@protoc_insertion_point(namespace_scope)

// @@protoc_insertion_point(global_scope)