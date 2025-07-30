// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from tku_msgs:msg/SensorPackage.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "tku_msgs/msg/detail/sensor_package__rosidl_typesupport_introspection_c.h"
#include "tku_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "tku_msgs/msg/detail/sensor_package__functions.h"
#include "tku_msgs/msg/detail/sensor_package__struct.h"


// Include directives for member types
// Member `layout`
#include "std_msgs/msg/multi_array_layout.h"
// Member `layout`
#include "std_msgs/msg/detail/multi_array_layout__rosidl_typesupport_introspection_c.h"
// Member `imudata`
// Member `forcesensordata`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void tku_msgs__msg__SensorPackage__rosidl_typesupport_introspection_c__SensorPackage_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  tku_msgs__msg__SensorPackage__init(message_memory);
}

void tku_msgs__msg__SensorPackage__rosidl_typesupport_introspection_c__SensorPackage_fini_function(void * message_memory)
{
  tku_msgs__msg__SensorPackage__fini(message_memory);
}

size_t tku_msgs__msg__SensorPackage__rosidl_typesupport_introspection_c__size_function__SensorPackage__imudata(
  const void * untyped_member)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return member->size;
}

const void * tku_msgs__msg__SensorPackage__rosidl_typesupport_introspection_c__get_const_function__SensorPackage__imudata(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void * tku_msgs__msg__SensorPackage__rosidl_typesupport_introspection_c__get_function__SensorPackage__imudata(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void tku_msgs__msg__SensorPackage__rosidl_typesupport_introspection_c__fetch_function__SensorPackage__imudata(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    tku_msgs__msg__SensorPackage__rosidl_typesupport_introspection_c__get_const_function__SensorPackage__imudata(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void tku_msgs__msg__SensorPackage__rosidl_typesupport_introspection_c__assign_function__SensorPackage__imudata(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    tku_msgs__msg__SensorPackage__rosidl_typesupport_introspection_c__get_function__SensorPackage__imudata(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

bool tku_msgs__msg__SensorPackage__rosidl_typesupport_introspection_c__resize_function__SensorPackage__imudata(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  rosidl_runtime_c__double__Sequence__fini(member);
  return rosidl_runtime_c__double__Sequence__init(member, size);
}

size_t tku_msgs__msg__SensorPackage__rosidl_typesupport_introspection_c__size_function__SensorPackage__forcesensordata(
  const void * untyped_member)
{
  const rosidl_runtime_c__int32__Sequence * member =
    (const rosidl_runtime_c__int32__Sequence *)(untyped_member);
  return member->size;
}

const void * tku_msgs__msg__SensorPackage__rosidl_typesupport_introspection_c__get_const_function__SensorPackage__forcesensordata(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__int32__Sequence * member =
    (const rosidl_runtime_c__int32__Sequence *)(untyped_member);
  return &member->data[index];
}

void * tku_msgs__msg__SensorPackage__rosidl_typesupport_introspection_c__get_function__SensorPackage__forcesensordata(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__int32__Sequence * member =
    (rosidl_runtime_c__int32__Sequence *)(untyped_member);
  return &member->data[index];
}

void tku_msgs__msg__SensorPackage__rosidl_typesupport_introspection_c__fetch_function__SensorPackage__forcesensordata(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const int32_t * item =
    ((const int32_t *)
    tku_msgs__msg__SensorPackage__rosidl_typesupport_introspection_c__get_const_function__SensorPackage__forcesensordata(untyped_member, index));
  int32_t * value =
    (int32_t *)(untyped_value);
  *value = *item;
}

void tku_msgs__msg__SensorPackage__rosidl_typesupport_introspection_c__assign_function__SensorPackage__forcesensordata(
  void * untyped_member, size_t index, const void * untyped_value)
{
  int32_t * item =
    ((int32_t *)
    tku_msgs__msg__SensorPackage__rosidl_typesupport_introspection_c__get_function__SensorPackage__forcesensordata(untyped_member, index));
  const int32_t * value =
    (const int32_t *)(untyped_value);
  *item = *value;
}

bool tku_msgs__msg__SensorPackage__rosidl_typesupport_introspection_c__resize_function__SensorPackage__forcesensordata(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__int32__Sequence * member =
    (rosidl_runtime_c__int32__Sequence *)(untyped_member);
  rosidl_runtime_c__int32__Sequence__fini(member);
  return rosidl_runtime_c__int32__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember tku_msgs__msg__SensorPackage__rosidl_typesupport_introspection_c__SensorPackage_message_member_array[6] = {
  {
    "layout",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tku_msgs__msg__SensorPackage, layout),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "imudata",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tku_msgs__msg__SensorPackage, imudata),  // bytes offset in struct
    NULL,  // default value
    tku_msgs__msg__SensorPackage__rosidl_typesupport_introspection_c__size_function__SensorPackage__imudata,  // size() function pointer
    tku_msgs__msg__SensorPackage__rosidl_typesupport_introspection_c__get_const_function__SensorPackage__imudata,  // get_const(index) function pointer
    tku_msgs__msg__SensorPackage__rosidl_typesupport_introspection_c__get_function__SensorPackage__imudata,  // get(index) function pointer
    tku_msgs__msg__SensorPackage__rosidl_typesupport_introspection_c__fetch_function__SensorPackage__imudata,  // fetch(index, &value) function pointer
    tku_msgs__msg__SensorPackage__rosidl_typesupport_introspection_c__assign_function__SensorPackage__imudata,  // assign(index, value) function pointer
    tku_msgs__msg__SensorPackage__rosidl_typesupport_introspection_c__resize_function__SensorPackage__imudata  // resize(index) function pointer
  },
  {
    "forcesensordata",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tku_msgs__msg__SensorPackage, forcesensordata),  // bytes offset in struct
    NULL,  // default value
    tku_msgs__msg__SensorPackage__rosidl_typesupport_introspection_c__size_function__SensorPackage__forcesensordata,  // size() function pointer
    tku_msgs__msg__SensorPackage__rosidl_typesupport_introspection_c__get_const_function__SensorPackage__forcesensordata,  // get_const(index) function pointer
    tku_msgs__msg__SensorPackage__rosidl_typesupport_introspection_c__get_function__SensorPackage__forcesensordata,  // get(index) function pointer
    tku_msgs__msg__SensorPackage__rosidl_typesupport_introspection_c__fetch_function__SensorPackage__forcesensordata,  // fetch(index, &value) function pointer
    tku_msgs__msg__SensorPackage__rosidl_typesupport_introspection_c__assign_function__SensorPackage__forcesensordata,  // assign(index, value) function pointer
    tku_msgs__msg__SensorPackage__rosidl_typesupport_introspection_c__resize_function__SensorPackage__forcesensordata  // resize(index) function pointer
  },
  {
    "yaw",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tku_msgs__msg__SensorPackage, yaw),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "pitch",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tku_msgs__msg__SensorPackage, pitch),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "roll",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tku_msgs__msg__SensorPackage, roll),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers tku_msgs__msg__SensorPackage__rosidl_typesupport_introspection_c__SensorPackage_message_members = {
  "tku_msgs__msg",  // message namespace
  "SensorPackage",  // message name
  6,  // number of fields
  sizeof(tku_msgs__msg__SensorPackage),
  tku_msgs__msg__SensorPackage__rosidl_typesupport_introspection_c__SensorPackage_message_member_array,  // message members
  tku_msgs__msg__SensorPackage__rosidl_typesupport_introspection_c__SensorPackage_init_function,  // function to initialize message memory (memory has to be allocated)
  tku_msgs__msg__SensorPackage__rosidl_typesupport_introspection_c__SensorPackage_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t tku_msgs__msg__SensorPackage__rosidl_typesupport_introspection_c__SensorPackage_message_type_support_handle = {
  0,
  &tku_msgs__msg__SensorPackage__rosidl_typesupport_introspection_c__SensorPackage_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_tku_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tku_msgs, msg, SensorPackage)() {
  tku_msgs__msg__SensorPackage__rosidl_typesupport_introspection_c__SensorPackage_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, MultiArrayLayout)();
  if (!tku_msgs__msg__SensorPackage__rosidl_typesupport_introspection_c__SensorPackage_message_type_support_handle.typesupport_identifier) {
    tku_msgs__msg__SensorPackage__rosidl_typesupport_introspection_c__SensorPackage_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &tku_msgs__msg__SensorPackage__rosidl_typesupport_introspection_c__SensorPackage_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
