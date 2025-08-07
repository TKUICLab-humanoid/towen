// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from tku_msgs:msg/ButtonColorForm.idl
// generated code does not contain a copyright notice

#ifndef TKU_MSGS__MSG__DETAIL__BUTTON_COLOR_FORM__BUILDER_HPP_
#define TKU_MSGS__MSG__DETAIL__BUTTON_COLOR_FORM__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "tku_msgs/msg/detail/button_color_form__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace tku_msgs
{

namespace msg
{

namespace builder
{

class Init_ButtonColorForm_buildingmodel
{
public:
  Init_ButtonColorForm_buildingmodel()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::tku_msgs::msg::ButtonColorForm buildingmodel(::tku_msgs::msg::ButtonColorForm::_buildingmodel_type arg)
  {
    msg_.buildingmodel = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tku_msgs::msg::ButtonColorForm msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::tku_msgs::msg::ButtonColorForm>()
{
  return tku_msgs::msg::builder::Init_ButtonColorForm_buildingmodel();
}

}  // namespace tku_msgs

#endif  // TKU_MSGS__MSG__DETAIL__BUTTON_COLOR_FORM__BUILDER_HPP_
