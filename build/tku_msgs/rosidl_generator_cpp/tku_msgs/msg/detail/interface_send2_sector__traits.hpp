// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from tku_msgs:msg/InterfaceSend2Sector.idl
// generated code does not contain a copyright notice

#ifndef TKU_MSGS__MSG__DETAIL__INTERFACE_SEND2_SECTOR__TRAITS_HPP_
#define TKU_MSGS__MSG__DETAIL__INTERFACE_SEND2_SECTOR__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "tku_msgs/msg/detail/interface_send2_sector__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace tku_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const InterfaceSend2Sector & msg,
  std::ostream & out)
{
  out << "{";
  // member: package
  {
    out << "package: ";
    rosidl_generator_traits::value_to_yaml(msg.package, out);
    out << ", ";
  }

  // member: sectorname
  {
    out << "sectorname: ";
    rosidl_generator_traits::value_to_yaml(msg.sectorname, out);
    out << ", ";
  }

  // member: delay
  {
    if (msg.delay.size() == 0) {
      out << "delay: []";
    } else {
      out << "delay: [";
      size_t pending_items = msg.delay.size();
      for (auto item : msg.delay) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: cnt
  {
    out << "cnt: ";
    rosidl_generator_traits::value_to_yaml(msg.cnt, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const InterfaceSend2Sector & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: package
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "package: ";
    rosidl_generator_traits::value_to_yaml(msg.package, out);
    out << "\n";
  }

  // member: sectorname
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "sectorname: ";
    rosidl_generator_traits::value_to_yaml(msg.sectorname, out);
    out << "\n";
  }

  // member: delay
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.delay.size() == 0) {
      out << "delay: []\n";
    } else {
      out << "delay:\n";
      for (auto item : msg.delay) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: cnt
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cnt: ";
    rosidl_generator_traits::value_to_yaml(msg.cnt, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const InterfaceSend2Sector & msg, bool use_flow_style = false)
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
  const tku_msgs::msg::InterfaceSend2Sector & msg,
  std::ostream & out, size_t indentation = 0)
{
  tku_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use tku_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const tku_msgs::msg::InterfaceSend2Sector & msg)
{
  return tku_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<tku_msgs::msg::InterfaceSend2Sector>()
{
  return "tku_msgs::msg::InterfaceSend2Sector";
}

template<>
inline const char * name<tku_msgs::msg::InterfaceSend2Sector>()
{
  return "tku_msgs/msg/InterfaceSend2Sector";
}

template<>
struct has_fixed_size<tku_msgs::msg::InterfaceSend2Sector>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<tku_msgs::msg::InterfaceSend2Sector>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<tku_msgs::msg::InterfaceSend2Sector>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // TKU_MSGS__MSG__DETAIL__INTERFACE_SEND2_SECTOR__TRAITS_HPP_
