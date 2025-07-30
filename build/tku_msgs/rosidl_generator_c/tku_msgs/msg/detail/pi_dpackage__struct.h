// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from tku_msgs:msg/PIDpackage.idl
// generated code does not contain a copyright notice

#ifndef TKU_MSGS__MSG__DETAIL__PI_DPACKAGE__STRUCT_H_
#define TKU_MSGS__MSG__DETAIL__PI_DPACKAGE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/PIDpackage in the package tku_msgs.
typedef struct tku_msgs__msg__PIDpackage
{
  int16_t motor_p;
  int16_t motor_i;
  int16_t motor_d;
  bool pflag;
  bool iflag;
  bool dflag;
  int16_t motorid;
} tku_msgs__msg__PIDpackage;

// Struct for a sequence of tku_msgs__msg__PIDpackage.
typedef struct tku_msgs__msg__PIDpackage__Sequence
{
  tku_msgs__msg__PIDpackage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} tku_msgs__msg__PIDpackage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TKU_MSGS__MSG__DETAIL__PI_DPACKAGE__STRUCT_H_
