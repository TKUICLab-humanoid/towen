// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from tku_msgs:msg/ColorArray.idl
// generated code does not contain a copyright notice

#ifndef TKU_MSGS__MSG__DETAIL__COLOR_ARRAY__TRAITS_HPP_
#define TKU_MSGS__MSG__DETAIL__COLOR_ARRAY__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "tku_msgs/msg/detail/color_array__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'colorarray'
#include "tku_msgs/msg/detail/color_data__traits.hpp"

namespace tku_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const ColorArray & msg,
  std::ostream & out)
{
  out << "{";
  // member: cnt
  {
    out << "cnt: ";
    rosidl_generator_traits::value_to_yaml(msg.cnt, out);
    out << ", ";
  }

  // member: colorarray
  {
    if (msg.colorarray.size() == 0) {
      out << "colorarray: []";
    } else {
      out << "colorarray: [";
      size_t pending_items = msg.colorarray.size();
      for (auto item : msg.colorarray) {
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
  const ColorArray & msg,
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

  // member: colorarray
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.colorarray.size() == 0) {
      out << "colorarray: []\n";
    } else {
      out << "colorarray:\n";
      for (auto item : msg.colorarray) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ColorArray & msg, bool use_flow_style = false)
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
  const tku_msgs::msg::ColorArray & msg,
  std::ostream & out, size_t indentation = 0)
{
  tku_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use tku_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const tku_msgs::msg::ColorArray & msg)
{
  return tku_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<tku_msgs::msg::ColorArray>()
{
  return "tku_msgs::msg::ColorArray";
}

template<>
inline const char * name<tku_msgs::msg::ColorArray>()
{
  return "tku_msgs/msg/ColorArray";
}

template<>
struct has_fixed_size<tku_msgs::msg::ColorArray>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<tku_msgs::msg::ColorArray>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<tku_msgs::msg::ColorArray>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // TKU_MSGS__MSG__DETAIL__COLOR_ARRAY__TRAITS_HPP_
