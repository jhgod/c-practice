// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: msg.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "msg.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/port.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)

namespace proto2_proto {
class MessageDefaultTypeInternal {
public:
 ::google::protobuf::internal::ExplicitlyConstructed<Message>
     _instance;
} _Message_default_instance_;

namespace protobuf_msg_2eproto {


namespace {

::google::protobuf::Metadata file_level_metadata[1];
const ::google::protobuf::EnumDescriptor* file_level_enum_descriptors[1];

}  // namespace

PROTOBUF_CONSTEXPR_VAR ::google::protobuf::internal::ParseTableField
    const TableStruct::entries[] GOOGLE_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  {0, 0, 0, ::google::protobuf::internal::kInvalidMask, 0, 0},
};

PROTOBUF_CONSTEXPR_VAR ::google::protobuf::internal::AuxillaryParseTableField
    const TableStruct::aux[] GOOGLE_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  ::google::protobuf::internal::AuxillaryParseTableField(),
};
PROTOBUF_CONSTEXPR_VAR ::google::protobuf::internal::ParseTable const
    TableStruct::schema[] GOOGLE_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  { NULL, NULL, 0, -1, -1, -1, -1, NULL, false },
};

const ::google::protobuf::uint32 TableStruct::offsets[] GOOGLE_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Message, _has_bits_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Message, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Message, name_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Message, hilarity_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Message, height_in_cm_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Message, data_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Message, result_count_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Message, true_scotsman_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Message, score_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Message, key_),
  0,
  2,
  3,
  1,
  4,
  5,
  6,
  ~0u,
};
static const ::google::protobuf::internal::MigrationSchema schemas[] GOOGLE_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  { 0, 13, sizeof(Message)},
};

static ::google::protobuf::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::google::protobuf::Message*>(&_Message_default_instance_),
};

namespace {

void protobuf_AssignDescriptors() {
  AddDescriptors();
  ::google::protobuf::MessageFactory* factory = NULL;
  AssignDescriptors(
      "msg.proto", schemas, file_default_instances, TableStruct::offsets, factory,
      file_level_metadata, file_level_enum_descriptors, NULL);
}

void protobuf_AssignDescriptorsOnce() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &protobuf_AssignDescriptors);
}

void protobuf_RegisterTypes(const ::std::string&) GOOGLE_ATTRIBUTE_COLD;
void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::internal::RegisterAllTypes(file_level_metadata, 1);
}

}  // namespace
void TableStruct::InitDefaultsImpl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::internal::InitProtobufDefaults();
  _Message_default_instance_._instance.DefaultConstruct();
  ::google::protobuf::internal::OnShutdownDestroyMessage(
      &_Message_default_instance_);}

void InitDefaults() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &TableStruct::InitDefaultsImpl);
}
namespace {
void AddDescriptorsImpl() {
  InitDefaults();
  static const char descriptor[] GOOGLE_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
      "\n\tmsg.proto\022\014proto2_proto\"\371\001\n\007Message\022\014\n"
      "\004name\030\001 \001(\t\022.\n\010hilarity\030\002 \001(\0162\034.proto2_p"
      "roto.Message.Humour\022\024\n\014height_in_cm\030\003 \001("
      "\r\022\014\n\004data\030\004 \001(\014\022\024\n\014result_count\030\007 \001(\003\022\025\n"
      "\rtrue_scotsman\030\010 \001(\010\022\r\n\005score\030\t \001(\002\022\017\n\003k"
      "ey\030\005 \003(\004B\002\020\001\"\?\n\006Humour\022\013\n\007UNKNOWN\020\000\022\010\n\004P"
      "UNS\020\001\022\r\n\tSLAPSTICK\020\002\022\017\n\013BILL_BAILEY\020\003"
  };
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
      descriptor, 277);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "msg.proto", &protobuf_RegisterTypes);
}
} // anonymous namespace

void AddDescriptors() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &AddDescriptorsImpl);
}
// Force AddDescriptors() to be called at dynamic initialization time.
struct StaticDescriptorInitializer {
  StaticDescriptorInitializer() {
    AddDescriptors();
  }
} static_descriptor_initializer;

}  // namespace protobuf_msg_2eproto

