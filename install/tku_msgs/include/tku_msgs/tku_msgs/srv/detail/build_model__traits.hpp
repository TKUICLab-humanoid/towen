// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from tku_msgs:srv/BuildModel.idl
// generated code does not contain a copyright notice

#ifndef TKU_MSGS__SRV__DETAIL__BUILD_MODEL__TRAITS_HPP_
#define TKU_MSGS__SRV__DETAIL__BUILD_MODEL__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "tku_msgs/srv/detail/build_model__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace tku_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const BuildModel_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: build
  {
    out << "build: ";
    rosidl_generator_traits::value_to_yaml(msg.build, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const BuildModel_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: build
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "build: ";
    rosidl_generator_traits::value_to_yaml(msg.build, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const BuildModel_Request & msg, bool use_flow_style = false)
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
  const tku_msgs::srv::BuildModel_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  tku_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use tku_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const tku_msgs::srv::BuildModel_Request & msg)
{
  return tku_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<tku_msgs::srv::BuildModel_Request>()
{
  return "tku_msgs::srv::BuildModel_Request";
}

template<>
inline const char * name<tku_msgs::srv::BuildModel_Request>()
{
  return "tku_msgs/srv/BuildModel_Request";
}

template<>
struct has_fixed_size<tku_msgs::srv::BuildModel_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<tku_msgs::srv::BuildModel_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<tku_msgs::srv::BuildModel_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace tku_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const BuildModel_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: already
  {
    out << "already: ";
    rosidl_generator_traits::value_to_yaml(msg.already, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const BuildModel_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: already
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "already: ";
    rosidl_generator_traits::value_to_yaml(msg.already, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const BuildModel_Response & msg, bool use_flow_style = false)
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
  const tku_msgs::srv::BuildModel_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  tku_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use tku_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const tku_msgs::srv::BuildModel_Response & msg)
{
  return tku_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<tku_msgs::srv::BuildModel_Response>()
{
  return "tku_msgs::srv::BuildModel_Response";
}

template<>
inline const char * name<tku_msgs::srv::BuildModel_Response>()
{
  return "tku_msgs/srv/BuildModel_Response";
}

template<>
struct has_fixed_size<tku_msgs::srv::BuildModel_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<tku_msgs::srv::BuildModel_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<tku_msgs::srv::BuildModel_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<tku_msgs::srv::BuildModel>()
{
  return "tku_msgs::srv::BuildModel";
}

template<>
inline const char * name<tku_msgs::srv::BuildModel>()
{
  return "tku_msgs/srv/BuildModel";
}

template<>
struct has_fixed_size<tku_msgs::srv::BuildModel>
  : std::integral_constant<
    bool,
    has_fixed_size<tku_msgs::srv::BuildModel_Request>::value &&
    has_fixed_size<tku_msgs::srv::BuildModel_Response>::value
  >
{
};

template<>
struct has_bounded_size<tku_msgs::srv::BuildModel>
  : std::integral_constant<
    bool,
    has_bounded_size<tku_msgs::srv::BuildModel_Request>::value &&
    has_bounded_size<tku_msgs::srv::BuildModel_Response>::value
  >
{
};

template<>
struct is_service<tku_msgs::srv::BuildModel>
  : std::true_type
{
};

template<>
struct is_service_request<tku_msgs::srv::BuildModel_Request>
  : std::true_type
{
};

template<>
struct is_service_response<tku_msgs::srv::BuildModel_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // TKU_MSGS__SRV__DETAIL__BUILD_MODEL__TRAITS_HPP_
