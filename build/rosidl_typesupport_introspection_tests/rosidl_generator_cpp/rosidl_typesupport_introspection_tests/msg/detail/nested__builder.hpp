// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from rosidl_typesupport_introspection_tests:msg/Nested.idl
// generated code does not contain a copyright notice

#ifndef ROSIDL_TYPESUPPORT_INTROSPECTION_TESTS__MSG__DETAIL__NESTED__BUILDER_HPP_
#define ROSIDL_TYPESUPPORT_INTROSPECTION_TESTS__MSG__DETAIL__NESTED__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "rosidl_typesupport_introspection_tests/msg/detail/nested__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace rosidl_typesupport_introspection_tests
{

namespace msg
{

namespace builder
{

class Init_Nested_basic_types_value
{
public:
  Init_Nested_basic_types_value()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::rosidl_typesupport_introspection_tests::msg::Nested basic_types_value(::rosidl_typesupport_introspection_tests::msg::Nested::_basic_types_value_type arg)
  {
    msg_.basic_types_value = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rosidl_typesupport_introspection_tests::msg::Nested msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::rosidl_typesupport_introspection_tests::msg::Nested>()
{
  return rosidl_typesupport_introspection_tests::msg::builder::Init_Nested_basic_types_value();
}

}  // namespace rosidl_typesupport_introspection_tests

#endif  // ROSIDL_TYPESUPPORT_INTROSPECTION_TESTS__MSG__DETAIL__NESTED__BUILDER_HPP_
