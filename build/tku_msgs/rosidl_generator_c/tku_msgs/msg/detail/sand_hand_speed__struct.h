// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from tku_msgs:msg/SandHandSpeed.idl
// generated code does not contain a copyright notice

#ifndef TKU_MSGS__MSG__DETAIL__SAND_HAND_SPEED__STRUCT_H_
#define TKU_MSGS__MSG__DETAIL__SAND_HAND_SPEED__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/SandHandSpeed in the package tku_msgs.
typedef struct tku_msgs__msg__SandHandSpeed
{
  int16_t sector;
  int16_t speed;
} tku_msgs__msg__SandHandSpeed;

// Struct for a sequence of tku_msgs__msg__SandHandSpeed.
typedef struct tku_msgs__msg__SandHandSpeed__Sequence
{
  tku_msgs__msg__SandHandSpeed * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} tku_msgs__msg__SandHandSpeed__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TKU_MSGS__MSG__DETAIL__SAND_HAND_SPEED__STRUCT_H_
