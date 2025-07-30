// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from webrtc_ros_msgs:msg/IceServer.idl
// generated code does not contain a copyright notice
#include "webrtc_ros_msgs/msg/detail/ice_server__rosidl_typesupport_fastrtps_cpp.hpp"
#include "webrtc_ros_msgs/msg/detail/ice_server__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

namespace webrtc_ros_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_webrtc_ros_msgs
cdr_serialize(
  const webrtc_ros_msgs::msg::IceServer & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: uri
  cdr << ros_message.uri;
  // Member: username
  cdr << ros_message.username;
  // Member: password
  cdr << ros_message.password;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_webrtc_ros_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  webrtc_ros_msgs::msg::IceServer & ros_message)
{
  // Member: uri
  cdr >> ros_message.uri;

  // Member: username
  cdr >> ros_message.username;

  // Member: password
  cdr >> ros_message.password;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_webrtc_ros_msgs
get_serialized_size(
  const webrtc_ros_msgs::msg::IceServer & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: uri
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.uri.size() + 1);
  // Member: username
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.username.size() + 1);
  // Member: password
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.password.size() + 1);

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_webrtc_ros_msgs
max_serialized_size_IceServer(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;


  // Member: uri
  {
    size_t array_size = 1;

    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Member: username
  {
    size_t array_size = 1;

    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Member: password
  {
    size_t array_size = 1;

    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = webrtc_ros_msgs::msg::IceServer;
    is_plain =
      (
      offsetof(DataType, password) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _IceServer__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const webrtc_ros_msgs::msg::IceServer *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _IceServer__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<webrtc_ros_msgs::msg::IceServer *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _IceServer__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const webrtc_ros_msgs::msg::IceServer *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _IceServer__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_IceServer(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _IceServer__callbacks = {
  "webrtc_ros_msgs::msg",
  "IceServer",
  _IceServer__cdr_serialize,
  _IceServer__cdr_deserialize,
  _IceServer__get_serialized_size,
  _IceServer__max_serialized_size
};

static rosidl_message_type_support_t _IceServer__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_IceServer__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace webrtc_ros_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_webrtc_ros_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<webrtc_ros_msgs::msg::IceServer>()
{
  return &webrtc_ros_msgs::msg::typesupport_fastrtps_cpp::_IceServer__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, webrtc_ros_msgs, msg, IceServer)() {
  return &webrtc_ros_msgs::msg::typesupport_fastrtps_cpp::_IceServer__handle;
}

#ifdef __cplusplus
}
#endif
