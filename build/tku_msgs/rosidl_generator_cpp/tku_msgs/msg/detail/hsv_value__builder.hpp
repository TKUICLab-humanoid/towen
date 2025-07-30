// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from tku_msgs:msg/HSVValue.idl
// generated code does not contain a copyright notice

#ifndef TKU_MSGS__MSG__DETAIL__HSV_VALUE__BUILDER_HPP_
#define TKU_MSGS__MSG__DETAIL__HSV_VALUE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "tku_msgs/msg/detail/hsv_value__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace tku_msgs
{

namespace msg
{

namespace builder
{

class Init_HSVValue_vmax
{
public:
  explicit Init_HSVValue_vmax(::tku_msgs::msg::HSVValue & msg)
  : msg_(msg)
  {}
  ::tku_msgs::msg::HSVValue vmax(::tku_msgs::msg::HSVValue::_vmax_type arg)
  {
    msg_.vmax = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tku_msgs::msg::HSVValue msg_;
};

class Init_HSVValue_vmin
{
public:
  explicit Init_HSVValue_vmin(::tku_msgs::msg::HSVValue & msg)
  : msg_(msg)
  {}
  Init_HSVValue_vmax vmin(::tku_msgs::msg::HSVValue::_vmin_type arg)
  {
    msg_.vmin = std::move(arg);
    return Init_HSVValue_vmax(msg_);
  }

private:
  ::tku_msgs::msg::HSVValue msg_;
};

class Init_HSVValue_smax
{
public:
  explicit Init_HSVValue_smax(::tku_msgs::msg::HSVValue & msg)
  : msg_(msg)
  {}
  Init_HSVValue_vmin smax(::tku_msgs::msg::HSVValue::_smax_type arg)
  {
    msg_.smax = std::move(arg);
    return Init_HSVValue_vmin(msg_);
  }

private:
  ::tku_msgs::msg::HSVValue msg_;
};

class Init_HSVValue_smin
{
public:
  explicit Init_HSVValue_smin(::tku_msgs::msg::HSVValue & msg)
  : msg_(msg)
  {}
  Init_HSVValue_smax smin(::tku_msgs::msg::HSVValue::_smin_type arg)
  {
    msg_.smin = std::move(arg);
    return Init_HSVValue_smax(msg_);
  }

private:
  ::tku_msgs::msg::HSVValue msg_;
};

class Init_HSVValue_hmax
{
public:
  explicit Init_HSVValue_hmax(::tku_msgs::msg::HSVValue & msg)
  : msg_(msg)
  {}
  Init_HSVValue_smin hmax(::tku_msgs::msg::HSVValue::_hmax_type arg)
  {
    msg_.hmax = std::move(arg);
    return Init_HSVValue_smin(msg_);
  }

private:
  ::tku_msgs::msg::HSVValue msg_;
};

class Init_HSVValue_hmin
{
public:
  Init_HSVValue_hmin()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_HSVValue_hmax hmin(::tku_msgs::msg::HSVValue::_hmin_type arg)
  {
    msg_.hmin = std::move(arg);
    return Init_HSVValue_hmax(msg_);
  }

private:
  ::tku_msgs::msg::HSVValue msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::tku_msgs::msg::HSVValue>()
{
  return tku_msgs::msg::builder::Init_HSVValue_hmin();
}

}  // namespace tku_msgs

#endif  // TKU_MSGS__MSG__DETAIL__HSV_VALUE__BUILDER_HPP_
