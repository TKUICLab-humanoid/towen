// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from rosidl_typesupport_introspection_tests:msg/Nested.idl
// generated code does not contain a copyright notice

#ifndef ROSIDL_TYPESUPPORT_INTROSPECTION_TESTS__MSG__DETAIL__NESTED__TRAITS_HPP_
#define ROSIDL_TYPESUPPORT_INTROSPECTION_TESTS__MSG__DETAIL__NESTED__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "rosidl_typesupport_introspection_tests/msg/detail/nested__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'basic_types_value'
#include "rosidl_typesupport_introspection_tests/msg/detail/basic_types__traits.hpp"

namespace rosidl_typesupport_introspection_tests
{

namespace msg
{

inline void to_flow_style_yaml(
  const Nested & msg,
  std::ostream & out)
{
  out << "{";
  // member: basic_types_value
  {
    out << "basic_types_value: ";
    to_flow_style_yaml(msg.basic_types_value, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Nested & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: basic_types_value
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "basic_types_value:\n";
    to_block_style_yaml(msg.basic_types_value, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Nested & msg, bool use_flow_style = false)
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

}  // namespace rosidl_typesupport_introspection_tests

namespace rosidl_generator_traits
{

[[deprecated("use rosidl_typesupport_introspection_tests::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const rosidl_typesupport_introspection_tests::msg::Nested & msg,
  std::ostream & out, size_t indentation = 0)
{
  rosidl_typesupport_introspection_tests::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use rosidl_typesupport_introspection_tests::msg::to_yaml() instead")]]
inline std::string to_yaml(const rosidl_typesupport_introspection_tests::msg::Nested & msg)
{
  return rosidl_typesupport_introspection_tests::msg::to_yaml(msg);
}

template<>
inline const char * data_type<rosidl_typesupport_introspection_tests::msg::Nested>()
{
  return "rosidl_typesupport_introspection_tests::msg::Nested";
}

template<>
inline const char * name<rosidl_typesupport_introspection_tests::msg::Nested>()
{
  return "rosidl_typesupport_introspection_tests/msg/Nested";
}

template<>
struct has_fixed_size<rosidl_typesupport_introspection_tests::msg::Nested>
  : std::integral_constant<bool, has_fixed_size<rosidl_typesupport_introspection_tests::msg::BasicTypes>::value> {};

template<>
struct has_bounded_size<rosidl_typesupport_introspection_tests::msg::Nested>
  : std::integral_constant<bool, has_bounded_size<rosidl_typesupport_introspection_tests::msg::BasicTypes>::value> {};

template<>
struct is_message<rosidl_typesupport_introspection_tests::msg::Nested>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ROSIDL_TYPESUPPORT_INTROSPECTION_TESTS__MSG__DETAIL__NESTED__TRAITS_HPP_
