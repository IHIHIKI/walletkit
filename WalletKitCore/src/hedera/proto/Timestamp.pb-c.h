/* Generated by the protocol buffer compiler.  DO NOT EDIT! */
/* Generated from: Timestamp.proto */

#ifndef PROTOBUF_C_Timestamp_2eproto__INCLUDED
#define PROTOBUF_C_Timestamp_2eproto__INCLUDED

#include "protobuf-c.h"

PROTOBUF_C__BEGIN_DECLS

#if PROTOBUF_C_VERSION_NUMBER < 1003000
# error This file was generated by a newer version of protoc-c which is incompatible with your libprotobuf-c headers. Please update your headers.
#elif 1003002 < PROTOBUF_C_MIN_COMPILER_VERSION
# error This file was generated by an older version of protoc-c which is incompatible with your libprotobuf-c headers. Please regenerate this file with a newer version of protoc-c.
#endif


typedef struct _Proto__Timestamp Proto__Timestamp;
typedef struct _Proto__TimestampSeconds Proto__TimestampSeconds;


/* --- enums --- */


/* --- messages --- */

/*
 * An exact date and time. This is the same data structure as the protobuf Timestamp.proto (see the comments in https://github.com/google/protobuf/blob/master/src/google/protobuf/timestamp.proto) 
 */
struct  _Proto__Timestamp
{
  ProtobufCMessage base;
  /*
   * Number of complete seconds since the start of the epoch
   */
  int64_t seconds;
  /*
   * Number of nanoseconds since the start of the last second
   */
  int32_t nanos;
};
#define PROTO__TIMESTAMP__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&proto__timestamp__descriptor) \
    , 0, 0 }


/*
 * An exact date and time,  with a resolution of one second (no nanoseconds). 
 */
struct  _Proto__TimestampSeconds
{
  ProtobufCMessage base;
  /*
   * Number of complete seconds since the start of the epoch
   */
  int64_t seconds;
};
#define PROTO__TIMESTAMP_SECONDS__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&proto__timestamp_seconds__descriptor) \
    , 0 }


/* Proto__Timestamp methods */
void   proto__timestamp__init
                     (Proto__Timestamp         *message);
size_t proto__timestamp__get_packed_size
                     (const Proto__Timestamp   *message);
size_t proto__timestamp__pack
                     (const Proto__Timestamp   *message,
                      uint8_t             *out);
size_t proto__timestamp__pack_to_buffer
                     (const Proto__Timestamp   *message,
                      ProtobufCBuffer     *buffer);
Proto__Timestamp *
       proto__timestamp__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   proto__timestamp__free_unpacked
                     (Proto__Timestamp *message,
                      ProtobufCAllocator *allocator);
/* Proto__TimestampSeconds methods */
void   proto__timestamp_seconds__init
                     (Proto__TimestampSeconds         *message);
size_t proto__timestamp_seconds__get_packed_size
                     (const Proto__TimestampSeconds   *message);
size_t proto__timestamp_seconds__pack
                     (const Proto__TimestampSeconds   *message,
                      uint8_t             *out);
size_t proto__timestamp_seconds__pack_to_buffer
                     (const Proto__TimestampSeconds   *message,
                      ProtobufCBuffer     *buffer);
Proto__TimestampSeconds *
       proto__timestamp_seconds__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   proto__timestamp_seconds__free_unpacked
                     (Proto__TimestampSeconds *message,
                      ProtobufCAllocator *allocator);
/* --- per-message closures --- */

typedef void (*Proto__Timestamp_Closure)
                 (const Proto__Timestamp *message,
                  void *closure_data);
typedef void (*Proto__TimestampSeconds_Closure)
                 (const Proto__TimestampSeconds *message,
                  void *closure_data);

/* --- services --- */


/* --- descriptors --- */

extern const ProtobufCMessageDescriptor proto__timestamp__descriptor;
extern const ProtobufCMessageDescriptor proto__timestamp_seconds__descriptor;

PROTOBUF_C__END_DECLS


#endif  /* PROTOBUF_C_Timestamp_2eproto__INCLUDED */