const ::google::protobuf::EnumDescriptor* Message_Humour_descriptor() {
  protobuf_msg_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_msg_2eproto::file_level_enum_descriptors[0];
}
bool Message_Humour_IsValid(int value) {
  switch (value) {
    case 0:
    case 1:
    case 2:
    case 3:
      return true;
    default:
      return false;
  }
}

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const Message_Humour Message::UNKNOWN;
const Message_Humour Message::PUNS;
const Message_Humour Message::SLAPSTICK;
const Message_Humour Message::BILL_BAILEY;
const Message_Humour Message::Humour_MIN;
const Message_Humour Message::Humour_MAX;
const int Message::Humour_ARRAYSIZE;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int Message::kNameFieldNumber;
const int Message::kHilarityFieldNumber;
const int Message::kHeightInCmFieldNumber;
const int Message::kDataFieldNumber;
const int Message::kResultCountFieldNumber;
const int Message::kTrueScotsmanFieldNumber;
const int Message::kScoreFieldNumber;
const int Message::kKeyFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

Message::Message()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  if (GOOGLE_PREDICT_TRUE(this != internal_default_instance())) {
    protobuf_msg_2eproto::InitDefaults();
  }
  SharedCtor();
  // @@protoc_insertion_point(constructor:proto2_proto.Message)
}
Message::Message(const Message& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL),
      _has_bits_(from._has_bits_),
      _cached_size_(0),
      key_(from.key_) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  name_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.has_name()) {
    name_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.name_);
  }
  data_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.has_data()) {
    data_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.data_);
  }
  ::memcpy(&hilarity_, &from.hilarity_,
    static_cast<size_t>(reinterpret_cast<char*>(&score_) -
    reinterpret_cast<char*>(&hilarity_)) + sizeof(score_));
  // @@protoc_insertion_point(copy_constructor:proto2_proto.Message)
}

void Message::SharedCtor() {
  _cached_size_ = 0;
  name_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  data_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  ::memset(&hilarity_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&score_) -
      reinterpret_cast<char*>(&hilarity_)) + sizeof(score_));
}

Message::~Message() {
  // @@protoc_insertion_point(destructor:proto2_proto.Message)
  SharedDtor();
}

void Message::SharedDtor() {
  name_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  data_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

void Message::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* Message::descriptor() {
  protobuf_msg_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_msg_2eproto::file_level_metadata[kIndexInFileMessages].descriptor;
}

const Message& Message::default_instance() {
  protobuf_msg_2eproto::InitDefaults();
  return *internal_default_instance();
}

Message* Message::New(::google::protobuf::Arena* arena) const {
  Message* n = new Message;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void Message::Clear() {
// @@protoc_insertion_point(message_clear_start:proto2_proto.Message)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  key_.Clear();
  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 3u) {
    if (cached_has_bits & 0x00000001u) {
      GOOGLE_DCHECK(!name_.IsDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited()));
      (*name_.UnsafeRawStringPointer())->clear();
    }
    if (cached_has_bits & 0x00000002u) {
      GOOGLE_DCHECK(!data_.IsDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited()));
      (*data_.UnsafeRawStringPointer())->clear();
    }
  }
  if (cached_has_bits & 124u) {
    ::memset(&hilarity_, 0, static_cast<size_t>(
        reinterpret_cast<char*>(&score_) -
        reinterpret_cast<char*>(&hilarity_)) + sizeof(score_));
  }
  _has_bits_.Clear();
  _internal_metadata_.Clear();
}

