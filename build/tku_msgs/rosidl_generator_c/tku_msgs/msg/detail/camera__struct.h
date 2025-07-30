// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from tku_msgs:msg/Camera.idl
// generated code does not contain a copyright notice

#ifndef TKU_MSGS__MSG__DETAIL__CAMERA__STRUCT_H_
#define TKU_MSGS__MSG__DETAIL__CAMERA__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/Camera in the package tku_msgs.
typedef struct tku_msgs__msg__Camera
{
  float brightness;
  float contrast;
  float saturation;
  float whitebalance;
  bool autowhitebalance;
  bool auto_exposure;
} tku_msgs__msg__Camera;

// Struct for a sequence of tku_msgs__msg__Camera.
typedef struct tku_msgs__msg__Camera__Sequence
{
  tku_msgs__msg__Camera * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} tku_msgs__msg__Camera__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TKU_MSGS__MSG__DETAIL__CAMERA__STRUCT_H_
