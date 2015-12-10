// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: zmqprotobuf.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "zmqprotobuf.pb.h"

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

namespace zmqprotobuf {

namespace {

const ::google::protobuf::Descriptor* PSMSG_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  PSMSG_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_zmqprotobuf_2eproto() {
  protobuf_AddDesc_zmqprotobuf_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "zmqprotobuf.proto");
  GOOGLE_CHECK(file != NULL);
  PSMSG_descriptor_ = file->message_type(0);
  static const int PSMSG_offsets_[3] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(PSMSG, type_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(PSMSG, weights_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(PSMSG, gradients_),
  };
  PSMSG_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      PSMSG_descriptor_,
      PSMSG::default_instance_,
      PSMSG_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(PSMSG, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(PSMSG, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(PSMSG));
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_zmqprotobuf_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    PSMSG_descriptor_, &PSMSG::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_zmqprotobuf_2eproto() {
  delete PSMSG::default_instance_;
  delete PSMSG_reflection_;
}

void protobuf_AddDesc_zmqprotobuf_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\021zmqprotobuf.proto\022\013zmqprotobuf\"9\n\005PSMS"
    "G\022\014\n\004type\030\001 \002(\005\022\017\n\007weights\030\002 \003(\002\022\021\n\tgrad"
    "ients\030\003 \003(\002", 91);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "zmqprotobuf.proto", &protobuf_RegisterTypes);
  PSMSG::default_instance_ = new PSMSG();
  PSMSG::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_zmqprotobuf_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_zmqprotobuf_2eproto {
  StaticDescriptorInitializer_zmqprotobuf_2eproto() {
    protobuf_AddDesc_zmqprotobuf_2eproto();
  }
} static_descriptor_initializer_zmqprotobuf_2eproto_;

// ===================================================================

#ifndef _MSC_VER
const int PSMSG::kTypeFieldNumber;
const int PSMSG::kWeightsFieldNumber;
const int PSMSG::kGradientsFieldNumber;
#endif  // !_MSC_VER

PSMSG::PSMSG()
  : ::google::protobuf::Message() {
  SharedCtor();
  // @@protoc_insertion_point(constructor:zmqprotobuf.PSMSG)
}

void PSMSG::InitAsDefaultInstance() {
}

PSMSG::PSMSG(const PSMSG& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:zmqprotobuf.PSMSG)
}

void PSMSG::SharedCtor() {
  _cached_size_ = 0;
  type_ = 0;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

PSMSG::~PSMSG() {
  // @@protoc_insertion_point(destructor:zmqprotobuf.PSMSG)
  SharedDtor();
}

void PSMSG::SharedDtor() {
  if (this != default_instance_) {
  }
}

void PSMSG::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* PSMSG::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return PSMSG_descriptor_;
}

const PSMSG& PSMSG::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_zmqprotobuf_2eproto();
  return *default_instance_;
}

PSMSG* PSMSG::default_instance_ = NULL;

PSMSG* PSMSG::New() const {
  return new PSMSG;
}

void PSMSG::Clear() {
  type_ = 0;
  weights_.Clear();
  gradients_.Clear();
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool PSMSG::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:zmqprotobuf.PSMSG)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // required int32 type = 1;
      case 1: {
        if (tag == 8) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &type_)));
          set_has_type();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(21)) goto parse_weights;
        break;
      }

      // repeated float weights = 2;
      case 2: {
        if (tag == 21) {
         parse_weights:
          DO_((::google::protobuf::internal::WireFormatLite::ReadRepeatedPrimitive<
                   float, ::google::protobuf::internal::WireFormatLite::TYPE_FLOAT>(
                 1, 21, input, this->mutable_weights())));
        } else if (tag == 18) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPackedPrimitiveNoInline<
                   float, ::google::protobuf::internal::WireFormatLite::TYPE_FLOAT>(
                 input, this->mutable_weights())));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(21)) goto parse_weights;
        if (input->ExpectTag(29)) goto parse_gradients;
        break;
      }

      // repeated float gradients = 3;
      case 3: {
        if (tag == 29) {
         parse_gradients:
          DO_((::google::protobuf::internal::WireFormatLite::ReadRepeatedPrimitive<
                   float, ::google::protobuf::internal::WireFormatLite::TYPE_FLOAT>(
                 1, 29, input, this->mutable_gradients())));
        } else if (tag == 26) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPackedPrimitiveNoInline<
                   float, ::google::protobuf::internal::WireFormatLite::TYPE_FLOAT>(
                 input, this->mutable_gradients())));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(29)) goto parse_gradients;
        if (input->ExpectAtEnd()) goto success;
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0 ||
            ::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, mutable_unknown_fields()));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:zmqprotobuf.PSMSG)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:zmqprotobuf.PSMSG)
  return false;
#undef DO_
}

void PSMSG::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:zmqprotobuf.PSMSG)
  // required int32 type = 1;
  if (has_type()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(1, this->type(), output);
  }

  // repeated float weights = 2;
  for (int i = 0; i < this->weights_size(); i++) {
    ::google::protobuf::internal::WireFormatLite::WriteFloat(
      2, this->weights(i), output);
  }

  // repeated float gradients = 3;
  for (int i = 0; i < this->gradients_size(); i++) {
    ::google::protobuf::internal::WireFormatLite::WriteFloat(
      3, this->gradients(i), output);
  }

  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:zmqprotobuf.PSMSG)
}

::google::protobuf::uint8* PSMSG::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:zmqprotobuf.PSMSG)
  // required int32 type = 1;
  if (has_type()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(1, this->type(), target);
  }

  // repeated float weights = 2;
  for (int i = 0; i < this->weights_size(); i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      WriteFloatToArray(2, this->weights(i), target);
  }

  // repeated float gradients = 3;
  for (int i = 0; i < this->gradients_size(); i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      WriteFloatToArray(3, this->gradients(i), target);
  }

  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:zmqprotobuf.PSMSG)
  return target;
}

int PSMSG::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // required int32 type = 1;
    if (has_type()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->type());
    }

  }
  // repeated float weights = 2;
  {
    int data_size = 0;
    data_size = 4 * this->weights_size();
    total_size += 1 * this->weights_size() + data_size;
  }

  // repeated float gradients = 3;
  {
    int data_size = 0;
    data_size = 4 * this->gradients_size();
    total_size += 1 * this->gradients_size() + data_size;
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

void PSMSG::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const PSMSG* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const PSMSG*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void PSMSG::MergeFrom(const PSMSG& from) {
  GOOGLE_CHECK_NE(&from, this);
  weights_.MergeFrom(from.weights_);
  gradients_.MergeFrom(from.gradients_);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_type()) {
      set_type(from.type());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void PSMSG::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void PSMSG::CopyFrom(const PSMSG& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool PSMSG::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000001) != 0x00000001) return false;

  return true;
}

void PSMSG::Swap(PSMSG* other) {
  if (other != this) {
    std::swap(type_, other->type_);
    weights_.Swap(&other->weights_);
    gradients_.Swap(&other->gradients_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata PSMSG::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = PSMSG_descriptor_;
  metadata.reflection = PSMSG_reflection_;
  return metadata;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace zmqprotobuf

// @@protoc_insertion_point(global_scope)
