// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from tku_msgs:srv/ReadMotion.idl
// generated code does not contain a copyright notice

#ifndef TKU_MSGS__SRV__DETAIL__READ_MOTION__BUILDER_HPP_
#define TKU_MSGS__SRV__DETAIL__READ_MOTION__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "tku_msgs/srv/detail/read_motion__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace tku_msgs
{

namespace srv
{

namespace builder
{

class Init_ReadMotion_Request_readstate
{
public:
  explicit Init_ReadMotion_Request_readstate(::tku_msgs::srv::ReadMotion_Request & msg)
  : msg_(msg)
  {}
  ::tku_msgs::srv::ReadMotion_Request readstate(::tku_msgs::srv::ReadMotion_Request::_readstate_type arg)
  {
    msg_.readstate = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tku_msgs::srv::ReadMotion_Request msg_;
};

class Init_ReadMotion_Request_name
{
public:
  explicit Init_ReadMotion_Request_name(::tku_msgs::srv::ReadMotion_Request & msg)
  : msg_(msg)
  {}
  Init_ReadMotion_Request_readstate name(::tku_msgs::srv::ReadMotion_Request::_name_type arg)
  {
    msg_.name = std::move(arg);
    return Init_ReadMotion_Request_readstate(msg_);
  }

private:
  ::tku_msgs::srv::ReadMotion_Request msg_;
};

class Init_ReadMotion_Request_read
{
public:
  Init_ReadMotion_Request_read()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ReadMotion_Request_name read(::tku_msgs::srv::ReadMotion_Request::_read_type arg)
  {
    msg_.read = std::move(arg);
    return Init_ReadMotion_Request_name(msg_);
  }

private:
  ::tku_msgs::srv::ReadMotion_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::tku_msgs::srv::ReadMotion_Request>()
{
  return tku_msgs::srv::builder::Init_ReadMotion_Request_read();
}

}  // namespace tku_msgs


namespace tku_msgs
{

namespace srv
{

namespace builder
{

class Init_ReadMotion_Response_absolutedata
{
public:
  explicit Init_ReadMotion_Response_absolutedata(::tku_msgs::srv::ReadMotion_Response & msg)
  : msg_(msg)
  {}
  ::tku_msgs::srv::ReadMotion_Response absolutedata(::tku_msgs::srv::ReadMotion_Response::_absolutedata_type arg)
  {
    msg_.absolutedata = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tku_msgs::srv::ReadMotion_Response msg_;
};

class Init_ReadMotion_Response_relativedata
{
public:
  explicit Init_ReadMotion_Response_relativedata(::tku_msgs::srv::ReadMotion_Response & msg)
  : msg_(msg)
  {}
  Init_ReadMotion_Response_absolutedata relativedata(::tku_msgs::srv::ReadMotion_Response::_relativedata_type arg)
  {
    msg_.relativedata = std::move(arg);
    return Init_ReadMotion_Response_absolutedata(msg_);
  }

private:
  ::tku_msgs::srv::ReadMotion_Response msg_;
};

class Init_ReadMotion_Response_motionlist
{
public:
  explicit Init_ReadMotion_Response_motionlist(::tku_msgs::srv::ReadMotion_Response & msg)
  : msg_(msg)
  {}
  Init_ReadMotion_Response_relativedata motionlist(::tku_msgs::srv::ReadMotion_Response::_motionlist_type arg)
  {
    msg_.motionlist = std::move(arg);
    return Init_ReadMotion_Response_relativedata(msg_);
  }

private:
  ::tku_msgs::srv::ReadMotion_Response msg_;
};

class Init_ReadMotion_Response_id
{
public:
  explicit Init_ReadMotion_Response_id(::tku_msgs::srv::ReadMotion_Response & msg)
  : msg_(msg)
  {}
  Init_ReadMotion_Response_motionlist id(::tku_msgs::srv::ReadMotion_Response::_id_type arg)
  {
    msg_.id = std::move(arg);
    return Init_ReadMotion_Response_motionlist(msg_);
  }

private:
  ::tku_msgs::srv::ReadMotion_Response msg_;
};

class Init_ReadMotion_Response_motionstate
{
public:
  explicit Init_ReadMotion_Response_motionstate(::tku_msgs::srv::ReadMotion_Response & msg)
  : msg_(msg)
  {}
  Init_ReadMotion_Response_id motionstate(::tku_msgs::srv::ReadMotion_Response::_motionstate_type arg)
  {
    msg_.motionstate = std::move(arg);
    return Init_ReadMotion_Response_id(msg_);
  }

private:
  ::tku_msgs::srv::ReadMotion_Response msg_;
};

class Init_ReadMotion_Response_vectorcnt
{
public:
  explicit Init_ReadMotion_Response_vectorcnt(::tku_msgs::srv::ReadMotion_Response & msg)
  : msg_(msg)
  {}
  Init_ReadMotion_Response_motionstate vectorcnt(::tku_msgs::srv::ReadMotion_Response::_vectorcnt_type arg)
  {
    msg_.vectorcnt = std::move(arg);
    return Init_ReadMotion_Response_motionstate(msg_);
  }

private:
  ::tku_msgs::srv::ReadMotion_Response msg_;
};

class Init_ReadMotion_Response_readcheck
{
public:
  Init_ReadMotion_Response_readcheck()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ReadMotion_Response_vectorcnt readcheck(::tku_msgs::srv::ReadMotion_Response::_readcheck_type arg)
  {
    msg_.readcheck = std::move(arg);
    return Init_ReadMotion_Response_vectorcnt(msg_);
  }

private:
  ::tku_msgs::srv::ReadMotion_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::tku_msgs::srv::ReadMotion_Response>()
{
  return tku_msgs::srv::builder::Init_ReadMotion_Response_readcheck();
}

}  // namespace tku_msgs

#endif  // TKU_MSGS__SRV__DETAIL__READ_MOTION__BUILDER_HPP_
