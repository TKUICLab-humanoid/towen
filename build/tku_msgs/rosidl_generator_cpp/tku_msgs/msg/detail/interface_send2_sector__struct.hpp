// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from tku_msgs:msg/InterfaceSend2Sector.idl
// generated code does not contain a copyright notice

#ifndef TKU_MSGS__MSG__DETAIL__INTERFACE_SEND2_SECTOR__STRUCT_HPP_
#define TKU_MSGS__MSG__DETAIL__INTERFACE_SEND2_SECTOR__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__tku_msgs__msg__InterfaceSend2Sector __attribute__((deprecated))
#else
# define DEPRECATED__tku_msgs__msg__InterfaceSend2Sector __declspec(deprecated)
#endif

namespace tku_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct InterfaceSend2Sector_
{
  using Type = InterfaceSend2Sector_<ContainerAllocator>;

  explicit InterfaceSend2Sector_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->package = 0l;
      this->sectorname = "";
      this->cnt = 0l;
    }
  }

  explicit InterfaceSend2Sector_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : sectorname(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->package = 0l;
      this->sectorname = "";
      this->cnt = 0l;
    }
  }

  // field types and members
  using _package_type =
    int32_t;
  _package_type package;
  using _sectorname_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _sectorname_type sectorname;
  using _delay_type =
    std::vector<int32_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<int32_t>>;
  _delay_type delay;
  using _cnt_type =
    int32_t;
  _cnt_type cnt;

  // setters for named parameter idiom
  Type & set__package(
    const int32_t & _arg)
  {
    this->package = _arg;
    return *this;
  }
  Type & set__sectorname(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->sectorname = _arg;
    return *this;
  }
  Type & set__delay(
    const std::vector<int32_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<int32_t>> & _arg)
  {
    this->delay = _arg;
    return *this;
  }
  Type & set__cnt(
    const int32_t & _arg)
  {
    this->cnt = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    tku_msgs::msg::InterfaceSend2Sector_<ContainerAllocator> *;
  using ConstRawPtr =
    const tku_msgs::msg::InterfaceSend2Sector_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<tku_msgs::msg::InterfaceSend2Sector_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<tku_msgs::msg::InterfaceSend2Sector_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      tku_msgs::msg::InterfaceSend2Sector_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<tku_msgs::msg::InterfaceSend2Sector_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      tku_msgs::msg::InterfaceSend2Sector_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<tku_msgs::msg::InterfaceSend2Sector_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<tku_msgs::msg::InterfaceSend2Sector_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<tku_msgs::msg::InterfaceSend2Sector_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__tku_msgs__msg__InterfaceSend2Sector
    std::shared_ptr<tku_msgs::msg::InterfaceSend2Sector_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__tku_msgs__msg__InterfaceSend2Sector
    std::shared_ptr<tku_msgs::msg::InterfaceSend2Sector_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const InterfaceSend2Sector_ & other) const
  {
    if (this->package != other.package) {
      return false;
    }
    if (this->sectorname != other.sectorname) {
      return false;
    }
    if (this->delay != other.delay) {
      return false;
    }
    if (this->cnt != other.cnt) {
      return false;
    }
    return true;
  }
  bool operator!=(const InterfaceSend2Sector_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct InterfaceSend2Sector_

// alias to use template instance with default allocator
using InterfaceSend2Sector =
  tku_msgs::msg::InterfaceSend2Sector_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace tku_msgs

#endif  // TKU_MSGS__MSG__DETAIL__INTERFACE_SEND2_SECTOR__STRUCT_HPP_
