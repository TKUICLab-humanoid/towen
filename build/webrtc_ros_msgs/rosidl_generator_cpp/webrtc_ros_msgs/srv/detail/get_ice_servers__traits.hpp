// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from webrtc_ros_msgs:srv/GetIceServers.idl
// generated code does not contain a copyright notice

#ifndef WEBRTC_ROS_MSGS__SRV__DETAIL__GET_ICE_SERVERS__TRAITS_HPP_
#define WEBRTC_ROS_MSGS__SRV__DETAIL__GET_ICE_SERVERS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "webrtc_ros_msgs/srv/detail/get_ice_servers__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace webrtc_ros_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const GetIceServers_Request & msg,
  std::ostream & out)
{
  (void)msg;
  out << "null";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GetIceServers_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  (void)msg;
  (void)indentation;
  out << "null\n";
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GetIceServers_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace webrtc_ros_msgs

namespace rosidl_generator_traits
{

[[deprecated("use webrtc_ros_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const webrtc_ros_msgs::srv::GetIceServers_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  webrtc_ros_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use webrtc_ros_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const webrtc_ros_msgs::srv::GetIceServers_Request & msg)
{
  return webrtc_ros_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<webrtc_ros_msgs::srv::GetIceServers_Request>()
{
  return "webrtc_ros_msgs::srv::GetIceServers_Request";
}

template<>
inline const char * name<webrtc_ros_msgs::srv::GetIceServers_Request>()
{
  return "webrtc_ros_msgs/srv/GetIceServers_Request";
}

template<>
struct has_fixed_size<webrtc_ros_msgs::srv::GetIceServers_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<webrtc_ros_msgs::srv::GetIceServers_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<webrtc_ros_msgs::srv::GetIceServers_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'servers'
#include "webrtc_ros_msgs/msg/detail/ice_server__traits.hpp"

namespace webrtc_ros_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const GetIceServers_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: servers
  {
    if (msg.servers.size() == 0) {
      out << "servers: []";
    } else {
      out << "servers: [";
      size_t pending_items = msg.servers.size();
      for (auto item : msg.servers) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GetIceServers_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: servers
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.servers.size() == 0) {
      out << "servers: []\n";
    } else {
      out << "servers:\n";
      for (auto item : msg.servers) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GetIceServers_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace webrtc_ros_msgs

namespace rosidl_generator_traits
{

[[deprecated("use webrtc_ros_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const webrtc_ros_msgs::srv::GetIceServers_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  webrtc_ros_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use webrtc_ros_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const webrtc_ros_msgs::srv::GetIceServers_Response & msg)
{
  return webrtc_ros_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<webrtc_ros_msgs::srv::GetIceServers_Response>()
{
  return "webrtc_ros_msgs::srv::GetIceServers_Response";
}

template<>
inline const char * name<webrtc_ros_msgs::srv::GetIceServers_Response>()
{
  return "webrtc_ros_msgs/srv/GetIceServers_Response";
}

template<>
struct has_fixed_size<webrtc_ros_msgs::srv::GetIceServers_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<webrtc_ros_msgs::srv::GetIceServers_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<webrtc_ros_msgs::srv::GetIceServers_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<webrtc_ros_msgs::srv::GetIceServers>()
{
  return "webrtc_ros_msgs::srv::GetIceServers";
}

template<>
inline const char * name<webrtc_ros_msgs::srv::GetIceServers>()
{
  return "webrtc_ros_msgs/srv/GetIceServers";
}

template<>
struct has_fixed_size<webrtc_ros_msgs::srv::GetIceServers>
  : std::integral_constant<
    bool,
    has_fixed_size<webrtc_ros_msgs::srv::GetIceServers_Request>::value &&
    has_fixed_size<webrtc_ros_msgs::srv::GetIceServers_Response>::value
  >
{
};

template<>
struct has_bounded_size<webrtc_ros_msgs::srv::GetIceServers>
  : std::integral_constant<
    bool,
    has_bounded_size<webrtc_ros_msgs::srv::GetIceServers_Request>::value &&
    has_bounded_size<webrtc_ros_msgs::srv::GetIceServers_Response>::value
  >
{
};

template<>
struct is_service<webrtc_ros_msgs::srv::GetIceServers>
  : std::true_type
{
};

template<>
struct is_service_request<webrtc_ros_msgs::srv::GetIceServers_Request>
  : std::true_type
{
};

template<>
struct is_service_response<webrtc_ros_msgs::srv::GetIceServers_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // WEBRTC_ROS_MSGS__SRV__DETAIL__GET_ICE_SERVERS__TRAITS_HPP_
