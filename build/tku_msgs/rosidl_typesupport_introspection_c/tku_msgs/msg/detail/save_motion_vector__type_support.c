// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from tku_msgs:msg/SaveMotionVector.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "tku_msgs/msg/detail/save_motion_vector__rosidl_typesupport_introspection_c.h"
#include "tku_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "tku_msgs/msg/detail/save_motion_vector__functions.h"
#include "tku_msgs/msg/detail/save_motion_vector__struct.h"


// Include directives for member types
// Member `savemotionvector`
#include "tku_msgs/msg/save_motion.h"
// Member `savemotionvector`
#include "tku_msgs/msg/detail/save_motion__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void tku_msgs__msg__SaveMotionVector__rosidl_typesupport_introspection_c__SaveMotionVector_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  tku_msgs__msg__SaveMotionVector__init(message_memory);
}

void tku_msgs__msg__SaveMotionVector__rosidl_typesupport_introspection_c__SaveMotionVector_fini_function(void * message_memory)
{
  tku_msgs__msg__SaveMotionVector__fini(message_memory);
}

size_t tku_msgs__msg__SaveMotionVector__rosidl_typesupport_introspection_c__size_function__SaveMotionVector__savemotionvector(
  const void * untyped_member)
{
  const tku_msgs__msg__SaveMotion__Sequence * member =
    (const tku_msgs__msg__SaveMotion__Sequence *)(untyped_member);
  return member->size;
}

const void * tku_msgs__msg__SaveMotionVector__rosidl_typesupport_introspection_c__get_const_function__SaveMotionVector__savemotionvector(
  const void * untyped_member, size_t index)
{
  const tku_msgs__msg__SaveMotion__Sequence * member =
    (const tku_msgs__msg__SaveMotion__Sequence *)(untyped_member);
  return &member->data[index];
}

void * tku_msgs__msg__SaveMotionVector__rosidl_typesupport_introspection_c__get_function__SaveMotionVector__savemotionvector(
  void * untyped_member, size_t index)
{
  tku_msgs__msg__SaveMotion__Sequence * member =
    (tku_msgs__msg__SaveMotion__Sequence *)(untyped_member);
  return &member->data[index];
}

void tku_msgs__msg__SaveMotionVector__rosidl_typesupport_introspection_c__fetch_function__SaveMotionVector__savemotionvector(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const tku_msgs__msg__SaveMotion * item =
    ((const tku_msgs__msg__SaveMotion *)
    tku_msgs__msg__SaveMotionVector__rosidl_typesupport_introspection_c__get_const_function__SaveMotionVector__savemotionvector(untyped_member, index));
  tku_msgs__msg__SaveMotion * value =
    (tku_msgs__msg__SaveMotion *)(untyped_value);
  *value = *item;
}

void tku_msgs__msg__SaveMotionVector__rosidl_typesupport_introspection_c__assign_function__SaveMotionVector__savemotionvector(
  void * untyped_member, size_t index, const void * untyped_value)
{
  tku_msgs__msg__SaveMotion * item =
    ((tku_msgs__msg__SaveMotion *)
    tku_msgs__msg__SaveMotionVector__rosidl_typesupport_introspection_c__get_function__SaveMotionVector__savemotionvector(untyped_member, index));
  const tku_msgs__msg__SaveMotion * value =
    (const tku_msgs__msg__SaveMotion *)(untyped_value);
  *item = *value;
}

bool tku_msgs__msg__SaveMotionVector__rosidl_typesupport_introspection_c__resize_function__SaveMotionVector__savemotionvector(
  void * untyped_member, size_t size)
{
  tku_msgs__msg__SaveMotion__Sequence * member =
    (tku_msgs__msg__SaveMotion__Sequence *)(untyped_member);
  tku_msgs__msg__SaveMotion__Sequence__fini(member);
  return tku_msgs__msg__SaveMotion__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember tku_msgs__msg__SaveMotionVector__rosidl_typesupport_introspection_c__SaveMotionVector_message_member_array[1] = {
  {
    "savemotionvector",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tku_msgs__msg__SaveMotionVector, savemotionvector),  // bytes offset in struct
    NULL,  // default value
    tku_msgs__msg__SaveMotionVector__rosidl_typesupport_introspection_c__size_function__SaveMotionVector__savemotionvector,  // size() function pointer
    tku_msgs__msg__SaveMotionVector__rosidl_typesupport_introspection_c__get_const_function__SaveMotionVector__savemotionvector,  // get_const(index) function pointer
    tku_msgs__msg__SaveMotionVector__rosidl_typesupport_introspection_c__get_function__SaveMotionVector__savemotionvector,  // get(index) function pointer
    tku_msgs__msg__SaveMotionVector__rosidl_typesupport_introspection_c__fetch_function__SaveMotionVector__savemotionvector,  // fetch(index, &value) function pointer
    tku_msgs__msg__SaveMotionVector__rosidl_typesupport_introspection_c__assign_function__SaveMotionVector__savemotionvector,  // assign(index, value) function pointer
    tku_msgs__msg__SaveMotionVector__rosidl_typesupport_introspection_c__resize_function__SaveMotionVector__savemotionvector  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers tku_msgs__msg__SaveMotionVector__rosidl_typesupport_introspection_c__SaveMotionVector_message_members = {
  "tku_msgs__msg",  // message namespace
  "SaveMotionVector",  // message name
  1,  // number of fields
  sizeof(tku_msgs__msg__SaveMotionVector),
  tku_msgs__msg__SaveMotionVector__rosidl_typesupport_introspection_c__SaveMotionVector_message_member_array,  // message members
  tku_msgs__msg__SaveMotionVector__rosidl_typesupport_introspection_c__SaveMotionVector_init_function,  // function to initialize message memory (memory has to be allocated)
  tku_msgs__msg__SaveMotionVector__rosidl_typesupport_introspection_c__SaveMotionVector_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t tku_msgs__msg__SaveMotionVector__rosidl_typesupport_introspection_c__SaveMotionVector_message_type_support_handle = {
  0,
  &tku_msgs__msg__SaveMotionVector__rosidl_typesupport_introspection_c__SaveMotionVector_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_tku_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tku_msgs, msg, SaveMotionVector)() {
  tku_msgs__msg__SaveMotionVector__rosidl_typesupport_introspection_c__SaveMotionVector_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tku_msgs, msg, SaveMotion)();
  if (!tku_msgs__msg__SaveMotionVector__rosidl_typesupport_introspection_c__SaveMotionVector_message_type_support_handle.typesupport_identifier) {
    tku_msgs__msg__SaveMotionVector__rosidl_typesupport_introspection_c__SaveMotionVector_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &tku_msgs__msg__SaveMotionVector__rosidl_typesupport_introspection_c__SaveMotionVector_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
