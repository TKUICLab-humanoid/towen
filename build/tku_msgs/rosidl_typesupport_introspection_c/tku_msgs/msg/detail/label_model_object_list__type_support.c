// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from tku_msgs:msg/LabelModelObjectList.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "tku_msgs/msg/detail/label_model_object_list__rosidl_typesupport_introspection_c.h"
#include "tku_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "tku_msgs/msg/detail/label_model_object_list__functions.h"
#include "tku_msgs/msg/detail/label_model_object_list__struct.h"


// Include directives for member types
// Member `labelmodel`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void tku_msgs__msg__LabelModelObjectList__rosidl_typesupport_introspection_c__LabelModelObjectList_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  tku_msgs__msg__LabelModelObjectList__init(message_memory);
}

void tku_msgs__msg__LabelModelObjectList__rosidl_typesupport_introspection_c__LabelModelObjectList_fini_function(void * message_memory)
{
  tku_msgs__msg__LabelModelObjectList__fini(message_memory);
}

size_t tku_msgs__msg__LabelModelObjectList__rosidl_typesupport_introspection_c__size_function__LabelModelObjectList__labelmodel(
  const void * untyped_member)
{
  const rosidl_runtime_c__uint8__Sequence * member =
    (const rosidl_runtime_c__uint8__Sequence *)(untyped_member);
  return member->size;
}

const void * tku_msgs__msg__LabelModelObjectList__rosidl_typesupport_introspection_c__get_const_function__LabelModelObjectList__labelmodel(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__uint8__Sequence * member =
    (const rosidl_runtime_c__uint8__Sequence *)(untyped_member);
  return &member->data[index];
}

void * tku_msgs__msg__LabelModelObjectList__rosidl_typesupport_introspection_c__get_function__LabelModelObjectList__labelmodel(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__uint8__Sequence * member =
    (rosidl_runtime_c__uint8__Sequence *)(untyped_member);
  return &member->data[index];
}

void tku_msgs__msg__LabelModelObjectList__rosidl_typesupport_introspection_c__fetch_function__LabelModelObjectList__labelmodel(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const uint8_t * item =
    ((const uint8_t *)
    tku_msgs__msg__LabelModelObjectList__rosidl_typesupport_introspection_c__get_const_function__LabelModelObjectList__labelmodel(untyped_member, index));
  uint8_t * value =
    (uint8_t *)(untyped_value);
  *value = *item;
}

void tku_msgs__msg__LabelModelObjectList__rosidl_typesupport_introspection_c__assign_function__LabelModelObjectList__labelmodel(
  void * untyped_member, size_t index, const void * untyped_value)
{
  uint8_t * item =
    ((uint8_t *)
    tku_msgs__msg__LabelModelObjectList__rosidl_typesupport_introspection_c__get_function__LabelModelObjectList__labelmodel(untyped_member, index));
  const uint8_t * value =
    (const uint8_t *)(untyped_value);
  *item = *value;
}

bool tku_msgs__msg__LabelModelObjectList__rosidl_typesupport_introspection_c__resize_function__LabelModelObjectList__labelmodel(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__uint8__Sequence * member =
    (rosidl_runtime_c__uint8__Sequence *)(untyped_member);
  rosidl_runtime_c__uint8__Sequence__fini(member);
  return rosidl_runtime_c__uint8__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember tku_msgs__msg__LabelModelObjectList__rosidl_typesupport_introspection_c__LabelModelObjectList_message_member_array[1] = {
  {
    "labelmodel",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tku_msgs__msg__LabelModelObjectList, labelmodel),  // bytes offset in struct
    NULL,  // default value
    tku_msgs__msg__LabelModelObjectList__rosidl_typesupport_introspection_c__size_function__LabelModelObjectList__labelmodel,  // size() function pointer
    tku_msgs__msg__LabelModelObjectList__rosidl_typesupport_introspection_c__get_const_function__LabelModelObjectList__labelmodel,  // get_const(index) function pointer
    tku_msgs__msg__LabelModelObjectList__rosidl_typesupport_introspection_c__get_function__LabelModelObjectList__labelmodel,  // get(index) function pointer
    tku_msgs__msg__LabelModelObjectList__rosidl_typesupport_introspection_c__fetch_function__LabelModelObjectList__labelmodel,  // fetch(index, &value) function pointer
    tku_msgs__msg__LabelModelObjectList__rosidl_typesupport_introspection_c__assign_function__LabelModelObjectList__labelmodel,  // assign(index, value) function pointer
    tku_msgs__msg__LabelModelObjectList__rosidl_typesupport_introspection_c__resize_function__LabelModelObjectList__labelmodel  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers tku_msgs__msg__LabelModelObjectList__rosidl_typesupport_introspection_c__LabelModelObjectList_message_members = {
  "tku_msgs__msg",  // message namespace
  "LabelModelObjectList",  // message name
  1,  // number of fields
  sizeof(tku_msgs__msg__LabelModelObjectList),
  tku_msgs__msg__LabelModelObjectList__rosidl_typesupport_introspection_c__LabelModelObjectList_message_member_array,  // message members
  tku_msgs__msg__LabelModelObjectList__rosidl_typesupport_introspection_c__LabelModelObjectList_init_function,  // function to initialize message memory (memory has to be allocated)
  tku_msgs__msg__LabelModelObjectList__rosidl_typesupport_introspection_c__LabelModelObjectList_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t tku_msgs__msg__LabelModelObjectList__rosidl_typesupport_introspection_c__LabelModelObjectList_message_type_support_handle = {
  0,
  &tku_msgs__msg__LabelModelObjectList__rosidl_typesupport_introspection_c__LabelModelObjectList_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_tku_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tku_msgs, msg, LabelModelObjectList)() {
  if (!tku_msgs__msg__LabelModelObjectList__rosidl_typesupport_introspection_c__LabelModelObjectList_message_type_support_handle.typesupport_identifier) {
    tku_msgs__msg__LabelModelObjectList__rosidl_typesupport_introspection_c__LabelModelObjectList_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &tku_msgs__msg__LabelModelObjectList__rosidl_typesupport_introspection_c__LabelModelObjectList_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
