// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from tku_msgs:msg/HSVValue.idl
// generated code does not contain a copyright notice

#ifndef TKU_MSGS__MSG__DETAIL__HSV_VALUE__TRAITS_HPP_
#define TKU_MSGS__MSG__DETAIL__HSV_VALUE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "tku_msgs/msg/detail/hsv_value__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace tku_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const HSVValue & msg,
  std::ostream & out)
{
  out << "{";
  // member: hmin
  {
    out << "hmin: ";
    rosidl_generator_traits::value_to_yaml(msg.hmin, out);
    out << ", ";
  }

  // member: hmax
  {
    out << "hmax: ";
    rosidl_generator_traits::value_to_yaml(msg.hmax, out);
    out << ", ";
  }

  // member: smin
  {
    out << "smin: ";
    rosidl_generator_traits::value_to_yaml(msg.smin, out);
    out << ", ";
  }

  // member: smax
  {
    out << "smax: ";
    rosidl_generator_traits::value_to_yaml(msg.smax, out);
    out << ", ";
  }

  // member: vmin
  {
    out << "vmin: ";
    rosidl_generator_traits::value_to_yaml(msg.vmin, out);
    out << ", ";
  }

  // member: vmax
  {
    out << "vmax: ";
    rosidl_generator_traits::value_to_yaml(msg.vmax, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const HSVValue & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: hmin
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "hmin: ";
    rosidl_generator_traits::value_to_yaml(msg.hmin, out);
    out << "\n";
  }

  // member: hmax
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "hmax: ";
    rosidl_generator_traits::value_to_yaml(msg.hmax, out);
    out << "\n";
  }

  // member: smin
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "smin: ";
    rosidl_generator_traits::value_to_yaml(msg.smin, out);
    out << "\n";
  }

  // member: smax
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "smax: ";
    rosidl_generator_traits::value_to_yaml(msg.smax, out);
    out << "\n";
  }

  // member: vmin
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "vmin: ";
    rosidl_generator_traits::value_to_yaml(msg.vmin, out);
    out << "\n";
  }

  // member: vmax
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "vmax: ";
    rosidl_generator_traits::value_to_yaml(msg.vmax, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const HSVValue & msg, bool use_flow_style = false)
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
  const tku_msgs::msg::HSVValue & msg,
  std::ostream & out, size_t indentation = 0)
{
  tku_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use tku_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const tku_msgs::msg::HSVValue & msg)
{
  return tku_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<tku_msgs::msg::HSVValue>()
{
  return "tku_msgs::msg::HSVValue";
}

template<>
inline const char * name<tku_msgs::msg::HSVValue>()
{
  return "tku_msgs/msg/HSVValue";
}

template<>
struct has_fixed_size<tku_msgs::msg::HSVValue>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<tku_msgs::msg::HSVValue>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<tku_msgs::msg::HSVValue>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // TKU_MSGS__MSG__DETAIL__HSV_VALUE__TRAITS_HPP_