bool Message::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:proto2_proto.Message)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional string name = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(10u /* 10 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_name()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
            this->name().data(), static_cast<int>(this->name().length()),
            ::google::protobuf::internal::WireFormat::PARSE,
            "proto2_proto.Message.name");
        } else {
          goto handle_unusual;
        }
        break;
      }

      // optional .proto2_proto.Message.Humour hilarity = 2;
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(16u /* 16 & 0xFF */)) {
          int value;
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   int, ::google::protobuf::internal::WireFormatLite::TYPE_ENUM>(
                 input, &value)));
          if (::proto2_proto::Message_Humour_IsValid(value)) {
            set_hilarity(static_cast< ::proto2_proto::Message_Humour >(value));
          } else {
            mutable_unknown_fields()->AddVarint(
                2, static_cast< ::google::protobuf::uint64>(value));
          }
        } else {
          goto handle_unusual;
        }
        break;
      }

      // optional uint32 height_in_cm = 3;
      case 3: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(24u /* 24 & 0xFF */)) {
          set_has_height_in_cm();
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &height_in_cm_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // optional bytes data = 4;
      case 4: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(34u /* 34 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadBytes(
                input, this->mutable_data()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // repeated uint64 key = 5 [packed = true];
      case 5: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(42u /* 42 & 0xFF */)) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPackedPrimitive<
                   ::google::protobuf::uint64, ::google::protobuf::internal::WireFormatLite::TYPE_UINT64>(
                 input, this->mutable_key())));
        } else if (
            static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(40u /* 40 & 0xFF */)) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadRepeatedPrimitiveNoInline<
                   ::google::protobuf::uint64, ::google::protobuf::internal::WireFormatLite::TYPE_UINT64>(
                 1, 42u, input, this->mutable_key())));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // optional int64 result_count = 7;
      case 7: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(56u /* 56 & 0xFF */)) {
          set_has_result_count();
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int64, ::google::protobuf::internal::WireFormatLite::TYPE_INT64>(
                 input, &result_count_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // optional bool true_scotsman = 8;
      case 8: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(64u /* 64 & 0xFF */)) {
          set_has_true_scotsman();
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   bool, ::google::protobuf::internal::WireFormatLite::TYPE_BOOL>(
                 input, &true_scotsman_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // optional float score = 9;
      case 9: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(77u /* 77 & 0xFF */)) {
          set_has_score();
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   float, ::google::protobuf::internal::WireFormatLite::TYPE_FLOAT>(
                 input, &score_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, _internal_metadata_.mutable_unknown_fields()));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:proto2_proto.Message)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:proto2_proto.Message)
  return false;
#undef DO_
}

void Message::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:proto2_proto.Message)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // optional string name = 1;
  if (cached_has_bits & 0x00000001u) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->name().data(), static_cast<int>(this->name().length()),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "proto2_proto.Message.name");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      1, this->name(), output);
  }

  // optional .proto2_proto.Message.Humour hilarity = 2;
  if (cached_has_bits & 0x00000004u) {
    ::google::protobuf::internal::WireFormatLite::WriteEnum(
      2, this->hilarity(), output);
  }

  // optional uint32 height_in_cm = 3;
  if (cached_has_bits & 0x00000008u) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(3, this->height_in_cm(), output);
  }

  // optional bytes data = 4;
  if (cached_has_bits & 0x00000002u) {
    ::google::protobuf::internal::WireFormatLite::WriteBytesMaybeAliased(
      4, this->data(), output);
  }

  // repeated uint64 key = 5 [packed = true];
  if (this->key_size() > 0) {
    ::google::protobuf::internal::WireFormatLite::WriteTag(5, ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED, output);
    output->WriteVarint32(static_cast< ::google::protobuf::uint32>(
        _key_cached_byte_size_));
  }
  for (int i = 0, n = this->key_size(); i < n; i++) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt64NoTag(
      this->key(i), output);
  }

  // optional int64 result_count = 7;
  if (cached_has_bits & 0x00000010u) {
    ::google::protobuf::internal::WireFormatLite::WriteInt64(7, this->result_count(), output);
  }

  // optional bool true_scotsman = 8;
  if (cached_has_bits & 0x00000020u) {
    ::google::protobuf::internal::WireFormatLite::WriteBool(8, this->true_scotsman(), output);
  }

  // optional float score = 9;
  if (cached_has_bits & 0x00000040u) {
    ::google::protobuf::internal::WireFormatLite::WriteFloat(9, this->score(), output);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        _internal_metadata_.unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:proto2_proto.Message)
}

