// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from tku_msgs:msg/SaveMotion.idl
// generated code does not contain a copyright notice

#ifndef TKU_MSGS__MSG__DETAIL__SAVE_MOTION__BUILDER_HPP_
#define TKU_MSGS__MSG__DETAIL__SAVE_MOTION__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "tku_msgs/msg/detail/save_motion__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace tku_msgs
{

namespace msg
{

namespace builder
{

class Init_SaveMotion_motordata
{
public:
  explicit Init_SaveMotion_motordata(::tku_msgs::msg::SaveMotion & msg)
  : msg_(msg)
  {}
  ::tku_msgs::msg::SaveMotion motordata(::tku_msgs::msg::SaveMotion::_motordata_type arg)
  {
    msg_.motordata = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tku_msgs::msg::SaveMotion msg_;
};

class Init_SaveMotion_motionlist
{
public:
  explicit Init_SaveMotion_motionlist(::tku_msgs::msg::SaveMotion & msg)
  : msg_(msg)
  {}
  Init_SaveMotion_motordata motionlist(::tku_msgs::msg::SaveMotion::_motionlist_type arg)
  {
    msg_.motionlist = std::move(arg);
    return Init_SaveMotion_motordata(msg_);
  }

private:
  ::tku_msgs::msg::SaveMotion msg_;
};

class Init_SaveMotion_saveflag
{
public:
  explicit Init_SaveMotion_saveflag(::tku_msgs::msg::SaveMotion & msg)
  : msg_(msg)
  {}
  Init_SaveMotion_motionlist saveflag(::tku_msgs::msg::SaveMotion::_saveflag_type arg)
  {
    msg_.saveflag = std::move(arg);
    return Init_SaveMotion_motionlist(msg_);
  }

private:
  ::tku_msgs::msg::SaveMotion msg_;
};

class Init_SaveMotion_savestate
{
public:
  explicit Init_SaveMotion_savestate(::tku_msgs::msg::SaveMotion & msg)
  : msg_(msg)
  {}
  Init_SaveMotion_saveflag savestate(::tku_msgs::msg::SaveMotion::_savestate_type arg)
  {
    msg_.savestate = std::move(arg);
    return Init_SaveMotion_saveflag(msg_);
  }

private:
  ::tku_msgs::msg::SaveMotion msg_;
};

class Init_SaveMotion_id
{
public:
  explicit Init_SaveMotion_id(::tku_msgs::msg::SaveMotion & msg)
  : msg_(msg)
  {}
  Init_SaveMotion_savestate id(::tku_msgs::msg::SaveMotion::_id_type arg)
  {
    msg_.id = std::move(arg);
    return Init_SaveMotion_savestate(msg_);
  }

private:
  ::tku_msgs::msg::SaveMotion msg_;
};

class Init_SaveMotion_motionstate
{
public:
  explicit Init_SaveMotion_motionstate(::tku_msgs::msg::SaveMotion & msg)
  : msg_(msg)
  {}
  Init_SaveMotion_id motionstate(::tku_msgs::msg::SaveMotion::_motionstate_type arg)
  {
    msg_.motionstate = std::move(arg);
    return Init_SaveMotion_id(msg_);
  }

private:
  ::tku_msgs::msg::SaveMotion msg_;
};

class Init_SaveMotion_name
{
public:
  explicit Init_SaveMotion_name(::tku_msgs::msg::SaveMotion & msg)
  : msg_(msg)
  {}
  Init_SaveMotion_motionstate name(::tku_msgs::msg::SaveMotion::_name_type arg)
  {
    msg_.name = std::move(arg);
    return Init_SaveMotion_motionstate(msg_);
  }

private:
  ::tku_msgs::msg::SaveMotion msg_;
};

class Init_SaveMotion_layout
{
public:
  Init_SaveMotion_layout()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SaveMotion_name layout(::tku_msgs::msg::SaveMotion::_layout_type arg)
  {
    msg_.layout = std::move(arg);
    return Init_SaveMotion_name(msg_);
  }

private:
  ::tku_msgs::msg::SaveMotion msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::tku_msgs::msg::SaveMotion>()
{
  return tku_msgs::msg::builder::Init_SaveMotion_layout();
}

}  // namespace tku_msgs

#endif  // TKU_MSGS__MSG__DETAIL__SAVE_MOTION__BUILDER_HPP_
