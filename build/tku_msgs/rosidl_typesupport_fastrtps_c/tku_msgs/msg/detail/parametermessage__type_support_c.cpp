// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from tku_msgs:msg/Parametermessage.idl
// generated code does not contain a copyright notice
#include "tku_msgs/msg/detail/parametermessage__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "tku_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "tku_msgs/msg/detail/parametermessage__struct.h"
#include "tku_msgs/msg/detail/parametermessage__functions.h"
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


using _Parametermessage__ros_msg_type = tku_msgs__msg__Parametermessage;

static bool _Parametermessage__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _Parametermessage__ros_msg_type * ros_message = static_cast<const _Parametermessage__ros_msg_type *>(untyped_ros_message);
  // Field name: mode
  {
    cdr << ros_message->mode;
  }

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

  return true;
}

static bool _Parametermessage__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _Parametermessage__ros_msg_type * ros_message = static_cast<_Parametermessage__ros_msg_type *>(untyped_ros_message);
  // Field name: mode
  {
    cdr >> ros_message->mode;
  }

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

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_tku_msgs
size_t get_serialized_size_tku_msgs__msg__Parametermessage(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _Parametermessage__ros_msg_type * ros_message = static_cast<const _Parametermessage__ros_msg_type *>(untyped_ros_message);
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

  return current_alignment - initial_alignment;
}

static uint32_t _Parametermessage__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_tku_msgs__msg__Parametermessage(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_tku_msgs
size_t max_serialized_size_tku_msgs__msg__Parametermessage(
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
  // member: x_swing_range
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: y_swing_range
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: z_swing_range
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
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

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: base_default_z
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: y_swing_shift
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: x_swing_com
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: base_lift_z
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: rightfoot_shift_z
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: com_y_swing
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: now_stand_height
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: now_com_height
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: stand_balance
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
    using DataType = tku_msgs__msg__Parametermessage;
    is_plain =
      (
      offsetof(DataType, stand_balance) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _Parametermessage__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_tku_msgs__msg__Parametermessage(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_Parametermessage = {
  "tku_msgs::msg",
  "Parametermessage",
  _Parametermessage__cdr_serialize,
  _Parametermessage__cdr_deserialize,
  _Parametermessage__get_serialized_size,
  _Parametermessage__max_serialized_size
};

static rosidl_message_type_support_t _Parametermessage__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_Parametermessage,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, tku_msgs, msg, Parametermessage)() {
  return &_Parametermessage__type_support;
}

#if defined(__cplusplus)
}
#endif
