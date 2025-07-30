// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from tku_msgs:srv/ReadMotion.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "tku_msgs/srv/detail/read_motion__rosidl_typesupport_introspection_c.h"
#include "tku_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "tku_msgs/srv/detail/read_motion__functions.h"
#include "tku_msgs/srv/detail/read_motion__struct.h"


// Include directives for member types
// Member `name`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void tku_msgs__srv__ReadMotion_Request__rosidl_typesupport_introspection_c__ReadMotion_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  tku_msgs__srv__ReadMotion_Request__init(message_memory);
}

void tku_msgs__srv__ReadMotion_Request__rosidl_typesupport_introspection_c__ReadMotion_Request_fini_function(void * message_memory)
{
  tku_msgs__srv__ReadMotion_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember tku_msgs__srv__ReadMotion_Request__rosidl_typesupport_introspection_c__ReadMotion_Request_message_member_array[3] = {
  {
    "read",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tku_msgs__srv__ReadMotion_Request, read),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "name",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tku_msgs__srv__ReadMotion_Request, name),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "readstate",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tku_msgs__srv__ReadMotion_Request, readstate),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers tku_msgs__srv__ReadMotion_Request__rosidl_typesupport_introspection_c__ReadMotion_Request_message_members = {
  "tku_msgs__srv",  // message namespace
  "ReadMotion_Request",  // message name
  3,  // number of fields
  sizeof(tku_msgs__srv__ReadMotion_Request),
  tku_msgs__srv__ReadMotion_Request__rosidl_typesupport_introspection_c__ReadMotion_Request_message_member_array,  // message members
  tku_msgs__srv__ReadMotion_Request__rosidl_typesupport_introspection_c__ReadMotion_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  tku_msgs__srv__ReadMotion_Request__rosidl_typesupport_introspection_c__ReadMotion_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t tku_msgs__srv__ReadMotion_Request__rosidl_typesupport_introspection_c__ReadMotion_Request_message_type_support_handle = {
  0,
  &tku_msgs__srv__ReadMotion_Request__rosidl_typesupport_introspection_c__ReadMotion_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_tku_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tku_msgs, srv, ReadMotion_Request)() {
  if (!tku_msgs__srv__ReadMotion_Request__rosidl_typesupport_introspection_c__ReadMotion_Request_message_type_support_handle.typesupport_identifier) {
    tku_msgs__srv__ReadMotion_Request__rosidl_typesupport_introspection_c__ReadMotion_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &tku_msgs__srv__ReadMotion_Request__rosidl_typesupport_introspection_c__ReadMotion_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "tku_msgs/srv/detail/read_motion__rosidl_typesupport_introspection_c.h"
// already included above
// #include "tku_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "tku_msgs/srv/detail/read_motion__functions.h"
// already included above
// #include "tku_msgs/srv/detail/read_motion__struct.h"


// Include directives for member types
// Member `motionstate`
// Member `id`
// Member `motionlist`
// Member `relativedata`
// Member `absolutedata`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void tku_msgs__srv__ReadMotion_Response__rosidl_typesupport_introspection_c__ReadMotion_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  tku_msgs__srv__ReadMotion_Response__init(message_memory);
}

void tku_msgs__srv__ReadMotion_Response__rosidl_typesupport_introspection_c__ReadMotion_Response_fini_function(void * message_memory)
{
  tku_msgs__srv__ReadMotion_Response__fini(message_memory);
}

size_t tku_msgs__srv__ReadMotion_Response__rosidl_typesupport_introspection_c__size_function__ReadMotion_Response__motionstate(
  const void * untyped_member)
{
  const rosidl_runtime_c__int32__Sequence * member =
    (const rosidl_runtime_c__int32__Sequence *)(untyped_member);
  return member->size;
}

const void * tku_msgs__srv__ReadMotion_Response__rosidl_typesupport_introspection_c__get_const_function__ReadMotion_Response__motionstate(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__int32__Sequence * member =
    (const rosidl_runtime_c__int32__Sequence *)(untyped_member);
  return &member->data[index];
}

void * tku_msgs__srv__ReadMotion_Response__rosidl_typesupport_introspection_c__get_function__ReadMotion_Response__motionstate(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__int32__Sequence * member =
    (rosidl_runtime_c__int32__Sequence *)(untyped_member);
  return &member->data[index];
}

void tku_msgs__srv__ReadMotion_Response__rosidl_typesupport_introspection_c__fetch_function__ReadMotion_Response__motionstate(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const int32_t * item =
    ((const int32_t *)
    tku_msgs__srv__ReadMotion_Response__rosidl_typesupport_introspection_c__get_const_function__ReadMotion_Response__motionstate(untyped_member, index));
  int32_t * value =
    (int32_t *)(untyped_value);
  *value = *item;
}

void tku_msgs__srv__ReadMotion_Response__rosidl_typesupport_introspection_c__assign_function__ReadMotion_Response__motionstate(
  void * untyped_member, size_t index, const void * untyped_value)
{
  int32_t * item =
    ((int32_t *)
    tku_msgs__srv__ReadMotion_Response__rosidl_typesupport_introspection_c__get_function__ReadMotion_Response__motionstate(untyped_member, index));
  const int32_t * value =
    (const int32_t *)(untyped_value);
  *item = *value;
}

bool tku_msgs__srv__ReadMotion_Response__rosidl_typesupport_introspection_c__resize_function__ReadMotion_Response__motionstate(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__int32__Sequence * member =
    (rosidl_runtime_c__int32__Sequence *)(untyped_member);
  rosidl_runtime_c__int32__Sequence__fini(member);
  return rosidl_runtime_c__int32__Sequence__init(member, size);
}

size_t tku_msgs__srv__ReadMotion_Response__rosidl_typesupport_introspection_c__size_function__ReadMotion_Response__id(
  const void * untyped_member)
{
  const rosidl_runtime_c__int32__Sequence * member =
    (const rosidl_runtime_c__int32__Sequence *)(untyped_member);
  return member->size;
}

const void * tku_msgs__srv__ReadMotion_Response__rosidl_typesupport_introspection_c__get_const_function__ReadMotion_Response__id(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__int32__Sequence * member =
    (const rosidl_runtime_c__int32__Sequence *)(untyped_member);
  return &member->data[index];
}

void * tku_msgs__srv__ReadMotion_Response__rosidl_typesupport_introspection_c__get_function__ReadMotion_Response__id(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__int32__Sequence * member =
    (rosidl_runtime_c__int32__Sequence *)(untyped_member);
  return &member->data[index];
}

void tku_msgs__srv__ReadMotion_Response__rosidl_typesupport_introspection_c__fetch_function__ReadMotion_Response__id(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const int32_t * item =
    ((const int32_t *)
    tku_msgs__srv__ReadMotion_Response__rosidl_typesupport_introspection_c__get_const_function__ReadMotion_Response__id(untyped_member, index));
  int32_t * value =
    (int32_t *)(untyped_value);
  *value = *item;
}

void tku_msgs__srv__ReadMotion_Response__rosidl_typesupport_introspection_c__assign_function__ReadMotion_Response__id(
  void * untyped_member, size_t index, const void * untyped_value)
{
  int32_t * item =
    ((int32_t *)
    tku_msgs__srv__ReadMotion_Response__rosidl_typesupport_introspection_c__get_function__ReadMotion_Response__id(untyped_member, index));
  const int32_t * value =
    (const int32_t *)(untyped_value);
  *item = *value;
}

bool tku_msgs__srv__ReadMotion_Response__rosidl_typesupport_introspection_c__resize_function__ReadMotion_Response__id(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__int32__Sequence * member =
    (rosidl_runtime_c__int32__Sequence *)(untyped_member);
  rosidl_runtime_c__int32__Sequence__fini(member);
  return rosidl_runtime_c__int32__Sequence__init(member, size);
}

size_t tku_msgs__srv__ReadMotion_Response__rosidl_typesupport_introspection_c__size_function__ReadMotion_Response__motionlist(
  const void * untyped_member)
{
  const rosidl_runtime_c__int32__Sequence * member =
    (const rosidl_runtime_c__int32__Sequence *)(untyped_member);
  return member->size;
}

const void * tku_msgs__srv__ReadMotion_Response__rosidl_typesupport_introspection_c__get_const_function__ReadMotion_Response__motionlist(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__int32__Sequence * member =
    (const rosidl_runtime_c__int32__Sequence *)(untyped_member);
  return &member->data[index];
}

void * tku_msgs__srv__ReadMotion_Response__rosidl_typesupport_introspection_c__get_function__ReadMotion_Response__motionlist(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__int32__Sequence * member =
    (rosidl_runtime_c__int32__Sequence *)(untyped_member);
  return &member->data[index];
}

void tku_msgs__srv__ReadMotion_Response__rosidl_typesupport_introspection_c__fetch_function__ReadMotion_Response__motionlist(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const int32_t * item =
    ((const int32_t *)
    tku_msgs__srv__ReadMotion_Response__rosidl_typesupport_introspection_c__get_const_function__ReadMotion_Response__motionlist(untyped_member, index));
  int32_t * value =
    (int32_t *)(untyped_value);
  *value = *item;
}

void tku_msgs__srv__ReadMotion_Response__rosidl_typesupport_introspection_c__assign_function__ReadMotion_Response__motionlist(
  void * untyped_member, size_t index, const void * untyped_value)
{
  int32_t * item =
    ((int32_t *)
    tku_msgs__srv__ReadMotion_Response__rosidl_typesupport_introspection_c__get_function__ReadMotion_Response__motionlist(untyped_member, index));
  const int32_t * value =
    (const int32_t *)(untyped_value);
  *item = *value;
}

bool tku_msgs__srv__ReadMotion_Response__rosidl_typesupport_introspection_c__resize_function__ReadMotion_Response__motionlist(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__int32__Sequence * member =
    (rosidl_runtime_c__int32__Sequence *)(untyped_member);
  rosidl_runtime_c__int32__Sequence__fini(member);
  return rosidl_runtime_c__int32__Sequence__init(member, size);
}

size_t tku_msgs__srv__ReadMotion_Response__rosidl_typesupport_introspection_c__size_function__ReadMotion_Response__relativedata(
  const void * untyped_member)
{
  const rosidl_runtime_c__int32__Sequence * member =
    (const rosidl_runtime_c__int32__Sequence *)(untyped_member);
  return member->size;
}

const void * tku_msgs__srv__ReadMotion_Response__rosidl_typesupport_introspection_c__get_const_function__ReadMotion_Response__relativedata(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__int32__Sequence * member =
    (const rosidl_runtime_c__int32__Sequence *)(untyped_member);
  return &member->data[index];
}

void * tku_msgs__srv__ReadMotion_Response__rosidl_typesupport_introspection_c__get_function__ReadMotion_Response__relativedata(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__int32__Sequence * member =
    (rosidl_runtime_c__int32__Sequence *)(untyped_member);
  return &member->data[index];
}

void tku_msgs__srv__ReadMotion_Response__rosidl_typesupport_introspection_c__fetch_function__ReadMotion_Response__relativedata(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const int32_t * item =
    ((const int32_t *)
    tku_msgs__srv__ReadMotion_Response__rosidl_typesupport_introspection_c__get_const_function__ReadMotion_Response__relativedata(untyped_member, index));
  int32_t * value =
    (int32_t *)(untyped_value);
  *value = *item;
}

void tku_msgs__srv__ReadMotion_Response__rosidl_typesupport_introspection_c__assign_function__ReadMotion_Response__relativedata(
  void * untyped_member, size_t index, const void * untyped_value)
{
  int32_t * item =
    ((int32_t *)
    tku_msgs__srv__ReadMotion_Response__rosidl_typesupport_introspection_c__get_function__ReadMotion_Response__relativedata(untyped_member, index));
  const int32_t * value =
    (const int32_t *)(untyped_value);
  *item = *value;
}

bool tku_msgs__srv__ReadMotion_Response__rosidl_typesupport_introspection_c__resize_function__ReadMotion_Response__relativedata(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__int32__Sequence * member =
    (rosidl_runtime_c__int32__Sequence *)(untyped_member);
  rosidl_runtime_c__int32__Sequence__fini(member);
  return rosidl_runtime_c__int32__Sequence__init(member, size);
}

size_t tku_msgs__srv__ReadMotion_Response__rosidl_typesupport_introspection_c__size_function__ReadMotion_Response__absolutedata(
  const void * untyped_member)
{
  const rosidl_runtime_c__int32__Sequence * member =
    (const rosidl_runtime_c__int32__Sequence *)(untyped_member);
  return member->size;
}

const void * tku_msgs__srv__ReadMotion_Response__rosidl_typesupport_introspection_c__get_const_function__ReadMotion_Response__absolutedata(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__int32__Sequence * member =
    (const rosidl_runtime_c__int32__Sequence *)(untyped_member);
  return &member->data[index];
}

void * tku_msgs__srv__ReadMotion_Response__rosidl_typesupport_introspection_c__get_function__ReadMotion_Response__absolutedata(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__int32__Sequence * member =
    (rosidl_runtime_c__int32__Sequence *)(untyped_member);
  return &member->data[index];
}

void tku_msgs__srv__ReadMotion_Response__rosidl_typesupport_introspection_c__fetch_function__ReadMotion_Response__absolutedata(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const int32_t * item =
    ((const int32_t *)
    tku_msgs__srv__ReadMotion_Response__rosidl_typesupport_introspection_c__get_const_function__ReadMotion_Response__absolutedata(untyped_member, index));
  int32_t * value =
    (int32_t *)(untyped_value);
  *value = *item;
}

void tku_msgs__srv__ReadMotion_Response__rosidl_typesupport_introspection_c__assign_function__ReadMotion_Response__absolutedata(
  void * untyped_member, size_t index, const void * untyped_value)
{
  int32_t * item =
    ((int32_t *)
    tku_msgs__srv__ReadMotion_Response__rosidl_typesupport_introspection_c__get_function__ReadMotion_Response__absolutedata(untyped_member, index));
  const int32_t * value =
    (const int32_t *)(untyped_value);
  *item = *value;
}

bool tku_msgs__srv__ReadMotion_Response__rosidl_typesupport_introspection_c__resize_function__ReadMotion_Response__absolutedata(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__int32__Sequence * member =
    (rosidl_runtime_c__int32__Sequence *)(untyped_member);
  rosidl_runtime_c__int32__Sequence__fini(member);
  return rosidl_runtime_c__int32__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember tku_msgs__srv__ReadMotion_Response__rosidl_typesupport_introspection_c__ReadMotion_Response_message_member_array[7] = {
  {
    "readcheck",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tku_msgs__srv__ReadMotion_Response, readcheck),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "vectorcnt",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tku_msgs__srv__ReadMotion_Response, vectorcnt),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "motionstate",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tku_msgs__srv__ReadMotion_Response, motionstate),  // bytes offset in struct
    NULL,  // default value
    tku_msgs__srv__ReadMotion_Response__rosidl_typesupport_introspection_c__size_function__ReadMotion_Response__motionstate,  // size() function pointer
    tku_msgs__srv__ReadMotion_Response__rosidl_typesupport_introspection_c__get_const_function__ReadMotion_Response__motionstate,  // get_const(index) function pointer
    tku_msgs__srv__ReadMotion_Response__rosidl_typesupport_introspection_c__get_function__ReadMotion_Response__motionstate,  // get(index) function pointer
    tku_msgs__srv__ReadMotion_Response__rosidl_typesupport_introspection_c__fetch_function__ReadMotion_Response__motionstate,  // fetch(index, &value) function pointer
    tku_msgs__srv__ReadMotion_Response__rosidl_typesupport_introspection_c__assign_function__ReadMotion_Response__motionstate,  // assign(index, value) function pointer
    tku_msgs__srv__ReadMotion_Response__rosidl_typesupport_introspection_c__resize_function__ReadMotion_Response__motionstate  // resize(index) function pointer
  },
  {
    "id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tku_msgs__srv__ReadMotion_Response, id),  // bytes offset in struct
    NULL,  // default value
    tku_msgs__srv__ReadMotion_Response__rosidl_typesupport_introspection_c__size_function__ReadMotion_Response__id,  // size() function pointer
    tku_msgs__srv__ReadMotion_Response__rosidl_typesupport_introspection_c__get_const_function__ReadMotion_Response__id,  // get_const(index) function pointer
    tku_msgs__srv__ReadMotion_Response__rosidl_typesupport_introspection_c__get_function__ReadMotion_Response__id,  // get(index) function pointer
    tku_msgs__srv__ReadMotion_Response__rosidl_typesupport_introspection_c__fetch_function__ReadMotion_Response__id,  // fetch(index, &value) function pointer
    tku_msgs__srv__ReadMotion_Response__rosidl_typesupport_introspection_c__assign_function__ReadMotion_Response__id,  // assign(index, value) function pointer
    tku_msgs__srv__ReadMotion_Response__rosidl_typesupport_introspection_c__resize_function__ReadMotion_Response__id  // resize(index) function pointer
  },
  {
    "motionlist",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tku_msgs__srv__ReadMotion_Response, motionlist),  // bytes offset in struct
    NULL,  // default value
    tku_msgs__srv__ReadMotion_Response__rosidl_typesupport_introspection_c__size_function__ReadMotion_Response__motionlist,  // size() function pointer
    tku_msgs__srv__ReadMotion_Response__rosidl_typesupport_introspection_c__get_const_function__ReadMotion_Response__motionlist,  // get_const(index) function pointer
    tku_msgs__srv__ReadMotion_Response__rosidl_typesupport_introspection_c__get_function__ReadMotion_Response__motionlist,  // get(index) function pointer
    tku_msgs__srv__ReadMotion_Response__rosidl_typesupport_introspection_c__fetch_function__ReadMotion_Response__motionlist,  // fetch(index, &value) function pointer
    tku_msgs__srv__ReadMotion_Response__rosidl_typesupport_introspection_c__assign_function__ReadMotion_Response__motionlist,  // assign(index, value) function pointer
    tku_msgs__srv__ReadMotion_Response__rosidl_typesupport_introspection_c__resize_function__ReadMotion_Response__motionlist  // resize(index) function pointer
  },
  {
    "relativedata",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tku_msgs__srv__ReadMotion_Response, relativedata),  // bytes offset in struct
    NULL,  // default value
    tku_msgs__srv__ReadMotion_Response__rosidl_typesupport_introspection_c__size_function__ReadMotion_Response__relativedata,  // size() function pointer
    tku_msgs__srv__ReadMotion_Response__rosidl_typesupport_introspection_c__get_const_function__ReadMotion_Response__relativedata,  // get_const(index) function pointer
    tku_msgs__srv__ReadMotion_Response__rosidl_typesupport_introspection_c__get_function__ReadMotion_Response__relativedata,  // get(index) function pointer
    tku_msgs__srv__ReadMotion_Response__rosidl_typesupport_introspection_c__fetch_function__ReadMotion_Response__relativedata,  // fetch(index, &value) function pointer
    tku_msgs__srv__ReadMotion_Response__rosidl_typesupport_introspection_c__assign_function__ReadMotion_Response__relativedata,  // assign(index, value) function pointer
    tku_msgs__srv__ReadMotion_Response__rosidl_typesupport_introspection_c__resize_function__ReadMotion_Response__relativedata  // resize(index) function pointer
  },
  {
    "absolutedata",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tku_msgs__srv__ReadMotion_Response, absolutedata),  // bytes offset in struct
    NULL,  // default value
    tku_msgs__srv__ReadMotion_Response__rosidl_typesupport_introspection_c__size_function__ReadMotion_Response__absolutedata,  // size() function pointer
    tku_msgs__srv__ReadMotion_Response__rosidl_typesupport_introspection_c__get_const_function__ReadMotion_Response__absolutedata,  // get_const(index) function pointer
    tku_msgs__srv__ReadMotion_Response__rosidl_typesupport_introspection_c__get_function__ReadMotion_Response__absolutedata,  // get(index) function pointer
    tku_msgs__srv__ReadMotion_Response__rosidl_typesupport_introspection_c__fetch_function__ReadMotion_Response__absolutedata,  // fetch(index, &value) function pointer
    tku_msgs__srv__ReadMotion_Response__rosidl_typesupport_introspection_c__assign_function__ReadMotion_Response__absolutedata,  // assign(index, value) function pointer
    tku_msgs__srv__ReadMotion_Response__rosidl_typesupport_introspection_c__resize_function__ReadMotion_Response__absolutedata  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers tku_msgs__srv__ReadMotion_Response__rosidl_typesupport_introspection_c__ReadMotion_Response_message_members = {
  "tku_msgs__srv",  // message namespace
  "ReadMotion_Response",  // message name
  7,  // number of fields
  sizeof(tku_msgs__srv__ReadMotion_Response),
  tku_msgs__srv__ReadMotion_Response__rosidl_typesupport_introspection_c__ReadMotion_Response_message_member_array,  // message members
  tku_msgs__srv__ReadMotion_Response__rosidl_typesupport_introspection_c__ReadMotion_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  tku_msgs__srv__ReadMotion_Response__rosidl_typesupport_introspection_c__ReadMotion_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t tku_msgs__srv__ReadMotion_Response__rosidl_typesupport_introspection_c__ReadMotion_Response_message_type_support_handle = {
  0,
  &tku_msgs__srv__ReadMotion_Response__rosidl_typesupport_introspection_c__ReadMotion_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_tku_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tku_msgs, srv, ReadMotion_Response)() {
  if (!tku_msgs__srv__ReadMotion_Response__rosidl_typesupport_introspection_c__ReadMotion_Response_message_type_support_handle.typesupport_identifier) {
    tku_msgs__srv__ReadMotion_Response__rosidl_typesupport_introspection_c__ReadMotion_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &tku_msgs__srv__ReadMotion_Response__rosidl_typesupport_introspection_c__ReadMotion_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "tku_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "tku_msgs/srv/detail/read_motion__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers tku_msgs__srv__detail__read_motion__rosidl_typesupport_introspection_c__ReadMotion_service_members = {
  "tku_msgs__srv",  // service namespace
  "ReadMotion",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // tku_msgs__srv__detail__read_motion__rosidl_typesupport_introspection_c__ReadMotion_Request_message_type_support_handle,
  NULL  // response message
  // tku_msgs__srv__detail__read_motion__rosidl_typesupport_introspection_c__ReadMotion_Response_message_type_support_handle
};

static rosidl_service_type_support_t tku_msgs__srv__detail__read_motion__rosidl_typesupport_introspection_c__ReadMotion_service_type_support_handle = {
  0,
  &tku_msgs__srv__detail__read_motion__rosidl_typesupport_introspection_c__ReadMotion_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tku_msgs, srv, ReadMotion_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tku_msgs, srv, ReadMotion_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_tku_msgs
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tku_msgs, srv, ReadMotion)() {
  if (!tku_msgs__srv__detail__read_motion__rosidl_typesupport_introspection_c__ReadMotion_service_type_support_handle.typesupport_identifier) {
    tku_msgs__srv__detail__read_motion__rosidl_typesupport_introspection_c__ReadMotion_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)tku_msgs__srv__detail__read_motion__rosidl_typesupport_introspection_c__ReadMotion_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tku_msgs, srv, ReadMotion_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tku_msgs, srv, ReadMotion_Response)()->data;
  }

  return &tku_msgs__srv__detail__read_motion__rosidl_typesupport_introspection_c__ReadMotion_service_type_support_handle;
}
