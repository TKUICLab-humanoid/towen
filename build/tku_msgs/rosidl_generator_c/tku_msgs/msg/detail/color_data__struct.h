// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from tku_msgs:msg/ColorData.idl
// generated code does not contain a copyright notice

#ifndef TKU_MSGS__MSG__DETAIL__COLOR_DATA__STRUCT_H_
#define TKU_MSGS__MSG__DETAIL__COLOR_DATA__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/ColorData in the package tku_msgs.
typedef struct tku_msgs__msg__ColorData
{
  int32_t x;
  int32_t y;
  int32_t xmin;
  int32_t xmax;
  int32_t ymin;
  int32_t ymax;
  int32_t width;
  int32_t height;
  int32_t size;
} tku_msgs__msg__ColorData;

// Struct for a sequence of tku_msgs__msg__ColorData.
typedef struct tku_msgs__msg__ColorData__Sequence
{
  tku_msgs__msg__ColorData * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} tku_msgs__msg__ColorData__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TKU_MSGS__MSG__DETAIL__COLOR_DATA__STRUCT_H_
