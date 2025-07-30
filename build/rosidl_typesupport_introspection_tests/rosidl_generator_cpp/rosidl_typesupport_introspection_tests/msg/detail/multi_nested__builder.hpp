// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from rosidl_typesupport_introspection_tests:msg/MultiNested.idl
// generated code does not contain a copyright notice

#ifndef ROSIDL_TYPESUPPORT_INTROSPECTION_TESTS__MSG__DETAIL__MULTI_NESTED__BUILDER_HPP_
#define ROSIDL_TYPESUPPORT_INTROSPECTION_TESTS__MSG__DETAIL__MULTI_NESTED__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "rosidl_typesupport_introspection_tests/msg/detail/multi_nested__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace rosidl_typesupport_introspection_tests
{

namespace msg
{

namespace builder
{

class Init_MultiNested_unbounded_sequence_of_unbounded_sequences
{
public:
  explicit Init_MultiNested_unbounded_sequence_of_unbounded_sequences(::rosidl_typesupport_introspection_tests::msg::MultiNested & msg)
  : msg_(msg)
  {}
  ::rosidl_typesupport_introspection_tests::msg::MultiNested unbounded_sequence_of_unbounded_sequences(::rosidl_typesupport_introspection_tests::msg::MultiNested::_unbounded_sequence_of_unbounded_sequences_type arg)
  {
    msg_.unbounded_sequence_of_unbounded_sequences = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rosidl_typesupport_introspection_tests::msg::MultiNested msg_;
};

class Init_MultiNested_unbounded_sequence_of_bounded_sequences
{
public:
  explicit Init_MultiNested_unbounded_sequence_of_bounded_sequences(::rosidl_typesupport_introspection_tests::msg::MultiNested & msg)
  : msg_(msg)
  {}
  Init_MultiNested_unbounded_sequence_of_unbounded_sequences unbounded_sequence_of_bounded_sequences(::rosidl_typesupport_introspection_tests::msg::MultiNested::_unbounded_sequence_of_bounded_sequences_type arg)
  {
    msg_.unbounded_sequence_of_bounded_sequences = std::move(arg);
    return Init_MultiNested_unbounded_sequence_of_unbounded_sequences(msg_);
  }

private:
  ::rosidl_typesupport_introspection_tests::msg::MultiNested msg_;
};

class Init_MultiNested_unbounded_sequence_of_arrays
{
public:
  explicit Init_MultiNested_unbounded_sequence_of_arrays(::rosidl_typesupport_introspection_tests::msg::MultiNested & msg)
  : msg_(msg)
  {}
  Init_MultiNested_unbounded_sequence_of_bounded_sequences unbounded_sequence_of_arrays(::rosidl_typesupport_introspection_tests::msg::MultiNested::_unbounded_sequence_of_arrays_type arg)
  {
    msg_.unbounded_sequence_of_arrays = std::move(arg);
    return Init_MultiNested_unbounded_sequence_of_bounded_sequences(msg_);
  }

private:
  ::rosidl_typesupport_introspection_tests::msg::MultiNested msg_;
};

class Init_MultiNested_bounded_sequence_of_unbounded_sequences
{
public:
  explicit Init_MultiNested_bounded_sequence_of_unbounded_sequences(::rosidl_typesupport_introspection_tests::msg::MultiNested & msg)
  : msg_(msg)
  {}
  Init_MultiNested_unbounded_sequence_of_arrays bounded_sequence_of_unbounded_sequences(::rosidl_typesupport_introspection_tests::msg::MultiNested::_bounded_sequence_of_unbounded_sequences_type arg)
  {
    msg_.bounded_sequence_of_unbounded_sequences = std::move(arg);
    return Init_MultiNested_unbounded_sequence_of_arrays(msg_);
  }

private:
  ::rosidl_typesupport_introspection_tests::msg::MultiNested msg_;
};

class Init_MultiNested_bounded_sequence_of_bounded_sequences
{
public:
  explicit Init_MultiNested_bounded_sequence_of_bounded_sequences(::rosidl_typesupport_introspection_tests::msg::MultiNested & msg)
  : msg_(msg)
  {}
  Init_MultiNested_bounded_sequence_of_unbounded_sequences bounded_sequence_of_bounded_sequences(::rosidl_typesupport_introspection_tests::msg::MultiNested::_bounded_sequence_of_bounded_sequences_type arg)
  {
    msg_.bounded_sequence_of_bounded_sequences = std::move(arg);
    return Init_MultiNested_bounded_sequence_of_unbounded_sequences(msg_);
  }

private:
  ::rosidl_typesupport_introspection_tests::msg::MultiNested msg_;
};

class Init_MultiNested_bounded_sequence_of_arrays
{
public:
  explicit Init_MultiNested_bounded_sequence_of_arrays(::rosidl_typesupport_introspection_tests::msg::MultiNested & msg)
  : msg_(msg)
  {}
  Init_MultiNested_bounded_sequence_of_bounded_sequences bounded_sequence_of_arrays(::rosidl_typesupport_introspection_tests::msg::MultiNested::_bounded_sequence_of_arrays_type arg)
  {
    msg_.bounded_sequence_of_arrays = std::move(arg);
    return Init_MultiNested_bounded_sequence_of_bounded_sequences(msg_);
  }

private:
  ::rosidl_typesupport_introspection_tests::msg::MultiNested msg_;
};

class Init_MultiNested_array_of_unbounded_sequences
{
public:
  explicit Init_MultiNested_array_of_unbounded_sequences(::rosidl_typesupport_introspection_tests::msg::MultiNested & msg)
  : msg_(msg)
  {}
  Init_MultiNested_bounded_sequence_of_arrays array_of_unbounded_sequences(::rosidl_typesupport_introspection_tests::msg::MultiNested::_array_of_unbounded_sequences_type arg)
  {
    msg_.array_of_unbounded_sequences = std::move(arg);
    return Init_MultiNested_bounded_sequence_of_arrays(msg_);
  }

private:
  ::rosidl_typesupport_introspection_tests::msg::MultiNested msg_;
};

class Init_MultiNested_array_of_bounded_sequences
{
public:
  explicit Init_MultiNested_array_of_bounded_sequences(::rosidl_typesupport_introspection_tests::msg::MultiNested & msg)
  : msg_(msg)
  {}
  Init_MultiNested_array_of_unbounded_sequences array_of_bounded_sequences(::rosidl_typesupport_introspection_tests::msg::MultiNested::_array_of_bounded_sequences_type arg)
  {
    msg_.array_of_bounded_sequences = std::move(arg);
    return Init_MultiNested_array_of_unbounded_sequences(msg_);
  }

private:
  ::rosidl_typesupport_introspection_tests::msg::MultiNested msg_;
};

class Init_MultiNested_array_of_arrays
{
public:
  Init_MultiNested_array_of_arrays()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MultiNested_array_of_bounded_sequences array_of_arrays(::rosidl_typesupport_introspection_tests::msg::MultiNested::_array_of_arrays_type arg)
  {
    msg_.array_of_arrays = std::move(arg);
    return Init_MultiNested_array_of_bounded_sequences(msg_);
  }

private:
  ::rosidl_typesupport_introspection_tests::msg::MultiNested msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::rosidl_typesupport_introspection_tests::msg::MultiNested>()
{
  return rosidl_typesupport_introspection_tests::msg::builder::Init_MultiNested_array_of_arrays();
}

}  // namespace rosidl_typesupport_introspection_tests

#endif  // ROSIDL_TYPESUPPORT_INTROSPECTION_TESTS__MSG__DETAIL__MULTI_NESTED__BUILDER_HPP_
