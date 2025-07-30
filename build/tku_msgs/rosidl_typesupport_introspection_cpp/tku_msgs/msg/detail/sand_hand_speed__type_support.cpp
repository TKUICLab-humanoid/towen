// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from tku_msgs:msg/SandHandSpeed.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "tku_msgs/msg/detail/sand_hand_speed__struct.hpp"
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

void SandHandSpeed_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) tku_msgs::msg::SandHandSpeed(_init);
}

void SandHandSpeed_fini_function(void * message_memory)
{
  auto typed_message = static_cast<tku_msgs::msg::SandHandSpeed *>(message_memory);
  typed_message->~SandHandSpeed();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember SandHandSpeed_message_member_array[2] = {
  {
    "sector",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT16,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tku_msgs::msg::SandHandSpeed, sector),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "speed",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT16,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tku_msgs::msg::SandHandSpeed, speed),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers SandHandSpeed_message_members = {
  "tku_msgs::msg",  // message namespace
  "SandHandSpeed",  // message name
  2,  // number of fields
  sizeof(tku_msgs::msg::SandHandSpeed),
  SandHandSpeed_message_member_array,  // message members
  SandHandSpeed_init_function,  // function to initialize message memory (memory has to be allocated)
  SandHandSpeed_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t SandHandSpeed_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &SandHandSpeed_message_members,
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
get_message_type_support_handle<tku_msgs::msg::SandHandSpeed>()
{
  return &::tku_msgs::msg::rosidl_typesupport_introspection_cpp::SandHandSpeed_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, tku_msgs, msg, SandHandSpeed)() {
  return &::tku_msgs::msg::rosidl_typesupport_introspection_cpp::SandHandSpeed_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
