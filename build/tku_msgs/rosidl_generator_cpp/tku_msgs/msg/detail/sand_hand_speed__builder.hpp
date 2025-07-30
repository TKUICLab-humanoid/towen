// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from tku_msgs:msg/SandHandSpeed.idl
// generated code does not contain a copyright notice

#ifndef TKU_MSGS__MSG__DETAIL__SAND_HAND_SPEED__BUILDER_HPP_
#define TKU_MSGS__MSG__DETAIL__SAND_HAND_SPEED__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "tku_msgs/msg/detail/sand_hand_speed__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace tku_msgs
{

namespace msg
{

namespace builder
{

class Init_SandHandSpeed_speed
{
public:
  explicit Init_SandHandSpeed_speed(::tku_msgs::msg::SandHandSpeed & msg)
  : msg_(msg)
  {}
  ::tku_msgs::msg::SandHandSpeed speed(::tku_msgs::msg::SandHandSpeed::_speed_type arg)
  {
    msg_.speed = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tku_msgs::msg::SandHandSpeed msg_;
};

class Init_SandHandSpeed_sector
{
public:
  Init_SandHandSpeed_sector()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SandHandSpeed_speed sector(::tku_msgs::msg::SandHandSpeed::_sector_type arg)
  {
    msg_.sector = std::move(arg);
    return Init_SandHandSpeed_speed(msg_);
  }

private:
  ::tku_msgs::msg::SandHandSpeed msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::tku_msgs::msg::SandHandSpeed>()
{
  return tku_msgs::msg::builder::Init_SandHandSpeed_sector();
}

}  // namespace tku_msgs

#endif  // TKU_MSGS__MSG__DETAIL__SAND_HAND_SPEED__BUILDER_HPP_
