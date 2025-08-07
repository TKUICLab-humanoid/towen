// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from tku_msgs:srv/CheckSector.idl
// generated code does not contain a copyright notice

#ifndef TKU_MSGS__SRV__DETAIL__CHECK_SECTOR__BUILDER_HPP_
#define TKU_MSGS__SRV__DETAIL__CHECK_SECTOR__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "tku_msgs/srv/detail/check_sector__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace tku_msgs
{

namespace srv
{

namespace builder
{

class Init_CheckSector_Request_data
{
public:
  Init_CheckSector_Request_data()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::tku_msgs::srv::CheckSector_Request data(::tku_msgs::srv::CheckSector_Request::_data_type arg)
  {
    msg_.data = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tku_msgs::srv::CheckSector_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::tku_msgs::srv::CheckSector_Request>()
{
  return tku_msgs::srv::builder::Init_CheckSector_Request_data();
}

}  // namespace tku_msgs


namespace tku_msgs
{

namespace srv
{

namespace builder
{

class Init_CheckSector_Response_checkflag
{
public:
  Init_CheckSector_Response_checkflag()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::tku_msgs::srv::CheckSector_Response checkflag(::tku_msgs::srv::CheckSector_Response::_checkflag_type arg)
  {
    msg_.checkflag = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tku_msgs::srv::CheckSector_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::tku_msgs::srv::CheckSector_Response>()
{
  return tku_msgs::srv::builder::Init_CheckSector_Response_checkflag();
}

}  // namespace tku_msgs

#endif  // TKU_MSGS__SRV__DETAIL__CHECK_SECTOR__BUILDER_HPP_
