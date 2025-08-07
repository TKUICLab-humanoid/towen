// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from tku_msgs:msg/Location.idl
// generated code does not contain a copyright notice

#ifndef TKU_MSGS__MSG__DETAIL__LOCATION__STRUCT_H_
#define TKU_MSGS__MSG__DETAIL__LOCATION__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'data'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/Location in the package tku_msgs.
typedef struct tku_msgs__msg__Location
{
  rosidl_runtime_c__String data;
} tku_msgs__msg__Location;

// Struct for a sequence of tku_msgs__msg__Location.
typedef struct tku_msgs__msg__Location__Sequence
{
  tku_msgs__msg__Location * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} tku_msgs__msg__Location__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TKU_MSGS__MSG__DETAIL__LOCATION__STRUCT_H_
