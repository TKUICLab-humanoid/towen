// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from tku_msgs:msg/SensorSet.idl
// generated code does not contain a copyright notice

#ifndef TKU_MSGS__MSG__DETAIL__SENSOR_SET__STRUCT_H_
#define TKU_MSGS__MSG__DETAIL__SENSOR_SET__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/SensorSet in the package tku_msgs.
typedef struct tku_msgs__msg__SensorSet
{
  bool reset;
} tku_msgs__msg__SensorSet;

// Struct for a sequence of tku_msgs__msg__SensorSet.
typedef struct tku_msgs__msg__SensorSet__Sequence
{
  tku_msgs__msg__SensorSet * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} tku_msgs__msg__SensorSet__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TKU_MSGS__MSG__DETAIL__SENSOR_SET__STRUCT_H_
