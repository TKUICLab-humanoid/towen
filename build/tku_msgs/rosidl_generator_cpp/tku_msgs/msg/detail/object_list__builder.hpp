// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from tku_msgs:msg/ObjectList.idl
// generated code does not contain a copyright notice

#ifndef TKU_MSGS__MSG__DETAIL__OBJECT_LIST__BUILDER_HPP_
#define TKU_MSGS__MSG__DETAIL__OBJECT_LIST__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "tku_msgs/msg/detail/object_list__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace tku_msgs
{

namespace msg
{

namespace builder
{

class Init_ObjectList_objectlist
{
public:
  Init_ObjectList_objectlist()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::tku_msgs::msg::ObjectList objectlist(::tku_msgs::msg::ObjectList::_objectlist_type arg)
  {
    msg_.objectlist = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tku_msgs::msg::ObjectList msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::tku_msgs::msg::ObjectList>()
{
  return tku_msgs::msg::builder::Init_ObjectList_objectlist();
}

}  // namespace tku_msgs

#endif  // TKU_MSGS__MSG__DETAIL__OBJECT_LIST__BUILDER_HPP_
