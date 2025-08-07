// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from tku_msgs:msg/DrawImage.idl
// generated code does not contain a copyright notice

#ifndef TKU_MSGS__MSG__DETAIL__DRAW_IMAGE__TRAITS_HPP_
#define TKU_MSGS__MSG__DETAIL__DRAW_IMAGE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "tku_msgs/msg/detail/draw_image__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace tku_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const DrawImage & msg,
  std::ostream & out)
{
  out << "{";
  // member: cnt
  {
    out << "cnt: ";
    rosidl_generator_traits::value_to_yaml(msg.cnt, out);
    out << ", ";
  }

  // member: mode
  {
    out << "mode: ";
    rosidl_generator_traits::value_to_yaml(msg.mode, out);
    out << ", ";
  }

  // member: xmin
  {
    out << "xmin: ";
    rosidl_generator_traits::value_to_yaml(msg.xmin, out);
    out << ", ";
  }

  // member: xmax
  {
    out << "xmax: ";
    rosidl_generator_traits::value_to_yaml(msg.xmax, out);
    out << ", ";
  }

  // member: ymin
  {
    out << "ymin: ";
    rosidl_generator_traits::value_to_yaml(msg.ymin, out);
    out << ", ";
  }

  // member: ymax
  {
    out << "ymax: ";
    rosidl_generator_traits::value_to_yaml(msg.ymax, out);
    out << ", ";
  }

  // member: rvalue
  {
    out << "rvalue: ";
    rosidl_generator_traits::value_to_yaml(msg.rvalue, out);
    out << ", ";
  }

  // member: gvalue
  {
    out << "gvalue: ";
    rosidl_generator_traits::value_to_yaml(msg.gvalue, out);
    out << ", ";
  }

  // member: bvalue
  {
    out << "bvalue: ";
    rosidl_generator_traits::value_to_yaml(msg.bvalue, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const DrawImage & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: cnt
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cnt: ";
    rosidl_generator_traits::value_to_yaml(msg.cnt, out);
    out << "\n";
  }

  // member: mode
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "mode: ";
    rosidl_generator_traits::value_to_yaml(msg.mode, out);
    out << "\n";
  }

  // member: xmin
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "xmin: ";
    rosidl_generator_traits::value_to_yaml(msg.xmin, out);
    out << "\n";
  }

  // member: xmax
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "xmax: ";
    rosidl_generator_traits::value_to_yaml(msg.xmax, out);
    out << "\n";
  }

  // member: ymin
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ymin: ";
    rosidl_generator_traits::value_to_yaml(msg.ymin, out);
    out << "\n";
  }

  // member: ymax
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ymax: ";
    rosidl_generator_traits::value_to_yaml(msg.ymax, out);
    out << "\n";
  }

  // member: rvalue
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "rvalue: ";
    rosidl_generator_traits::value_to_yaml(msg.rvalue, out);
    out << "\n";
  }

  // member: gvalue
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "gvalue: ";
    rosidl_generator_traits::value_to_yaml(msg.gvalue, out);
    out << "\n";
  }

  // member: bvalue
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "bvalue: ";
    rosidl_generator_traits::value_to_yaml(msg.bvalue, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const DrawImage & msg, bool use_flow_style = false)
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
  const tku_msgs::msg::DrawImage & msg,
  std::ostream & out, size_t indentation = 0)
{
  tku_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use tku_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const tku_msgs::msg::DrawImage & msg)
{
  return tku_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<tku_msgs::msg::DrawImage>()
{
  return "tku_msgs::msg::DrawImage";
}

template<>
inline const char * name<tku_msgs::msg::DrawImage>()
{
  return "tku_msgs/msg/DrawImage";
}

template<>
struct has_fixed_size<tku_msgs::msg::DrawImage>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<tku_msgs::msg::DrawImage>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<tku_msgs::msg::DrawImage>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // TKU_MSGS__MSG__DETAIL__DRAW_IMAGE__TRAITS_HPP_
