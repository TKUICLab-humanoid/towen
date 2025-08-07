// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from tku_msgs:msg/ButtonColorForm.idl
// generated code does not contain a copyright notice

#ifndef TKU_MSGS__MSG__DETAIL__BUTTON_COLOR_FORM__STRUCT_HPP_
#define TKU_MSGS__MSG__DETAIL__BUTTON_COLOR_FORM__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__tku_msgs__msg__ButtonColorForm __attribute__((deprecated))
#else
# define DEPRECATED__tku_msgs__msg__ButtonColorForm __declspec(deprecated)
#endif

namespace tku_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ButtonColorForm_
{
  using Type = ButtonColorForm_<ContainerAllocator>;

  explicit ButtonColorForm_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->buildingmodel = false;
    }
  }

  explicit ButtonColorForm_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->buildingmodel = false;
    }
  }

  // field types and members
  using _buildingmodel_type =
    bool;
  _buildingmodel_type buildingmodel;

  // setters for named parameter idiom
  Type & set__buildingmodel(
    const bool & _arg)
  {
    this->buildingmodel = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    tku_msgs::msg::ButtonColorForm_<ContainerAllocator> *;
  using ConstRawPtr =
    const tku_msgs::msg::ButtonColorForm_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<tku_msgs::msg::ButtonColorForm_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<tku_msgs::msg::ButtonColorForm_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      tku_msgs::msg::ButtonColorForm_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<tku_msgs::msg::ButtonColorForm_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      tku_msgs::msg::ButtonColorForm_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<tku_msgs::msg::ButtonColorForm_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<tku_msgs::msg::ButtonColorForm_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<tku_msgs::msg::ButtonColorForm_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__tku_msgs__msg__ButtonColorForm
    std::shared_ptr<tku_msgs::msg::ButtonColorForm_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__tku_msgs__msg__ButtonColorForm
    std::shared_ptr<tku_msgs::msg::ButtonColorForm_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ButtonColorForm_ & other) const
  {
    if (this->buildingmodel != other.buildingmodel) {
      return false;
    }
    return true;
  }
  bool operator!=(const ButtonColorForm_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ButtonColorForm_

// alias to use template instance with default allocator
using ButtonColorForm =
  tku_msgs::msg::ButtonColorForm_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace tku_msgs

#endif  // TKU_MSGS__MSG__DETAIL__BUTTON_COLOR_FORM__STRUCT_HPP_
