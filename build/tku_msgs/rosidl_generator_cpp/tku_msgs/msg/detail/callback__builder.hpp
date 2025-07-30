// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from tku_msgs:msg/Callback.idl
// generated code does not contain a copyright notice

#ifndef TKU_MSGS__MSG__DETAIL__CALLBACK__BUILDER_HPP_
#define TKU_MSGS__MSG__DETAIL__CALLBACK__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "tku_msgs/msg/detail/callback__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace tku_msgs
{

namespace msg
{

namespace builder
{

class Init_Callback_sector
{
public:
  explicit Init_Callback_sector(::tku_msgs::msg::Callback & msg)
  : msg_(msg)
  {}
  ::tku_msgs::msg::Callback sector(::tku_msgs::msg::Callback::_sector_type arg)
  {
    msg_.sector = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tku_msgs::msg::Callback msg_;
};

class Init_Callback_data
{
public:
  Init_Callback_data()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Callback_sector data(::tku_msgs::msg::Callback::_data_type arg)
  {
    msg_.data = std::move(arg);
    return Init_Callback_sector(msg_);
  }

private:
  ::tku_msgs::msg::Callback msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::tku_msgs::msg::Callback>()
{
  return tku_msgs::msg::builder::Init_Callback_data();
}

}  // namespace tku_msgs

#endif  // TKU_MSGS__MSG__DETAIL__CALLBACK__BUILDER_HPP_
