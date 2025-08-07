// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from tku_msgs:msg/SaveMotionVector.idl
// generated code does not contain a copyright notice

#ifndef TKU_MSGS__MSG__DETAIL__SAVE_MOTION_VECTOR__BUILDER_HPP_
#define TKU_MSGS__MSG__DETAIL__SAVE_MOTION_VECTOR__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "tku_msgs/msg/detail/save_motion_vector__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace tku_msgs
{

namespace msg
{

namespace builder
{

class Init_SaveMotionVector_savemotionvector
{
public:
  Init_SaveMotionVector_savemotionvector()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::tku_msgs::msg::SaveMotionVector savemotionvector(::tku_msgs::msg::SaveMotionVector::_savemotionvector_type arg)
  {
    msg_.savemotionvector = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tku_msgs::msg::SaveMotionVector msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::tku_msgs::msg::SaveMotionVector>()
{
  return tku_msgs::msg::builder::Init_SaveMotionVector_savemotionvector();
}

}  // namespace tku_msgs

#endif  // TKU_MSGS__MSG__DETAIL__SAVE_MOTION_VECTOR__BUILDER_HPP_
