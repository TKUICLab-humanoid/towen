// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from rosidl_typesupport_introspection_tests:msg/Empty.idl
// generated code does not contain a copyright notice

#ifndef ROSIDL_TYPESUPPORT_INTROSPECTION_TESTS__MSG__DETAIL__EMPTY__TRAITS_HPP_
#define ROSIDL_TYPESUPPORT_INTROSPECTION_TESTS__MSG__DETAIL__EMPTY__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "rosidl_typesupport_introspection_tests/msg/detail/empty__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace rosidl_typesupport_introspection_tests
{

namespace msg
{

inline void to_flow_style_yaml(
  const Empty & msg,
  std::ostream & out)
{
  (void)msg;
  out << "null";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Empty & msg,
  std::ostream & out, size_t indentation = 0)
{
  (void)msg;
  (void)indentation;
  out << "null\n";
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Empty & msg, bool use_flow_style = false)
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
  const rosidl_typesupport_introspection_tests::msg::Empty & msg,
  std::ostream & out, size_t indentation = 0)
{
  rosidl_typesupport_introspection_tests::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use rosidl_typesupport_introspection_tests::msg::to_yaml() instead")]]
inline std::string to_yaml(const rosidl_typesupport_introspection_tests::msg::Empty & msg)
{
  return rosidl_typesupport_introspection_tests::msg::to_yaml(msg);
}

template<>
inline const char * data_type<rosidl_typesupport_introspection_tests::msg::Empty>()
{
  return "rosidl_typesupport_introspection_tests::msg::Empty";
}

template<>
inline const char * name<rosidl_typesupport_introspection_tests::msg::Empty>()
{
  return "rosidl_typesupport_introspection_tests/msg/Empty";
}

template<>
struct has_fixed_size<rosidl_typesupport_introspection_tests::msg::Empty>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<rosidl_typesupport_introspection_tests::msg::Empty>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<rosidl_typesupport_introspection_tests::msg::Empty>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ROSIDL_TYPESUPPORT_INTROSPECTION_TESTS__MSG__DETAIL__EMPTY__TRAITS_HPP_
