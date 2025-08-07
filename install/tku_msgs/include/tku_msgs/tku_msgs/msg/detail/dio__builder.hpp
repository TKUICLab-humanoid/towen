// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from tku_msgs:msg/Dio.idl
// generated code does not contain a copyright notice

#ifndef TKU_MSGS__MSG__DETAIL__DIO__BUILDER_HPP_
#define TKU_MSGS__MSG__DETAIL__DIO__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "tku_msgs/msg/detail/dio__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace tku_msgs
{

namespace msg
{

namespace builder
{

class Init_Dio_strategy
{
public:
  explicit Init_Dio_strategy(::tku_msgs::msg::Dio & msg)
  : msg_(msg)
  {}
  ::tku_msgs::msg::Dio strategy(::tku_msgs::msg::Dio::_strategy_type arg)
  {
    msg_.strategy = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tku_msgs::msg::Dio msg_;
};

class Init_Dio_data
{
public:
  Init_Dio_data()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Dio_strategy data(::tku_msgs::msg::Dio::_data_type arg)
  {
    msg_.data = std::move(arg);
    return Init_Dio_strategy(msg_);
  }

private:
  ::tku_msgs::msg::Dio msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::tku_msgs::msg::Dio>()
{
  return tku_msgs::msg::builder::Init_Dio_data();
}

}  // namespace tku_msgs

#endif  // TKU_MSGS__MSG__DETAIL__DIO__BUILDER_HPP_
