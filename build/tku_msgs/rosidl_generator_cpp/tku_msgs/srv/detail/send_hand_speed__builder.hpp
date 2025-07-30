// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from tku_msgs:srv/SendHandSpeed.idl
// generated code does not contain a copyright notice

#ifndef TKU_MSGS__SRV__DETAIL__SEND_HAND_SPEED__BUILDER_HPP_
#define TKU_MSGS__SRV__DETAIL__SEND_HAND_SPEED__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "tku_msgs/srv/detail/send_hand_speed__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace tku_msgs
{

namespace srv
{

namespace builder
{

class Init_SendHandSpeed_Request_data
{
public:
  Init_SendHandSpeed_Request_data()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::tku_msgs::srv::SendHandSpeed_Request data(::tku_msgs::srv::SendHandSpeed_Request::_data_type arg)
  {
    msg_.data = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tku_msgs::srv::SendHandSpeed_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::tku_msgs::srv::SendHandSpeed_Request>()
{
  return tku_msgs::srv::builder::Init_SendHandSpeed_Request_data();
}

}  // namespace tku_msgs


namespace tku_msgs
{

namespace srv
{

namespace builder
{

class Init_SendHandSpeed_Response_already
{
public:
  Init_SendHandSpeed_Response_already()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::tku_msgs::srv::SendHandSpeed_Response already(::tku_msgs::srv::SendHandSpeed_Response::_already_type arg)
  {
    msg_.already = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tku_msgs::srv::SendHandSpeed_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::tku_msgs::srv::SendHandSpeed_Response>()
{
  return tku_msgs::srv::builder::Init_SendHandSpeed_Response_already();
}

}  // namespace tku_msgs

#endif  // TKU_MSGS__SRV__DETAIL__SEND_HAND_SPEED__BUILDER_HPP_
