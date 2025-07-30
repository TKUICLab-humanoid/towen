// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from tku_msgs:msg/HeadPackage.idl
// generated code does not contain a copyright notice

#ifndef TKU_MSGS__MSG__DETAIL__HEAD_PACKAGE__BUILDER_HPP_
#define TKU_MSGS__MSG__DETAIL__HEAD_PACKAGE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "tku_msgs/msg/detail/head_package__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace tku_msgs
{

namespace msg
{

namespace builder
{

class Init_HeadPackage_speed
{
public:
  explicit Init_HeadPackage_speed(::tku_msgs::msg::HeadPackage & msg)
  : msg_(msg)
  {}
  ::tku_msgs::msg::HeadPackage speed(::tku_msgs::msg::HeadPackage::_speed_type arg)
  {
    msg_.speed = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tku_msgs::msg::HeadPackage msg_;
};

class Init_HeadPackage_position
{
public:
  explicit Init_HeadPackage_position(::tku_msgs::msg::HeadPackage & msg)
  : msg_(msg)
  {}
  Init_HeadPackage_speed position(::tku_msgs::msg::HeadPackage::_position_type arg)
  {
    msg_.position = std::move(arg);
    return Init_HeadPackage_speed(msg_);
  }

private:
  ::tku_msgs::msg::HeadPackage msg_;
};

class Init_HeadPackage_id
{
public:
  Init_HeadPackage_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_HeadPackage_position id(::tku_msgs::msg::HeadPackage::_id_type arg)
  {
    msg_.id = std::move(arg);
    return Init_HeadPackage_position(msg_);
  }

private:
  ::tku_msgs::msg::HeadPackage msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::tku_msgs::msg::HeadPackage>()
{
  return tku_msgs::msg::builder::Init_HeadPackage_id();
}

}  // namespace tku_msgs

#endif  // TKU_MSGS__MSG__DETAIL__HEAD_PACKAGE__BUILDER_HPP_
