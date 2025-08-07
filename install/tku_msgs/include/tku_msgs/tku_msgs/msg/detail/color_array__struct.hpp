// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from tku_msgs:msg/ColorArray.idl
// generated code does not contain a copyright notice

#ifndef TKU_MSGS__MSG__DETAIL__COLOR_ARRAY__STRUCT_HPP_
#define TKU_MSGS__MSG__DETAIL__COLOR_ARRAY__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'colorarray'
#include "tku_msgs/msg/detail/color_data__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__tku_msgs__msg__ColorArray __attribute__((deprecated))
#else
# define DEPRECATED__tku_msgs__msg__ColorArray __declspec(deprecated)
#endif

namespace tku_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ColorArray_
{
  using Type = ColorArray_<ContainerAllocator>;

  explicit ColorArray_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->cnt = 0l;
    }
  }

  explicit ColorArray_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->cnt = 0l;
    }
  }

  // field types and members
  using _cnt_type =
    int32_t;
  _cnt_type cnt;
  using _colorarray_type =
    std::vector<tku_msgs::msg::ColorData_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<tku_msgs::msg::ColorData_<ContainerAllocator>>>;
  _colorarray_type colorarray;

  // setters for named parameter idiom
  Type & set__cnt(
    const int32_t & _arg)
  {
    this->cnt = _arg;
    return *this;
  }
  Type & set__colorarray(
    const std::vector<tku_msgs::msg::ColorData_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<tku_msgs::msg::ColorData_<ContainerAllocator>>> & _arg)
  {
    this->colorarray = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    tku_msgs::msg::ColorArray_<ContainerAllocator> *;
  using ConstRawPtr =
    const tku_msgs::msg::ColorArray_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<tku_msgs::msg::ColorArray_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<tku_msgs::msg::ColorArray_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      tku_msgs::msg::ColorArray_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<tku_msgs::msg::ColorArray_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      tku_msgs::msg::ColorArray_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<tku_msgs::msg::ColorArray_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<tku_msgs::msg::ColorArray_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<tku_msgs::msg::ColorArray_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__tku_msgs__msg__ColorArray
    std::shared_ptr<tku_msgs::msg::ColorArray_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__tku_msgs__msg__ColorArray
    std::shared_ptr<tku_msgs::msg::ColorArray_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ColorArray_ & other) const
  {
    if (this->cnt != other.cnt) {
      return false;
    }
    if (this->colorarray != other.colorarray) {
      return false;
    }
    return true;
  }
  bool operator!=(const ColorArray_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ColorArray_

// alias to use template instance with default allocator
using ColorArray =
  tku_msgs::msg::ColorArray_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace tku_msgs

#endif  // TKU_MSGS__MSG__DETAIL__COLOR_ARRAY__STRUCT_HPP_
