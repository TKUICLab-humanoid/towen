// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from tku_msgs:msg/Parametermessage.idl
// generated code does not contain a copyright notice

#ifndef TKU_MSGS__MSG__DETAIL__PARAMETERMESSAGE__BUILDER_HPP_
#define TKU_MSGS__MSG__DETAIL__PARAMETERMESSAGE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "tku_msgs/msg/detail/parametermessage__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace tku_msgs
{

namespace msg
{

namespace builder
{

class Init_Parametermessage_stand_balance
{
public:
  explicit Init_Parametermessage_stand_balance(::tku_msgs::msg::Parametermessage & msg)
  : msg_(msg)
  {}
  ::tku_msgs::msg::Parametermessage stand_balance(::tku_msgs::msg::Parametermessage::_stand_balance_type arg)
  {
    msg_.stand_balance = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tku_msgs::msg::Parametermessage msg_;
};

class Init_Parametermessage_now_com_height
{
public:
  explicit Init_Parametermessage_now_com_height(::tku_msgs::msg::Parametermessage & msg)
  : msg_(msg)
  {}
  Init_Parametermessage_stand_balance now_com_height(::tku_msgs::msg::Parametermessage::_now_com_height_type arg)
  {
    msg_.now_com_height = std::move(arg);
    return Init_Parametermessage_stand_balance(msg_);
  }

private:
  ::tku_msgs::msg::Parametermessage msg_;
};

class Init_Parametermessage_now_stand_height
{
public:
  explicit Init_Parametermessage_now_stand_height(::tku_msgs::msg::Parametermessage & msg)
  : msg_(msg)
  {}
  Init_Parametermessage_now_com_height now_stand_height(::tku_msgs::msg::Parametermessage::_now_stand_height_type arg)
  {
    msg_.now_stand_height = std::move(arg);
    return Init_Parametermessage_now_com_height(msg_);
  }

private:
  ::tku_msgs::msg::Parametermessage msg_;
};

class Init_Parametermessage_com_y_swing
{
public:
  explicit Init_Parametermessage_com_y_swing(::tku_msgs::msg::Parametermessage & msg)
  : msg_(msg)
  {}
  Init_Parametermessage_now_stand_height com_y_swing(::tku_msgs::msg::Parametermessage::_com_y_swing_type arg)
  {
    msg_.com_y_swing = std::move(arg);
    return Init_Parametermessage_now_stand_height(msg_);
  }

private:
  ::tku_msgs::msg::Parametermessage msg_;
};

class Init_Parametermessage_rightfoot_shift_z
{
public:
  explicit Init_Parametermessage_rightfoot_shift_z(::tku_msgs::msg::Parametermessage & msg)
  : msg_(msg)
  {}
  Init_Parametermessage_com_y_swing rightfoot_shift_z(::tku_msgs::msg::Parametermessage::_rightfoot_shift_z_type arg)
  {
    msg_.rightfoot_shift_z = std::move(arg);
    return Init_Parametermessage_com_y_swing(msg_);
  }

private:
  ::tku_msgs::msg::Parametermessage msg_;
};

class Init_Parametermessage_base_lift_z
{
public:
  explicit Init_Parametermessage_base_lift_z(::tku_msgs::msg::Parametermessage & msg)
  : msg_(msg)
  {}
  Init_Parametermessage_rightfoot_shift_z base_lift_z(::tku_msgs::msg::Parametermessage::_base_lift_z_type arg)
  {
    msg_.base_lift_z = std::move(arg);
    return Init_Parametermessage_rightfoot_shift_z(msg_);
  }

private:
  ::tku_msgs::msg::Parametermessage msg_;
};

class Init_Parametermessage_x_swing_com
{
public:
  explicit Init_Parametermessage_x_swing_com(::tku_msgs::msg::Parametermessage & msg)
  : msg_(msg)
  {}
  Init_Parametermessage_base_lift_z x_swing_com(::tku_msgs::msg::Parametermessage::_x_swing_com_type arg)
  {
    msg_.x_swing_com = std::move(arg);
    return Init_Parametermessage_base_lift_z(msg_);
  }

private:
  ::tku_msgs::msg::Parametermessage msg_;
};

class Init_Parametermessage_y_swing_shift
{
public:
  explicit Init_Parametermessage_y_swing_shift(::tku_msgs::msg::Parametermessage & msg)
  : msg_(msg)
  {}
  Init_Parametermessage_x_swing_com y_swing_shift(::tku_msgs::msg::Parametermessage::_y_swing_shift_type arg)
  {
    msg_.y_swing_shift = std::move(arg);
    return Init_Parametermessage_x_swing_com(msg_);
  }

private:
  ::tku_msgs::msg::Parametermessage msg_;
};

class Init_Parametermessage_base_default_z
{
public:
  explicit Init_Parametermessage_base_default_z(::tku_msgs::msg::Parametermessage & msg)
  : msg_(msg)
  {}
  Init_Parametermessage_y_swing_shift base_default_z(::tku_msgs::msg::Parametermessage::_base_default_z_type arg)
  {
    msg_.base_default_z = std::move(arg);
    return Init_Parametermessage_y_swing_shift(msg_);
  }

private:
  ::tku_msgs::msg::Parametermessage msg_;
};

class Init_Parametermessage_osc_lockrange
{
public:
  explicit Init_Parametermessage_osc_lockrange(::tku_msgs::msg::Parametermessage & msg)
  : msg_(msg)
  {}
  Init_Parametermessage_base_default_z osc_lockrange(::tku_msgs::msg::Parametermessage::_osc_lockrange_type arg)
  {
    msg_.osc_lockrange = std::move(arg);
    return Init_Parametermessage_base_default_z(msg_);
  }

private:
  ::tku_msgs::msg::Parametermessage msg_;
};

class Init_Parametermessage_sample_time
{
public:
  explicit Init_Parametermessage_sample_time(::tku_msgs::msg::Parametermessage & msg)
  : msg_(msg)
  {}
  Init_Parametermessage_osc_lockrange sample_time(::tku_msgs::msg::Parametermessage::_sample_time_type arg)
  {
    msg_.sample_time = std::move(arg);
    return Init_Parametermessage_osc_lockrange(msg_);
  }

private:
  ::tku_msgs::msg::Parametermessage msg_;
};

class Init_Parametermessage_period_t2
{
public:
  explicit Init_Parametermessage_period_t2(::tku_msgs::msg::Parametermessage & msg)
  : msg_(msg)
  {}
  Init_Parametermessage_sample_time period_t2(::tku_msgs::msg::Parametermessage::_period_t2_type arg)
  {
    msg_.period_t2 = std::move(arg);
    return Init_Parametermessage_sample_time(msg_);
  }

private:
  ::tku_msgs::msg::Parametermessage msg_;
};

class Init_Parametermessage_period_t
{
public:
  explicit Init_Parametermessage_period_t(::tku_msgs::msg::Parametermessage & msg)
  : msg_(msg)
  {}
  Init_Parametermessage_period_t2 period_t(::tku_msgs::msg::Parametermessage::_period_t_type arg)
  {
    msg_.period_t = std::move(arg);
    return Init_Parametermessage_period_t2(msg_);
  }

private:
  ::tku_msgs::msg::Parametermessage msg_;
};

class Init_Parametermessage_z_swing_range
{
public:
  explicit Init_Parametermessage_z_swing_range(::tku_msgs::msg::Parametermessage & msg)
  : msg_(msg)
  {}
  Init_Parametermessage_period_t z_swing_range(::tku_msgs::msg::Parametermessage::_z_swing_range_type arg)
  {
    msg_.z_swing_range = std::move(arg);
    return Init_Parametermessage_period_t(msg_);
  }

private:
  ::tku_msgs::msg::Parametermessage msg_;
};

class Init_Parametermessage_y_swing_range
{
public:
  explicit Init_Parametermessage_y_swing_range(::tku_msgs::msg::Parametermessage & msg)
  : msg_(msg)
  {}
  Init_Parametermessage_z_swing_range y_swing_range(::tku_msgs::msg::Parametermessage::_y_swing_range_type arg)
  {
    msg_.y_swing_range = std::move(arg);
    return Init_Parametermessage_z_swing_range(msg_);
  }

private:
  ::tku_msgs::msg::Parametermessage msg_;
};

class Init_Parametermessage_x_swing_range
{
public:
  explicit Init_Parametermessage_x_swing_range(::tku_msgs::msg::Parametermessage & msg)
  : msg_(msg)
  {}
  Init_Parametermessage_y_swing_range x_swing_range(::tku_msgs::msg::Parametermessage::_x_swing_range_type arg)
  {
    msg_.x_swing_range = std::move(arg);
    return Init_Parametermessage_y_swing_range(msg_);
  }

private:
  ::tku_msgs::msg::Parametermessage msg_;
};

class Init_Parametermessage_mode
{
public:
  Init_Parametermessage_mode()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Parametermessage_x_swing_range mode(::tku_msgs::msg::Parametermessage::_mode_type arg)
  {
    msg_.mode = std::move(arg);
    return Init_Parametermessage_x_swing_range(msg_);
  }

private:
  ::tku_msgs::msg::Parametermessage msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::tku_msgs::msg::Parametermessage>()
{
  return tku_msgs::msg::builder::Init_Parametermessage_mode();
}

}  // namespace tku_msgs

#endif  // TKU_MSGS__MSG__DETAIL__PARAMETERMESSAGE__BUILDER_HPP_
