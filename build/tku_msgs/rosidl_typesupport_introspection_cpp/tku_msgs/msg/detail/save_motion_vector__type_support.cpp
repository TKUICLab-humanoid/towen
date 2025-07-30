// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from tku_msgs:msg/SaveMotionVector.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "tku_msgs/msg/detail/save_motion_vector__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace tku_msgs
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void SaveMotionVector_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) tku_msgs::msg::SaveMotionVector(_init);
}

void SaveMotionVector_fini_function(void * message_memory)
{
  auto typed_message = static_cast<tku_msgs::msg::SaveMotionVector *>(message_memory);
  typed_message->~SaveMotionVector();
}

size_t size_function__SaveMotionVector__savemotionvector(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<tku_msgs::msg::SaveMotion> *>(untyped_member);
  return member->size();
}

const void * get_const_function__SaveMotionVector__savemotionvector(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<tku_msgs::msg::SaveMotion> *>(untyped_member);
  return &member[index];
}

void * get_function__SaveMotionVector__savemotionvector(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<tku_msgs::msg::SaveMotion> *>(untyped_member);
  return &member[index];
}

void fetch_function__SaveMotionVector__savemotionvector(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const tku_msgs::msg::SaveMotion *>(
    get_const_function__SaveMotionVector__savemotionvector(untyped_member, index));
  auto & value = *reinterpret_cast<tku_msgs::msg::SaveMotion *>(untyped_value);
  value = item;
}

void assign_function__SaveMotionVector__savemotionvector(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<tku_msgs::msg::SaveMotion *>(
    get_function__SaveMotionVector__savemotionvector(untyped_member, index));
  const auto & value = *reinterpret_cast<const tku_msgs::msg::SaveMotion *>(untyped_value);
  item = value;
}

void resize_function__SaveMotionVector__savemotionvector(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<tku_msgs::msg::SaveMotion> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember SaveMotionVector_message_member_array[1] = {
  {
    "savemotionvector",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<tku_msgs::msg::SaveMotion>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tku_msgs::msg::SaveMotionVector, savemotionvector),  // bytes offset in struct
    nullptr,  // default value
    size_function__SaveMotionVector__savemotionvector,  // size() function pointer
    get_const_function__SaveMotionVector__savemotionvector,  // get_const(index) function pointer
    get_function__SaveMotionVector__savemotionvector,  // get(index) function pointer
    fetch_function__SaveMotionVector__savemotionvector,  // fetch(index, &value) function pointer
    assign_function__SaveMotionVector__savemotionvector,  // assign(index, value) function pointer
    resize_function__SaveMotionVector__savemotionvector  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers SaveMotionVector_message_members = {
  "tku_msgs::msg",  // message namespace
  "SaveMotionVector",  // message name
  1,  // number of fields
  sizeof(tku_msgs::msg::SaveMotionVector),
  SaveMotionVector_message_member_array,  // message members
  SaveMotionVector_init_function,  // function to initialize message memory (memory has to be allocated)
  SaveMotionVector_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t SaveMotionVector_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &SaveMotionVector_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace tku_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<tku_msgs::msg::SaveMotionVector>()
{
  return &::tku_msgs::msg::rosidl_typesupport_introspection_cpp::SaveMotionVector_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, tku_msgs, msg, SaveMotionVector)() {
  return &::tku_msgs::msg::rosidl_typesupport_introspection_cpp::SaveMotionVector_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
