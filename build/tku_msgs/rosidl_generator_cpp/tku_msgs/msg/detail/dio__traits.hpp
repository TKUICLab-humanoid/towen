// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from tku_msgs:msg/Dio.idl
// generated code does not contain a copyright notice

#ifndef TKU_MSGS__MSG__DETAIL__DIO__TRAITS_HPP_
#define TKU_MSGS__MSG__DETAIL__DIO__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "tku_msgs/msg/detail/dio__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace tku_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const Dio & msg,
  std::ostream & out)
{
  out << "{";
  // member: data
  {
    out << "data: ";
    rosidl_generator_traits::value_to_yaml(msg.data, out);
    out << ", ";
  }

  // member: strategy
  {
    out << "strategy: ";
    rosidl_generator_traits::value_to_yaml(msg.strategy, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Dio & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: data
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "data: ";
    rosidl_generator_traits::value_to_yaml(msg.data, out);
    out << "\n";
  }

  // member: strategy
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "strategy: ";
    rosidl_generator_traits::value_to_yaml(msg.strategy, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Dio & msg, bool use_flow_style = false)
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
  const tku_msgs::msg::Dio & msg,
  std::ostream & out, size_t indentation = 0)
{
  tku_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use tku_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const tku_msgs::msg::Dio & msg)
{
  return tku_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<tku_msgs::msg::Dio>()
{
  return "tku_msgs::msg::Dio";
}

template<>
inline const char * name<tku_msgs::msg::Dio>()
{
  return "tku_msgs/msg/Dio";
}

template<>
struct has_fixed_size<tku_msgs::msg::Dio>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<tku_msgs::msg::Dio>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<tku_msgs::msg::Dio>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // TKU_MSGS__MSG__DETAIL__DIO__TRAITS_HPP_
