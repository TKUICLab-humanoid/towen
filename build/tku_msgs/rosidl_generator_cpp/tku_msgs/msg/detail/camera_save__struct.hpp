// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from tku_msgs:msg/CameraSave.idl
// generated code does not contain a copyright notice

#ifndef TKU_MSGS__MSG__DETAIL__CAMERA_SAVE__STRUCT_HPP_
#define TKU_MSGS__MSG__DETAIL__CAMERA_SAVE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__tku_msgs__msg__CameraSave __attribute__((deprecated))
#else
# define DEPRECATED__tku_msgs__msg__CameraSave __declspec(deprecated)
#endif

namespace tku_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct CameraSave_
{
  using Type = CameraSave_<ContainerAllocator>;

  explicit CameraSave_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->brightness = 0.0f;
      this->contrast = 0.0f;
      this->saturation = 0.0f;
      this->whitebalance = 0.0f;
      this->autowhitebalance = false;
      this->auto_exposure = false;
    }
  }

  explicit CameraSave_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->brightness = 0.0f;
      this->contrast = 0.0f;
      this->saturation = 0.0f;
      this->whitebalance = 0.0f;
      this->autowhitebalance = false;
      this->auto_exposure = false;
    }
  }

  // field types and members
  using _brightness_type =
    float;
  _brightness_type brightness;
  using _contrast_type =
    float;
  _contrast_type contrast;
  using _saturation_type =
    float;
  _saturation_type saturation;
  using _whitebalance_type =
    float;
  _whitebalance_type whitebalance;
  using _autowhitebalance_type =
    bool;
  _autowhitebalance_type autowhitebalance;
  using _auto_exposure_type =
    bool;
  _auto_exposure_type auto_exposure;

  // setters for named parameter idiom
  Type & set__brightness(
    const float & _arg)
  {
    this->brightness = _arg;
    return *this;
  }
  Type & set__contrast(
    const float & _arg)
  {
    this->contrast = _arg;
    return *this;
  }
  Type & set__saturation(
    const float & _arg)
  {
    this->saturation = _arg;
    return *this;
  }
  Type & set__whitebalance(
    const float & _arg)
  {
    this->whitebalance = _arg;
    return *this;
  }
  Type & set__autowhitebalance(
    const bool & _arg)
  {
    this->autowhitebalance = _arg;
    return *this;
  }
  Type & set__auto_exposure(
    const bool & _arg)
  {
    this->auto_exposure = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    tku_msgs::msg::CameraSave_<ContainerAllocator> *;
  using ConstRawPtr =
    const tku_msgs::msg::CameraSave_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<tku_msgs::msg::CameraSave_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<tku_msgs::msg::CameraSave_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      tku_msgs::msg::CameraSave_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<tku_msgs::msg::CameraSave_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      tku_msgs::msg::CameraSave_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<tku_msgs::msg::CameraSave_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<tku_msgs::msg::CameraSave_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<tku_msgs::msg::CameraSave_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__tku_msgs__msg__CameraSave
    std::shared_ptr<tku_msgs::msg::CameraSave_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__tku_msgs__msg__CameraSave
    std::shared_ptr<tku_msgs::msg::CameraSave_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const CameraSave_ & other) const
  {
    if (this->brightness != other.brightness) {
      return false;
    }
    if (this->contrast != other.contrast) {
      return false;
    }
    if (this->saturation != other.saturation) {
      return false;
    }
    if (this->whitebalance != other.whitebalance) {
      return false;
    }
    if (this->autowhitebalance != other.autowhitebalance) {
      return false;
    }
    if (this->auto_exposure != other.auto_exposure) {
      return false;
    }
    return true;
  }
  bool operator!=(const CameraSave_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct CameraSave_

// alias to use template instance with default allocator
using CameraSave =
  tku_msgs::msg::CameraSave_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace tku_msgs

#endif  // TKU_MSGS__MSG__DETAIL__CAMERA_SAVE__STRUCT_HPP_
