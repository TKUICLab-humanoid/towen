// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from webrtc_ros_msgs:srv/GetIceServers.idl
// generated code does not contain a copyright notice

#ifndef WEBRTC_ROS_MSGS__SRV__DETAIL__GET_ICE_SERVERS__STRUCT_H_
#define WEBRTC_ROS_MSGS__SRV__DETAIL__GET_ICE_SERVERS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/GetIceServers in the package webrtc_ros_msgs.
typedef struct webrtc_ros_msgs__srv__GetIceServers_Request
{
  uint8_t structure_needs_at_least_one_member;
} webrtc_ros_msgs__srv__GetIceServers_Request;

// Struct for a sequence of webrtc_ros_msgs__srv__GetIceServers_Request.
typedef struct webrtc_ros_msgs__srv__GetIceServers_Request__Sequence
{
  webrtc_ros_msgs__srv__GetIceServers_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} webrtc_ros_msgs__srv__GetIceServers_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'servers'
#include "webrtc_ros_msgs/msg/detail/ice_server__struct.h"

/// Struct defined in srv/GetIceServers in the package webrtc_ros_msgs.
typedef struct webrtc_ros_msgs__srv__GetIceServers_Response
{
  webrtc_ros_msgs__msg__IceServer__Sequence servers;
} webrtc_ros_msgs__srv__GetIceServers_Response;

// Struct for a sequence of webrtc_ros_msgs__srv__GetIceServers_Response.
typedef struct webrtc_ros_msgs__srv__GetIceServers_Response__Sequence
{
  webrtc_ros_msgs__srv__GetIceServers_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} webrtc_ros_msgs__srv__GetIceServers_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // WEBRTC_ROS_MSGS__SRV__DETAIL__GET_ICE_SERVERS__STRUCT_H_
