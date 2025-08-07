// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from tku_msgs:msg/ObjectList.idl
// generated code does not contain a copyright notice

#ifndef TKU_MSGS__MSG__DETAIL__OBJECT_LIST__STRUCT_H_
#define TKU_MSGS__MSG__DETAIL__OBJECT_LIST__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'objectlist'
#include "tku_msgs/msg/detail/color_array__struct.h"

/// Struct defined in msg/ObjectList in the package tku_msgs.
typedef struct tku_msgs__msg__ObjectList
{
  tku_msgs__msg__ColorArray__Sequence objectlist;
} tku_msgs__msg__ObjectList;

// Struct for a sequence of tku_msgs__msg__ObjectList.
typedef struct tku_msgs__msg__ObjectList__Sequence
{
  tku_msgs__msg__ObjectList * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} tku_msgs__msg__ObjectList__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TKU_MSGS__MSG__DETAIL__OBJECT_LIST__STRUCT_H_
