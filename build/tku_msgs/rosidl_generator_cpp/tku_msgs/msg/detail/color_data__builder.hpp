// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from tku_msgs:msg/ColorData.idl
// generated code does not contain a copyright notice

#ifndef TKU_MSGS__MSG__DETAIL__COLOR_DATA__BUILDER_HPP_
#define TKU_MSGS__MSG__DETAIL__COLOR_DATA__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "tku_msgs/msg/detail/color_data__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace tku_msgs
{

namespace msg
{

namespace builder
{

class Init_ColorData_size
{
public:
  explicit Init_ColorData_size(::tku_msgs::msg::ColorData & msg)
  : msg_(msg)
  {}
  ::tku_msgs::msg::ColorData size(::tku_msgs::msg::ColorData::_size_type arg)
  {
    msg_.size = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tku_msgs::msg::ColorData msg_;
};

class Init_ColorData_height
{
public:
  explicit Init_ColorData_height(::tku_msgs::msg::ColorData & msg)
  : msg_(msg)
  {}
  Init_ColorData_size height(::tku_msgs::msg::ColorData::_height_type arg)
  {
    msg_.height = std::move(arg);
    return Init_ColorData_size(msg_);
  }

private:
  ::tku_msgs::msg::ColorData msg_;
};

class Init_ColorData_width
{
public:
  explicit Init_ColorData_width(::tku_msgs::msg::ColorData & msg)
  : msg_(msg)
  {}
  Init_ColorData_height width(::tku_msgs::msg::ColorData::_width_type arg)
  {
    msg_.width = std::move(arg);
    return Init_ColorData_height(msg_);
  }

private:
  ::tku_msgs::msg::ColorData msg_;
};

class Init_ColorData_ymax
{
public:
  explicit Init_ColorData_ymax(::tku_msgs::msg::ColorData & msg)
  : msg_(msg)
  {}
  Init_ColorData_width ymax(::tku_msgs::msg::ColorData::_ymax_type arg)
  {
    msg_.ymax = std::move(arg);
    return Init_ColorData_width(msg_);
  }

private:
  ::tku_msgs::msg::ColorData msg_;
};

class Init_ColorData_ymin
{
public:
  explicit Init_ColorData_ymin(::tku_msgs::msg::ColorData & msg)
  : msg_(msg)
  {}
  Init_ColorData_ymax ymin(::tku_msgs::msg::ColorData::_ymin_type arg)
  {
    msg_.ymin = std::move(arg);
    return Init_ColorData_ymax(msg_);
  }

private:
  ::tku_msgs::msg::ColorData msg_;
};

class Init_ColorData_xmax
{
public:
  explicit Init_ColorData_xmax(::tku_msgs::msg::ColorData & msg)
  : msg_(msg)
  {}
  Init_ColorData_ymin xmax(::tku_msgs::msg::ColorData::_xmax_type arg)
  {
    msg_.xmax = std::move(arg);
    return Init_ColorData_ymin(msg_);
  }

private:
  ::tku_msgs::msg::ColorData msg_;
};

class Init_ColorData_xmin
{
public:
  explicit Init_ColorData_xmin(::tku_msgs::msg::ColorData & msg)
  : msg_(msg)
  {}
  Init_ColorData_xmax xmin(::tku_msgs::msg::ColorData::_xmin_type arg)
  {
    msg_.xmin = std::move(arg);
    return Init_ColorData_xmax(msg_);
  }

private:
  ::tku_msgs::msg::ColorData msg_;
};

class Init_ColorData_y
{
public:
  explicit Init_ColorData_y(::tku_msgs::msg::ColorData & msg)
  : msg_(msg)
  {}
  Init_ColorData_xmin y(::tku_msgs::msg::ColorData::_y_type arg)
  {
    msg_.y = std::move(arg);
    return Init_ColorData_xmin(msg_);
  }

private:
  ::tku_msgs::msg::ColorData msg_;
};

class Init_ColorData_x
{
public:
  Init_ColorData_x()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ColorData_y x(::tku_msgs::msg::ColorData::_x_type arg)
  {
    msg_.x = std::move(arg);
    return Init_ColorData_y(msg_);
  }

private:
  ::tku_msgs::msg::ColorData msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::tku_msgs::msg::ColorData>()
{
  return tku_msgs::msg::builder::Init_ColorData_x();
}

}  // namespace tku_msgs

#endif  // TKU_MSGS__MSG__DETAIL__COLOR_DATA__BUILDER_HPP_
