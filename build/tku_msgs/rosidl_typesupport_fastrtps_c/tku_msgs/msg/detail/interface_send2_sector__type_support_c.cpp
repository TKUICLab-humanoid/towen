// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from tku_msgs:msg/InterfaceSend2Sector.idl
// generated code does not contain a copyright notice
#include "tku_msgs/msg/detail/interface_send2_sector__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "tku_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "tku_msgs/msg/detail/interface_send2_sector__struct.h"
#include "tku_msgs/msg/detail/interface_send2_sector__functions.h"
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

#include "rosidl_runtime_c/primitives_sequence.h"  // delay
#include "rosidl_runtime_c/primitives_sequence_functions.h"  // delay
#include "rosidl_runtime_c/string.h"  // sectorname
#include "rosidl_runtime_c/string_functions.h"  // sectorname

// forward declare type support functions


using _InterfaceSend2Sector__ros_msg_type = tku_msgs__msg__InterfaceSend2Sector;

static bool _InterfaceSend2Sector__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _InterfaceSend2Sector__ros_msg_type * ros_message = static_cast<const _InterfaceSend2Sector__ros_msg_type *>(untyped_ros_message);
  // Field name: package
  {
    cdr << ros_message->package;
  }

  // Field name: sectorname
  {
    const rosidl_runtime_c__String * str = &ros_message->sectorname;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: delay
  {
    size_t size = ros_message->delay.size;
    auto array_ptr = ros_message->delay.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: cnt
  {
    cdr << ros_message->cnt;
  }

  return true;
}

static bool _InterfaceSend2Sector__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _InterfaceSend2Sector__ros_msg_type * ros_message = static_cast<_InterfaceSend2Sector__ros_msg_type *>(untyped_ros_message);
  // Field name: package
  {
    cdr >> ros_message->package;
  }

  // Field name: sectorname
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->sectorname.data) {
      rosidl_runtime_c__String__init(&ros_message->sectorname);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->sectorname,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'sectorname'\n");
      return false;
    }
  }

  // Field name: delay
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->delay.data) {
      rosidl_runtime_c__int32__Sequence__fini(&ros_message->delay);
    }
    if (!rosidl_runtime_c__int32__Sequence__init(&ros_message->delay, size)) {
      fprintf(stderr, "failed to create array for field 'delay'");
      return false;
    }
    auto array_ptr = ros_message->delay.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: cnt
  {
    cdr >> ros_message->cnt;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_tku_msgs
size_t get_serialized_size_tku_msgs__msg__InterfaceSend2Sector(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _InterfaceSend2Sector__ros_msg_type * ros_message = static_cast<const _InterfaceSend2Sector__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name package
  {
    size_t item_size = sizeof(ros_message->package);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name sectorname
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->sectorname.size + 1);
  // field.name delay
  {
    size_t array_size = ros_message->delay.size;
    auto array_ptr = ros_message->delay.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name cnt
  {
    size_t item_size = sizeof(ros_message->cnt);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _InterfaceSend2Sector__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_tku_msgs__msg__InterfaceSend2Sector(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_tku_msgs
size_t max_serialized_size_tku_msgs__msg__InterfaceSend2Sector(
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

  // member: package
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: sectorname
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
  // member: delay
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: cnt
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
    using DataType = tku_msgs__msg__InterfaceSend2Sector;
    is_plain =
      (
      offsetof(DataType, cnt) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _InterfaceSend2Sector__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_tku_msgs__msg__InterfaceSend2Sector(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_InterfaceSend2Sector = {
  "tku_msgs::msg",
  "InterfaceSend2Sector",
  _InterfaceSend2Sector__cdr_serialize,
  _InterfaceSend2Sector__cdr_deserialize,
  _InterfaceSend2Sector__get_serialized_size,
  _InterfaceSend2Sector__max_serialized_size
};

static rosidl_message_type_support_t _InterfaceSend2Sector__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_InterfaceSend2Sector,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, tku_msgs, msg, InterfaceSend2Sector)() {
  return &_InterfaceSend2Sector__type_support;
}

#if defined(__cplusplus)
}
#endif
