// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from tku_msgs:srv/Add.idl
// generated code does not contain a copyright notice

#ifndef TKU_MSGS__SRV__DETAIL__ADD__TRAITS_HPP_
#define TKU_MSGS__SRV__DETAIL__ADD__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "tku_msgs/srv/detail/add__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace tku_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const Add_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: a
  {
    out << "a: ";
    rosidl_generator_traits::value_to_yaml(msg.a, out);
    out << ", ";
  }

  // member: b
  {
    out << "b: ";
    rosidl_generator_traits::value_to_yaml(msg.b, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Add_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: a
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "a: ";
    rosidl_generator_traits::value_to_yaml(msg.a, out);
    out << "\n";
  }

  // member: b
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "b: ";
    rosidl_generator_traits::value_to_yaml(msg.b, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Add_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace tku_msgs

namespace rosidl_generator_traits
{

[[deprecated("use tku_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const tku_msgs::srv::Add_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  tku_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use tku_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const tku_msgs::srv::Add_Request & msg)
{
  return tku_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<tku_msgs::srv::Add_Request>()
{
  return "tku_msgs::srv::Add_Request";
}

template<>
inline const char * name<tku_msgs::srv::Add_Request>()
{
  return "tku_msgs/srv/Add_Request";
}

template<>
struct has_fixed_size<tku_msgs::srv::Add_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<tku_msgs::srv::Add_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<tku_msgs::srv::Add_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace tku_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const Add_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: sum
  {
    out << "sum: ";
    rosidl_generator_traits::value_to_yaml(msg.sum, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Add_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: sum
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "sum: ";
    rosidl_generator_traits::value_to_yaml(msg.sum, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Add_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace tku_msgs

namespace rosidl_generator_traits
{

[[deprecated("use tku_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const tku_msgs::srv::Add_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  tku_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use tku_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const tku_msgs::srv::Add_Response & msg)
{
  return tku_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<tku_msgs::srv::Add_Response>()
{
  return "tku_msgs::srv::Add_Response";
}

template<>
inline const char * name<tku_msgs::srv::Add_Response>()
{
  return "tku_msgs/srv/Add_Response";
}

template<>
struct has_fixed_size<tku_msgs::srv::Add_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<tku_msgs::srv::Add_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<tku_msgs::srv::Add_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<tku_msgs::srv::Add>()
{
  return "tku_msgs::srv::Add";
}

template<>
inline const char * name<tku_msgs::srv::Add>()
{
  return "tku_msgs/srv/Add";
}

template<>
struct has_fixed_size<tku_msgs::srv::Add>
  : std::integral_constant<
    bool,
    has_fixed_size<tku_msgs::srv::Add_Request>::value &&
    has_fixed_size<tku_msgs::srv::Add_Response>::value
  >
{
};

template<>
struct has_bounded_size<tku_msgs::srv::Add>
  : std::integral_constant<
    bool,
    has_bounded_size<tku_msgs::srv::Add_Request>::value &&
    has_bounded_size<tku_msgs::srv::Add_Response>::value
  >
{
};

template<>
struct is_service<tku_msgs::srv::Add>
  : std::true_type
{
};

template<>
struct is_service_request<tku_msgs::srv::Add_Request>
  : std::true_type
{
};

template<>
struct is_service_response<tku_msgs::srv::Add_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // TKU_MSGS__SRV__DETAIL__ADD__TRAITS_HPP_
