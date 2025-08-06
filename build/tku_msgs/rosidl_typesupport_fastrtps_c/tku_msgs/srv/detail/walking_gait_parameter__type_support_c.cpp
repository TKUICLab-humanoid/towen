// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from tku_msgs:srv/WalkingGaitParameter.idl
// generated code does not contain a copyright notice
#include "tku_msgs/srv/detail/walking_gait_parameter__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "tku_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "tku_msgs/srv/detail/walking_gait_parameter__struct.h"
#include "tku_msgs/srv/detail/walking_gait_parameter__functions.h"
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


using _WalkingGaitParameter_Request__ros_msg_type = tku_msgs__srv__WalkingGaitParameter_Request;

static bool _WalkingGaitParameter_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _WalkingGaitParameter_Request__ros_msg_type * ros_message = static_cast<const _WalkingGaitParameter_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: mode
  {
    cdr << ros_message->mode;
  }

  return true;
}

static bool _WalkingGaitParameter_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _WalkingGaitParameter_Request__ros_msg_type * ros_message = static_cast<_WalkingGaitParameter_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: mode
  {
    cdr >> ros_message->mode;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_tku_msgs
size_t get_serialized_size_tku_msgs__srv__WalkingGaitParameter_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _WalkingGaitParameter_Request__ros_msg_type * ros_message = static_cast<const _WalkingGaitParameter_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name mode
  {
    size_t item_size = sizeof(ros_message->mode);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _WalkingGaitParameter_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_tku_msgs__srv__WalkingGaitParameter_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_tku_msgs
size_t max_serialized_size_tku_msgs__srv__WalkingGaitParameter_Request(
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

  // member: mode
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = tku_msgs__srv__WalkingGaitParameter_Request;
    is_plain =
      (
      offsetof(DataType, mode) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _WalkingGaitParameter_Request__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_tku_msgs__srv__WalkingGaitParameter_Request(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_WalkingGaitParameter_Request = {
  "tku_msgs::srv",
  "WalkingGaitParameter_Request",
  _WalkingGaitParameter_Request__cdr_serialize,
  _WalkingGaitParameter_Request__cdr_deserialize,
  _WalkingGaitParameter_Request__get_serialized_size,
  _WalkingGaitParameter_Request__max_serialized_size
};

static rosidl_message_type_support_t _WalkingGaitParameter_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_WalkingGaitParameter_Request,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, tku_msgs, srv, WalkingGaitParameter_Request)() {
  return &_WalkingGaitParameter_Request__type_support;
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
// #include "tku_msgs/srv/detail/walking_gait_parameter__struct.h"
// already included above
// #include "tku_msgs/srv/detail/walking_gait_parameter__functions.h"
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


using _WalkingGaitParameter_Response__ros_msg_type = tku_msgs__srv__WalkingGaitParameter_Response;

static bool _WalkingGaitParameter_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _WalkingGaitParameter_Response__ros_msg_type * ros_message = static_cast<const _WalkingGaitParameter_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: x_swing_range
  {
    cdr << ros_message->x_swing_range;
  }

  // Field name: y_swing_range
  {
    cdr << ros_message->y_swing_range;
  }

  // Field name: z_swing_range
  {
    cdr << ros_message->z_swing_range;
  }

  // Field name: period_t
  {
    cdr << ros_message->period_t;
  }

  // Field name: period_t2
  {
    cdr << ros_message->period_t2;
  }

  // Field name: sample_time
  {
    cdr << ros_message->sample_time;
  }

  // Field name: osc_lockrange
  {
    cdr << ros_message->osc_lockrange;
  }

  // Field name: base_default_z
  {
    cdr << ros_message->base_default_z;
  }

  // Field name: y_swing_shift
  {
    cdr << ros_message->y_swing_shift;
  }

  // Field name: x_swing_com
  {
    cdr << ros_message->x_swing_com;
  }

  // Field name: base_lift_z
  {
    cdr << ros_message->base_lift_z;
  }

  // Field name: rightfoot_shift_z
  {
    cdr << ros_message->rightfoot_shift_z;
  }

  // Field name: com_y_swing
  {
    cdr << ros_message->com_y_swing;
  }

  // Field name: now_stand_height
  {
    cdr << ros_message->now_stand_height;
  }

  // Field name: now_com_height
  {
    cdr << ros_message->now_com_height;
  }

  // Field name: stand_balance
  {
    cdr << (ros_message->stand_balance ? true : false);
  }

  // Field name: hip_roll
  {
    cdr << ros_message->hip_roll;
  }

  // Field name: ankle_roll
  {
    cdr << ros_message->ankle_roll;
  }

  return true;
}

static bool _WalkingGaitParameter_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _WalkingGaitParameter_Response__ros_msg_type * ros_message = static_cast<_WalkingGaitParameter_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: x_swing_range
  {
    cdr >> ros_message->x_swing_range;
  }

  // Field name: y_swing_range
  {
    cdr >> ros_message->y_swing_range;
  }

  // Field name: z_swing_range
  {
    cdr >> ros_message->z_swing_range;
  }

  // Field name: period_t
  {
    cdr >> ros_message->period_t;
  }

  // Field name: period_t2
  {
    cdr >> ros_message->period_t2;
  }

  // Field name: sample_time
  {
    cdr >> ros_message->sample_time;
  }

  // Field name: osc_lockrange
  {
    cdr >> ros_message->osc_lockrange;
  }

  // Field name: base_default_z
  {
    cdr >> ros_message->base_default_z;
  }

  // Field name: y_swing_shift
  {
    cdr >> ros_message->y_swing_shift;
  }

  // Field name: x_swing_com
  {
    cdr >> ros_message->x_swing_com;
  }

  // Field name: base_lift_z
  {
    cdr >> ros_message->base_lift_z;
  }

  // Field name: rightfoot_shift_z
  {
    cdr >> ros_message->rightfoot_shift_z;
  }

  // Field name: com_y_swing
  {
    cdr >> ros_message->com_y_swing;
  }

  // Field name: now_stand_height
  {
    cdr >> ros_message->now_stand_height;
  }

  // Field name: now_com_height
  {
    cdr >> ros_message->now_com_height;
  }

  // Field name: stand_balance
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->stand_balance = tmp ? true : false;
  }

  // Field name: hip_roll
  {
    cdr >> ros_message->hip_roll;
  }

  // Field name: ankle_roll
  {
    cdr >> ros_message->ankle_roll;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_tku_msgs
size_t get_serialized_size_tku_msgs__srv__WalkingGaitParameter_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _WalkingGaitParameter_Response__ros_msg_type * ros_message = static_cast<const _WalkingGaitParameter_Response__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name x_swing_range
  {
    size_t item_size = sizeof(ros_message->x_swing_range);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name y_swing_range
  {
    size_t item_size = sizeof(ros_message->y_swing_range);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name z_swing_range
  {
    size_t item_size = sizeof(ros_message->z_swing_range);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name period_t
  {
    size_t item_size = sizeof(ros_message->period_t);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name period_t2
  {
    size_t item_size = sizeof(ros_message->period_t2);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name sample_time
  {
    size_t item_size = sizeof(ros_message->sample_time);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name osc_lockrange
  {
    size_t item_size = sizeof(ros_message->osc_lockrange);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name base_default_z
  {
    size_t item_size = sizeof(ros_message->base_default_z);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name y_swing_shift
  {
    size_t item_size = sizeof(ros_message->y_swing_shift);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name x_swing_com
  {
    size_t item_size = sizeof(ros_message->x_swing_com);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name base_lift_z
  {
    size_t item_size = sizeof(ros_message->base_lift_z);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name rightfoot_shift_z
  {
    size_t item_size = sizeof(ros_message->rightfoot_shift_z);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name com_y_swing
  {
    size_t item_size = sizeof(ros_message->com_y_swing);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name now_stand_height
  {
    size_t item_size = sizeof(ros_message->now_stand_height);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name now_com_height
  {
    size_t item_size = sizeof(ros_message->now_com_height);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name stand_balance
  {
    size_t item_size = sizeof(ros_message->stand_balance);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name hip_roll
  {
    size_t item_size = sizeof(ros_message->hip_roll);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name ankle_roll
  {
    size_t item_size = sizeof(ros_message->ankle_roll);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _WalkingGaitParameter_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_tku_msgs__srv__WalkingGaitParameter_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_tku_msgs
size_t max_serialized_size_tku_msgs__srv__WalkingGaitParameter_Response(
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

  // member: x_swing_range
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: y_swing_range
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: z_swing_range
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: period_t
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: period_t2
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: sample_time
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: osc_lockrange
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: base_default_z
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: y_swing_shift
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: x_swing_com
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: base_lift_z
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: rightfoot_shift_z
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: com_y_swing
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: now_stand_height
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: now_com_height
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: stand_balance
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: hip_roll
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: ankle_roll
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = tku_msgs__srv__WalkingGaitParameter_Response;
    is_plain =
      (
      offsetof(DataType, ankle_roll) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _WalkingGaitParameter_Response__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_tku_msgs__srv__WalkingGaitParameter_Response(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_WalkingGaitParameter_Response = {
  "tku_msgs::srv",
  "WalkingGaitParameter_Response",
  _WalkingGaitParameter_Response__cdr_serialize,
  _WalkingGaitParameter_Response__cdr_deserialize,
  _WalkingGaitParameter_Response__get_serialized_size,
  _WalkingGaitParameter_Response__max_serialized_size
};

static rosidl_message_type_support_t _WalkingGaitParameter_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_WalkingGaitParameter_Response,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, tku_msgs, srv, WalkingGaitParameter_Response)() {
  return &_WalkingGaitParameter_Response__type_support;
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
#include "tku_msgs/srv/walking_gait_parameter.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t WalkingGaitParameter__callbacks = {
  "tku_msgs::srv",
  "WalkingGaitParameter",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, tku_msgs, srv, WalkingGaitParameter_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, tku_msgs, srv, WalkingGaitParameter_Response)(),
};

static rosidl_service_type_support_t WalkingGaitParameter__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &WalkingGaitParameter__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, tku_msgs, srv, WalkingGaitParameter)() {
  return &WalkingGaitParameter__handle;
}

#if defined(__cplusplus)
}
#endif
