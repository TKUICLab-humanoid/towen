// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from tku_msgs:msg/ColorArray.idl
// generated code does not contain a copyright notice

#ifndef TKU_MSGS__MSG__DETAIL__COLOR_ARRAY__STRUCT_H_
#define TKU_MSGS__MSG__DETAIL__COLOR_ARRAY__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'colorarray'
#include "tku_msgs/msg/detail/color_data__struct.h"

/// Struct defined in msg/ColorArray in the package tku_msgs.
typedef struct tku_msgs__msg__ColorArray
{
  int32_t cnt;
  tku_msgs__msg__ColorData__Sequence colorarray;
} tku_msgs__msg__ColorArray;

// Struct for a sequence of tku_msgs__msg__ColorArray.
typedef struct tku_msgs__msg__ColorArray__Sequence
{
  tku_msgs__msg__ColorArray * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} tku_msgs__msg__ColorArray__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TKU_MSGS__MSG__DETAIL__COLOR_ARRAY__STRUCT_H_
