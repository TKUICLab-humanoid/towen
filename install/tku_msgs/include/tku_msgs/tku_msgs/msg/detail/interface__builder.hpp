// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from tku_msgs:msg/Interface.idl
// generated code does not contain a copyright notice

#ifndef TKU_MSGS__MSG__DETAIL__INTERFACE__BUILDER_HPP_
#define TKU_MSGS__MSG__DETAIL__INTERFACE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "tku_msgs/msg/detail/interface__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace tku_msgs
{

namespace msg
{

namespace builder
{

class Init_Interface_sensor_mode
{
public:
  explicit Init_Interface_sensor_mode(::tku_msgs::msg::Interface & msg)
  : msg_(msg)
  {}
  ::tku_msgs::msg::Interface sensor_mode(::tku_msgs::msg::Interface::_sensor_mode_type arg)
  {
    msg_.sensor_mode = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tku_msgs::msg::Interface msg_;
};

class Init_Interface_walking_state
{
public:
  explicit Init_Interface_walking_state(::tku_msgs::msg::Interface & msg)
  : msg_(msg)
  {}
  Init_Interface_sensor_mode walking_state(::tku_msgs::msg::Interface::_walking_state_type arg)
  {
    msg_.walking_state = std::move(arg);
    return Init_Interface_sensor_mode(msg_);
  }

private:
  ::tku_msgs::msg::Interface msg_;
};

class Init_Interface_walking_mode
{
public:
  explicit Init_Interface_walking_mode(::tku_msgs::msg::Interface & msg)
  : msg_(msg)
  {}
  Init_Interface_walking_state walking_mode(::tku_msgs::msg::Interface::_walking_mode_type arg)
  {
    msg_.walking_mode = std::move(arg);
    return Init_Interface_walking_state(msg_);
  }

private:
  ::tku_msgs::msg::Interface msg_;
};

class Init_Interface_theta
{
public:
  explicit Init_Interface_theta(::tku_msgs::msg::Interface & msg)
  : msg_(msg)
  {}
  Init_Interface_walking_mode theta(::tku_msgs::msg::Interface::_theta_type arg)
  {
    msg_.theta = std::move(arg);
    return Init_Interface_walking_mode(msg_);
  }

private:
  ::tku_msgs::msg::Interface msg_;
};

class Init_Interface_z
{
public:
  explicit Init_Interface_z(::tku_msgs::msg::Interface & msg)
  : msg_(msg)
  {}
  Init_Interface_theta z(::tku_msgs::msg::Interface::_z_type arg)
  {
    msg_.z = std::move(arg);
    return Init_Interface_theta(msg_);
  }

private:
  ::tku_msgs::msg::Interface msg_;
};

class Init_Interface_y
{
public:
  explicit Init_Interface_y(::tku_msgs::msg::Interface & msg)
  : msg_(msg)
  {}
  Init_Interface_z y(::tku_msgs::msg::Interface::_y_type arg)
  {
    msg_.y = std::move(arg);
    return Init_Interface_z(msg_);
  }

private:
  ::tku_msgs::msg::Interface msg_;
};

class Init_Interface_x
{
public:
  Init_Interface_x()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Interface_y x(::tku_msgs::msg::Interface::_x_type arg)
  {
    msg_.x = std::move(arg);
    return Init_Interface_y(msg_);
  }

private:
  ::tku_msgs::msg::Interface msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::tku_msgs::msg::Interface>()
{
  return tku_msgs::msg::builder::Init_Interface_x();
}

}  // namespace tku_msgs

#endif  // TKU_MSGS__MSG__DETAIL__INTERFACE__BUILDER_HPP_
