// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from webrtc_ros_msgs:srv/GetIceServers.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "webrtc_ros_msgs/srv/detail/get_ice_servers__rosidl_typesupport_introspection_c.h"
#include "webrtc_ros_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "webrtc_ros_msgs/srv/detail/get_ice_servers__functions.h"
#include "webrtc_ros_msgs/srv/detail/get_ice_servers__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void webrtc_ros_msgs__srv__GetIceServers_Request__rosidl_typesupport_introspection_c__GetIceServers_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  webrtc_ros_msgs__srv__GetIceServers_Request__init(message_memory);
}

void webrtc_ros_msgs__srv__GetIceServers_Request__rosidl_typesupport_introspection_c__GetIceServers_Request_fini_function(void * message_memory)
{
  webrtc_ros_msgs__srv__GetIceServers_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember webrtc_ros_msgs__srv__GetIceServers_Request__rosidl_typesupport_introspection_c__GetIceServers_Request_message_member_array[1] = {
  {
    "structure_needs_at_least_one_member",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(webrtc_ros_msgs__srv__GetIceServers_Request, structure_needs_at_least_one_member),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers webrtc_ros_msgs__srv__GetIceServers_Request__rosidl_typesupport_introspection_c__GetIceServers_Request_message_members = {
  "webrtc_ros_msgs__srv",  // message namespace
  "GetIceServers_Request",  // message name
  1,  // number of fields
  sizeof(webrtc_ros_msgs__srv__GetIceServers_Request),
  webrtc_ros_msgs__srv__GetIceServers_Request__rosidl_typesupport_introspection_c__GetIceServers_Request_message_member_array,  // message members
  webrtc_ros_msgs__srv__GetIceServers_Request__rosidl_typesupport_introspection_c__GetIceServers_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  webrtc_ros_msgs__srv__GetIceServers_Request__rosidl_typesupport_introspection_c__GetIceServers_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t webrtc_ros_msgs__srv__GetIceServers_Request__rosidl_typesupport_introspection_c__GetIceServers_Request_message_type_support_handle = {
  0,
  &webrtc_ros_msgs__srv__GetIceServers_Request__rosidl_typesupport_introspection_c__GetIceServers_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_webrtc_ros_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, webrtc_ros_msgs, srv, GetIceServers_Request)() {
  if (!webrtc_ros_msgs__srv__GetIceServers_Request__rosidl_typesupport_introspection_c__GetIceServers_Request_message_type_support_handle.typesupport_identifier) {
    webrtc_ros_msgs__srv__GetIceServers_Request__rosidl_typesupport_introspection_c__GetIceServers_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &webrtc_ros_msgs__srv__GetIceServers_Request__rosidl_typesupport_introspection_c__GetIceServers_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "webrtc_ros_msgs/srv/detail/get_ice_servers__rosidl_typesupport_introspection_c.h"
// already included above
// #include "webrtc_ros_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "webrtc_ros_msgs/srv/detail/get_ice_servers__functions.h"
// already included above
// #include "webrtc_ros_msgs/srv/detail/get_ice_servers__struct.h"


// Include directives for member types
// Member `servers`
#include "webrtc_ros_msgs/msg/ice_server.h"
// Member `servers`
#include "webrtc_ros_msgs/msg/detail/ice_server__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void webrtc_ros_msgs__srv__GetIceServers_Response__rosidl_typesupport_introspection_c__GetIceServers_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  webrtc_ros_msgs__srv__GetIceServers_Response__init(message_memory);
}

void webrtc_ros_msgs__srv__GetIceServers_Response__rosidl_typesupport_introspection_c__GetIceServers_Response_fini_function(void * message_memory)
{
  webrtc_ros_msgs__srv__GetIceServers_Response__fini(message_memory);
}

size_t webrtc_ros_msgs__srv__GetIceServers_Response__rosidl_typesupport_introspection_c__size_function__GetIceServers_Response__servers(
  const void * untyped_member)
{
  const webrtc_ros_msgs__msg__IceServer__Sequence * member =
    (const webrtc_ros_msgs__msg__IceServer__Sequence *)(untyped_member);
  return member->size;
}

const void * webrtc_ros_msgs__srv__GetIceServers_Response__rosidl_typesupport_introspection_c__get_const_function__GetIceServers_Response__servers(
  const void * untyped_member, size_t index)
{
  const webrtc_ros_msgs__msg__IceServer__Sequence * member =
    (const webrtc_ros_msgs__msg__IceServer__Sequence *)(untyped_member);
  return &member->data[index];
}

void * webrtc_ros_msgs__srv__GetIceServers_Response__rosidl_typesupport_introspection_c__get_function__GetIceServers_Response__servers(
  void * untyped_member, size_t index)
{
  webrtc_ros_msgs__msg__IceServer__Sequence * member =
    (webrtc_ros_msgs__msg__IceServer__Sequence *)(untyped_member);
  return &member->data[index];
}

void webrtc_ros_msgs__srv__GetIceServers_Response__rosidl_typesupport_introspection_c__fetch_function__GetIceServers_Response__servers(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const webrtc_ros_msgs__msg__IceServer * item =
    ((const webrtc_ros_msgs__msg__IceServer *)
    webrtc_ros_msgs__srv__GetIceServers_Response__rosidl_typesupport_introspection_c__get_const_function__GetIceServers_Response__servers(untyped_member, index));
  webrtc_ros_msgs__msg__IceServer * value =
    (webrtc_ros_msgs__msg__IceServer *)(untyped_value);
  *value = *item;
}

void webrtc_ros_msgs__srv__GetIceServers_Response__rosidl_typesupport_introspection_c__assign_function__GetIceServers_Response__servers(
  void * untyped_member, size_t index, const void * untyped_value)
{
  webrtc_ros_msgs__msg__IceServer * item =
    ((webrtc_ros_msgs__msg__IceServer *)
    webrtc_ros_msgs__srv__GetIceServers_Response__rosidl_typesupport_introspection_c__get_function__GetIceServers_Response__servers(untyped_member, index));
  const webrtc_ros_msgs__msg__IceServer * value =
    (const webrtc_ros_msgs__msg__IceServer *)(untyped_value);
  *item = *value;
}

bool webrtc_ros_msgs__srv__GetIceServers_Response__rosidl_typesupport_introspection_c__resize_function__GetIceServers_Response__servers(
  void * untyped_member, size_t size)
{
  webrtc_ros_msgs__msg__IceServer__Sequence * member =
    (webrtc_ros_msgs__msg__IceServer__Sequence *)(untyped_member);
  webrtc_ros_msgs__msg__IceServer__Sequence__fini(member);
  return webrtc_ros_msgs__msg__IceServer__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember webrtc_ros_msgs__srv__GetIceServers_Response__rosidl_typesupport_introspection_c__GetIceServers_Response_message_member_array[1] = {
  {
    "servers",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(webrtc_ros_msgs__srv__GetIceServers_Response, servers),  // bytes offset in struct
    NULL,  // default value
    webrtc_ros_msgs__srv__GetIceServers_Response__rosidl_typesupport_introspection_c__size_function__GetIceServers_Response__servers,  // size() function pointer
    webrtc_ros_msgs__srv__GetIceServers_Response__rosidl_typesupport_introspection_c__get_const_function__GetIceServers_Response__servers,  // get_const(index) function pointer
    webrtc_ros_msgs__srv__GetIceServers_Response__rosidl_typesupport_introspection_c__get_function__GetIceServers_Response__servers,  // get(index) function pointer
    webrtc_ros_msgs__srv__GetIceServers_Response__rosidl_typesupport_introspection_c__fetch_function__GetIceServers_Response__servers,  // fetch(index, &value) function pointer
    webrtc_ros_msgs__srv__GetIceServers_Response__rosidl_typesupport_introspection_c__assign_function__GetIceServers_Response__servers,  // assign(index, value) function pointer
    webrtc_ros_msgs__srv__GetIceServers_Response__rosidl_typesupport_introspection_c__resize_function__GetIceServers_Response__servers  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers webrtc_ros_msgs__srv__GetIceServers_Response__rosidl_typesupport_introspection_c__GetIceServers_Response_message_members = {
  "webrtc_ros_msgs__srv",  // message namespace
  "GetIceServers_Response",  // message name
  1,  // number of fields
  sizeof(webrtc_ros_msgs__srv__GetIceServers_Response),
  webrtc_ros_msgs__srv__GetIceServers_Response__rosidl_typesupport_introspection_c__GetIceServers_Response_message_member_array,  // message members
  webrtc_ros_msgs__srv__GetIceServers_Response__rosidl_typesupport_introspection_c__GetIceServers_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  webrtc_ros_msgs__srv__GetIceServers_Response__rosidl_typesupport_introspection_c__GetIceServers_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t webrtc_ros_msgs__srv__GetIceServers_Response__rosidl_typesupport_introspection_c__GetIceServers_Response_message_type_support_handle = {
  0,
  &webrtc_ros_msgs__srv__GetIceServers_Response__rosidl_typesupport_introspection_c__GetIceServers_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_webrtc_ros_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, webrtc_ros_msgs, srv, GetIceServers_Response)() {
  webrtc_ros_msgs__srv__GetIceServers_Response__rosidl_typesupport_introspection_c__GetIceServers_Response_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, webrtc_ros_msgs, msg, IceServer)();
  if (!webrtc_ros_msgs__srv__GetIceServers_Response__rosidl_typesupport_introspection_c__GetIceServers_Response_message_type_support_handle.typesupport_identifier) {
    webrtc_ros_msgs__srv__GetIceServers_Response__rosidl_typesupport_introspection_c__GetIceServers_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &webrtc_ros_msgs__srv__GetIceServers_Response__rosidl_typesupport_introspection_c__GetIceServers_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "webrtc_ros_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "webrtc_ros_msgs/srv/detail/get_ice_servers__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers webrtc_ros_msgs__srv__detail__get_ice_servers__rosidl_typesupport_introspection_c__GetIceServers_service_members = {
  "webrtc_ros_msgs__srv",  // service namespace
  "GetIceServers",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // webrtc_ros_msgs__srv__detail__get_ice_servers__rosidl_typesupport_introspection_c__GetIceServers_Request_message_type_support_handle,
  NULL  // response message
  // webrtc_ros_msgs__srv__detail__get_ice_servers__rosidl_typesupport_introspection_c__GetIceServers_Response_message_type_support_handle
};

static rosidl_service_type_support_t webrtc_ros_msgs__srv__detail__get_ice_servers__rosidl_typesupport_introspection_c__GetIceServers_service_type_support_handle = {
  0,
  &webrtc_ros_msgs__srv__detail__get_ice_servers__rosidl_typesupport_introspection_c__GetIceServers_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, webrtc_ros_msgs, srv, GetIceServers_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, webrtc_ros_msgs, srv, GetIceServers_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_webrtc_ros_msgs
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, webrtc_ros_msgs, srv, GetIceServers)() {
  if (!webrtc_ros_msgs__srv__detail__get_ice_servers__rosidl_typesupport_introspection_c__GetIceServers_service_type_support_handle.typesupport_identifier) {
    webrtc_ros_msgs__srv__detail__get_ice_servers__rosidl_typesupport_introspection_c__GetIceServers_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)webrtc_ros_msgs__srv__detail__get_ice_servers__rosidl_typesupport_introspection_c__GetIceServers_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, webrtc_ros_msgs, srv, GetIceServers_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, webrtc_ros_msgs, srv, GetIceServers_Response)()->data;
  }

  return &webrtc_ros_msgs__srv__detail__get_ice_servers__rosidl_typesupport_introspection_c__GetIceServers_service_type_support_handle;
}
