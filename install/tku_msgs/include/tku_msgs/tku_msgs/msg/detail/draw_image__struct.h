// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from tku_msgs:msg/DrawImage.idl
// generated code does not contain a copyright notice

#ifndef TKU_MSGS__MSG__DETAIL__DRAW_IMAGE__STRUCT_H_
#define TKU_MSGS__MSG__DETAIL__DRAW_IMAGE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/DrawImage in the package tku_msgs.
typedef struct tku_msgs__msg__DrawImage
{
  int16_t cnt;
  int16_t mode;
  int16_t xmin;
  int16_t xmax;
  int16_t ymin;
  int16_t ymax;
  int32_t rvalue;
  int32_t gvalue;
  int32_t bvalue;
} tku_msgs__msg__DrawImage;

// Struct for a sequence of tku_msgs__msg__DrawImage.
typedef struct tku_msgs__msg__DrawImage__Sequence
{
  tku_msgs__msg__DrawImage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} tku_msgs__msg__DrawImage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TKU_MSGS__MSG__DETAIL__DRAW_IMAGE__STRUCT_H_
