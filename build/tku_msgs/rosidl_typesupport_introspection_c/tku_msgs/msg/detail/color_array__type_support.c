// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from tku_msgs:msg/ColorArray.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "tku_msgs/msg/detail/color_array__rosidl_typesupport_introspection_c.h"
#include "tku_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "tku_msgs/msg/detail/color_array__functions.h"
#include "tku_msgs/msg/detail/color_array__struct.h"


// Include directives for member types
// Member `colorarray`
#include "tku_msgs/msg/color_data.h"
// Member `colorarray`
#include "tku_msgs/msg/detail/color_data__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void tku_msgs__msg__ColorArray__rosidl_typesupport_introspection_c__ColorArray_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  tku_msgs__msg__ColorArray__init(message_memory);
}

void tku_msgs__msg__ColorArray__rosidl_typesupport_introspection_c__ColorArray_fini_function(void * message_memory)
{
  tku_msgs__msg__ColorArray__fini(message_memory);
}

size_t tku_msgs__msg__ColorArray__rosidl_typesupport_introspection_c__size_function__ColorArray__colorarray(
  const void * untyped_member)
{
  const tku_msgs__msg__ColorData__Sequence * member =
    (const tku_msgs__msg__ColorData__Sequence *)(untyped_member);
  return member->size;
}

const void * tku_msgs__msg__ColorArray__rosidl_typesupport_introspection_c__get_const_function__ColorArray__colorarray(
  const void * untyped_member, size_t index)
{
  const tku_msgs__msg__ColorData__Sequence * member =
    (const tku_msgs__msg__ColorData__Sequence *)(untyped_member);
  return &member->data[index];
}

void * tku_msgs__msg__ColorArray__rosidl_typesupport_introspection_c__get_function__ColorArray__colorarray(
  void * untyped_member, size_t index)
{
  tku_msgs__msg__ColorData__Sequence * member =
    (tku_msgs__msg__ColorData__Sequence *)(untyped_member);
  return &member->data[index];
}

void tku_msgs__msg__ColorArray__rosidl_typesupport_introspection_c__fetch_function__ColorArray__colorarray(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const tku_msgs__msg__ColorData * item =
    ((const tku_msgs__msg__ColorData *)
    tku_msgs__msg__ColorArray__rosidl_typesupport_introspection_c__get_const_function__ColorArray__colorarray(untyped_member, index));
  tku_msgs__msg__ColorData * value =
    (tku_msgs__msg__ColorData *)(untyped_value);
  *value = *item;
}

void tku_msgs__msg__ColorArray__rosidl_typesupport_introspection_c__assign_function__ColorArray__colorarray(
  void * untyped_member, size_t index, const void * untyped_value)
{
  tku_msgs__msg__ColorData * item =
    ((tku_msgs__msg__ColorData *)
    tku_msgs__msg__ColorArray__rosidl_typesupport_introspection_c__get_function__ColorArray__colorarray(untyped_member, index));
  const tku_msgs__msg__ColorData * value =
    (const tku_msgs__msg__ColorData *)(untyped_value);
  *item = *value;
}

bool tku_msgs__msg__ColorArray__rosidl_typesupport_introspection_c__resize_function__ColorArray__colorarray(
  void * untyped_member, size_t size)
{
  tku_msgs__msg__ColorData__Sequence * member =
    (tku_msgs__msg__ColorData__Sequence *)(untyped_member);
  tku_msgs__msg__ColorData__Sequence__fini(member);
  return tku_msgs__msg__ColorData__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember tku_msgs__msg__ColorArray__rosidl_typesupport_introspection_c__ColorArray_message_member_array[2] = {
  {
    "cnt",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tku_msgs__msg__ColorArray, cnt),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "colorarray",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tku_msgs__msg__ColorArray, colorarray),  // bytes offset in struct
    NULL,  // default value
    tku_msgs__msg__ColorArray__rosidl_typesupport_introspection_c__size_function__ColorArray__colorarray,  // size() function pointer
    tku_msgs__msg__ColorArray__rosidl_typesupport_introspection_c__get_const_function__ColorArray__colorarray,  // get_const(index) function pointer
    tku_msgs__msg__ColorArray__rosidl_typesupport_introspection_c__get_function__ColorArray__colorarray,  // get(index) function pointer
    tku_msgs__msg__ColorArray__rosidl_typesupport_introspection_c__fetch_function__ColorArray__colorarray,  // fetch(index, &value) function pointer
    tku_msgs__msg__ColorArray__rosidl_typesupport_introspection_c__assign_function__ColorArray__colorarray,  // assign(index, value) function pointer
    tku_msgs__msg__ColorArray__rosidl_typesupport_introspection_c__resize_function__ColorArray__colorarray  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers tku_msgs__msg__ColorArray__rosidl_typesupport_introspection_c__ColorArray_message_members = {
  "tku_msgs__msg",  // message namespace
  "ColorArray",  // message name
  2,  // number of fields
  sizeof(tku_msgs__msg__ColorArray),
  tku_msgs__msg__ColorArray__rosidl_typesupport_introspection_c__ColorArray_message_member_array,  // message members
  tku_msgs__msg__ColorArray__rosidl_typesupport_introspection_c__ColorArray_init_function,  // function to initialize message memory (memory has to be allocated)
  tku_msgs__msg__ColorArray__rosidl_typesupport_introspection_c__ColorArray_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t tku_msgs__msg__ColorArray__rosidl_typesupport_introspection_c__ColorArray_message_type_support_handle = {
  0,
  &tku_msgs__msg__ColorArray__rosidl_typesupport_introspection_c__ColorArray_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_tku_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tku_msgs, msg, ColorArray)() {
  tku_msgs__msg__ColorArray__rosidl_typesupport_introspection_c__ColorArray_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tku_msgs, msg, ColorData)();
  if (!tku_msgs__msg__ColorArray__rosidl_typesupport_introspection_c__ColorArray_message_type_support_handle.typesupport_identifier) {
    tku_msgs__msg__ColorArray__rosidl_typesupport_introspection_c__ColorArray_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &tku_msgs__msg__ColorArray__rosidl_typesupport_introspection_c__ColorArray_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
