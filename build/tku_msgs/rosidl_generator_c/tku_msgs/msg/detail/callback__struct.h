// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from tku_msgs:msg/Callback.idl
// generated code does not contain a copyright notice

#ifndef TKU_MSGS__MSG__DETAIL__CALLBACK__STRUCT_H_
#define TKU_MSGS__MSG__DETAIL__CALLBACK__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/Callback in the package tku_msgs.
typedef struct tku_msgs__msg__Callback
{
  bool data;
  int16_t sector;
} tku_msgs__msg__Callback;

// Struct for a sequence of tku_msgs__msg__Callback.
typedef struct tku_msgs__msg__Callback__Sequence
{
  tku_msgs__msg__Callback * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} tku_msgs__msg__Callback__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TKU_MSGS__MSG__DETAIL__CALLBACK__STRUCT_H_
