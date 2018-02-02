// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: tellist.proto

#ifndef PROTOBUF_tellist_2eproto__INCLUDED
#define PROTOBUF_tellist_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 3004000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 3004000 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_table_driven.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/metadata.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)
namespace ikurento {
namespace hi {
class hi_tel_num_list;
class hi_tel_num_listDefaultTypeInternal;
extern hi_tel_num_listDefaultTypeInternal _hi_tel_num_list_default_instance_;
}  // namespace hi
}  // namespace ikurento

namespace ikurento {
namespace hi {

namespace protobuf_tellist_2eproto {
// Internal implementation detail -- do not call these.
struct TableStruct {
  static const ::google::protobuf::internal::ParseTableField entries[];
  static const ::google::protobuf::internal::AuxillaryParseTableField aux[];
  static const ::google::protobuf::internal::ParseTable schema[];
  static const ::google::protobuf::uint32 offsets[];
  static const ::google::protobuf::internal::FieldMetadata field_metadata[];
  static const ::google::protobuf::internal::SerializationTable serialization_table[];
  static void InitDefaultsImpl();
};
void AddDescriptors();
void InitDefaults();
}  // namespace protobuf_tellist_2eproto

// ===================================================================

class hi_tel_num_list : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:ikurento.hi.hi_tel_num_list) */ {
 public:
  hi_tel_num_list();
  virtual ~hi_tel_num_list();

  hi_tel_num_list(const hi_tel_num_list& from);

  inline hi_tel_num_list& operator=(const hi_tel_num_list& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  hi_tel_num_list(hi_tel_num_list&& from) noexcept
    : hi_tel_num_list() {
    *this = ::std::move(from);
  }

  inline hi_tel_num_list& operator=(hi_tel_num_list&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _internal_metadata_.unknown_fields();
  }
  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields();
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const hi_tel_num_list& default_instance();

  static inline const hi_tel_num_list* internal_default_instance() {
    return reinterpret_cast<const hi_tel_num_list*>(
               &_hi_tel_num_list_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    0;

  void Swap(hi_tel_num_list* other);
  friend void swap(hi_tel_num_list& a, hi_tel_num_list& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline hi_tel_num_list* New() const PROTOBUF_FINAL { return New(NULL); }

  hi_tel_num_list* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CopyFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void MergeFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void CopyFrom(const hi_tel_num_list& from);
  void MergeFrom(const hi_tel_num_list& from);
  void Clear() PROTOBUF_FINAL;
  bool IsInitialized() const PROTOBUF_FINAL;

  size_t ByteSizeLong() const PROTOBUF_FINAL;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) PROTOBUF_FINAL;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const PROTOBUF_FINAL;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* target) const PROTOBUF_FINAL;
  int GetCachedSize() const PROTOBUF_FINAL { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const PROTOBUF_FINAL;
  void InternalSwap(hi_tel_num_list* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return NULL;
  }
  inline void* MaybeArenaPtr() const {
    return NULL;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const PROTOBUF_FINAL;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // repeated uint64 tel_num = 1;
  int tel_num_size() const;
  void clear_tel_num();
  static const int kTelNumFieldNumber = 1;
  ::google::protobuf::uint64 tel_num(int index) const;
  void set_tel_num(int index, ::google::protobuf::uint64 value);
  void add_tel_num(::google::protobuf::uint64 value);
  const ::google::protobuf::RepeatedField< ::google::protobuf::uint64 >&
      tel_num() const;
  ::google::protobuf::RepeatedField< ::google::protobuf::uint64 >*
      mutable_tel_num();

  // @@protoc_insertion_point(class_scope:ikurento.hi.hi_tel_num_list)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::HasBits<1> _has_bits_;
  mutable int _cached_size_;
  ::google::protobuf::RepeatedField< ::google::protobuf::uint64 > tel_num_;
  friend struct protobuf_tellist_2eproto::TableStruct;
};
// ===================================================================


// ===================================================================

#if !PROTOBUF_INLINE_NOT_IN_HEADERS
#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// hi_tel_num_list

// repeated uint64 tel_num = 1;
inline int hi_tel_num_list::tel_num_size() const {
  return tel_num_.size();
}
inline void hi_tel_num_list::clear_tel_num() {
  tel_num_.Clear();
}
inline ::google::protobuf::uint64 hi_tel_num_list::tel_num(int index) const {
  // @@protoc_insertion_point(field_get:ikurento.hi.hi_tel_num_list.tel_num)
  return tel_num_.Get(index);
}
inline void hi_tel_num_list::set_tel_num(int index, ::google::protobuf::uint64 value) {
  tel_num_.Set(index, value);
  // @@protoc_insertion_point(field_set:ikurento.hi.hi_tel_num_list.tel_num)
}
inline void hi_tel_num_list::add_tel_num(::google::protobuf::uint64 value) {
  tel_num_.Add(value);
  // @@protoc_insertion_point(field_add:ikurento.hi.hi_tel_num_list.tel_num)
}
inline const ::google::protobuf::RepeatedField< ::google::protobuf::uint64 >&
hi_tel_num_list::tel_num() const {
  // @@protoc_insertion_point(field_list:ikurento.hi.hi_tel_num_list.tel_num)
  return tel_num_;
}
inline ::google::protobuf::RepeatedField< ::google::protobuf::uint64 >*
hi_tel_num_list::mutable_tel_num() {
  // @@protoc_insertion_point(field_mutable_list:ikurento.hi.hi_tel_num_list.tel_num)
  return &tel_num_;
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
#endif  // !PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)


}  // namespace hi
}  // namespace ikurento

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_tellist_2eproto__INCLUDED
