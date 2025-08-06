// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from tku_msgs:srv/WalkingGaitParameter.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "tku_msgs/srv/detail/walking_gait_parameter__rosidl_typesupport_introspection_c.h"
#include "tku_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "tku_msgs/srv/detail/walking_gait_parameter__functions.h"
#include "tku_msgs/srv/detail/walking_gait_parameter__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void tku_msgs__srv__WalkingGaitParameter_Request__rosidl_typesupport_introspection_c__WalkingGaitParameter_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  tku_msgs__srv__WalkingGaitParameter_Request__init(message_memory);
}

void tku_msgs__srv__WalkingGaitParameter_Request__rosidl_typesupport_introspection_c__WalkingGaitParameter_Request_fini_function(void * message_memory)
{
  tku_msgs__srv__WalkingGaitParameter_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember tku_msgs__srv__WalkingGaitParameter_Request__rosidl_typesupport_introspection_c__WalkingGaitParameter_Request_message_member_array[1] = {
  {
    "mode",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tku_msgs__srv__WalkingGaitParameter_Request, mode),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers tku_msgs__srv__WalkingGaitParameter_Request__rosidl_typesupport_introspection_c__WalkingGaitParameter_Request_message_members = {
  "tku_msgs__srv",  // message namespace
  "WalkingGaitParameter_Request",  // message name
  1,  // number of fields
  sizeof(tku_msgs__srv__WalkingGaitParameter_Request),
  tku_msgs__srv__WalkingGaitParameter_Request__rosidl_typesupport_introspection_c__WalkingGaitParameter_Request_message_member_array,  // message members
  tku_msgs__srv__WalkingGaitParameter_Request__rosidl_typesupport_introspection_c__WalkingGaitParameter_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  tku_msgs__srv__WalkingGaitParameter_Request__rosidl_typesupport_introspection_c__WalkingGaitParameter_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t tku_msgs__srv__WalkingGaitParameter_Request__rosidl_typesupport_introspection_c__WalkingGaitParameter_Request_message_type_support_handle = {
  0,
  &tku_msgs__srv__WalkingGaitParameter_Request__rosidl_typesupport_introspection_c__WalkingGaitParameter_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_tku_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tku_msgs, srv, WalkingGaitParameter_Request)() {
  if (!tku_msgs__srv__WalkingGaitParameter_Request__rosidl_typesupport_introspection_c__WalkingGaitParameter_Request_message_type_support_handle.typesupport_identifier) {
    tku_msgs__srv__WalkingGaitParameter_Request__rosidl_typesupport_introspection_c__WalkingGaitParameter_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &tku_msgs__srv__WalkingGaitParameter_Request__rosidl_typesupport_introspection_c__WalkingGaitParameter_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "tku_msgs/srv/detail/walking_gait_parameter__rosidl_typesupport_introspection_c.h"
// already included above
// #include "tku_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "tku_msgs/srv/detail/walking_gait_parameter__functions.h"
// already included above
// #include "tku_msgs/srv/detail/walking_gait_parameter__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void tku_msgs__srv__WalkingGaitParameter_Response__rosidl_typesupport_introspection_c__WalkingGaitParameter_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  tku_msgs__srv__WalkingGaitParameter_Response__init(message_memory);
}

void tku_msgs__srv__WalkingGaitParameter_Response__rosidl_typesupport_introspection_c__WalkingGaitParameter_Response_fini_function(void * message_memory)
{
  tku_msgs__srv__WalkingGaitParameter_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember tku_msgs__srv__WalkingGaitParameter_Response__rosidl_typesupport_introspection_c__WalkingGaitParameter_Response_message_member_array[18] = {
  {
    "x_swing_range",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tku_msgs__srv__WalkingGaitParameter_Response, x_swing_range),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "y_swing_range",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tku_msgs__srv__WalkingGaitParameter_Response, y_swing_range),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "z_swing_range",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tku_msgs__srv__WalkingGaitParameter_Response, z_swing_range),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "period_t",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tku_msgs__srv__WalkingGaitParameter_Response, period_t),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "period_t2",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tku_msgs__srv__WalkingGaitParameter_Response, period_t2),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "sample_time",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tku_msgs__srv__WalkingGaitParameter_Response, sample_time),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "osc_lockrange",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tku_msgs__srv__WalkingGaitParameter_Response, osc_lockrange),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "base_default_z",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tku_msgs__srv__WalkingGaitParameter_Response, base_default_z),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "y_swing_shift",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tku_msgs__srv__WalkingGaitParameter_Response, y_swing_shift),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "x_swing_com",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tku_msgs__srv__WalkingGaitParameter_Response, x_swing_com),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "base_lift_z",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tku_msgs__srv__WalkingGaitParameter_Response, base_lift_z),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "rightfoot_shift_z",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tku_msgs__srv__WalkingGaitParameter_Response, rightfoot_shift_z),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "com_y_swing",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tku_msgs__srv__WalkingGaitParameter_Response, com_y_swing),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "now_stand_height",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tku_msgs__srv__WalkingGaitParameter_Response, now_stand_height),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "now_com_height",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tku_msgs__srv__WalkingGaitParameter_Response, now_com_height),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "stand_balance",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tku_msgs__srv__WalkingGaitParameter_Response, stand_balance),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "hip_roll",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tku_msgs__srv__WalkingGaitParameter_Response, hip_roll),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "ankle_roll",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tku_msgs__srv__WalkingGaitParameter_Response, ankle_roll),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers tku_msgs__srv__WalkingGaitParameter_Response__rosidl_typesupport_introspection_c__WalkingGaitParameter_Response_message_members = {
  "tku_msgs__srv",  // message namespace
  "WalkingGaitParameter_Response",  // message name
  18,  // number of fields
  sizeof(tku_msgs__srv__WalkingGaitParameter_Response),
  tku_msgs__srv__WalkingGaitParameter_Response__rosidl_typesupport_introspection_c__WalkingGaitParameter_Response_message_member_array,  // message members
  tku_msgs__srv__WalkingGaitParameter_Response__rosidl_typesupport_introspection_c__WalkingGaitParameter_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  tku_msgs__srv__WalkingGaitParameter_Response__rosidl_typesupport_introspection_c__WalkingGaitParameter_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t tku_msgs__srv__WalkingGaitParameter_Response__rosidl_typesupport_introspection_c__WalkingGaitParameter_Response_message_type_support_handle = {
  0,
  &tku_msgs__srv__WalkingGaitParameter_Response__rosidl_typesupport_introspection_c__WalkingGaitParameter_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_tku_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tku_msgs, srv, WalkingGaitParameter_Response)() {
  if (!tku_msgs__srv__WalkingGaitParameter_Response__rosidl_typesupport_introspection_c__WalkingGaitParameter_Response_message_type_support_handle.typesupport_identifier) {
    tku_msgs__srv__WalkingGaitParameter_Response__rosidl_typesupport_introspection_c__WalkingGaitParameter_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &tku_msgs__srv__WalkingGaitParameter_Response__rosidl_typesupport_introspection_c__WalkingGaitParameter_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "tku_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "tku_msgs/srv/detail/walking_gait_parameter__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers tku_msgs__srv__detail__walking_gait_parameter__rosidl_typesupport_introspection_c__WalkingGaitParameter_service_members = {
  "tku_msgs__srv",  // service namespace
  "WalkingGaitParameter",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // tku_msgs__srv__detail__walking_gait_parameter__rosidl_typesupport_introspection_c__WalkingGaitParameter_Request_message_type_support_handle,
  NULL  // response message
  // tku_msgs__srv__detail__walking_gait_parameter__rosidl_typesupport_introspection_c__WalkingGaitParameter_Response_message_type_support_handle
};

static rosidl_service_type_support_t tku_msgs__srv__detail__walking_gait_parameter__rosidl_typesupport_introspection_c__WalkingGaitParameter_service_type_support_handle = {
  0,
  &tku_msgs__srv__detail__walking_gait_parameter__rosidl_typesupport_introspection_c__WalkingGaitParameter_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tku_msgs, srv, WalkingGaitParameter_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tku_msgs, srv, WalkingGaitParameter_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_tku_msgs
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tku_msgs, srv, WalkingGaitParameter)() {
  if (!tku_msgs__srv__detail__walking_gait_parameter__rosidl_typesupport_introspection_c__WalkingGaitParameter_service_type_support_handle.typesupport_identifier) {
    tku_msgs__srv__detail__walking_gait_parameter__rosidl_typesupport_introspection_c__WalkingGaitParameter_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)tku_msgs__srv__detail__walking_gait_parameter__rosidl_typesupport_introspection_c__WalkingGaitParameter_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tku_msgs, srv, WalkingGaitParameter_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tku_msgs, srv, WalkingGaitParameter_Response)()->data;
  }

  return &tku_msgs__srv__detail__walking_gait_parameter__rosidl_typesupport_introspection_c__WalkingGaitParameter_service_type_support_handle;
}