::google::protobuf::uint8* Message::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:proto2_proto.Message)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // optional string name = 1;
  if (cached_has_bits & 0x00000001u) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->name().data(), static_cast<int>(this->name().length()),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "proto2_proto.Message.name");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        1, this->name(), target);
  }

  // optional .proto2_proto.Message.Humour hilarity = 2;
  if (cached_has_bits & 0x00000004u) {
    target = ::google::protobuf::internal::WireFormatLite::WriteEnumToArray(
      2, this->hilarity(), target);
  }

  // optional uint32 height_in_cm = 3;
  if (cached_has_bits & 0x00000008u) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(3, this->height_in_cm(), target);
  }

  // optional bytes data = 4;
  if (cached_has_bits & 0x00000002u) {
    target =
      ::google::protobuf::internal::WireFormatLite::WriteBytesToArray(
        4, this->data(), target);
  }

  // repeated uint64 key = 5 [packed = true];
  if (this->key_size() > 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteTagToArray(
      5,
      ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED,
      target);
    target = ::google::protobuf::io::CodedOutputStream::WriteVarint32ToArray(
        static_cast< ::google::protobuf::uint32>(
            _key_cached_byte_size_), target);
    target = ::google::protobuf::internal::WireFormatLite::
      WriteUInt64NoTagToArray(this->key_, target);
  }

  // optional int64 result_count = 7;
  if (cached_has_bits & 0x00000010u) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt64ToArray(7, this->result_count(), target);
  }

  // optional bool true_scotsman = 8;
  if (cached_has_bits & 0x00000020u) {
    target = ::google::protobuf::internal::WireFormatLite::WriteBoolToArray(8, this->true_scotsman(), target);
  }

  // optional float score = 9;
  if (cached_has_bits & 0x00000040u) {
    target = ::google::protobuf::internal::WireFormatLite::WriteFloatToArray(9, this->score(), target);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:proto2_proto.Message)
  return target;
}

size_t Message::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:proto2_proto.Message)
  size_t total_size = 0;

  if (_internal_metadata_.have_unknown_fields()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        _internal_metadata_.unknown_fields());
  }
  // repeated uint64 key = 5 [packed = true];
  {
    size_t data_size = ::google::protobuf::internal::WireFormatLite::
      UInt64Size(this->key_);
    if (data_size > 0) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
            static_cast< ::google::protobuf::int32>(data_size));
    }
    int cached_size = ::google::protobuf::internal::ToCachedSize(data_size);
    GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
    _key_cached_byte_size_ = cached_size;
    GOOGLE_SAFE_CONCURRENT_WRITES_END();
    total_size += data_size;
  }

  if (_has_bits_[0 / 32] & 127u) {
    // optional string name = 1;
    if (has_name()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->name());
    }

    // optional bytes data = 4;
    if (has_data()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::BytesSize(
          this->data());
    }

    // optional .proto2_proto.Message.Humour hilarity = 2;
    if (has_hilarity()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::EnumSize(this->hilarity());
    }

    // optional uint32 height_in_cm = 3;
    if (has_height_in_cm()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt32Size(
          this->height_in_cm());
    }

    // optional int64 result_count = 7;
    if (has_result_count()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int64Size(
          this->result_count());
    }

    // optional bool true_scotsman = 8;
    if (has_true_scotsman()) {
      total_size += 1 + 1;
    }

    // optional float score = 9;
    if (has_score()) {
      total_size += 1 + 4;
    }

  }
  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void Message::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:proto2_proto.Message)
  GOOGLE_DCHECK_NE(&from, this);
  const Message* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const Message>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:proto2_proto.Message)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:proto2_proto.Message)
    MergeFrom(*source);
  }
}

void Message::MergeFrom(const Message& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:proto2_proto.Message)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  key_.MergeFrom(from.key_);
  cached_has_bits = from._has_bits_[0];
  if (cached_has_bits & 127u) {
    if (cached_has_bits & 0x00000001u) {
      set_has_name();
      name_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.name_);
    }
    if (cached_has_bits & 0x00000002u) {
      set_has_data();
      data_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.data_);
    }
    if (cached_has_bits & 0x00000004u) {
      hilarity_ = from.hilarity_;
    }
    if (cached_has_bits & 0x00000008u) {
      height_in_cm_ = from.height_in_cm_;
    }
    if (cached_has_bits & 0x00000010u) {
      result_count_ = from.result_count_;
    }
    if (cached_has_bits & 0x00000020u) {
      true_scotsman_ = from.true_scotsman_;
    }
    if (cached_has_bits & 0x00000040u) {
      score_ = from.score_;
    }
    _has_bits_[0] |= cached_has_bits;
  }
}

void Message::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:proto2_proto.Message)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void Message::CopyFrom(const Message& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:proto2_proto.Message)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Message::IsInitialized() const {
  return true;
}

