// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from tku_msgs:msg/HeadPackage.idl
// generated code does not contain a copyright notice

#ifndef TKU_MSGS__MSG__DETAIL__HEAD_PACKAGE__STRUCT_H_
#define TKU_MSGS__MSG__DETAIL__HEAD_PACKAGE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/HeadPackage in the package tku_msgs.
typedef struct tku_msgs__msg__HeadPackage
{
  int16_t id;
  int16_t position;
  int16_t speed;
} tku_msgs__msg__HeadPackage;

// Struct for a sequence of tku_msgs__msg__HeadPackage.
typedef struct tku_msgs__msg__HeadPackage__Sequence
{
  tku_msgs__msg__HeadPackage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} tku_msgs__msg__HeadPackage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TKU_MSGS__MSG__DETAIL__HEAD_PACKAGE__STRUCT_H_
