// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from tku_msgs:msg/LabelModelObjectList.idl
// generated code does not contain a copyright notice

#ifndef TKU_MSGS__MSG__DETAIL__LABEL_MODEL_OBJECT_LIST__STRUCT_H_
#define TKU_MSGS__MSG__DETAIL__LABEL_MODEL_OBJECT_LIST__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'labelmodel'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in msg/LabelModelObjectList in the package tku_msgs.
typedef struct tku_msgs__msg__LabelModelObjectList
{
  rosidl_runtime_c__uint8__Sequence labelmodel;
} tku_msgs__msg__LabelModelObjectList;

// Struct for a sequence of tku_msgs__msg__LabelModelObjectList.
typedef struct tku_msgs__msg__LabelModelObjectList__Sequence
{
  tku_msgs__msg__LabelModelObjectList * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} tku_msgs__msg__LabelModelObjectList__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TKU_MSGS__MSG__DETAIL__LABEL_MODEL_OBJECT_LIST__STRUCT_H_
