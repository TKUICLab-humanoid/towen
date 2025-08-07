// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from tku_msgs:msg/Walkingmessage.idl
// generated code does not contain a copyright notice

#ifndef TKU_MSGS__MSG__DETAIL__WALKINGMESSAGE__STRUCT_H_
#define TKU_MSGS__MSG__DETAIL__WALKINGMESSAGE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/Walkingmessage in the package tku_msgs.
typedef struct tku_msgs__msg__Walkingmessage
{
  int32_t x;
  int32_t y;
  int32_t z;
  int32_t theta;
  int32_t walking_cmd;
  int32_t sensor_mode;
} tku_msgs__msg__Walkingmessage;

// Struct for a sequence of tku_msgs__msg__Walkingmessage.
typedef struct tku_msgs__msg__Walkingmessage__Sequence
{
  tku_msgs__msg__Walkingmessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} tku_msgs__msg__Walkingmessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TKU_MSGS__MSG__DETAIL__WALKINGMESSAGE__STRUCT_H_
