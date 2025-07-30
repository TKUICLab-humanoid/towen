// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from tku_msgs:msg/ObjectList.idl
// generated code does not contain a copyright notice

#ifndef TKU_MSGS__MSG__DETAIL__OBJECT_LIST__STRUCT_HPP_
#define TKU_MSGS__MSG__DETAIL__OBJECT_LIST__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'objectlist'
#include "tku_msgs/msg/detail/color_array__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__tku_msgs__msg__ObjectList __attribute__((deprecated))
#else
# define DEPRECATED__tku_msgs__msg__ObjectList __declspec(deprecated)
#endif

namespace tku_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ObjectList_
{
  using Type = ObjectList_<ContainerAllocator>;

  explicit ObjectList_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit ObjectList_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
    (void)_alloc;
  }

  // field types and members
  using _objectlist_type =
    std::vector<tku_msgs::msg::ColorArray_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<tku_msgs::msg::ColorArray_<ContainerAllocator>>>;
  _objectlist_type objectlist;

  // setters for named parameter idiom
  Type & set__objectlist(
    const std::vector<tku_msgs::msg::ColorArray_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<tku_msgs::msg::ColorArray_<ContainerAllocator>>> & _arg)
  {
    this->objectlist = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    tku_msgs::msg::ObjectList_<ContainerAllocator> *;
  using ConstRawPtr =
    const tku_msgs::msg::ObjectList_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<tku_msgs::msg::ObjectList_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<tku_msgs::msg::ObjectList_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      tku_msgs::msg::ObjectList_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<tku_msgs::msg::ObjectList_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      tku_msgs::msg::ObjectList_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<tku_msgs::msg::ObjectList_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<tku_msgs::msg::ObjectList_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<tku_msgs::msg::ObjectList_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__tku_msgs__msg__ObjectList
    std::shared_ptr<tku_msgs::msg::ObjectList_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__tku_msgs__msg__ObjectList
    std::shared_ptr<tku_msgs::msg::ObjectList_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ObjectList_ & other) const
  {
    if (this->objectlist != other.objectlist) {
      return false;
    }
    return true;
  }
  bool operator!=(const ObjectList_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ObjectList_

// alias to use template instance with default allocator
using ObjectList =
  tku_msgs::msg::ObjectList_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace tku_msgs

#endif  // TKU_MSGS__MSG__DETAIL__OBJECT_LIST__STRUCT_HPP_
