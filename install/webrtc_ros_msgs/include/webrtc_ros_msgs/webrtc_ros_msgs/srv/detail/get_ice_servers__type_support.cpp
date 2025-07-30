// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from webrtc_ros_msgs:srv/GetIceServers.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "webrtc_ros_msgs/srv/detail/get_ice_servers__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace webrtc_ros_msgs
{

namespace srv
{

namespace rosidl_typesupport_introspection_cpp
{

void GetIceServers_Request_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) webrtc_ros_msgs::srv::GetIceServers_Request(_init);
}

void GetIceServers_Request_fini_function(void * message_memory)
{
  auto typed_message = static_cast<webrtc_ros_msgs::srv::GetIceServers_Request *>(message_memory);
  typed_message->~GetIceServers_Request();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember GetIceServers_Request_message_member_array[1] = {
  {
    "structure_needs_at_least_one_member",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(webrtc_ros_msgs::srv::GetIceServers_Request, structure_needs_at_least_one_member),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers GetIceServers_Request_message_members = {
  "webrtc_ros_msgs::srv",  // message namespace
  "GetIceServers_Request",  // message name
  1,  // number of fields
  sizeof(webrtc_ros_msgs::srv::GetIceServers_Request),
  GetIceServers_Request_message_member_array,  // message members
  GetIceServers_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  GetIceServers_Request_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t GetIceServers_Request_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &GetIceServers_Request_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace srv

}  // namespace webrtc_ros_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<webrtc_ros_msgs::srv::GetIceServers_Request>()
{
  return &::webrtc_ros_msgs::srv::rosidl_typesupport_introspection_cpp::GetIceServers_Request_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, webrtc_ros_msgs, srv, GetIceServers_Request)() {
  return &::webrtc_ros_msgs::srv::rosidl_typesupport_introspection_cpp::GetIceServers_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "array"
// already included above
// #include "cstddef"
// already included above
// #include "string"
// already included above
// #include "vector"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "webrtc_ros_msgs/srv/detail/get_ice_servers__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/field_types.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace webrtc_ros_msgs
{

namespace srv
{

namespace rosidl_typesupport_introspection_cpp
{

void GetIceServers_Response_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) webrtc_ros_msgs::srv::GetIceServers_Response(_init);
}

void GetIceServers_Response_fini_function(void * message_memory)
{
  auto typed_message = static_cast<webrtc_ros_msgs::srv::GetIceServers_Response *>(message_memory);
  typed_message->~GetIceServers_Response();
}

size_t size_function__GetIceServers_Response__servers(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<webrtc_ros_msgs::msg::IceServer> *>(untyped_member);
  return member->size();
}

const void * get_const_function__GetIceServers_Response__servers(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<webrtc_ros_msgs::msg::IceServer> *>(untyped_member);
  return &member[index];
}

void * get_function__GetIceServers_Response__servers(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<webrtc_ros_msgs::msg::IceServer> *>(untyped_member);
  return &member[index];
}

void fetch_function__GetIceServers_Response__servers(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const webrtc_ros_msgs::msg::IceServer *>(
    get_const_function__GetIceServers_Response__servers(untyped_member, index));
  auto & value = *reinterpret_cast<webrtc_ros_msgs::msg::IceServer *>(untyped_value);
  value = item;
}

void assign_function__GetIceServers_Response__servers(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<webrtc_ros_msgs::msg::IceServer *>(
    get_function__GetIceServers_Response__servers(untyped_member, index));
  const auto & value = *reinterpret_cast<const webrtc_ros_msgs::msg::IceServer *>(untyped_value);
  item = value;
}

void resize_function__GetIceServers_Response__servers(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<webrtc_ros_msgs::msg::IceServer> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember GetIceServers_Response_message_member_array[1] = {
  {
    "servers",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<webrtc_ros_msgs::msg::IceServer>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(webrtc_ros_msgs::srv::GetIceServers_Response, servers),  // bytes offset in struct
    nullptr,  // default value
    size_function__GetIceServers_Response__servers,  // size() function pointer
    get_const_function__GetIceServers_Response__servers,  // get_const(index) function pointer
    get_function__GetIceServers_Response__servers,  // get(index) function pointer
    fetch_function__GetIceServers_Response__servers,  // fetch(index, &value) function pointer
    assign_function__GetIceServers_Response__servers,  // assign(index, value) function pointer
    resize_function__GetIceServers_Response__servers  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers GetIceServers_Response_message_members = {
  "webrtc_ros_msgs::srv",  // message namespace
  "GetIceServers_Response",  // message name
  1,  // number of fields
  sizeof(webrtc_ros_msgs::srv::GetIceServers_Response),
  GetIceServers_Response_message_member_array,  // message members
  GetIceServers_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  GetIceServers_Response_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t GetIceServers_Response_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &GetIceServers_Response_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace srv

}  // namespace webrtc_ros_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<webrtc_ros_msgs::srv::GetIceServers_Response>()
{
  return &::webrtc_ros_msgs::srv::rosidl_typesupport_introspection_cpp::GetIceServers_Response_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, webrtc_ros_msgs, srv, GetIceServers_Response)() {
  return &::webrtc_ros_msgs::srv::rosidl_typesupport_introspection_cpp::GetIceServers_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"
// already included above
// #include "webrtc_ros_msgs/srv/detail/get_ice_servers__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/service_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/service_type_support_decl.hpp"

namespace webrtc_ros_msgs
{

namespace srv
{

namespace rosidl_typesupport_introspection_cpp
{

// this is intentionally not const to allow initialization later to prevent an initialization race
static ::rosidl_typesupport_introspection_cpp::ServiceMembers GetIceServers_service_members = {
  "webrtc_ros_msgs::srv",  // service namespace
  "GetIceServers",  // service name
  // these two fields are initialized below on the first access
  // see get_service_type_support_handle<webrtc_ros_msgs::srv::GetIceServers>()
  nullptr,  // request message
  nullptr  // response message
};

static const rosidl_service_type_support_t GetIceServers_service_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &GetIceServers_service_members,
  get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace srv

}  // namespace webrtc_ros_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<webrtc_ros_msgs::srv::GetIceServers>()
{
  // get a handle to the value to be returned
  auto service_type_support =
    &::webrtc_ros_msgs::srv::rosidl_typesupport_introspection_cpp::GetIceServers_service_type_support_handle;
  // get a non-const and properly typed version of the data void *
  auto service_members = const_cast<::rosidl_typesupport_introspection_cpp::ServiceMembers *>(
    static_cast<const ::rosidl_typesupport_introspection_cpp::ServiceMembers *>(
      service_type_support->data));
  // make sure that both the request_members_ and the response_members_ are initialized
  // if they are not, initialize them
  if (
    service_members->request_members_ == nullptr ||
    service_members->response_members_ == nullptr)
  {
    // initialize the request_members_ with the static function from the external library
    service_members->request_members_ = static_cast<
      const ::rosidl_typesupport_introspection_cpp::MessageMembers *
      >(
      ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<
        ::webrtc_ros_msgs::srv::GetIceServers_Request
      >()->data
      );
    // initialize the response_members_ with the static function from the external library
    service_members->response_members_ = static_cast<
      const ::rosidl_typesupport_introspection_cpp::MessageMembers *
      >(
      ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<
        ::webrtc_ros_msgs::srv::GetIceServers_Response
      >()->data
      );
  }
  // finally return the properly initialized service_type_support handle
  return service_type_support;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, webrtc_ros_msgs, srv, GetIceServers)() {
  return ::rosidl_typesupport_introspection_cpp::get_service_type_support_handle<webrtc_ros_msgs::srv::GetIceServers>();
}

#ifdef __cplusplus
}
#endif
