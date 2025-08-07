// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from tku_msgs:msg/ColorArray.idl
// generated code does not contain a copyright notice

#ifndef TKU_MSGS__MSG__DETAIL__COLOR_ARRAY__BUILDER_HPP_
#define TKU_MSGS__MSG__DETAIL__COLOR_ARRAY__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "tku_msgs/msg/detail/color_array__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace tku_msgs
{

namespace msg
{

namespace builder
{

class Init_ColorArray_colorarray
{
public:
  explicit Init_ColorArray_colorarray(::tku_msgs::msg::ColorArray & msg)
  : msg_(msg)
  {}
  ::tku_msgs::msg::ColorArray colorarray(::tku_msgs::msg::ColorArray::_colorarray_type arg)
  {
    msg_.colorarray = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tku_msgs::msg::ColorArray msg_;
};

class Init_ColorArray_cnt
{
public:
  Init_ColorArray_cnt()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ColorArray_colorarray cnt(::tku_msgs::msg::ColorArray::_cnt_type arg)
  {
    msg_.cnt = std::move(arg);
    return Init_ColorArray_colorarray(msg_);
  }

private:
  ::tku_msgs::msg::ColorArray msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::tku_msgs::msg::ColorArray>()
{
  return tku_msgs::msg::builder::Init_ColorArray_cnt();
}

}  // namespace tku_msgs

#endif  // TKU_MSGS__MSG__DETAIL__COLOR_ARRAY__BUILDER_HPP_
