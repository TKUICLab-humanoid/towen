// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from tku_msgs:srv/BuildModel.idl
// generated code does not contain a copyright notice

#ifndef TKU_MSGS__SRV__DETAIL__BUILD_MODEL__STRUCT_H_
#define TKU_MSGS__SRV__DETAIL__BUILD_MODEL__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/BuildModel in the package tku_msgs.
typedef struct tku_msgs__srv__BuildModel_Request
{
  bool build;
} tku_msgs__srv__BuildModel_Request;

// Struct for a sequence of tku_msgs__srv__BuildModel_Request.
typedef struct tku_msgs__srv__BuildModel_Request__Sequence
{
  tku_msgs__srv__BuildModel_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} tku_msgs__srv__BuildModel_Request__Sequence;


// Constants defined in the message

/// Struct defined in srv/BuildModel in the package tku_msgs.
typedef struct tku_msgs__srv__BuildModel_Response
{
  bool already;
} tku_msgs__srv__BuildModel_Response;

// Struct for a sequence of tku_msgs__srv__BuildModel_Response.
typedef struct tku_msgs__srv__BuildModel_Response__Sequence
{
  tku_msgs__srv__BuildModel_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} tku_msgs__srv__BuildModel_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TKU_MSGS__SRV__DETAIL__BUILD_MODEL__STRUCT_H_