void Message::Swap(Message* other) {
  if (other == this) return;
  InternalSwap(other);
}
void Message::InternalSwap(Message* other) {
  using std::swap;
  key_.InternalSwap(&other->key_);
  name_.Swap(&other->name_);
  data_.Swap(&other->data_);
  swap(hilarity_, other->hilarity_);
  swap(height_in_cm_, other->height_in_cm_);
  swap(result_count_, other->result_count_);
  swap(true_scotsman_, other->true_scotsman_);
  swap(score_, other->score_);
  swap(_has_bits_[0], other->_has_bits_[0]);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata Message::GetMetadata() const {
  protobuf_msg_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_msg_2eproto::file_level_metadata[kIndexInFileMessages];
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// Message

// optional string name = 1;
bool Message::has_name() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
void Message::set_has_name() {
  _has_bits_[0] |= 0x00000001u;
}
void Message::clear_has_name() {
  _has_bits_[0] &= ~0x00000001u;
}
void Message::clear_name() {
  name_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_name();
}
const ::std::string& Message::name() const {
  // @@protoc_insertion_point(field_get:proto2_proto.Message.name)
  return name_.GetNoArena();
}
void Message::set_name(const ::std::string& value) {
  set_has_name();
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:proto2_proto.Message.name)
}
#if LANG_CXX11
void Message::set_name(::std::string&& value) {
  set_has_name();
  name_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:proto2_proto.Message.name)
}
#endif
void Message::set_name(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  set_has_name();
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:proto2_proto.Message.name)
}
void Message::set_name(const char* value, size_t size) {
  set_has_name();
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:proto2_proto.Message.name)
}
::std::string* Message::mutable_name() {
  set_has_name();
  // @@protoc_insertion_point(field_mutable:proto2_proto.Message.name)
  return name_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
::std::string* Message::release_name() {
  // @@protoc_insertion_point(field_release:proto2_proto.Message.name)
  clear_has_name();
  return name_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
void Message::set_allocated_name(::std::string* name) {
  if (name != NULL) {
    set_has_name();
  } else {
    clear_has_name();
  }
  name_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), name);
  // @@protoc_insertion_point(field_set_allocated:proto2_proto.Message.name)
}

// optional .proto2_proto.Message.Humour hilarity = 2;
bool Message::has_hilarity() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
void Message::set_has_hilarity() {
  _has_bits_[0] |= 0x00000004u;
}
void Message::clear_has_hilarity() {
  _has_bits_[0] &= ~0x00000004u;
}
void Message::clear_hilarity() {
  hilarity_ = 0;
  clear_has_hilarity();
}
::proto2_proto::Message_Humour Message::hilarity() const {
  // @@protoc_insertion_point(field_get:proto2_proto.Message.hilarity)
  return static_cast< ::proto2_proto::Message_Humour >(hilarity_);
}
void Message::set_hilarity(::proto2_proto::Message_Humour value) {
  assert(::proto2_proto::Message_Humour_IsValid(value));
  set_has_hilarity();
  hilarity_ = value;
  // @@protoc_insertion_point(field_set:proto2_proto.Message.hilarity)
}

// optional uint32 height_in_cm = 3;
bool Message::has_height_in_cm() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
void Message::set_has_height_in_cm() {
  _has_bits_[0] |= 0x00000008u;
}
void Message::clear_has_height_in_cm() {
  _has_bits_[0] &= ~0x00000008u;
}
void Message::clear_height_in_cm() {
  height_in_cm_ = 0u;
  clear_has_height_in_cm();
}
::google::protobuf::uint32 Message::height_in_cm() const {
  // @@protoc_insertion_point(field_get:proto2_proto.Message.height_in_cm)
  return height_in_cm_;
}
void Message::set_height_in_cm(::google::protobuf::uint32 value) {
  set_has_height_in_cm();
  height_in_cm_ = value;
  // @@protoc_insertion_point(field_set:proto2_proto.Message.height_in_cm)
}

