// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from tku_msgs:msg/HSVValue.idl
// generated code does not contain a copyright notice

#ifndef TKU_MSGS__MSG__DETAIL__HSV_VALUE__STRUCT_HPP_
#define TKU_MSGS__MSG__DETAIL__HSV_VALUE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__tku_msgs__msg__HSVValue __attribute__((deprecated))
#else
# define DEPRECATED__tku_msgs__msg__HSVValue __declspec(deprecated)
#endif

namespace tku_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct HSVValue_
{
  using Type = HSVValue_<ContainerAllocator>;

  explicit HSVValue_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->hmin = 0;
      this->hmax = 0;
      this->smin = 0;
      this->smax = 0;
      this->vmin = 0;
      this->vmax = 0;
    }
  }

  explicit HSVValue_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->hmin = 0;
      this->hmax = 0;
      this->smin = 0;
      this->smax = 0;
      this->vmin = 0;
      this->vmax = 0;
    }
  }

  // field types and members
  using _hmin_type =
    int16_t;
  _hmin_type hmin;
  using _hmax_type =
    int16_t;
  _hmax_type hmax;
  using _smin_type =
    int16_t;
  _smin_type smin;
  using _smax_type =
    int16_t;
  _smax_type smax;
  using _vmin_type =
    int16_t;
  _vmin_type vmin;
  using _vmax_type =
    int16_t;
  _vmax_type vmax;

  // setters for named parameter idiom
  Type & set__hmin(
    const int16_t & _arg)
  {
    this->hmin = _arg;
    return *this;
  }
  Type & set__hmax(
    const int16_t & _arg)
  {
    this->hmax = _arg;
    return *this;
  }
  Type & set__smin(
    const int16_t & _arg)
  {
    this->smin = _arg;
    return *this;
  }
  Type & set__smax(
    const int16_t & _arg)
  {
    this->smax = _arg;
    return *this;
  }
  Type & set__vmin(
    const int16_t & _arg)
  {
    this->vmin = _arg;
    return *this;
  }
  Type & set__vmax(
    const int16_t & _arg)
  {
    this->vmax = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    tku_msgs::msg::HSVValue_<ContainerAllocator> *;
  using ConstRawPtr =
    const tku_msgs::msg::HSVValue_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<tku_msgs::msg::HSVValue_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<tku_msgs::msg::HSVValue_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      tku_msgs::msg::HSVValue_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<tku_msgs::msg::HSVValue_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      tku_msgs::msg::HSVValue_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<tku_msgs::msg::HSVValue_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<tku_msgs::msg::HSVValue_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<tku_msgs::msg::HSVValue_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__tku_msgs__msg__HSVValue
    std::shared_ptr<tku_msgs::msg::HSVValue_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__tku_msgs__msg__HSVValue
    std::shared_ptr<tku_msgs::msg::HSVValue_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const HSVValue_ & other) const
  {
    if (this->hmin != other.hmin) {
      return false;
    }
    if (this->hmax != other.hmax) {
      return false;
    }
    if (this->smin != other.smin) {
      return false;
    }
    if (this->smax != other.smax) {
      return false;
    }
    if (this->vmin != other.vmin) {
      return false;
    }
    if (this->vmax != other.vmax) {
      return false;
    }
    return true;
  }
  bool operator!=(const HSVValue_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct HSVValue_

// alias to use template instance with default allocator
using HSVValue =
  tku_msgs::msg::HSVValue_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace tku_msgs

#endif  // TKU_MSGS__MSG__DETAIL__HSV_VALUE__STRUCT_HPP_
