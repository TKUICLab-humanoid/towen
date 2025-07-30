// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from tku_msgs:msg/PIDpackage.idl
// generated code does not contain a copyright notice

#ifndef TKU_MSGS__MSG__DETAIL__PI_DPACKAGE__TRAITS_HPP_
#define TKU_MSGS__MSG__DETAIL__PI_DPACKAGE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "tku_msgs/msg/detail/pi_dpackage__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace tku_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const PIDpackage & msg,
  std::ostream & out)
{
  out << "{";
  // member: motor_p
  {
    out << "motor_p: ";
    rosidl_generator_traits::value_to_yaml(msg.motor_p, out);
    out << ", ";
  }

  // member: motor_i
  {
    out << "motor_i: ";
    rosidl_generator_traits::value_to_yaml(msg.motor_i, out);
    out << ", ";
  }

  // member: motor_d
  {
    out << "motor_d: ";
    rosidl_generator_traits::value_to_yaml(msg.motor_d, out);
    out << ", ";
  }

  // member: pflag
  {
    out << "pflag: ";
    rosidl_generator_traits::value_to_yaml(msg.pflag, out);
    out << ", ";
  }

  // member: iflag
  {
    out << "iflag: ";
    rosidl_generator_traits::value_to_yaml(msg.iflag, out);
    out << ", ";
  }

  // member: dflag
  {
    out << "dflag: ";
    rosidl_generator_traits::value_to_yaml(msg.dflag, out);
    out << ", ";
  }

  // member: motorid
  {
    out << "motorid: ";
    rosidl_generator_traits::value_to_yaml(msg.motorid, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const PIDpackage & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: motor_p
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "motor_p: ";
    rosidl_generator_traits::value_to_yaml(msg.motor_p, out);
    out << "\n";
  }

  // member: motor_i
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "motor_i: ";
    rosidl_generator_traits::value_to_yaml(msg.motor_i, out);
    out << "\n";
  }

  // member: motor_d
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "motor_d: ";
    rosidl_generator_traits::value_to_yaml(msg.motor_d, out);
    out << "\n";
  }

  // member: pflag
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pflag: ";
    rosidl_generator_traits::value_to_yaml(msg.pflag, out);
    out << "\n";
  }

  // member: iflag
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "iflag: ";
    rosidl_generator_traits::value_to_yaml(msg.iflag, out);
    out << "\n";
  }

  // member: dflag
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "dflag: ";
    rosidl_generator_traits::value_to_yaml(msg.dflag, out);
    out << "\n";
  }

  // member: motorid
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "motorid: ";
    rosidl_generator_traits::value_to_yaml(msg.motorid, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const PIDpackage & msg, bool use_flow_style = false)
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
  const tku_msgs::msg::PIDpackage & msg,
  std::ostream & out, size_t indentation = 0)
{
  tku_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use tku_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const tku_msgs::msg::PIDpackage & msg)
{
  return tku_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<tku_msgs::msg::PIDpackage>()
{
  return "tku_msgs::msg::PIDpackage";
}

template<>
inline const char * name<tku_msgs::msg::PIDpackage>()
{
  return "tku_msgs/msg/PIDpackage";
}

template<>
struct has_fixed_size<tku_msgs::msg::PIDpackage>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<tku_msgs::msg::PIDpackage>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<tku_msgs::msg::PIDpackage>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // TKU_MSGS__MSG__DETAIL__PI_DPACKAGE__TRAITS_HPP_
