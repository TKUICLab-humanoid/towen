// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from tku_msgs:msg/Parameter.idl
// generated code does not contain a copyright notice

#ifndef TKU_MSGS__MSG__DETAIL__PARAMETER__STRUCT_H_
#define TKU_MSGS__MSG__DETAIL__PARAMETER__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/Parameter in the package tku_msgs.
typedef struct tku_msgs__msg__Parameter
{
  int32_t mode;
  double x_swing_range;
  double y_swing_range;
  double z_swing_range;
  int32_t period_t;
  int32_t period_t2;
  int32_t sample_time;
  double osc_lockrange;
  double base_default_z;
  double y_swing_shift;
  double x_swing_com;
  double base_lift_z;
  double rightfoot_shift_z;
  double com_y_swing;
  double now_stand_height;
  double now_com_height;
  bool stand_balance;
} tku_msgs__msg__Parameter;

// Struct for a sequence of tku_msgs__msg__Parameter.
typedef struct tku_msgs__msg__Parameter__Sequence
{
  tku_msgs__msg__Parameter * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} tku_msgs__msg__Parameter__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TKU_MSGS__MSG__DETAIL__PARAMETER__STRUCT_H_
