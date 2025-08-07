// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from tku_msgs:msg/SaveMotion.idl
// generated code does not contain a copyright notice

#ifndef TKU_MSGS__MSG__DETAIL__SAVE_MOTION__STRUCT_HPP_
#define TKU_MSGS__MSG__DETAIL__SAVE_MOTION__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'layout'
#include "std_msgs/msg/detail/multi_array_layout__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__tku_msgs__msg__SaveMotion __attribute__((deprecated))
#else
# define DEPRECATED__tku_msgs__msg__SaveMotion __declspec(deprecated)
#endif

namespace tku_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct SaveMotion_
{
  using Type = SaveMotion_<ContainerAllocator>;

  explicit SaveMotion_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : layout(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->name = "";
      this->motionstate = 0l;
      this->id = 0l;
      this->savestate = 0l;
      this->saveflag = false;
    }
  }

  explicit SaveMotion_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : layout(_alloc, _init),
    name(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->name = "";
      this->motionstate = 0l;
      this->id = 0l;
      this->savestate = 0l;
      this->saveflag = false;
    }
  }

  // field types and members
  using _layout_type =
    std_msgs::msg::MultiArrayLayout_<ContainerAllocator>;
  _layout_type layout;
  using _name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _name_type name;
  using _motionstate_type =
    int32_t;
  _motionstate_type motionstate;
  using _id_type =
    int32_t;
  _id_type id;
  using _savestate_type =
    int32_t;
  _savestate_type savestate;
  using _saveflag_type =
    bool;
  _saveflag_type saveflag;
  using _motionlist_type =
    std::vector<int32_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<int32_t>>;
  _motionlist_type motionlist;
  using _motordata_type =
    std::vector<int32_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<int32_t>>;
  _motordata_type motordata;

  // setters for named parameter idiom
  Type & set__layout(
    const std_msgs::msg::MultiArrayLayout_<ContainerAllocator> & _arg)
  {
    this->layout = _arg;
    return *this;
  }
  Type & set__name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->name = _arg;
    return *this;
  }
  Type & set__motionstate(
    const int32_t & _arg)
  {
    this->motionstate = _arg;
    return *this;
  }
  Type & set__id(
    const int32_t & _arg)
  {
    this->id = _arg;
    return *this;
  }
  Type & set__savestate(
    const int32_t & _arg)
  {
    this->savestate = _arg;
    return *this;
  }
  Type & set__saveflag(
    const bool & _arg)
  {
    this->saveflag = _arg;
    return *this;
  }
  Type & set__motionlist(
    const std::vector<int32_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<int32_t>> & _arg)
  {
    this->motionlist = _arg;
    return *this;
  }
  Type & set__motordata(
    const std::vector<int32_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<int32_t>> & _arg)
  {
    this->motordata = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    tku_msgs::msg::SaveMotion_<ContainerAllocator> *;
  using ConstRawPtr =
    const tku_msgs::msg::SaveMotion_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<tku_msgs::msg::SaveMotion_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<tku_msgs::msg::SaveMotion_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      tku_msgs::msg::SaveMotion_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<tku_msgs::msg::SaveMotion_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      tku_msgs::msg::SaveMotion_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<tku_msgs::msg::SaveMotion_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<tku_msgs::msg::SaveMotion_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<tku_msgs::msg::SaveMotion_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__tku_msgs__msg__SaveMotion
    std::shared_ptr<tku_msgs::msg::SaveMotion_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__tku_msgs__msg__SaveMotion
    std::shared_ptr<tku_msgs::msg::SaveMotion_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SaveMotion_ & other) const
  {
    if (this->layout != other.layout) {
      return false;
    }
    if (this->name != other.name) {
      return false;
    }
    if (this->motionstate != other.motionstate) {
      return false;
    }
    if (this->id != other.id) {
      return false;
    }
    if (this->savestate != other.savestate) {
      return false;
    }
    if (this->saveflag != other.saveflag) {
      return false;
    }
    if (this->motionlist != other.motionlist) {
      return false;
    }
    if (this->motordata != other.motordata) {
      return false;
    }
    return true;
  }
  bool operator!=(const SaveMotion_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SaveMotion_

// alias to use template instance with default allocator
using SaveMotion =
  tku_msgs::msg::SaveMotion_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace tku_msgs

#endif  // TKU_MSGS__MSG__DETAIL__SAVE_MOTION__STRUCT_HPP_
