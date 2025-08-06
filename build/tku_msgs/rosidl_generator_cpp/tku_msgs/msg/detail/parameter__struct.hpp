// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from tku_msgs:msg/Parameter.idl
// generated code does not contain a copyright notice

#ifndef TKU_MSGS__MSG__DETAIL__PARAMETER__STRUCT_HPP_
#define TKU_MSGS__MSG__DETAIL__PARAMETER__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__tku_msgs__msg__Parameter __attribute__((deprecated))
#else
# define DEPRECATED__tku_msgs__msg__Parameter __declspec(deprecated)
#endif

namespace tku_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Parameter_
{
  using Type = Parameter_<ContainerAllocator>;

  explicit Parameter_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->mode = 0l;
      this->x_swing_range = 0.0;
      this->y_swing_range = 0.0;
      this->z_swing_range = 0.0;
      this->period_t = 0l;
      this->period_t2 = 0l;
      this->sample_time = 0l;
      this->osc_lockrange = 0.0;
      this->base_default_z = 0.0;
      this->y_swing_shift = 0.0;
      this->x_swing_com = 0.0;
      this->base_lift_z = 0.0;
      this->rightfoot_shift_z = 0.0;
      this->com_y_swing = 0.0;
      this->now_stand_height = 0.0;
      this->now_com_height = 0.0;
      this->stand_balance = false;
      this->hip_roll = 0.0;
      this->ankle_roll = 0.0;
    }
  }

  explicit Parameter_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->mode = 0l;
      this->x_swing_range = 0.0;
      this->y_swing_range = 0.0;
      this->z_swing_range = 0.0;
      this->period_t = 0l;
      this->period_t2 = 0l;
      this->sample_time = 0l;
      this->osc_lockrange = 0.0;
      this->base_default_z = 0.0;
      this->y_swing_shift = 0.0;
      this->x_swing_com = 0.0;
      this->base_lift_z = 0.0;
      this->rightfoot_shift_z = 0.0;
      this->com_y_swing = 0.0;
      this->now_stand_height = 0.0;
      this->now_com_height = 0.0;
      this->stand_balance = false;
      this->hip_roll = 0.0;
      this->ankle_roll = 0.0;
    }
  }

  // field types and members
  using _mode_type =
    int32_t;
  _mode_type mode;
  using _x_swing_range_type =
    double;
  _x_swing_range_type x_swing_range;
  using _y_swing_range_type =
    double;
  _y_swing_range_type y_swing_range;
  using _z_swing_range_type =
    double;
  _z_swing_range_type z_swing_range;
  using _period_t_type =
    int32_t;
  _period_t_type period_t;
  using _period_t2_type =
    int32_t;
  _period_t2_type period_t2;
  using _sample_time_type =
    int32_t;
  _sample_time_type sample_time;
  using _osc_lockrange_type =
    double;
  _osc_lockrange_type osc_lockrange;
  using _base_default_z_type =
    double;
  _base_default_z_type base_default_z;
  using _y_swing_shift_type =
    double;
  _y_swing_shift_type y_swing_shift;
  using _x_swing_com_type =
    double;
  _x_swing_com_type x_swing_com;
  using _base_lift_z_type =
    double;
  _base_lift_z_type base_lift_z;
  using _rightfoot_shift_z_type =
    double;
  _rightfoot_shift_z_type rightfoot_shift_z;
  using _com_y_swing_type =
    double;
  _com_y_swing_type com_y_swing;
  using _now_stand_height_type =
    double;
  _now_stand_height_type now_stand_height;
  using _now_com_height_type =
    double;
  _now_com_height_type now_com_height;
  using _stand_balance_type =
    bool;
  _stand_balance_type stand_balance;
  using _hip_roll_type =
    double;
  _hip_roll_type hip_roll;
  using _ankle_roll_type =
    double;
  _ankle_roll_type ankle_roll;

  // setters for named parameter idiom
  Type & set__mode(
    const int32_t & _arg)
  {
    this->mode = _arg;
    return *this;
  }
  Type & set__x_swing_range(
    const double & _arg)
  {
    this->x_swing_range = _arg;
    return *this;
  }
  Type & set__y_swing_range(
    const double & _arg)
  {
    this->y_swing_range = _arg;
    return *this;
  }
  Type & set__z_swing_range(
    const double & _arg)
  {
    this->z_swing_range = _arg;
    return *this;
  }
  Type & set__period_t(
    const int32_t & _arg)
  {
    this->period_t = _arg;
    return *this;
  }
  Type & set__period_t2(
    const int32_t & _arg)
  {
    this->period_t2 = _arg;
    return *this;
  }
  Type & set__sample_time(
    const int32_t & _arg)
  {
    this->sample_time = _arg;
    return *this;
  }
  Type & set__osc_lockrange(
    const double & _arg)
  {
    this->osc_lockrange = _arg;
    return *this;
  }
  Type & set__base_default_z(
    const double & _arg)
  {
    this->base_default_z = _arg;
    return *this;
  }
  Type & set__y_swing_shift(
    const double & _arg)
  {
    this->y_swing_shift = _arg;
    return *this;
  }
  Type & set__x_swing_com(
    const double & _arg)
  {
    this->x_swing_com = _arg;
    return *this;
  }
  Type & set__base_lift_z(
    const double & _arg)
  {
    this->base_lift_z = _arg;
    return *this;
  }
  Type & set__rightfoot_shift_z(
    const double & _arg)
  {
    this->rightfoot_shift_z = _arg;
    return *this;
  }
  Type & set__com_y_swing(
    const double & _arg)
  {
    this->com_y_swing = _arg;
    return *this;
  }
  Type & set__now_stand_height(
    const double & _arg)
  {
    this->now_stand_height = _arg;
    return *this;
  }
  Type & set__now_com_height(
    const double & _arg)
  {
    this->now_com_height = _arg;
    return *this;
  }
  Type & set__stand_balance(
    const bool & _arg)
  {
    this->stand_balance = _arg;
    return *this;
  }
  Type & set__hip_roll(
    const double & _arg)
  {
    this->hip_roll = _arg;
    return *this;
  }
  Type & set__ankle_roll(
    const double & _arg)
  {
    this->ankle_roll = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    tku_msgs::msg::Parameter_<ContainerAllocator> *;
  using ConstRawPtr =
    const tku_msgs::msg::Parameter_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<tku_msgs::msg::Parameter_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<tku_msgs::msg::Parameter_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      tku_msgs::msg::Parameter_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<tku_msgs::msg::Parameter_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      tku_msgs::msg::Parameter_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<tku_msgs::msg::Parameter_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<tku_msgs::msg::Parameter_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<tku_msgs::msg::Parameter_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__tku_msgs__msg__Parameter
    std::shared_ptr<tku_msgs::msg::Parameter_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__tku_msgs__msg__Parameter
    std::shared_ptr<tku_msgs::msg::Parameter_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Parameter_ & other) const
  {
    if (this->mode != other.mode) {
      return false;
    }
    if (this->x_swing_range != other.x_swing_range) {
      return false;
    }
    if (this->y_swing_range != other.y_swing_range) {
      return false;
    }
    if (this->z_swing_range != other.z_swing_range) {
      return false;
    }
    if (this->period_t != other.period_t) {
      return false;
    }
    if (this->period_t2 != other.period_t2) {
      return false;
    }
    if (this->sample_time != other.sample_time) {
      return false;
    }
    if (this->osc_lockrange != other.osc_lockrange) {
      return false;
    }
    if (this->base_default_z != other.base_default_z) {
      return false;
    }
    if (this->y_swing_shift != other.y_swing_shift) {
      return false;
    }
    if (this->x_swing_com != other.x_swing_com) {
      return false;
    }
    if (this->base_lift_z != other.base_lift_z) {
      return false;
    }
    if (this->rightfoot_shift_z != other.rightfoot_shift_z) {
      return false;
    }
    if (this->com_y_swing != other.com_y_swing) {
      return false;
    }
    if (this->now_stand_height != other.now_stand_height) {
      return false;
    }
    if (this->now_com_height != other.now_com_height) {
      return false;
    }
    if (this->stand_balance != other.stand_balance) {
      return false;
    }
    if (this->hip_roll != other.hip_roll) {
      return false;
    }
    if (this->ankle_roll != other.ankle_roll) {
      return false;
    }
    return true;
  }
  bool operator!=(const Parameter_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Parameter_

// alias to use template instance with default allocator
using Parameter =
  tku_msgs::msg::Parameter_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace tku_msgs

#endif  // TKU_MSGS__MSG__DETAIL__PARAMETER__STRUCT_HPP_
