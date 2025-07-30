// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from webrtc_ros_msgs:msg/IceServer.idl
// generated code does not contain a copyright notice

#ifndef WEBRTC_ROS_MSGS__MSG__DETAIL__ICE_SERVER__BUILDER_HPP_
#define WEBRTC_ROS_MSGS__MSG__DETAIL__ICE_SERVER__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "webrtc_ros_msgs/msg/detail/ice_server__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace webrtc_ros_msgs
{

namespace msg
{

namespace builder
{

class Init_IceServer_password
{
public:
  explicit Init_IceServer_password(::webrtc_ros_msgs::msg::IceServer & msg)
  : msg_(msg)
  {}
  ::webrtc_ros_msgs::msg::IceServer password(::webrtc_ros_msgs::msg::IceServer::_password_type arg)
  {
    msg_.password = std::move(arg);
    return std::move(msg_);
  }

private:
  ::webrtc_ros_msgs::msg::IceServer msg_;
};

class Init_IceServer_username
{
public:
  explicit Init_IceServer_username(::webrtc_ros_msgs::msg::IceServer & msg)
  : msg_(msg)
  {}
  Init_IceServer_password username(::webrtc_ros_msgs::msg::IceServer::_username_type arg)
  {
    msg_.username = std::move(arg);
    return Init_IceServer_password(msg_);
  }

private:
  ::webrtc_ros_msgs::msg::IceServer msg_;
};

class Init_IceServer_uri
{
public:
  Init_IceServer_uri()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_IceServer_username uri(::webrtc_ros_msgs::msg::IceServer::_uri_type arg)
  {
    msg_.uri = std::move(arg);
    return Init_IceServer_username(msg_);
  }

private:
  ::webrtc_ros_msgs::msg::IceServer msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::webrtc_ros_msgs::msg::IceServer>()
{
  return webrtc_ros_msgs::msg::builder::Init_IceServer_uri();
}

}  // namespace webrtc_ros_msgs

#endif  // WEBRTC_ROS_MSGS__MSG__DETAIL__ICE_SERVER__BUILDER_HPP_
