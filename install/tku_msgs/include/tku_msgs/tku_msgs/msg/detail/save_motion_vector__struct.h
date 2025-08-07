// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from tku_msgs:msg/SaveMotionVector.idl
// generated code does not contain a copyright notice

#ifndef TKU_MSGS__MSG__DETAIL__SAVE_MOTION_VECTOR__STRUCT_H_
#define TKU_MSGS__MSG__DETAIL__SAVE_MOTION_VECTOR__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'savemotionvector'
#include "tku_msgs/msg/detail/save_motion__struct.h"

/// Struct defined in msg/SaveMotionVector in the package tku_msgs.
typedef struct tku_msgs__msg__SaveMotionVector
{
  tku_msgs__msg__SaveMotion__Sequence savemotionvector;
} tku_msgs__msg__SaveMotionVector;

// Struct for a sequence of tku_msgs__msg__SaveMotionVector.
typedef struct tku_msgs__msg__SaveMotionVector__Sequence
{
  tku_msgs__msg__SaveMotionVector * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} tku_msgs__msg__SaveMotionVector__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TKU_MSGS__MSG__DETAIL__SAVE_MOTION_VECTOR__STRUCT_H_
