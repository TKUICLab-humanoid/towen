// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from tku_msgs:msg/Callback.idl
// generated code does not contain a copyright notice

#ifndef TKU_MSGS__MSG__DETAIL__CALLBACK__STRUCT_HPP_
#define TKU_MSGS__MSG__DETAIL__CALLBACK__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__tku_msgs__msg__Callback __attribute__((deprecated))
#else
# define DEPRECATED__tku_msgs__msg__Callback __declspec(deprecated)
#endif

namespace tku_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Callback_
{
  using Type = Callback_<ContainerAllocator>;

  explicit Callback_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->data = false;
      this->sector = 0;
    }
  }

  explicit Callback_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->data = false;
      this->sector = 0;
    }
  }

  // field types and members
  using _data_type =
    bool;
  _data_type data;
  using _sector_type =
    int16_t;
  _sector_type sector;

  // setters for named parameter idiom
  Type & set__data(
    const bool & _arg)
  {
    this->data = _arg;
    return *this;
  }
  Type & set__sector(
    const int16_t & _arg)
  {
    this->sector = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    tku_msgs::msg::Callback_<ContainerAllocator> *;
  using ConstRawPtr =
    const tku_msgs::msg::Callback_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<tku_msgs::msg::Callback_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<tku_msgs::msg::Callback_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      tku_msgs::msg::Callback_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<tku_msgs::msg::Callback_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      tku_msgs::msg::Callback_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<tku_msgs::msg::Callback_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<tku_msgs::msg::Callback_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<tku_msgs::msg::Callback_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__tku_msgs__msg__Callback
    std::shared_ptr<tku_msgs::msg::Callback_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__tku_msgs__msg__Callback
    std::shared_ptr<tku_msgs::msg::Callback_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Callback_ & other) const
  {
    if (this->data != other.data) {
      return false;
    }
    if (this->sector != other.sector) {
      return false;
    }
    return true;
  }
  bool operator!=(const Callback_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Callback_

// alias to use template instance with default allocator
using Callback =
  tku_msgs::msg::Callback_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace tku_msgs

#endif  // TKU_MSGS__MSG__DETAIL__CALLBACK__STRUCT_HPP_
