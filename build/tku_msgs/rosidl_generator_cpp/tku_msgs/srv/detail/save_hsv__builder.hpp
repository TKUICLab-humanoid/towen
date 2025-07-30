// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from tku_msgs:srv/SaveHSV.idl
// generated code does not contain a copyright notice

#ifndef TKU_MSGS__SRV__DETAIL__SAVE_HSV__BUILDER_HPP_
#define TKU_MSGS__SRV__DETAIL__SAVE_HSV__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "tku_msgs/srv/detail/save_hsv__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace tku_msgs
{

namespace srv
{

namespace builder
{

class Init_SaveHSV_Request_location
{
public:
  explicit Init_SaveHSV_Request_location(::tku_msgs::srv::SaveHSV_Request & msg)
  : msg_(msg)
  {}
  ::tku_msgs::srv::SaveHSV_Request location(::tku_msgs::srv::SaveHSV_Request::_location_type arg)
  {
    msg_.location = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tku_msgs::srv::SaveHSV_Request msg_;
};

class Init_SaveHSV_Request_save
{
public:
  Init_SaveHSV_Request_save()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SaveHSV_Request_location save(::tku_msgs::srv::SaveHSV_Request::_save_type arg)
  {
    msg_.save = std::move(arg);
    return Init_SaveHSV_Request_location(msg_);
  }

private:
  ::tku_msgs::srv::SaveHSV_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::tku_msgs::srv::SaveHSV_Request>()
{
  return tku_msgs::srv::builder::Init_SaveHSV_Request_save();
}

}  // namespace tku_msgs


namespace tku_msgs
{

namespace srv
{

namespace builder
{

class Init_SaveHSV_Response_already
{
public:
  Init_SaveHSV_Response_already()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::tku_msgs::srv::SaveHSV_Response already(::tku_msgs::srv::SaveHSV_Response::_already_type arg)
  {
    msg_.already = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tku_msgs::srv::SaveHSV_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::tku_msgs::srv::SaveHSV_Response>()
{
  return tku_msgs::srv::builder::Init_SaveHSV_Response_already();
}

}  // namespace tku_msgs

#endif  // TKU_MSGS__SRV__DETAIL__SAVE_HSV__BUILDER_HPP_
