// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from tku_msgs:msg/Camera.idl
// generated code does not contain a copyright notice

#ifndef TKU_MSGS__MSG__DETAIL__CAMERA__BUILDER_HPP_
#define TKU_MSGS__MSG__DETAIL__CAMERA__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "tku_msgs/msg/detail/camera__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace tku_msgs
{

namespace msg
{

namespace builder
{

class Init_Camera_auto_exposure
{
public:
  explicit Init_Camera_auto_exposure(::tku_msgs::msg::Camera & msg)
  : msg_(msg)
  {}
  ::tku_msgs::msg::Camera auto_exposure(::tku_msgs::msg::Camera::_auto_exposure_type arg)
  {
    msg_.auto_exposure = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tku_msgs::msg::Camera msg_;
};

class Init_Camera_autowhitebalance
{
public:
  explicit Init_Camera_autowhitebalance(::tku_msgs::msg::Camera & msg)
  : msg_(msg)
  {}
  Init_Camera_auto_exposure autowhitebalance(::tku_msgs::msg::Camera::_autowhitebalance_type arg)
  {
    msg_.autowhitebalance = std::move(arg);
    return Init_Camera_auto_exposure(msg_);
  }

private:
  ::tku_msgs::msg::Camera msg_;
};

class Init_Camera_whitebalance
{
public:
  explicit Init_Camera_whitebalance(::tku_msgs::msg::Camera & msg)
  : msg_(msg)
  {}
  Init_Camera_autowhitebalance whitebalance(::tku_msgs::msg::Camera::_whitebalance_type arg)
  {
    msg_.whitebalance = std::move(arg);
    return Init_Camera_autowhitebalance(msg_);
  }

private:
  ::tku_msgs::msg::Camera msg_;
};

class Init_Camera_saturation
{
public:
  explicit Init_Camera_saturation(::tku_msgs::msg::Camera & msg)
  : msg_(msg)
  {}
  Init_Camera_whitebalance saturation(::tku_msgs::msg::Camera::_saturation_type arg)
  {
    msg_.saturation = std::move(arg);
    return Init_Camera_whitebalance(msg_);
  }

private:
  ::tku_msgs::msg::Camera msg_;
};

class Init_Camera_contrast
{
public:
  explicit Init_Camera_contrast(::tku_msgs::msg::Camera & msg)
  : msg_(msg)
  {}
  Init_Camera_saturation contrast(::tku_msgs::msg::Camera::_contrast_type arg)
  {
    msg_.contrast = std::move(arg);
    return Init_Camera_saturation(msg_);
  }

private:
  ::tku_msgs::msg::Camera msg_;
};

class Init_Camera_brightness
{
public:
  Init_Camera_brightness()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Camera_contrast brightness(::tku_msgs::msg::Camera::_brightness_type arg)
  {
    msg_.brightness = std::move(arg);
    return Init_Camera_contrast(msg_);
  }

private:
  ::tku_msgs::msg::Camera msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::tku_msgs::msg::Camera>()
{
  return tku_msgs::msg::builder::Init_Camera_brightness();
}

}  // namespace tku_msgs

#endif  // TKU_MSGS__MSG__DETAIL__CAMERA__BUILDER_HPP_
