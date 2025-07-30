// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from tku_msgs:srv/ReadMotion.idl
// generated code does not contain a copyright notice

#ifndef TKU_MSGS__SRV__DETAIL__READ_MOTION__STRUCT_H_
#define TKU_MSGS__SRV__DETAIL__READ_MOTION__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'name'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/ReadMotion in the package tku_msgs.
typedef struct tku_msgs__srv__ReadMotion_Request
{
  bool read;
  rosidl_runtime_c__String name;
  int32_t readstate;
} tku_msgs__srv__ReadMotion_Request;

// Struct for a sequence of tku_msgs__srv__ReadMotion_Request.
typedef struct tku_msgs__srv__ReadMotion_Request__Sequence
{
  tku_msgs__srv__ReadMotion_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} tku_msgs__srv__ReadMotion_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'motionstate'
// Member 'id'
// Member 'motionlist'
// Member 'relativedata'
// Member 'absolutedata'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in srv/ReadMotion in the package tku_msgs.
typedef struct tku_msgs__srv__ReadMotion_Response
{
  bool readcheck;
  int32_t vectorcnt;
  rosidl_runtime_c__int32__Sequence motionstate;
  rosidl_runtime_c__int32__Sequence id;
  rosidl_runtime_c__int32__Sequence motionlist;
  rosidl_runtime_c__int32__Sequence relativedata;
  rosidl_runtime_c__int32__Sequence absolutedata;
} tku_msgs__srv__ReadMotion_Response;

// Struct for a sequence of tku_msgs__srv__ReadMotion_Response.
typedef struct tku_msgs__srv__ReadMotion_Response__Sequence
{
  tku_msgs__srv__ReadMotion_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} tku_msgs__srv__ReadMotion_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TKU_MSGS__SRV__DETAIL__READ_MOTION__STRUCT_H_
