// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from tku_msgs:msg/SensorPackage.idl
// generated code does not contain a copyright notice

#ifndef TKU_MSGS__MSG__DETAIL__SENSOR_PACKAGE__STRUCT_H_
#define TKU_MSGS__MSG__DETAIL__SENSOR_PACKAGE__STRUCT_H_

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
// Member 'imudata'
// Member 'forcesensordata'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in msg/SensorPackage in the package tku_msgs.
typedef struct tku_msgs__msg__SensorPackage
{
  std_msgs__msg__MultiArrayLayout layout;
  rosidl_runtime_c__double__Sequence imudata;
  rosidl_runtime_c__int32__Sequence forcesensordata;
  double yaw;
  double pitch;
  double roll;
} tku_msgs__msg__SensorPackage;

// Struct for a sequence of tku_msgs__msg__SensorPackage.
typedef struct tku_msgs__msg__SensorPackage__Sequence
{
  tku_msgs__msg__SensorPackage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} tku_msgs__msg__SensorPackage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TKU_MSGS__MSG__DETAIL__SENSOR_PACKAGE__STRUCT_H_
