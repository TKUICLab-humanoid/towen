// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from tku_msgs:msg/DrawImage.idl
// generated code does not contain a copyright notice

#ifndef TKU_MSGS__MSG__DETAIL__DRAW_IMAGE__STRUCT_HPP_
#define TKU_MSGS__MSG__DETAIL__DRAW_IMAGE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__tku_msgs__msg__DrawImage __attribute__((deprecated))
#else
# define DEPRECATED__tku_msgs__msg__DrawImage __declspec(deprecated)
#endif

namespace tku_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct DrawImage_
{
  using Type = DrawImage_<ContainerAllocator>;

  explicit DrawImage_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->cnt = 0;
      this->mode = 0;
      this->xmin = 0;
      this->xmax = 0;
      this->ymin = 0;
      this->ymax = 0;
      this->rvalue = 0l;
      this->gvalue = 0l;
      this->bvalue = 0l;
    }
  }

  explicit DrawImage_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->cnt = 0;
      this->mode = 0;
      this->xmin = 0;
      this->xmax = 0;
      this->ymin = 0;
      this->ymax = 0;
      this->rvalue = 0l;
      this->gvalue = 0l;
      this->bvalue = 0l;
    }
  }

  // field types and members
  using _cnt_type =
    int16_t;
  _cnt_type cnt;
  using _mode_type =
    int16_t;
  _mode_type mode;
  using _xmin_type =
    int16_t;
  _xmin_type xmin;
  using _xmax_type =
    int16_t;
  _xmax_type xmax;
  using _ymin_type =
    int16_t;
  _ymin_type ymin;
  using _ymax_type =
    int16_t;
  _ymax_type ymax;
  using _rvalue_type =
    int32_t;
  _rvalue_type rvalue;
  using _gvalue_type =
    int32_t;
  _gvalue_type gvalue;
  using _bvalue_type =
    int32_t;
  _bvalue_type bvalue;

  // setters for named parameter idiom
  Type & set__cnt(
    const int16_t & _arg)
  {
    this->cnt = _arg;
    return *this;
  }
  Type & set__mode(
    const int16_t & _arg)
  {
    this->mode = _arg;
    return *this;
  }
  Type & set__xmin(
    const int16_t & _arg)
  {
    this->xmin = _arg;
    return *this;
  }
  Type & set__xmax(
    const int16_t & _arg)
  {
    this->xmax = _arg;
    return *this;
  }
  Type & set__ymin(
    const int16_t & _arg)
  {
    this->ymin = _arg;
    return *this;
  }
  Type & set__ymax(
    const int16_t & _arg)
  {
    this->ymax = _arg;
    return *this;
  }
  Type & set__rvalue(
    const int32_t & _arg)
  {
    this->rvalue = _arg;
    return *this;
  }
  Type & set__gvalue(
    const int32_t & _arg)
  {
    this->gvalue = _arg;
    return *this;
  }
  Type & set__bvalue(
    const int32_t & _arg)
  {
    this->bvalue = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    tku_msgs::msg::DrawImage_<ContainerAllocator> *;
  using ConstRawPtr =
    const tku_msgs::msg::DrawImage_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<tku_msgs::msg::DrawImage_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<tku_msgs::msg::DrawImage_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      tku_msgs::msg::DrawImage_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<tku_msgs::msg::DrawImage_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      tku_msgs::msg::DrawImage_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<tku_msgs::msg::DrawImage_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<tku_msgs::msg::DrawImage_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<tku_msgs::msg::DrawImage_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__tku_msgs__msg__DrawImage
    std::shared_ptr<tku_msgs::msg::DrawImage_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__tku_msgs__msg__DrawImage
    std::shared_ptr<tku_msgs::msg::DrawImage_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const DrawImage_ & other) const
  {
    if (this->cnt != other.cnt) {
      return false;
    }
    if (this->mode != other.mode) {
      return false;
    }
    if (this->xmin != other.xmin) {
      return false;
    }
    if (this->xmax != other.xmax) {
      return false;
    }
    if (this->ymin != other.ymin) {
      return false;
    }
    if (this->ymax != other.ymax) {
      return false;
    }
    if (this->rvalue != other.rvalue) {
      return false;
    }
    if (this->gvalue != other.gvalue) {
      return false;
    }
    if (this->bvalue != other.bvalue) {
      return false;
    }
    return true;
  }
  bool operator!=(const DrawImage_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct DrawImage_

// alias to use template instance with default allocator
using DrawImage =
  tku_msgs::msg::DrawImage_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace tku_msgs

#endif  // TKU_MSGS__MSG__DETAIL__DRAW_IMAGE__STRUCT_HPP_
