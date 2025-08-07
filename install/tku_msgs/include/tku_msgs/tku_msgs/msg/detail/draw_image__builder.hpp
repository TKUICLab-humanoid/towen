// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from tku_msgs:msg/DrawImage.idl
// generated code does not contain a copyright notice

#ifndef TKU_MSGS__MSG__DETAIL__DRAW_IMAGE__BUILDER_HPP_
#define TKU_MSGS__MSG__DETAIL__DRAW_IMAGE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "tku_msgs/msg/detail/draw_image__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace tku_msgs
{

namespace msg
{

namespace builder
{

class Init_DrawImage_bvalue
{
public:
  explicit Init_DrawImage_bvalue(::tku_msgs::msg::DrawImage & msg)
  : msg_(msg)
  {}
  ::tku_msgs::msg::DrawImage bvalue(::tku_msgs::msg::DrawImage::_bvalue_type arg)
  {
    msg_.bvalue = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tku_msgs::msg::DrawImage msg_;
};

class Init_DrawImage_gvalue
{
public:
  explicit Init_DrawImage_gvalue(::tku_msgs::msg::DrawImage & msg)
  : msg_(msg)
  {}
  Init_DrawImage_bvalue gvalue(::tku_msgs::msg::DrawImage::_gvalue_type arg)
  {
    msg_.gvalue = std::move(arg);
    return Init_DrawImage_bvalue(msg_);
  }

private:
  ::tku_msgs::msg::DrawImage msg_;
};

class Init_DrawImage_rvalue
{
public:
  explicit Init_DrawImage_rvalue(::tku_msgs::msg::DrawImage & msg)
  : msg_(msg)
  {}
  Init_DrawImage_gvalue rvalue(::tku_msgs::msg::DrawImage::_rvalue_type arg)
  {
    msg_.rvalue = std::move(arg);
    return Init_DrawImage_gvalue(msg_);
  }

private:
  ::tku_msgs::msg::DrawImage msg_;
};

class Init_DrawImage_ymax
{
public:
  explicit Init_DrawImage_ymax(::tku_msgs::msg::DrawImage & msg)
  : msg_(msg)
  {}
  Init_DrawImage_rvalue ymax(::tku_msgs::msg::DrawImage::_ymax_type arg)
  {
    msg_.ymax = std::move(arg);
    return Init_DrawImage_rvalue(msg_);
  }

private:
  ::tku_msgs::msg::DrawImage msg_;
};

class Init_DrawImage_ymin
{
public:
  explicit Init_DrawImage_ymin(::tku_msgs::msg::DrawImage & msg)
  : msg_(msg)
  {}
  Init_DrawImage_ymax ymin(::tku_msgs::msg::DrawImage::_ymin_type arg)
  {
    msg_.ymin = std::move(arg);
    return Init_DrawImage_ymax(msg_);
  }

private:
  ::tku_msgs::msg::DrawImage msg_;
};

class Init_DrawImage_xmax
{
public:
  explicit Init_DrawImage_xmax(::tku_msgs::msg::DrawImage & msg)
  : msg_(msg)
  {}
  Init_DrawImage_ymin xmax(::tku_msgs::msg::DrawImage::_xmax_type arg)
  {
    msg_.xmax = std::move(arg);
    return Init_DrawImage_ymin(msg_);
  }

private:
  ::tku_msgs::msg::DrawImage msg_;
};

class Init_DrawImage_xmin
{
public:
  explicit Init_DrawImage_xmin(::tku_msgs::msg::DrawImage & msg)
  : msg_(msg)
  {}
  Init_DrawImage_xmax xmin(::tku_msgs::msg::DrawImage::_xmin_type arg)
  {
    msg_.xmin = std::move(arg);
    return Init_DrawImage_xmax(msg_);
  }

private:
  ::tku_msgs::msg::DrawImage msg_;
};

class Init_DrawImage_mode
{
public:
  explicit Init_DrawImage_mode(::tku_msgs::msg::DrawImage & msg)
  : msg_(msg)
  {}
  Init_DrawImage_xmin mode(::tku_msgs::msg::DrawImage::_mode_type arg)
  {
    msg_.mode = std::move(arg);
    return Init_DrawImage_xmin(msg_);
  }

private:
  ::tku_msgs::msg::DrawImage msg_;
};

class Init_DrawImage_cnt
{
public:
  Init_DrawImage_cnt()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_DrawImage_mode cnt(::tku_msgs::msg::DrawImage::_cnt_type arg)
  {
    msg_.cnt = std::move(arg);
    return Init_DrawImage_mode(msg_);
  }

private:
  ::tku_msgs::msg::DrawImage msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::tku_msgs::msg::DrawImage>()
{
  return tku_msgs::msg::builder::Init_DrawImage_cnt();
}

}  // namespace tku_msgs

#endif  // TKU_MSGS__MSG__DETAIL__DRAW_IMAGE__BUILDER_HPP_
