// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from tku_msgs:msg/ColorData.idl
// generated code does not contain a copyright notice

#ifndef TKU_MSGS__MSG__DETAIL__COLOR_DATA__STRUCT_HPP_
#define TKU_MSGS__MSG__DETAIL__COLOR_DATA__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__tku_msgs__msg__ColorData __attribute__((deprecated))
#else
# define DEPRECATED__tku_msgs__msg__ColorData __declspec(deprecated)
#endif

namespace tku_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ColorData_
{
  using Type = ColorData_<ContainerAllocator>;

  explicit ColorData_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->x = 0l;
      this->y = 0l;
      this->xmin = 0l;
      this->xmax = 0l;
      this->ymin = 0l;
      this->ymax = 0l;
      this->width = 0l;
      this->height = 0l;
      this->size = 0l;
    }
  }

  explicit ColorData_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->x = 0l;
      this->y = 0l;
      this->xmin = 0l;
      this->xmax = 0l;
      this->ymin = 0l;
      this->ymax = 0l;
      this->width = 0l;
      this->height = 0l;
      this->size = 0l;
    }
  }

  // field types and members
  using _x_type =
    int32_t;
  _x_type x;
  using _y_type =
    int32_t;
  _y_type y;
  using _xmin_type =
    int32_t;
  _xmin_type xmin;
  using _xmax_type =
    int32_t;
  _xmax_type xmax;
  using _ymin_type =
    int32_t;
  _ymin_type ymin;
  using _ymax_type =
    int32_t;
  _ymax_type ymax;
  using _width_type =
    int32_t;
  _width_type width;
  using _height_type =
    int32_t;
  _height_type height;
  using _size_type =
    int32_t;
  _size_type size;

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
  Type & set__xmin(
    const int32_t & _arg)
  {
    this->xmin = _arg;
    return *this;
  }
  Type & set__xmax(
    const int32_t & _arg)
  {
    this->xmax = _arg;
    return *this;
  }
  Type & set__ymin(
    const int32_t & _arg)
  {
    this->ymin = _arg;
    return *this;
  }
  Type & set__ymax(
    const int32_t & _arg)
  {
    this->ymax = _arg;
    return *this;
  }
  Type & set__width(
    const int32_t & _arg)
  {
    this->width = _arg;
    return *this;
  }
  Type & set__height(
    const int32_t & _arg)
  {
    this->height = _arg;
    return *this;
  }
  Type & set__size(
    const int32_t & _arg)
  {
    this->size = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    tku_msgs::msg::ColorData_<ContainerAllocator> *;
  using ConstRawPtr =
    const tku_msgs::msg::ColorData_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<tku_msgs::msg::ColorData_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<tku_msgs::msg::ColorData_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      tku_msgs::msg::ColorData_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<tku_msgs::msg::ColorData_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      tku_msgs::msg::ColorData_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<tku_msgs::msg::ColorData_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<tku_msgs::msg::ColorData_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<tku_msgs::msg::ColorData_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__tku_msgs__msg__ColorData
    std::shared_ptr<tku_msgs::msg::ColorData_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__tku_msgs__msg__ColorData
    std::shared_ptr<tku_msgs::msg::ColorData_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ColorData_ & other) const
  {
    if (this->x != other.x) {
      return false;
    }
    if (this->y != other.y) {
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
    if (this->width != other.width) {
      return false;
    }
    if (this->height != other.height) {
      return false;
    }
    if (this->size != other.size) {
      return false;
    }
    return true;
  }
  bool operator!=(const ColorData_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ColorData_

// alias to use template instance with default allocator
using ColorData =
  tku_msgs::msg::ColorData_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace tku_msgs

#endif  // TKU_MSGS__MSG__DETAIL__COLOR_DATA__STRUCT_HPP_
