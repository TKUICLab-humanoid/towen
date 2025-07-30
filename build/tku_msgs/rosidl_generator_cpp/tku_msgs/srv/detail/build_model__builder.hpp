// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from tku_msgs:srv/BuildModel.idl
// generated code does not contain a copyright notice

#ifndef TKU_MSGS__SRV__DETAIL__BUILD_MODEL__BUILDER_HPP_
#define TKU_MSGS__SRV__DETAIL__BUILD_MODEL__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "tku_msgs/srv/detail/build_model__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace tku_msgs
{

namespace srv
{

namespace builder
{

class Init_BuildModel_Request_build
{
public:
  Init_BuildModel_Request_build()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::tku_msgs::srv::BuildModel_Request build(::tku_msgs::srv::BuildModel_Request::_build_type arg)
  {
    msg_.build = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tku_msgs::srv::BuildModel_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::tku_msgs::srv::BuildModel_Request>()
{
  return tku_msgs::srv::builder::Init_BuildModel_Request_build();
}

}  // namespace tku_msgs


namespace tku_msgs
{

namespace srv
{

namespace builder
{

class Init_BuildModel_Response_already
{
public:
  Init_BuildModel_Response_already()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::tku_msgs::srv::BuildModel_Response already(::tku_msgs::srv::BuildModel_Response::_already_type arg)
  {
    msg_.already = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tku_msgs::srv::BuildModel_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::tku_msgs::srv::BuildModel_Response>()
{
  return tku_msgs::srv::builder::Init_BuildModel_Response_already();
}

}  // namespace tku_msgs

#endif  // TKU_MSGS__SRV__DETAIL__BUILD_MODEL__BUILDER_HPP_
