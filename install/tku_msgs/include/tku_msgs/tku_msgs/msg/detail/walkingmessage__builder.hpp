// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from tku_msgs:msg/Walkingmessage.idl
// generated code does not contain a copyright notice

#ifndef TKU_MSGS__MSG__DETAIL__WALKINGMESSAGE__BUILDER_HPP_
#define TKU_MSGS__MSG__DETAIL__WALKINGMESSAGE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "tku_msgs/msg/detail/walkingmessage__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace tku_msgs
{

namespace msg
{

namespace builder
{

class Init_Walkingmessage_sensor_mode
{
public:
  explicit Init_Walkingmessage_sensor_mode(::tku_msgs::msg::Walkingmessage & msg)
  : msg_(msg)
  {}
  ::tku_msgs::msg::Walkingmessage sensor_mode(::tku_msgs::msg::Walkingmessage::_sensor_mode_type arg)
  {
    msg_.sensor_mode = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tku_msgs::msg::Walkingmessage msg_;
};

class Init_Walkingmessage_walking_cmd
{
public:
  explicit Init_Walkingmessage_walking_cmd(::tku_msgs::msg::Walkingmessage & msg)
  : msg_(msg)
  {}
  Init_Walkingmessage_sensor_mode walking_cmd(::tku_msgs::msg::Walkingmessage::_walking_cmd_type arg)
  {
    msg_.walking_cmd = std::move(arg);
    return Init_Walkingmessage_sensor_mode(msg_);
  }

private:
  ::tku_msgs::msg::Walkingmessage msg_;
};

class Init_Walkingmessage_theta
{
public:
  explicit Init_Walkingmessage_theta(::tku_msgs::msg::Walkingmessage & msg)
  : msg_(msg)
  {}
  Init_Walkingmessage_walking_cmd theta(::tku_msgs::msg::Walkingmessage::_theta_type arg)
  {
    msg_.theta = std::move(arg);
    return Init_Walkingmessage_walking_cmd(msg_);
  }

private:
  ::tku_msgs::msg::Walkingmessage msg_;
};

class Init_Walkingmessage_z
{
public:
  explicit Init_Walkingmessage_z(::tku_msgs::msg::Walkingmessage & msg)
  : msg_(msg)
  {}
  Init_Walkingmessage_theta z(::tku_msgs::msg::Walkingmessage::_z_type arg)
  {
    msg_.z = std::move(arg);
    return Init_Walkingmessage_theta(msg_);
  }

private:
  ::tku_msgs::msg::Walkingmessage msg_;
};

class Init_Walkingmessage_y
{
public:
  explicit Init_Walkingmessage_y(::tku_msgs::msg::Walkingmessage & msg)
  : msg_(msg)
  {}
  Init_Walkingmessage_z y(::tku_msgs::msg::Walkingmessage::_y_type arg)
  {
    msg_.y = std::move(arg);
    return Init_Walkingmessage_z(msg_);
  }

private:
  ::tku_msgs::msg::Walkingmessage msg_;
};

class Init_Walkingmessage_x
{
public:
  Init_Walkingmessage_x()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Walkingmessage_y x(::tku_msgs::msg::Walkingmessage::_x_type arg)
  {
    msg_.x = std::move(arg);
    return Init_Walkingmessage_y(msg_);
  }

private:
  ::tku_msgs::msg::Walkingmessage msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::tku_msgs::msg::Walkingmessage>()
{
  return tku_msgs::msg::builder::Init_Walkingmessage_x();
}

}  // namespace tku_msgs

#endif  // TKU_MSGS__MSG__DETAIL__WALKINGMESSAGE__BUILDER_HPP_
