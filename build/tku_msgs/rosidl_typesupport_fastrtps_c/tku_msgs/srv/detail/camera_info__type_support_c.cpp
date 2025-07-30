// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from tku_msgs:srv/CameraInfo.idl
// generated code does not contain a copyright notice
#include "tku_msgs/srv/detail/camera_info__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "tku_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "tku_msgs/srv/detail/camera_info__struct.h"
#include "tku_msgs/srv/detail/camera_info__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif


// forward declare type support functions


using _CameraInfo_Request__ros_msg_type = tku_msgs__srv__CameraInfo_Request;

static bool _CameraInfo_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _CameraInfo_Request__ros_msg_type * ros_message = static_cast<const _CameraInfo_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: load
  {
    cdr << (ros_message->load ? true : false);
  }

  return true;
}

static bool _CameraInfo_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _CameraInfo_Request__ros_msg_type * ros_message = static_cast<_CameraInfo_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: load
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->load = tmp ? true : false;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_tku_msgs
size_t get_serialized_size_tku_msgs__srv__CameraInfo_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _CameraInfo_Request__ros_msg_type * ros_message = static_cast<const _CameraInfo_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name load
  {
    size_t item_size = sizeof(ros_message->load);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _CameraInfo_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_tku_msgs__srv__CameraInfo_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_tku_msgs
size_t max_serialized_size_tku_msgs__srv__CameraInfo_Request(
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

  // member: load
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = tku_msgs__srv__CameraInfo_Request;
    is_plain =
      (
      offsetof(DataType, load) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _CameraInfo_Request__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_tku_msgs__srv__CameraInfo_Request(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_CameraInfo_Request = {
  "tku_msgs::srv",
  "CameraInfo_Request",
  _CameraInfo_Request__cdr_serialize,
  _CameraInfo_Request__cdr_deserialize,
  _CameraInfo_Request__get_serialized_size,
  _CameraInfo_Request__max_serialized_size
};

static rosidl_message_type_support_t _CameraInfo_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_CameraInfo_Request,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, tku_msgs, srv, CameraInfo_Request)() {
  return &_CameraInfo_Request__type_support;
}

#if defined(__cplusplus)
}
#endif

// already included above
// #include <cassert>
// already included above
// #include <limits>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "tku_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
// already included above
// #include "tku_msgs/srv/detail/camera_info__struct.h"
// already included above
// #include "tku_msgs/srv/detail/camera_info__functions.h"
// already included above
// #include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif


// forward declare type support functions


using _CameraInfo_Response__ros_msg_type = tku_msgs__srv__CameraInfo_Response;

static bool _CameraInfo_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _CameraInfo_Response__ros_msg_type * ros_message = static_cast<const _CameraInfo_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: brightness
  {
    cdr << ros_message->brightness;
  }

  // Field name: contrast
  {
    cdr << ros_message->contrast;
  }

  // Field name: saturation
  {
    cdr << ros_message->saturation;
  }

  // Field name: white_balance
  {
    cdr << ros_message->white_balance;
  }

  // Field name: auto_white_balance
  {
    cdr << (ros_message->auto_white_balance ? true : false);
  }

  // Field name: auto_exposure
  {
    cdr << (ros_message->auto_exposure ? true : false);
  }

  // Field name: auto_backlight_compensation
  {
    cdr << (ros_message->auto_backlight_compensation ? true : false);
  }

  return true;
}

static bool _CameraInfo_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _CameraInfo_Response__ros_msg_type * ros_message = static_cast<_CameraInfo_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: brightness
  {
    cdr >> ros_message->brightness;
  }

  // Field name: contrast
  {
    cdr >> ros_message->contrast;
  }

  // Field name: saturation
  {
    cdr >> ros_message->saturation;
  }

  // Field name: white_balance
  {
    cdr >> ros_message->white_balance;
  }

  // Field name: auto_white_balance
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->auto_white_balance = tmp ? true : false;
  }

  // Field name: auto_exposure
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->auto_exposure = tmp ? true : false;
  }

  // Field name: auto_backlight_compensation
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->auto_backlight_compensation = tmp ? true : false;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_tku_msgs
size_t get_serialized_size_tku_msgs__srv__CameraInfo_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _CameraInfo_Response__ros_msg_type * ros_message = static_cast<const _CameraInfo_Response__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name brightness
  {
    size_t item_size = sizeof(ros_message->brightness);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name contrast
  {
    size_t item_size = sizeof(ros_message->contrast);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name saturation
  {
    size_t item_size = sizeof(ros_message->saturation);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name white_balance
  {
    size_t item_size = sizeof(ros_message->white_balance);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name auto_white_balance
  {
    size_t item_size = sizeof(ros_message->auto_white_balance);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name auto_exposure
  {
    size_t item_size = sizeof(ros_message->auto_exposure);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name auto_backlight_compensation
  {
    size_t item_size = sizeof(ros_message->auto_backlight_compensation);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _CameraInfo_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_tku_msgs__srv__CameraInfo_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_tku_msgs
size_t max_serialized_size_tku_msgs__srv__CameraInfo_Response(
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

  // member: brightness
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: contrast
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: saturation
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: white_balance
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: auto_white_balance
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: auto_exposure
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: auto_backlight_compensation
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = tku_msgs__srv__CameraInfo_Response;
    is_plain =
      (
      offsetof(DataType, auto_backlight_compensation) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _CameraInfo_Response__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_tku_msgs__srv__CameraInfo_Response(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_CameraInfo_Response = {
  "tku_msgs::srv",
  "CameraInfo_Response",
  _CameraInfo_Response__cdr_serialize,
  _CameraInfo_Response__cdr_deserialize,
  _CameraInfo_Response__get_serialized_size,
  _CameraInfo_Response__max_serialized_size
};

static rosidl_message_type_support_t _CameraInfo_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_CameraInfo_Response,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, tku_msgs, srv, CameraInfo_Response)() {
  return &_CameraInfo_Response__type_support;
}

#if defined(__cplusplus)
}
#endif

#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "tku_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "tku_msgs/srv/camera_info.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t CameraInfo__callbacks = {
  "tku_msgs::srv",
  "CameraInfo",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, tku_msgs, srv, CameraInfo_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, tku_msgs, srv, CameraInfo_Response)(),
};

static rosidl_service_type_support_t CameraInfo__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &CameraInfo__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, tku_msgs, srv, CameraInfo)() {
  return &CameraInfo__handle;
}

#if defined(__cplusplus)
}
#endif
