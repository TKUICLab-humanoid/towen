// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__rosidl_typesupport_fastrtps_cpp.hpp.em
// with input from webrtc_ros_msgs:msg/IceServer.idl
// generated code does not contain a copyright notice

#ifndef WEBRTC_ROS_MSGS__MSG__DETAIL__ICE_SERVER__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
#define WEBRTC_ROS_MSGS__MSG__DETAIL__ICE_SERVER__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_

#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "webrtc_ros_msgs/msg/rosidl_typesupport_fastrtps_cpp__visibility_control.h"
#include "webrtc_ros_msgs/msg/detail/ice_server__struct.hpp"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

#include "fastcdr/Cdr.h"

namespace webrtc_ros_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_webrtc_ros_msgs
cdr_serialize(
  const webrtc_ros_msgs::msg::IceServer & ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_webrtc_ros_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  webrtc_ros_msgs::msg::IceServer & ros_message);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_webrtc_ros_msgs
get_serialized_size(
  const webrtc_ros_msgs::msg::IceServer & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_webrtc_ros_msgs
max_serialized_size_IceServer(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace webrtc_ros_msgs

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_webrtc_ros_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, webrtc_ros_msgs, msg, IceServer)();

#ifdef __cplusplus
}
#endif

#endif  // WEBRTC_ROS_MSGS__MSG__DETAIL__ICE_SERVER__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
