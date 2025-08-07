// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from tku_msgs:msg/SaveMotion.idl
// generated code does not contain a copyright notice

#ifndef TKU_MSGS__MSG__DETAIL__SAVE_MOTION__STRUCT_H_
#define TKU_MSGS__MSG__DETAIL__SAVE_MOTION__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'layout'
#include "std_msgs/msg/detail/multi_array_layout__struct.h"
// Member 'name'
#include "rosidl_runtime_c/string.h"
// Member 'motionlist'
// Member 'motordata'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in msg/SaveMotion in the package tku_msgs.
typedef struct tku_msgs__msg__SaveMotion
{
  std_msgs__msg__MultiArrayLayout layout;
  rosidl_runtime_c__String name;
  int32_t motionstate;
  int32_t id;
  int32_t savestate;
  bool saveflag;
  rosidl_runtime_c__int32__Sequence motionlist;
  rosidl_runtime_c__int32__Sequence motordata;
} tku_msgs__msg__SaveMotion;

// Struct for a sequence of tku_msgs__msg__SaveMotion.
typedef struct tku_msgs__msg__SaveMotion__Sequence
{
  tku_msgs__msg__SaveMotion * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} tku_msgs__msg__SaveMotion__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TKU_MSGS__MSG__DETAIL__SAVE_MOTION__STRUCT_H_
