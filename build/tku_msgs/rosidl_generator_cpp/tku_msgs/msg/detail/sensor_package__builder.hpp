// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from tku_msgs:msg/SensorPackage.idl
// generated code does not contain a copyright notice

#ifndef TKU_MSGS__MSG__DETAIL__SENSOR_PACKAGE__BUILDER_HPP_
#define TKU_MSGS__MSG__DETAIL__SENSOR_PACKAGE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "tku_msgs/msg/detail/sensor_package__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace tku_msgs
{

namespace msg
{

namespace builder
{

class Init_SensorPackage_roll
{
public:
  explicit Init_SensorPackage_roll(::tku_msgs::msg::SensorPackage & msg)
  : msg_(msg)
  {}
  ::tku_msgs::msg::SensorPackage roll(::tku_msgs::msg::SensorPackage::_roll_type arg)
  {
    msg_.roll = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tku_msgs::msg::SensorPackage msg_;
};

class Init_SensorPackage_pitch
{
public:
  explicit Init_SensorPackage_pitch(::tku_msgs::msg::SensorPackage & msg)
  : msg_(msg)
  {}
  Init_SensorPackage_roll pitch(::tku_msgs::msg::SensorPackage::_pitch_type arg)
  {
    msg_.pitch = std::move(arg);
    return Init_SensorPackage_roll(msg_);
  }

private:
  ::tku_msgs::msg::SensorPackage msg_;
};

class Init_SensorPackage_yaw
{
public:
  explicit Init_SensorPackage_yaw(::tku_msgs::msg::SensorPackage & msg)
  : msg_(msg)
  {}
  Init_SensorPackage_pitch yaw(::tku_msgs::msg::SensorPackage::_yaw_type arg)
  {
    msg_.yaw = std::move(arg);
    return Init_SensorPackage_pitch(msg_);
  }

private:
  ::tku_msgs::msg::SensorPackage msg_;
};

class Init_SensorPackage_forcesensordata
{
public:
  explicit Init_SensorPackage_forcesensordata(::tku_msgs::msg::SensorPackage & msg)
  : msg_(msg)
  {}
  Init_SensorPackage_yaw forcesensordata(::tku_msgs::msg::SensorPackage::_forcesensordata_type arg)
  {
    msg_.forcesensordata = std::move(arg);
    return Init_SensorPackage_yaw(msg_);
  }

private:
  ::tku_msgs::msg::SensorPackage msg_;
};

class Init_SensorPackage_imudata
{
public:
  explicit Init_SensorPackage_imudata(::tku_msgs::msg::SensorPackage & msg)
  : msg_(msg)
  {}
  Init_SensorPackage_forcesensordata imudata(::tku_msgs::msg::SensorPackage::_imudata_type arg)
  {
    msg_.imudata = std::move(arg);
    return Init_SensorPackage_forcesensordata(msg_);
  }

private:
  ::tku_msgs::msg::SensorPackage msg_;
};

class Init_SensorPackage_layout
{
public:
  Init_SensorPackage_layout()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SensorPackage_imudata layout(::tku_msgs::msg::SensorPackage::_layout_type arg)
  {
    msg_.layout = std::move(arg);
    return Init_SensorPackage_imudata(msg_);
  }

private:
  ::tku_msgs::msg::SensorPackage msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::tku_msgs::msg::SensorPackage>()
{
  return tku_msgs::msg::builder::Init_SensorPackage_layout();
}

}  // namespace tku_msgs

#endif  // TKU_MSGS__MSG__DETAIL__SENSOR_PACKAGE__BUILDER_HPP_
