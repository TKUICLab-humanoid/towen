// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from tku_msgs:msg/SingleMotorData.idl
// generated code does not contain a copyright notice

#ifndef TKU_MSGS__MSG__DETAIL__SINGLE_MOTOR_DATA__BUILDER_HPP_
#define TKU_MSGS__MSG__DETAIL__SINGLE_MOTOR_DATA__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "tku_msgs/msg/detail/single_motor_data__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace tku_msgs
{

namespace msg
{

namespace builder
{

class Init_SingleMotorData_speed
{
public:
  explicit Init_SingleMotorData_speed(::tku_msgs::msg::SingleMotorData & msg)
  : msg_(msg)
  {}
  ::tku_msgs::msg::SingleMotorData speed(::tku_msgs::msg::SingleMotorData::_speed_type arg)
  {
    msg_.speed = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tku_msgs::msg::SingleMotorData msg_;
};

class Init_SingleMotorData_position
{
public:
  explicit Init_SingleMotorData_position(::tku_msgs::msg::SingleMotorData & msg)
  : msg_(msg)
  {}
  Init_SingleMotorData_speed position(::tku_msgs::msg::SingleMotorData::_position_type arg)
  {
    msg_.position = std::move(arg);
    return Init_SingleMotorData_speed(msg_);
  }

private:
  ::tku_msgs::msg::SingleMotorData msg_;
};

class Init_SingleMotorData_id
{
public:
  Init_SingleMotorData_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SingleMotorData_position id(::tku_msgs::msg::SingleMotorData::_id_type arg)
  {
    msg_.id = std::move(arg);
    return Init_SingleMotorData_position(msg_);
  }

private:
  ::tku_msgs::msg::SingleMotorData msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::tku_msgs::msg::SingleMotorData>()
{
  return tku_msgs::msg::builder::Init_SingleMotorData_id();
}

}  // namespace tku_msgs

#endif  // TKU_MSGS__MSG__DETAIL__SINGLE_MOTOR_DATA__BUILDER_HPP_
