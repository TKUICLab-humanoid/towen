// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from tku_msgs:msg/InterfaceSend2Sector.idl
// generated code does not contain a copyright notice

#ifndef TKU_MSGS__MSG__DETAIL__INTERFACE_SEND2_SECTOR__BUILDER_HPP_
#define TKU_MSGS__MSG__DETAIL__INTERFACE_SEND2_SECTOR__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "tku_msgs/msg/detail/interface_send2_sector__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace tku_msgs
{

namespace msg
{

namespace builder
{

class Init_InterfaceSend2Sector_cnt
{
public:
  explicit Init_InterfaceSend2Sector_cnt(::tku_msgs::msg::InterfaceSend2Sector & msg)
  : msg_(msg)
  {}
  ::tku_msgs::msg::InterfaceSend2Sector cnt(::tku_msgs::msg::InterfaceSend2Sector::_cnt_type arg)
  {
    msg_.cnt = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tku_msgs::msg::InterfaceSend2Sector msg_;
};

class Init_InterfaceSend2Sector_delay
{
public:
  explicit Init_InterfaceSend2Sector_delay(::tku_msgs::msg::InterfaceSend2Sector & msg)
  : msg_(msg)
  {}
  Init_InterfaceSend2Sector_cnt delay(::tku_msgs::msg::InterfaceSend2Sector::_delay_type arg)
  {
    msg_.delay = std::move(arg);
    return Init_InterfaceSend2Sector_cnt(msg_);
  }

private:
  ::tku_msgs::msg::InterfaceSend2Sector msg_;
};

class Init_InterfaceSend2Sector_sectorname
{
public:
  explicit Init_InterfaceSend2Sector_sectorname(::tku_msgs::msg::InterfaceSend2Sector & msg)
  : msg_(msg)
  {}
  Init_InterfaceSend2Sector_delay sectorname(::tku_msgs::msg::InterfaceSend2Sector::_sectorname_type arg)
  {
    msg_.sectorname = std::move(arg);
    return Init_InterfaceSend2Sector_delay(msg_);
  }

private:
  ::tku_msgs::msg::InterfaceSend2Sector msg_;
};

class Init_InterfaceSend2Sector_package
{
public:
  Init_InterfaceSend2Sector_package()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_InterfaceSend2Sector_sectorname package(::tku_msgs::msg::InterfaceSend2Sector::_package_type arg)
  {
    msg_.package = std::move(arg);
    return Init_InterfaceSend2Sector_sectorname(msg_);
  }

private:
  ::tku_msgs::msg::InterfaceSend2Sector msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::tku_msgs::msg::InterfaceSend2Sector>()
{
  return tku_msgs::msg::builder::Init_InterfaceSend2Sector_package();
}

}  // namespace tku_msgs

#endif  // TKU_MSGS__MSG__DETAIL__INTERFACE_SEND2_SECTOR__BUILDER_HPP_
