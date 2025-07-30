// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from tku_msgs:msg/SandHandSpeed.idl
// generated code does not contain a copyright notice

#ifndef TKU_MSGS__MSG__DETAIL__SAND_HAND_SPEED__TRAITS_HPP_
#define TKU_MSGS__MSG__DETAIL__SAND_HAND_SPEED__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "tku_msgs/msg/detail/sand_hand_speed__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace tku_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const SandHandSpeed & msg,
  std::ostream & out)
{
  out << "{";
  // member: sector
  {
    out << "sector: ";
    rosidl_generator_traits::value_to_yaml(msg.sector, out);
    out << ", ";
  }

  // member: speed
  {
    out << "speed: ";
    rosidl_generator_traits::value_to_yaml(msg.speed, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SandHandSpeed & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: sector
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "sector: ";
    rosidl_generator_traits::value_to_yaml(msg.sector, out);
    out << "\n";
  }

  // member: speed
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "speed: ";
    rosidl_generator_traits::value_to_yaml(msg.speed, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SandHandSpeed & msg, bool use_flow_style = false)
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
  const tku_msgs::msg::SandHandSpeed & msg,
  std::ostream & out, size_t indentation = 0)
{
  tku_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use tku_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const tku_msgs::msg::SandHandSpeed & msg)
{
  return tku_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<tku_msgs::msg::SandHandSpeed>()
{
  return "tku_msgs::msg::SandHandSpeed";
}

template<>
inline const char * name<tku_msgs::msg::SandHandSpeed>()
{
  return "tku_msgs/msg/SandHandSpeed";
}

template<>
struct has_fixed_size<tku_msgs::msg::SandHandSpeed>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<tku_msgs::msg::SandHandSpeed>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<tku_msgs::msg::SandHandSpeed>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // TKU_MSGS__MSG__DETAIL__SAND_HAND_SPEED__TRAITS_HPP_