// optional bytes data = 4;
bool Message::has_data() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
void Message::set_has_data() {
  _has_bits_[0] |= 0x00000002u;
}
void Message::clear_has_data() {
  _has_bits_[0] &= ~0x00000002u;
}
void Message::clear_data() {
  data_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_data();
}
const ::std::string& Message::data() const {
  // @@protoc_insertion_point(field_get:proto2_proto.Message.data)
  return data_.GetNoArena();
}
void Message::set_data(const ::std::string& value) {
  set_has_data();
  data_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:proto2_proto.Message.data)
}
#if LANG_CXX11
void Message::set_data(::std::string&& value) {
  set_has_data();
  data_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:proto2_proto.Message.data)
}
#endif
void Message::set_data(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  set_has_data();
  data_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:proto2_proto.Message.data)
}
void Message::set_data(const void* value, size_t size) {
  set_has_data();
  data_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:proto2_proto.Message.data)
}
::std::string* Message::mutable_data() {
  set_has_data();
  // @@protoc_insertion_point(field_mutable:proto2_proto.Message.data)
  return data_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
::std::string* Message::release_data() {
  // @@protoc_insertion_point(field_release:proto2_proto.Message.data)
  clear_has_data();
  return data_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
void Message::set_allocated_data(::std::string* data) {
  if (data != NULL) {
    set_has_data();
  } else {
    clear_has_data();
  }
  data_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), data);
  // @@protoc_insertion_point(field_set_allocated:proto2_proto.Message.data)
}

// optional int64 result_count = 7;
bool Message::has_result_count() const {
  return (_has_bits_[0] & 0x00000010u) != 0;
}
void Message::set_has_result_count() {
  _has_bits_[0] |= 0x00000010u;
}
void Message::clear_has_result_count() {
  _has_bits_[0] &= ~0x00000010u;
}
void Message::clear_result_count() {
  result_count_ = GOOGLE_LONGLONG(0);
  clear_has_result_count();
}
::google::protobuf::int64 Message::result_count() const {
  // @@protoc_insertion_point(field_get:proto2_proto.Message.result_count)
  return result_count_;
}
void Message::set_result_count(::google::protobuf::int64 value) {
  set_has_result_count();
  result_count_ = value;
  // @@protoc_insertion_point(field_set:proto2_proto.Message.result_count)
}

// optional bool true_scotsman = 8;
bool Message::has_true_scotsman() const {
  return (_has_bits_[0] & 0x00000020u) != 0;
}
void Message::set_has_true_scotsman() {
  _has_bits_[0] |= 0x00000020u;
}
void Message::clear_has_true_scotsman() {
  _has_bits_[0] &= ~0x00000020u;
}
void Message::clear_true_scotsman() {
  true_scotsman_ = false;
  clear_has_true_scotsman();
}
bool Message::true_scotsman() const {
  // @@protoc_insertion_point(field_get:proto2_proto.Message.true_scotsman)
  return true_scotsman_;
}
void Message::set_true_scotsman(bool value) {
  set_has_true_scotsman();
  true_scotsman_ = value;
  // @@protoc_insertion_point(field_set:proto2_proto.Message.true_scotsman)
}

// optional float score = 9;
bool Message::has_score() const {
  return (_has_bits_[0] & 0x00000040u) != 0;
}
void Message::set_has_score() {
  _has_bits_[0] |= 0x00000040u;
}
void Message::clear_has_score() {
  _has_bits_[0] &= ~0x00000040u;
}
void Message::clear_score() {
  score_ = 0;
  clear_has_score();
}
float Message::score() const {
  // @@protoc_insertion_point(field_get:proto2_proto.Message.score)
  return score_;
}
void Message::set_score(float value) {
  set_has_score();
  score_ = value;
  // @@protoc_insertion_point(field_set:proto2_proto.Message.score)
}

// repeated uint64 key = 5 [packed = true];
int Message::key_size() const {
  return key_.size();
}
void Message::clear_key() {
  key_.Clear();
}
::google::protobuf::uint64 Message::key(int index) const {
  // @@protoc_insertion_point(field_get:proto2_proto.Message.key)
  return key_.Get(index);
}
void Message::set_key(int index, ::google::protobuf::uint64 value) {
  key_.Set(index, value);
  // @@protoc_insertion_point(field_set:proto2_proto.Message.key)
}
void Message::add_key(::google::protobuf::uint64 value) {
  key_.Add(value);
  // @@protoc_insertion_point(field_add:proto2_proto.Message.key)
}
const ::google::protobuf::RepeatedField< ::google::protobuf::uint64 >&
Message::key() const {
  // @@protoc_insertion_point(field_list:proto2_proto.Message.key)
  return key_;
}
::google::protobuf::RepeatedField< ::google::protobuf::uint64 >*
Message::mutable_key() {
  // @@protoc_insertion_point(field_mutable_list:proto2_proto.Message.key)
  return &key_;
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

}  // namespace proto2_proto

// @@protoc_insertion_point(global_scope)
