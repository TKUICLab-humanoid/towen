// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from tku_msgs:msg/PIDpackage.idl
// generated code does not contain a copyright notice

#ifndef TKU_MSGS__MSG__DETAIL__PI_DPACKAGE__STRUCT_HPP_
#define TKU_MSGS__MSG__DETAIL__PI_DPACKAGE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__tku_msgs__msg__PIDpackage __attribute__((deprecated))
#else
# define DEPRECATED__tku_msgs__msg__PIDpackage __declspec(deprecated)
#endif

namespace tku_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct PIDpackage_
{
  using Type = PIDpackage_<ContainerAllocator>;

  explicit PIDpackage_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->motor_p = 0;
      this->motor_i = 0;
      this->motor_d = 0;
      this->pflag = false;
      this->iflag = false;
      this->dflag = false;
      this->motorid = 0;
    }
  }

  explicit PIDpackage_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->motor_p = 0;
      this->motor_i = 0;
      this->motor_d = 0;
      this->pflag = false;
      this->iflag = false;
      this->dflag = false;
      this->motorid = 0;
    }
  }

  // field types and members
  using _motor_p_type =
    int16_t;
  _motor_p_type motor_p;
  using _motor_i_type =
    int16_t;
  _motor_i_type motor_i;
  using _motor_d_type =
    int16_t;
  _motor_d_type motor_d;
  using _pflag_type =
    bool;
  _pflag_type pflag;
  using _iflag_type =
    bool;
  _iflag_type iflag;
  using _dflag_type =
    bool;
  _dflag_type dflag;
  using _motorid_type =
    int16_t;
  _motorid_type motorid;

  // setters for named parameter idiom
  Type & set__motor_p(
    const int16_t & _arg)
  {
    this->motor_p = _arg;
    return *this;
  }
  Type & set__motor_i(
    const int16_t & _arg)
  {
    this->motor_i = _arg;
    return *this;
  }
  Type & set__motor_d(
    const int16_t & _arg)
  {
    this->motor_d = _arg;
    return *this;
  }
  Type & set__pflag(
    const bool & _arg)
  {
    this->pflag = _arg;
    return *this;
  }
  Type & set__iflag(
    const bool & _arg)
  {
    this->iflag = _arg;
    return *this;
  }
  Type & set__dflag(
    const bool & _arg)
  {
    this->dflag = _arg;
    return *this;
  }
  Type & set__motorid(
    const int16_t & _arg)
  {
    this->motorid = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    tku_msgs::msg::PIDpackage_<ContainerAllocator> *;
  using ConstRawPtr =
    const tku_msgs::msg::PIDpackage_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<tku_msgs::msg::PIDpackage_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<tku_msgs::msg::PIDpackage_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      tku_msgs::msg::PIDpackage_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<tku_msgs::msg::PIDpackage_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      tku_msgs::msg::PIDpackage_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<tku_msgs::msg::PIDpackage_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<tku_msgs::msg::PIDpackage_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<tku_msgs::msg::PIDpackage_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__tku_msgs__msg__PIDpackage
    std::shared_ptr<tku_msgs::msg::PIDpackage_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__tku_msgs__msg__PIDpackage
    std::shared_ptr<tku_msgs::msg::PIDpackage_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PIDpackage_ & other) const
  {
    if (this->motor_p != other.motor_p) {
      return false;
    }
    if (this->motor_i != other.motor_i) {
      return false;
    }
    if (this->motor_d != other.motor_d) {
      return false;
    }
    if (this->pflag != other.pflag) {
      return false;
    }
    if (this->iflag != other.iflag) {
      return false;
    }
    if (this->dflag != other.dflag) {
      return false;
    }
    if (this->motorid != other.motorid) {
      return false;
    }
    return true;
  }
  bool operator!=(const PIDpackage_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PIDpackage_

// alias to use template instance with default allocator
using PIDpackage =
  tku_msgs::msg::PIDpackage_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace tku_msgs

#endif  // TKU_MSGS__MSG__DETAIL__PI_DPACKAGE__STRUCT_HPP_
