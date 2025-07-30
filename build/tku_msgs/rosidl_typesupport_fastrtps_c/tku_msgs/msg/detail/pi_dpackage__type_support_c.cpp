// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from tku_msgs:msg/PIDpackage.idl
// generated code does not contain a copyright notice
#include "tku_msgs/msg/detail/pi_dpackage__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "tku_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "tku_msgs/msg/detail/pi_dpackage__struct.h"
#include "tku_msgs/msg/detail/pi_dpackage__functions.h"
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


using _PIDpackage__ros_msg_type = tku_msgs__msg__PIDpackage;

static bool _PIDpackage__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _PIDpackage__ros_msg_type * ros_message = static_cast<const _PIDpackage__ros_msg_type *>(untyped_ros_message);
  // Field name: motor_p
  {
    cdr << ros_message->motor_p;
  }

  // Field name: motor_i
  {
    cdr << ros_message->motor_i;
  }

  // Field name: motor_d
  {
    cdr << ros_message->motor_d;
  }

  // Field name: pflag
  {
    cdr << (ros_message->pflag ? true : false);
  }

  // Field name: iflag
  {
    cdr << (ros_message->iflag ? true : false);
  }

  // Field name: dflag
  {
    cdr << (ros_message->dflag ? true : false);
  }

  // Field name: motorid
  {
    cdr << ros_message->motorid;
  }

  return true;
}

static bool _PIDpackage__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _PIDpackage__ros_msg_type * ros_message = static_cast<_PIDpackage__ros_msg_type *>(untyped_ros_message);
  // Field name: motor_p
  {
    cdr >> ros_message->motor_p;
  }

  // Field name: motor_i
  {
    cdr >> ros_message->motor_i;
  }

  // Field name: motor_d
  {
    cdr >> ros_message->motor_d;
  }

  // Field name: pflag
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->pflag = tmp ? true : false;
  }

  // Field name: iflag
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->iflag = tmp ? true : false;
  }

  // Field name: dflag
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->dflag = tmp ? true : false;
  }

  // Field name: motorid
  {
    cdr >> ros_message->motorid;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_tku_msgs
size_t get_serialized_size_tku_msgs__msg__PIDpackage(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _PIDpackage__ros_msg_type * ros_message = static_cast<const _PIDpackage__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name motor_p
  {
    size_t item_size = sizeof(ros_message->motor_p);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name motor_i
  {
    size_t item_size = sizeof(ros_message->motor_i);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name motor_d
  {
    size_t item_size = sizeof(ros_message->motor_d);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name pflag
  {
    size_t item_size = sizeof(ros_message->pflag);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name iflag
  {
    size_t item_size = sizeof(ros_message->iflag);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name dflag
  {
    size_t item_size = sizeof(ros_message->dflag);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name motorid
  {
    size_t item_size = sizeof(ros_message->motorid);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _PIDpackage__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_tku_msgs__msg__PIDpackage(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_tku_msgs
size_t max_serialized_size_tku_msgs__msg__PIDpackage(
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

  // member: motor_p
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: motor_i
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: motor_d
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: pflag
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: iflag
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: dflag
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: motorid
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = tku_msgs__msg__PIDpackage;
    is_plain =
      (
      offsetof(DataType, motorid) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _PIDpackage__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_tku_msgs__msg__PIDpackage(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_PIDpackage = {
  "tku_msgs::msg",
  "PIDpackage",
  _PIDpackage__cdr_serialize,
  _PIDpackage__cdr_deserialize,
  _PIDpackage__get_serialized_size,
  _PIDpackage__max_serialized_size
};

static rosidl_message_type_support_t _PIDpackage__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_PIDpackage,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, tku_msgs, msg, PIDpackage)() {
  return &_PIDpackage__type_support;
}

#if defined(__cplusplus)
}
#endif
