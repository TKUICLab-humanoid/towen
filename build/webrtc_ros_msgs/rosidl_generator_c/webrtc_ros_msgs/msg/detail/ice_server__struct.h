// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from webrtc_ros_msgs:msg/IceServer.idl
// generated code does not contain a copyright notice

#ifndef WEBRTC_ROS_MSGS__MSG__DETAIL__ICE_SERVER__STRUCT_H_
#define WEBRTC_ROS_MSGS__MSG__DETAIL__ICE_SERVER__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'uri'
// Member 'username'
// Member 'password'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/IceServer in the package webrtc_ros_msgs.
typedef struct webrtc_ros_msgs__msg__IceServer
{
  rosidl_runtime_c__String uri;
  rosidl_runtime_c__String username;
  rosidl_runtime_c__String password;
} webrtc_ros_msgs__msg__IceServer;

// Struct for a sequence of webrtc_ros_msgs__msg__IceServer.
typedef struct webrtc_ros_msgs__msg__IceServer__Sequence
{
  webrtc_ros_msgs__msg__IceServer * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} webrtc_ros_msgs__msg__IceServer__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // WEBRTC_ROS_MSGS__MSG__DETAIL__ICE_SERVER__STRUCT_H_
