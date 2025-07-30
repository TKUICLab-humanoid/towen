// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from tku_msgs:msg/ButtonColorForm.idl
// generated code does not contain a copyright notice

#ifndef TKU_MSGS__MSG__DETAIL__BUTTON_COLOR_FORM__STRUCT_H_
#define TKU_MSGS__MSG__DETAIL__BUTTON_COLOR_FORM__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/ButtonColorForm in the package tku_msgs.
typedef struct tku_msgs__msg__ButtonColorForm
{
  bool buildingmodel;
} tku_msgs__msg__ButtonColorForm;

// Struct for a sequence of tku_msgs__msg__ButtonColorForm.
typedef struct tku_msgs__msg__ButtonColorForm__Sequence
{
  tku_msgs__msg__ButtonColorForm * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} tku_msgs__msg__ButtonColorForm__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TKU_MSGS__MSG__DETAIL__BUTTON_COLOR_FORM__STRUCT_H_
