// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from tku_msgs:msg/LabelModelObjectList.idl
// generated code does not contain a copyright notice

#ifndef TKU_MSGS__MSG__DETAIL__LABEL_MODEL_OBJECT_LIST__TRAITS_HPP_
#define TKU_MSGS__MSG__DETAIL__LABEL_MODEL_OBJECT_LIST__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "tku_msgs/msg/detail/label_model_object_list__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace tku_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const LabelModelObjectList & msg,
  std::ostream & out)
{
  out << "{";
  // member: labelmodel
  {
    if (msg.labelmodel.size() == 0) {
      out << "labelmodel: []";
    } else {
      out << "labelmodel: [";
      size_t pending_items = msg.labelmodel.size();
      for (auto item : msg.labelmodel) {
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
  const LabelModelObjectList & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: labelmodel
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.labelmodel.size() == 0) {
      out << "labelmodel: []\n";
    } else {
      out << "labelmodel:\n";
      for (auto item : msg.labelmodel) {
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

inline std::string to_yaml(const LabelModelObjectList & msg, bool use_flow_style = false)
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
  const tku_msgs::msg::LabelModelObjectList & msg,
  std::ostream & out, size_t indentation = 0)
{
  tku_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use tku_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const tku_msgs::msg::LabelModelObjectList & msg)
{
  return tku_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<tku_msgs::msg::LabelModelObjectList>()
{
  return "tku_msgs::msg::LabelModelObjectList";
}

template<>
inline const char * name<tku_msgs::msg::LabelModelObjectList>()
{
  return "tku_msgs/msg/LabelModelObjectList";
}

template<>
struct has_fixed_size<tku_msgs::msg::LabelModelObjectList>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<tku_msgs::msg::LabelModelObjectList>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<tku_msgs::msg::LabelModelObjectList>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // TKU_MSGS__MSG__DETAIL__LABEL_MODEL_OBJECT_LIST__TRAITS_HPP_
