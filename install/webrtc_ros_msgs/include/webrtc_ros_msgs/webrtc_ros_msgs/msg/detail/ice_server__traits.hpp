// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from webrtc_ros_msgs:msg/IceServer.idl
// generated code does not contain a copyright notice

#ifndef WEBRTC_ROS_MSGS__MSG__DETAIL__ICE_SERVER__TRAITS_HPP_
#define WEBRTC_ROS_MSGS__MSG__DETAIL__ICE_SERVER__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "webrtc_ros_msgs/msg/detail/ice_server__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace webrtc_ros_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const IceServer & msg,
  std::ostream & out)
{
  out << "{";
  // member: uri
  {
    out << "uri: ";
    rosidl_generator_traits::value_to_yaml(msg.uri, out);
    out << ", ";
  }

  // member: username
  {
    out << "username: ";
    rosidl_generator_traits::value_to_yaml(msg.username, out);
    out << ", ";
  }

  // member: password
  {
    out << "password: ";
    rosidl_generator_traits::value_to_yaml(msg.password, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const IceServer & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: uri
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "uri: ";
    rosidl_generator_traits::value_to_yaml(msg.uri, out);
    out << "\n";
  }

  // member: username
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "username: ";
    rosidl_generator_traits::value_to_yaml(msg.username, out);
    out << "\n";
  }

  // member: password
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "password: ";
    rosidl_generator_traits::value_to_yaml(msg.password, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const IceServer & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace webrtc_ros_msgs

namespace rosidl_generator_traits
{

[[deprecated("use webrtc_ros_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const webrtc_ros_msgs::msg::IceServer & msg,
  std::ostream & out, size_t indentation = 0)
{
  webrtc_ros_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use webrtc_ros_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const webrtc_ros_msgs::msg::IceServer & msg)
{
  return webrtc_ros_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<webrtc_ros_msgs::msg::IceServer>()
{
  return "webrtc_ros_msgs::msg::IceServer";
}

template<>
inline const char * name<webrtc_ros_msgs::msg::IceServer>()
{
  return "webrtc_ros_msgs/msg/IceServer";
}

template<>
struct has_fixed_size<webrtc_ros_msgs::msg::IceServer>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<webrtc_ros_msgs::msg::IceServer>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<webrtc_ros_msgs::msg::IceServer>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // WEBRTC_ROS_MSGS__MSG__DETAIL__ICE_SERVER__TRAITS_HPP_
