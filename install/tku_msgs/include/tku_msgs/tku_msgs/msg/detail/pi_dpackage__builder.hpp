// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from tku_msgs:msg/PIDpackage.idl
// generated code does not contain a copyright notice

#ifndef TKU_MSGS__MSG__DETAIL__PI_DPACKAGE__BUILDER_HPP_
#define TKU_MSGS__MSG__DETAIL__PI_DPACKAGE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "tku_msgs/msg/detail/pi_dpackage__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace tku_msgs
{

namespace msg
{

namespace builder
{

class Init_PIDpackage_motorid
{
public:
  explicit Init_PIDpackage_motorid(::tku_msgs::msg::PIDpackage & msg)
  : msg_(msg)
  {}
  ::tku_msgs::msg::PIDpackage motorid(::tku_msgs::msg::PIDpackage::_motorid_type arg)
  {
    msg_.motorid = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tku_msgs::msg::PIDpackage msg_;
};

class Init_PIDpackage_dflag
{
public:
  explicit Init_PIDpackage_dflag(::tku_msgs::msg::PIDpackage & msg)
  : msg_(msg)
  {}
  Init_PIDpackage_motorid dflag(::tku_msgs::msg::PIDpackage::_dflag_type arg)
  {
    msg_.dflag = std::move(arg);
    return Init_PIDpackage_motorid(msg_);
  }

private:
  ::tku_msgs::msg::PIDpackage msg_;
};

class Init_PIDpackage_iflag
{
public:
  explicit Init_PIDpackage_iflag(::tku_msgs::msg::PIDpackage & msg)
  : msg_(msg)
  {}
  Init_PIDpackage_dflag iflag(::tku_msgs::msg::PIDpackage::_iflag_type arg)
  {
    msg_.iflag = std::move(arg);
    return Init_PIDpackage_dflag(msg_);
  }

private:
  ::tku_msgs::msg::PIDpackage msg_;
};

class Init_PIDpackage_pflag
{
public:
  explicit Init_PIDpackage_pflag(::tku_msgs::msg::PIDpackage & msg)
  : msg_(msg)
  {}
  Init_PIDpackage_iflag pflag(::tku_msgs::msg::PIDpackage::_pflag_type arg)
  {
    msg_.pflag = std::move(arg);
    return Init_PIDpackage_iflag(msg_);
  }

private:
  ::tku_msgs::msg::PIDpackage msg_;
};

class Init_PIDpackage_motor_d
{
public:
  explicit Init_PIDpackage_motor_d(::tku_msgs::msg::PIDpackage & msg)
  : msg_(msg)
  {}
  Init_PIDpackage_pflag motor_d(::tku_msgs::msg::PIDpackage::_motor_d_type arg)
  {
    msg_.motor_d = std::move(arg);
    return Init_PIDpackage_pflag(msg_);
  }

private:
  ::tku_msgs::msg::PIDpackage msg_;
};

class Init_PIDpackage_motor_i
{
public:
  explicit Init_PIDpackage_motor_i(::tku_msgs::msg::PIDpackage & msg)
  : msg_(msg)
  {}
  Init_PIDpackage_motor_d motor_i(::tku_msgs::msg::PIDpackage::_motor_i_type arg)
  {
    msg_.motor_i = std::move(arg);
    return Init_PIDpackage_motor_d(msg_);
  }

private:
  ::tku_msgs::msg::PIDpackage msg_;
};

class Init_PIDpackage_motor_p
{
public:
  Init_PIDpackage_motor_p()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PIDpackage_motor_i motor_p(::tku_msgs::msg::PIDpackage::_motor_p_type arg)
  {
    msg_.motor_p = std::move(arg);
    return Init_PIDpackage_motor_i(msg_);
  }

private:
  ::tku_msgs::msg::PIDpackage msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::tku_msgs::msg::PIDpackage>()
{
  return tku_msgs::msg::builder::Init_PIDpackage_motor_p();
}

}  // namespace tku_msgs

#endif  // TKU_MSGS__MSG__DETAIL__PI_DPACKAGE__BUILDER_HPP_
