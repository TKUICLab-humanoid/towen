// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from tku_msgs:msg/Camera.idl
// generated code does not contain a copyright notice

#ifndef TKU_MSGS__MSG__DETAIL__CAMERA__TRAITS_HPP_
#define TKU_MSGS__MSG__DETAIL__CAMERA__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "tku_msgs/msg/detail/camera__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace tku_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const Camera & msg,
  std::ostream & out)
{
  out << "{";
  // member: brightness
  {
    out << "brightness: ";
    rosidl_generator_traits::value_to_yaml(msg.brightness, out);
    out << ", ";
  }

  // member: contrast
  {
    out << "contrast: ";
    rosidl_generator_traits::value_to_yaml(msg.contrast, out);
    out << ", ";
  }

  // member: saturation
  {
    out << "saturation: ";
    rosidl_generator_traits::value_to_yaml(msg.saturation, out);
    out << ", ";
  }

  // member: whitebalance
  {
    out << "whitebalance: ";
    rosidl_generator_traits::value_to_yaml(msg.whitebalance, out);
    out << ", ";
  }

  // member: autowhitebalance
  {
    out << "autowhitebalance: ";
    rosidl_generator_traits::value_to_yaml(msg.autowhitebalance, out);
    out << ", ";
  }

  // member: auto_exposure
  {
    out << "auto_exposure: ";
    rosidl_generator_traits::value_to_yaml(msg.auto_exposure, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Camera & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: brightness
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "brightness: ";
    rosidl_generator_traits::value_to_yaml(msg.brightness, out);
    out << "\n";
  }

  // member: contrast
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "contrast: ";
    rosidl_generator_traits::value_to_yaml(msg.contrast, out);
    out << "\n";
  }

  // member: saturation
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "saturation: ";
    rosidl_generator_traits::value_to_yaml(msg.saturation, out);
    out << "\n";
  }

  // member: whitebalance
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "whitebalance: ";
    rosidl_generator_traits::value_to_yaml(msg.whitebalance, out);
    out << "\n";
  }

  // member: autowhitebalance
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "autowhitebalance: ";
    rosidl_generator_traits::value_to_yaml(msg.autowhitebalance, out);
    out << "\n";
  }

  // member: auto_exposure
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "auto_exposure: ";
    rosidl_generator_traits::value_to_yaml(msg.auto_exposure, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Camera & msg, bool use_flow_style = false)
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
  const tku_msgs::msg::Camera & msg,
  std::ostream & out, size_t indentation = 0)
{
  tku_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use tku_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const tku_msgs::msg::Camera & msg)
{
  return tku_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<tku_msgs::msg::Camera>()
{
  return "tku_msgs::msg::Camera";
}

template<>
inline const char * name<tku_msgs::msg::Camera>()
{
  return "tku_msgs/msg/Camera";
}

template<>
struct has_fixed_size<tku_msgs::msg::Camera>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<tku_msgs::msg::Camera>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<tku_msgs::msg::Camera>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // TKU_MSGS__MSG__DETAIL__CAMERA__TRAITS_HPP_
