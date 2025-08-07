// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from tku_msgs:msg/Walkingmessage.idl
// generated code does not contain a copyright notice

#ifndef TKU_MSGS__MSG__DETAIL__WALKINGMESSAGE__STRUCT_HPP_
#define TKU_MSGS__MSG__DETAIL__WALKINGMESSAGE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__tku_msgs__msg__Walkingmessage __attribute__((deprecated))
#else
# define DEPRECATED__tku_msgs__msg__Walkingmessage __declspec(deprecated)
#endif

namespace tku_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Walkingmessage_
{
  using Type = Walkingmessage_<ContainerAllocator>;

  explicit Walkingmessage_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->x = 0l;
      this->y = 0l;
      this->z = 0l;
      this->theta = 0l;
      this->walking_cmd = 0l;
      this->sensor_mode = 0l;
    }
  }

  explicit Walkingmessage_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->x = 0l;
      this->y = 0l;
      this->z = 0l;
      this->theta = 0l;
      this->walking_cmd = 0l;
      this->sensor_mode = 0l;
    }
  }

  // field types and members
  using _x_type =
    int32_t;
  _x_type x;
  using _y_type =
    int32_t;
  _y_type y;
  using _z_type =
    int32_t;
  _z_type z;
  using _theta_type =
    int32_t;
  _theta_type theta;
  using _walking_cmd_type =
    int32_t;
  _walking_cmd_type walking_cmd;
  using _sensor_mode_type =
    int32_t;
  _sensor_mode_type sensor_mode;

  // setters for named parameter idiom
  Type & set__x(
    const int32_t & _arg)
  {
    this->x = _arg;
    return *this;
  }
  Type & set__y(
    const int32_t & _arg)
  {
    this->y = _arg;
    return *this;
  }
  Type & set__z(
    const int32_t & _arg)
  {
    this->z = _arg;
    return *this;
  }
  Type & set__theta(
    const int32_t & _arg)
  {
    this->theta = _arg;
    return *this;
  }
  Type & set__walking_cmd(
    const int32_t & _arg)
  {
    this->walking_cmd = _arg;
    return *this;
  }
  Type & set__sensor_mode(
    const int32_t & _arg)
  {
    this->sensor_mode = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    tku_msgs::msg::Walkingmessage_<ContainerAllocator> *;
  using ConstRawPtr =
    const tku_msgs::msg::Walkingmessage_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<tku_msgs::msg::Walkingmessage_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<tku_msgs::msg::Walkingmessage_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      tku_msgs::msg::Walkingmessage_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<tku_msgs::msg::Walkingmessage_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      tku_msgs::msg::Walkingmessage_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<tku_msgs::msg::Walkingmessage_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<tku_msgs::msg::Walkingmessage_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<tku_msgs::msg::Walkingmessage_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__tku_msgs__msg__Walkingmessage
    std::shared_ptr<tku_msgs::msg::Walkingmessage_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__tku_msgs__msg__Walkingmessage
    std::shared_ptr<tku_msgs::msg::Walkingmessage_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Walkingmessage_ & other) const
  {
    if (this->x != other.x) {
      return false;
    }
    if (this->y != other.y) {
      return false;
    }
    if (this->z != other.z) {
      return false;
    }
    if (this->theta != other.theta) {
      return false;
    }
    if (this->walking_cmd != other.walking_cmd) {
      return false;
    }
    if (this->sensor_mode != other.sensor_mode) {
      return false;
    }
    return true;
  }
  bool operator!=(const Walkingmessage_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Walkingmessage_

// alias to use template instance with default allocator
using Walkingmessage =
  tku_msgs::msg::Walkingmessage_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace tku_msgs

#endif  // TKU_MSGS__MSG__DETAIL__WALKINGMESSAGE__STRUCT_HPP_
