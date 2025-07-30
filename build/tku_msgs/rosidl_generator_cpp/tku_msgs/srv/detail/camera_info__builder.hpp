// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from tku_msgs:srv/CameraInfo.idl
// generated code does not contain a copyright notice

#ifndef TKU_MSGS__SRV__DETAIL__CAMERA_INFO__BUILDER_HPP_
#define TKU_MSGS__SRV__DETAIL__CAMERA_INFO__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "tku_msgs/srv/detail/camera_info__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace tku_msgs
{

namespace srv
{

namespace builder
{

class Init_CameraInfo_Request_load
{
public:
  Init_CameraInfo_Request_load()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::tku_msgs::srv::CameraInfo_Request load(::tku_msgs::srv::CameraInfo_Request::_load_type arg)
  {
    msg_.load = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tku_msgs::srv::CameraInfo_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::tku_msgs::srv::CameraInfo_Request>()
{
  return tku_msgs::srv::builder::Init_CameraInfo_Request_load();
}

}  // namespace tku_msgs


namespace tku_msgs
{

namespace srv
{

namespace builder
{

class Init_CameraInfo_Response_auto_backlight_compensation
{
public:
  explicit Init_CameraInfo_Response_auto_backlight_compensation(::tku_msgs::srv::CameraInfo_Response & msg)
  : msg_(msg)
  {}
  ::tku_msgs::srv::CameraInfo_Response auto_backlight_compensation(::tku_msgs::srv::CameraInfo_Response::_auto_backlight_compensation_type arg)
  {
    msg_.auto_backlight_compensation = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tku_msgs::srv::CameraInfo_Response msg_;
};

class Init_CameraInfo_Response_auto_exposure
{
public:
  explicit Init_CameraInfo_Response_auto_exposure(::tku_msgs::srv::CameraInfo_Response & msg)
  : msg_(msg)
  {}
  Init_CameraInfo_Response_auto_backlight_compensation auto_exposure(::tku_msgs::srv::CameraInfo_Response::_auto_exposure_type arg)
  {
    msg_.auto_exposure = std::move(arg);
    return Init_CameraInfo_Response_auto_backlight_compensation(msg_);
  }

private:
  ::tku_msgs::srv::CameraInfo_Response msg_;
};

class Init_CameraInfo_Response_auto_white_balance
{
public:
  explicit Init_CameraInfo_Response_auto_white_balance(::tku_msgs::srv::CameraInfo_Response & msg)
  : msg_(msg)
  {}
  Init_CameraInfo_Response_auto_exposure auto_white_balance(::tku_msgs::srv::CameraInfo_Response::_auto_white_balance_type arg)
  {
    msg_.auto_white_balance = std::move(arg);
    return Init_CameraInfo_Response_auto_exposure(msg_);
  }

private:
  ::tku_msgs::srv::CameraInfo_Response msg_;
};

class Init_CameraInfo_Response_white_balance
{
public:
  explicit Init_CameraInfo_Response_white_balance(::tku_msgs::srv::CameraInfo_Response & msg)
  : msg_(msg)
  {}
  Init_CameraInfo_Response_auto_white_balance white_balance(::tku_msgs::srv::CameraInfo_Response::_white_balance_type arg)
  {
    msg_.white_balance = std::move(arg);
    return Init_CameraInfo_Response_auto_white_balance(msg_);
  }

private:
  ::tku_msgs::srv::CameraInfo_Response msg_;
};

class Init_CameraInfo_Response_saturation
{
public:
  explicit Init_CameraInfo_Response_saturation(::tku_msgs::srv::CameraInfo_Response & msg)
  : msg_(msg)
  {}
  Init_CameraInfo_Response_white_balance saturation(::tku_msgs::srv::CameraInfo_Response::_saturation_type arg)
  {
    msg_.saturation = std::move(arg);
    return Init_CameraInfo_Response_white_balance(msg_);
  }

private:
  ::tku_msgs::srv::CameraInfo_Response msg_;
};

class Init_CameraInfo_Response_contrast
{
public:
  explicit Init_CameraInfo_Response_contrast(::tku_msgs::srv::CameraInfo_Response & msg)
  : msg_(msg)
  {}
  Init_CameraInfo_Response_saturation contrast(::tku_msgs::srv::CameraInfo_Response::_contrast_type arg)
  {
    msg_.contrast = std::move(arg);
    return Init_CameraInfo_Response_saturation(msg_);
  }

private:
  ::tku_msgs::srv::CameraInfo_Response msg_;
};

class Init_CameraInfo_Response_brightness
{
public:
  Init_CameraInfo_Response_brightness()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_CameraInfo_Response_contrast brightness(::tku_msgs::srv::CameraInfo_Response::_brightness_type arg)
  {
    msg_.brightness = std::move(arg);
    return Init_CameraInfo_Response_contrast(msg_);
  }

private:
  ::tku_msgs::srv::CameraInfo_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::tku_msgs::srv::CameraInfo_Response>()
{
  return tku_msgs::srv::builder::Init_CameraInfo_Response_brightness();
}

}  // namespace tku_msgs

#endif  // TKU_MSGS__SRV__DETAIL__CAMERA_INFO__BUILDER_HPP_
