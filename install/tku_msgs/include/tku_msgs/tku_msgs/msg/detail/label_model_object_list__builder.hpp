// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from tku_msgs:msg/LabelModelObjectList.idl
// generated code does not contain a copyright notice

#ifndef TKU_MSGS__MSG__DETAIL__LABEL_MODEL_OBJECT_LIST__BUILDER_HPP_
#define TKU_MSGS__MSG__DETAIL__LABEL_MODEL_OBJECT_LIST__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "tku_msgs/msg/detail/label_model_object_list__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace tku_msgs
{

namespace msg
{

namespace builder
{

class Init_LabelModelObjectList_labelmodel
{
public:
  Init_LabelModelObjectList_labelmodel()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::tku_msgs::msg::LabelModelObjectList labelmodel(::tku_msgs::msg::LabelModelObjectList::_labelmodel_type arg)
  {
    msg_.labelmodel = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tku_msgs::msg::LabelModelObjectList msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::tku_msgs::msg::LabelModelObjectList>()
{
  return tku_msgs::msg::builder::Init_LabelModelObjectList_labelmodel();
}

}  // namespace tku_msgs

#endif  // TKU_MSGS__MSG__DETAIL__LABEL_MODEL_OBJECT_LIST__BUILDER_HPP_
