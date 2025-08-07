// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from tku_msgs:msg/SaveMotionVector.idl
// generated code does not contain a copyright notice

#ifndef TKU_MSGS__MSG__DETAIL__SAVE_MOTION_VECTOR__STRUCT_HPP_
#define TKU_MSGS__MSG__DETAIL__SAVE_MOTION_VECTOR__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'savemotionvector'
#include "tku_msgs/msg/detail/save_motion__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__tku_msgs__msg__SaveMotionVector __attribute__((deprecated))
#else
# define DEPRECATED__tku_msgs__msg__SaveMotionVector __declspec(deprecated)
#endif

namespace tku_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct SaveMotionVector_
{
  using Type = SaveMotionVector_<ContainerAllocator>;

  explicit SaveMotionVector_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit SaveMotionVector_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
    (void)_alloc;
  }

  // field types and members
  using _savemotionvector_type =
    std::vector<tku_msgs::msg::SaveMotion_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<tku_msgs::msg::SaveMotion_<ContainerAllocator>>>;
  _savemotionvector_type savemotionvector;

  // setters for named parameter idiom
  Type & set__savemotionvector(
    const std::vector<tku_msgs::msg::SaveMotion_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<tku_msgs::msg::SaveMotion_<ContainerAllocator>>> & _arg)
  {
    this->savemotionvector = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    tku_msgs::msg::SaveMotionVector_<ContainerAllocator> *;
  using ConstRawPtr =
    const tku_msgs::msg::SaveMotionVector_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<tku_msgs::msg::SaveMotionVector_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<tku_msgs::msg::SaveMotionVector_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      tku_msgs::msg::SaveMotionVector_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<tku_msgs::msg::SaveMotionVector_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      tku_msgs::msg::SaveMotionVector_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<tku_msgs::msg::SaveMotionVector_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<tku_msgs::msg::SaveMotionVector_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<tku_msgs::msg::SaveMotionVector_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__tku_msgs__msg__SaveMotionVector
    std::shared_ptr<tku_msgs::msg::SaveMotionVector_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__tku_msgs__msg__SaveMotionVector
    std::shared_ptr<tku_msgs::msg::SaveMotionVector_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SaveMotionVector_ & other) const
  {
    if (this->savemotionvector != other.savemotionvector) {
      return false;
    }
    return true;
  }
  bool operator!=(const SaveMotionVector_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SaveMotionVector_

// alias to use template instance with default allocator
using SaveMotionVector =
  tku_msgs::msg::SaveMotionVector_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace tku_msgs

#endif  // TKU_MSGS__MSG__DETAIL__SAVE_MOTION_VECTOR__STRUCT_HPP_
