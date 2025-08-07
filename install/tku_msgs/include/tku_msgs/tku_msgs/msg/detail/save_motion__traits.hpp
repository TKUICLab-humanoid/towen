// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from tku_msgs:msg/SaveMotion.idl
// generated code does not contain a copyright notice

#ifndef TKU_MSGS__MSG__DETAIL__SAVE_MOTION__TRAITS_HPP_
#define TKU_MSGS__MSG__DETAIL__SAVE_MOTION__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "tku_msgs/msg/detail/save_motion__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'layout'
#include "std_msgs/msg/detail/multi_array_layout__traits.hpp"

namespace tku_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const SaveMotion & msg,
  std::ostream & out)
{
  out << "{";
  // member: layout
  {
    out << "layout: ";
    to_flow_style_yaml(msg.layout, out);
    out << ", ";
  }

  // member: name
  {
    out << "name: ";
    rosidl_generator_traits::value_to_yaml(msg.name, out);
    out << ", ";
  }

  // member: motionstate
  {
    out << "motionstate: ";
    rosidl_generator_traits::value_to_yaml(msg.motionstate, out);
    out << ", ";
  }

  // member: id
  {
    out << "id: ";
    rosidl_generator_traits::value_to_yaml(msg.id, out);
    out << ", ";
  }

  // member: savestate
  {
    out << "savestate: ";
    rosidl_generator_traits::value_to_yaml(msg.savestate, out);
    out << ", ";
  }

  // member: saveflag
  {
    out << "saveflag: ";
    rosidl_generator_traits::value_to_yaml(msg.saveflag, out);
    out << ", ";
  }

  // member: motionlist
  {
    if (msg.motionlist.size() == 0) {
      out << "motionlist: []";
    } else {
      out << "motionlist: [";
      size_t pending_items = msg.motionlist.size();
      for (auto item : msg.motionlist) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: motordata
  {
    if (msg.motordata.size() == 0) {
      out << "motordata: []";
    } else {
      out << "motordata: [";
      size_t pending_items = msg.motordata.size();
      for (auto item : msg.motordata) {
        rosidl_generator_traits::value_to_yaml(item, out);
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
  const SaveMotion & msg,
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

  // member: name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "name: ";
    rosidl_generator_traits::value_to_yaml(msg.name, out);
    out << "\n";
  }

  // member: motionstate
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "motionstate: ";
    rosidl_generator_traits::value_to_yaml(msg.motionstate, out);
    out << "\n";
  }

  // member: id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "id: ";
    rosidl_generator_traits::value_to_yaml(msg.id, out);
    out << "\n";
  }

  // member: savestate
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "savestate: ";
    rosidl_generator_traits::value_to_yaml(msg.savestate, out);
    out << "\n";
  }

  // member: saveflag
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "saveflag: ";
    rosidl_generator_traits::value_to_yaml(msg.saveflag, out);
    out << "\n";
  }

  // member: motionlist
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.motionlist.size() == 0) {
      out << "motionlist: []\n";
    } else {
      out << "motionlist:\n";
      for (auto item : msg.motionlist) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: motordata
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.motordata.size() == 0) {
      out << "motordata: []\n";
    } else {
      out << "motordata:\n";
      for (auto item : msg.motordata) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SaveMotion & msg, bool use_flow_style = false)
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
  const tku_msgs::msg::SaveMotion & msg,
  std::ostream & out, size_t indentation = 0)
{
  tku_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use tku_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const tku_msgs::msg::SaveMotion & msg)
{
  return tku_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<tku_msgs::msg::SaveMotion>()
{
  return "tku_msgs::msg::SaveMotion";
}

template<>
inline const char * name<tku_msgs::msg::SaveMotion>()
{
  return "tku_msgs/msg/SaveMotion";
}

template<>
struct has_fixed_size<tku_msgs::msg::SaveMotion>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<tku_msgs::msg::SaveMotion>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<tku_msgs::msg::SaveMotion>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // TKU_MSGS__MSG__DETAIL__SAVE_MOTION__TRAITS_HPP_
