// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from tku_msgs:msg/InterfaceSend2Sector.idl
// generated code does not contain a copyright notice

#ifndef TKU_MSGS__MSG__DETAIL__INTERFACE_SEND2_SECTOR__STRUCT_H_
#define TKU_MSGS__MSG__DETAIL__INTERFACE_SEND2_SECTOR__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'sectorname'
#include "rosidl_runtime_c/string.h"
// Member 'delay'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in msg/InterfaceSend2Sector in the package tku_msgs.
typedef struct tku_msgs__msg__InterfaceSend2Sector
{
  int32_t package;
  rosidl_runtime_c__String sectorname;
  rosidl_runtime_c__int32__Sequence delay;
  int32_t cnt;
} tku_msgs__msg__InterfaceSend2Sector;

// Struct for a sequence of tku_msgs__msg__InterfaceSend2Sector.
typedef struct tku_msgs__msg__InterfaceSend2Sector__Sequence
{
  tku_msgs__msg__InterfaceSend2Sector * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} tku_msgs__msg__InterfaceSend2Sector__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TKU_MSGS__MSG__DETAIL__INTERFACE_SEND2_SECTOR__STRUCT_H_
