// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from tku_msgs:srv/HSVInfo.idl
// generated code does not contain a copyright notice

#ifndef TKU_MSGS__SRV__DETAIL__HSV_INFO__BUILDER_HPP_
#define TKU_MSGS__SRV__DETAIL__HSV_INFO__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "tku_msgs/srv/detail/hsv_info__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace tku_msgs
{

namespace srv
{

namespace builder
{

class Init_HSVInfo_Request_colorlabel
{
public:
  Init_HSVInfo_Request_colorlabel()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::tku_msgs::srv::HSVInfo_Request colorlabel(::tku_msgs::srv::HSVInfo_Request::_colorlabel_type arg)
  {
    msg_.colorlabel = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tku_msgs::srv::HSVInfo_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::tku_msgs::srv::HSVInfo_Request>()
{
  return tku_msgs::srv::builder::Init_HSVInfo_Request_colorlabel();
}

}  // namespace tku_msgs


namespace tku_msgs
{

namespace srv
{

namespace builder
{

class Init_HSVInfo_Response_vmax
{
public:
  explicit Init_HSVInfo_Response_vmax(::tku_msgs::srv::HSVInfo_Response & msg)
  : msg_(msg)
  {}
  ::tku_msgs::srv::HSVInfo_Response vmax(::tku_msgs::srv::HSVInfo_Response::_vmax_type arg)
  {
    msg_.vmax = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tku_msgs::srv::HSVInfo_Response msg_;
};

class Init_HSVInfo_Response_vmin
{
public:
  explicit Init_HSVInfo_Response_vmin(::tku_msgs::srv::HSVInfo_Response & msg)
  : msg_(msg)
  {}
  Init_HSVInfo_Response_vmax vmin(::tku_msgs::srv::HSVInfo_Response::_vmin_type arg)
  {
    msg_.vmin = std::move(arg);
    return Init_HSVInfo_Response_vmax(msg_);
  }

private:
  ::tku_msgs::srv::HSVInfo_Response msg_;
};

class Init_HSVInfo_Response_smax
{
public:
  explicit Init_HSVInfo_Response_smax(::tku_msgs::srv::HSVInfo_Response & msg)
  : msg_(msg)
  {}
  Init_HSVInfo_Response_vmin smax(::tku_msgs::srv::HSVInfo_Response::_smax_type arg)
  {
    msg_.smax = std::move(arg);
    return Init_HSVInfo_Response_vmin(msg_);
  }

private:
  ::tku_msgs::srv::HSVInfo_Response msg_;
};

class Init_HSVInfo_Response_smin
{
public:
  explicit Init_HSVInfo_Response_smin(::tku_msgs::srv::HSVInfo_Response & msg)
  : msg_(msg)
  {}
  Init_HSVInfo_Response_smax smin(::tku_msgs::srv::HSVInfo_Response::_smin_type arg)
  {
    msg_.smin = std::move(arg);
    return Init_HSVInfo_Response_smax(msg_);
  }

private:
  ::tku_msgs::srv::HSVInfo_Response msg_;
};

class Init_HSVInfo_Response_hmax
{
public:
  explicit Init_HSVInfo_Response_hmax(::tku_msgs::srv::HSVInfo_Response & msg)
  : msg_(msg)
  {}
  Init_HSVInfo_Response_smin hmax(::tku_msgs::srv::HSVInfo_Response::_hmax_type arg)
  {
    msg_.hmax = std::move(arg);
    return Init_HSVInfo_Response_smin(msg_);
  }

private:
  ::tku_msgs::srv::HSVInfo_Response msg_;
};

class Init_HSVInfo_Response_hmin
{
public:
  Init_HSVInfo_Response_hmin()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_HSVInfo_Response_hmax hmin(::tku_msgs::srv::HSVInfo_Response::_hmin_type arg)
  {
    msg_.hmin = std::move(arg);
    return Init_HSVInfo_Response_hmax(msg_);
  }

private:
  ::tku_msgs::srv::HSVInfo_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::tku_msgs::srv::HSVInfo_Response>()
{
  return tku_msgs::srv::builder::Init_HSVInfo_Response_hmin();
}

}  // namespace tku_msgs

#endif  // TKU_MSGS__SRV__DETAIL__HSV_INFO__BUILDER_HPP_
