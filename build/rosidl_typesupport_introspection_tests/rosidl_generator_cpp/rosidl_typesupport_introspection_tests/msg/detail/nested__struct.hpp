// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from rosidl_typesupport_introspection_tests:msg/Nested.idl
// generated code does not contain a copyright notice

#ifndef ROSIDL_TYPESUPPORT_INTROSPECTION_TESTS__MSG__DETAIL__NESTED__STRUCT_HPP_
#define ROSIDL_TYPESUPPORT_INTROSPECTION_TESTS__MSG__DETAIL__NESTED__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'basic_types_value'
#include "rosidl_typesupport_introspection_tests/msg/detail/basic_types__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__rosidl_typesupport_introspection_tests__msg__Nested __attribute__((deprecated))
#else
# define DEPRECATED__rosidl_typesupport_introspection_tests__msg__Nested __declspec(deprecated)
#endif

namespace rosidl_typesupport_introspection_tests
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Nested_
{
  using Type = Nested_<ContainerAllocator>;

  explicit Nested_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : basic_types_value(_init)
  {
    (void)_init;
  }

  explicit Nested_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : basic_types_value(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _basic_types_value_type =
    rosidl_typesupport_introspection_tests::msg::BasicTypes_<ContainerAllocator>;
  _basic_types_value_type basic_types_value;

  // setters for named parameter idiom
  Type & set__basic_types_value(
    const rosidl_typesupport_introspection_tests::msg::BasicTypes_<ContainerAllocator> & _arg)
  {
    this->basic_types_value = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    rosidl_typesupport_introspection_tests::msg::Nested_<ContainerAllocator> *;
  using ConstRawPtr =
    const rosidl_typesupport_introspection_tests::msg::Nested_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<rosidl_typesupport_introspection_tests::msg::Nested_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<rosidl_typesupport_introspection_tests::msg::Nested_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      rosidl_typesupport_introspection_tests::msg::Nested_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<rosidl_typesupport_introspection_tests::msg::Nested_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      rosidl_typesupport_introspection_tests::msg::Nested_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<rosidl_typesupport_introspection_tests::msg::Nested_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<rosidl_typesupport_introspection_tests::msg::Nested_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<rosidl_typesupport_introspection_tests::msg::Nested_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__rosidl_typesupport_introspection_tests__msg__Nested
    std::shared_ptr<rosidl_typesupport_introspection_tests::msg::Nested_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__rosidl_typesupport_introspection_tests__msg__Nested
    std::shared_ptr<rosidl_typesupport_introspection_tests::msg::Nested_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Nested_ & other) const
  {
    if (this->basic_types_value != other.basic_types_value) {
      return false;
    }
    return true;
  }
  bool operator!=(const Nested_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Nested_

// alias to use template instance with default allocator
using Nested =
  rosidl_typesupport_introspection_tests::msg::Nested_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace rosidl_typesupport_introspection_tests

#endif  // ROSIDL_TYPESUPPORT_INTROSPECTION_TESTS__MSG__DETAIL__NESTED__STRUCT_HPP_
