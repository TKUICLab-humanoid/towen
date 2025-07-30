// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from webrtc_ros_msgs:srv/GetIceServers.idl
// generated code does not contain a copyright notice

#ifndef WEBRTC_ROS_MSGS__SRV__DETAIL__GET_ICE_SERVERS__BUILDER_HPP_
#define WEBRTC_ROS_MSGS__SRV__DETAIL__GET_ICE_SERVERS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "webrtc_ros_msgs/srv/detail/get_ice_servers__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace webrtc_ros_msgs
{

namespace srv
{


}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::webrtc_ros_msgs::srv::GetIceServers_Request>()
{
  return ::webrtc_ros_msgs::srv::GetIceServers_Request(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace webrtc_ros_msgs


namespace webrtc_ros_msgs
{

namespace srv
{

namespace builder
{

class Init_GetIceServers_Response_servers
{
public:
  Init_GetIceServers_Response_servers()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::webrtc_ros_msgs::srv::GetIceServers_Response servers(::webrtc_ros_msgs::srv::GetIceServers_Response::_servers_type arg)
  {
    msg_.servers = std::move(arg);
    return std::move(msg_);
  }

private:
  ::webrtc_ros_msgs::srv::GetIceServers_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::webrtc_ros_msgs::srv::GetIceServers_Response>()
{
  return webrtc_ros_msgs::srv::builder::Init_GetIceServers_Response_servers();
}

}  // namespace webrtc_ros_msgs

#endif  // WEBRTC_ROS_MSGS__SRV__DETAIL__GET_ICE_SERVERS__BUILDER_HPP_
