// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from tku_msgs:msg/HSVValue.idl
// generated code does not contain a copyright notice

#ifndef TKU_MSGS__MSG__DETAIL__HSV_VALUE__STRUCT_H_
#define TKU_MSGS__MSG__DETAIL__HSV_VALUE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/HSVValue in the package tku_msgs.
typedef struct tku_msgs__msg__HSVValue
{
  int16_t hmin;
  int16_t hmax;
  int16_t smin;
  int16_t smax;
  int16_t vmin;
  int16_t vmax;
} tku_msgs__msg__HSVValue;

// Struct for a sequence of tku_msgs__msg__HSVValue.
typedef struct tku_msgs__msg__HSVValue__Sequence
{
  tku_msgs__msg__HSVValue * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} tku_msgs__msg__HSVValue__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TKU_MSGS__MSG__DETAIL__HSV_VALUE__STRUCT_H_
