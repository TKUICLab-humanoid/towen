// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from tku_msgs:msg/SensorPackage.idl
// generated code does not contain a copyright notice

#ifndef TKU_MSGS__MSG__DETAIL__SENSOR_PACKAGE__TRAITS_HPP_
#define TKU_MSGS__MSG__DETAIL__SENSOR_PACKAGE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "tku_msgs/msg/detail/sensor_package__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'layout'
#include "std_msgs/msg/detail/multi_array_layout__traits.hpp"

namespace tku_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const SensorPackage & msg,
  std::ostream & out)
{
  out << "{";
  // member: layout
  {
    out << "layout: ";
    to_flow_style_yaml(msg.layout, out);
    out << ", ";
  }

  // member: imudata
  {
    if (msg.imudata.size() == 0) {
      out << "imudata: []";
    } else {
      out << "imudata: [";
      size_t pending_items = msg.imudata.size();
      for (auto item : msg.imudata) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: forcesensordata
  {
    if (msg.forcesensordata.size() == 0) {
      out << "forcesensordata: []";
    } else {
      out << "forcesensordata: [";
      size_t pending_items = msg.forcesensordata.size();
      for (auto item : msg.forcesensordata) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: yaw
  {
    out << "yaw: ";
    rosidl_generator_traits::value_to_yaml(msg.yaw, out);
    out << ", ";
  }

  // member: pitch
  {
    out << "pitch: ";
    rosidl_generator_traits::value_to_yaml(msg.pitch, out);
    out << ", ";
  }

  // member: roll
  {
    out << "roll: ";
    rosidl_generator_traits::value_to_yaml(msg.roll, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SensorPackage & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: layout
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "layout:\n";
    to_block_style_yaml(msg.layout, out, indentation + 2);
  }

  // member: imudata
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.imudata.size() == 0) {
      out << "imudata: []\n";
    } else {
      out << "imudata:\n";
      for (auto item : msg.imudata) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: forcesensordata
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.forcesensordata.size() == 0) {
      out << "forcesensordata: []\n";
    } else {
      out << "forcesensordata:\n";
      for (auto item : msg.forcesensordata) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: yaw
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "yaw: ";
    rosidl_generator_traits::value_to_yaml(msg.yaw, out);
    out << "\n";
  }

  // member: pitch
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pitch: ";
    rosidl_generator_traits::value_to_yaml(msg.pitch, out);
    out << "\n";
  }

  // member: roll
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "roll: ";
    rosidl_generator_traits::value_to_yaml(msg.roll, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SensorPackage & msg, bool use_flow_style = false)
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
  const tku_msgs::msg::SensorPackage & msg,
  std::ostream & out, size_t indentation = 0)
{
  tku_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use tku_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const tku_msgs::msg::SensorPackage & msg)
{
  return tku_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<tku_msgs::msg::SensorPackage>()
{
  return "tku_msgs::msg::SensorPackage";
}

template<>
inline const char * name<tku_msgs::msg::SensorPackage>()
{
  return "tku_msgs/msg/SensorPackage";
}

template<>
struct has_fixed_size<tku_msgs::msg::SensorPackage>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<tku_msgs::msg::SensorPackage>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<tku_msgs::msg::SensorPackage>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // TKU_MSGS__MSG__DETAIL__SENSOR_PACKAGE__TRAITS_HPP_
