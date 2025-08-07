// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from tku_msgs:srv/Add.idl
// generated code does not contain a copyright notice

#ifndef TKU_MSGS__SRV__DETAIL__ADD__BUILDER_HPP_
#define TKU_MSGS__SRV__DETAIL__ADD__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "tku_msgs/srv/detail/add__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace tku_msgs
{

namespace srv
{

namespace builder
{

class Init_Add_Request_b
{
public:
  explicit Init_Add_Request_b(::tku_msgs::srv::Add_Request & msg)
  : msg_(msg)
  {}
  ::tku_msgs::srv::Add_Request b(::tku_msgs::srv::Add_Request::_b_type arg)
  {
    msg_.b = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tku_msgs::srv::Add_Request msg_;
};

class Init_Add_Request_a
{
public:
  Init_Add_Request_a()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Add_Request_b a(::tku_msgs::srv::Add_Request::_a_type arg)
  {
    msg_.a = std::move(arg);
    return Init_Add_Request_b(msg_);
  }

private:
  ::tku_msgs::srv::Add_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::tku_msgs::srv::Add_Request>()
{
  return tku_msgs::srv::builder::Init_Add_Request_a();
}

}  // namespace tku_msgs


namespace tku_msgs
{

namespace srv
{

namespace builder
{

class Init_Add_Response_sum
{
public:
  Init_Add_Response_sum()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::tku_msgs::srv::Add_Response sum(::tku_msgs::srv::Add_Response::_sum_type arg)
  {
    msg_.sum = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tku_msgs::srv::Add_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::tku_msgs::srv::Add_Response>()
{
  return tku_msgs::srv::builder::Init_Add_Response_sum();
}

}  // namespace tku_msgs

#endif  // TKU_MSGS__SRV__DETAIL__ADD__BUILDER_HPP_
