// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from tku_msgs:srv/CameraInfo.idl
// generated code does not contain a copyright notice

#ifndef TKU_MSGS__SRV__DETAIL__CAMERA_INFO__STRUCT_H_
#define TKU_MSGS__SRV__DETAIL__CAMERA_INFO__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/CameraInfo in the package tku_msgs.
typedef struct tku_msgs__srv__CameraInfo_Request
{
  bool load;
} tku_msgs__srv__CameraInfo_Request;

// Struct for a sequence of tku_msgs__srv__CameraInfo_Request.
typedef struct tku_msgs__srv__CameraInfo_Request__Sequence
{
  tku_msgs__srv__CameraInfo_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} tku_msgs__srv__CameraInfo_Request__Sequence;


// Constants defined in the message

/// Struct defined in srv/CameraInfo in the package tku_msgs.
typedef struct tku_msgs__srv__CameraInfo_Response
{
  int32_t brightness;
  int32_t contrast;
  int32_t saturation;
  int32_t white_balance;
  bool auto_white_balance;
  bool auto_exposure;
  bool auto_backlight_compensation;
} tku_msgs__srv__CameraInfo_Response;

// Struct for a sequence of tku_msgs__srv__CameraInfo_Response.
typedef struct tku_msgs__srv__CameraInfo_Response__Sequence
{
  tku_msgs__srv__CameraInfo_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} tku_msgs__srv__CameraInfo_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TKU_MSGS__SRV__DETAIL__CAMERA_INFO__STRUCT_H_
