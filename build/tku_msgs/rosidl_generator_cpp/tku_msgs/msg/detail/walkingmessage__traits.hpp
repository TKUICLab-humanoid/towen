// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from tku_msgs:msg/Walkingmessage.idl
// generated code does not contain a copyright notice

#ifndef TKU_MSGS__MSG__DETAIL__WALKINGMESSAGE__TRAITS_HPP_
#define TKU_MSGS__MSG__DETAIL__WALKINGMESSAGE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "tku_msgs/msg/detail/walkingmessage__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace tku_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const Walkingmessage & msg,
  std::ostream & out)
{
  out << "{";
  // member: x
  {
    out << "x: ";
    rosidl_generator_traits::value_to_yaml(msg.x, out);
    out << ", ";
  }

  // member: y
  {
    out << "y: ";
    rosidl_generator_traits::value_to_yaml(msg.y, out);
    out << ", ";
  }

  // member: z
  {
    out << "z: ";
    rosidl_generator_traits::value_to_yaml(msg.z, out);
    out << ", ";
  }

  // member: theta
  {
    out << "theta: ";
    rosidl_generator_traits::value_to_yaml(msg.theta, out);
    out << ", ";
  }

  // member: walking_cmd
  {
    out << "walking_cmd: ";
    rosidl_generator_traits::value_to_yaml(msg.walking_cmd, out);
    out << ", ";
  }

  // member: sensor_mode
  {
    out << "sensor_mode: ";
    rosidl_generator_traits::value_to_yaml(msg.sensor_mode, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Walkingmessage & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "x: ";
    rosidl_generator_traits::value_to_yaml(msg.x, out);
    out << "\n";
  }

  // member: y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "y: ";
    rosidl_generator_traits::value_to_yaml(msg.y, out);
    out << "\n";
  }

  // member: z
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "z: ";
    rosidl_generator_traits::value_to_yaml(msg.z, out);
    out << "\n";
  }

  // member: theta
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "theta: ";
    rosidl_generator_traits::value_to_yaml(msg.theta, out);
    out << "\n";
  }

  // member: walking_cmd
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "walking_cmd: ";
    rosidl_generator_traits::value_to_yaml(msg.walking_cmd, out);
    out << "\n";
  }

  // member: sensor_mode
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "sensor_mode: ";
    rosidl_generator_traits::value_to_yaml(msg.sensor_mode, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Walkingmessage & msg, bool use_flow_style = false)
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

}  // namespace tku_msgs

namespace rosidl_generator_traits
{

[[deprecated("use tku_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const tku_msgs::msg::Walkingmessage & msg,
  std::ostream & out, size_t indentation = 0)
{
  tku_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use tku_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const tku_msgs::msg::Walkingmessage & msg)
{
  return tku_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<tku_msgs::msg::Walkingmessage>()
{
  return "tku_msgs::msg::Walkingmessage";
}

template<>
inline const char * name<tku_msgs::msg::Walkingmessage>()
{
  return "tku_msgs/msg/Walkingmessage";
}

template<>
struct has_fixed_size<tku_msgs::msg::Walkingmessage>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<tku_msgs::msg::Walkingmessage>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<tku_msgs::msg::Walkingmessage>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // TKU_MSGS__MSG__DETAIL__WALKINGMESSAGE__TRAITS_HPP_
