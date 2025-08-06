// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from tku_msgs:msg/Parametermessage.idl
// generated code does not contain a copyright notice
#include "tku_msgs/msg/detail/parametermessage__rosidl_typesupport_fastrtps_cpp.hpp"
#include "tku_msgs/msg/detail/parametermessage__struct.hpp"

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

namespace tku_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_tku_msgs
cdr_serialize(
  const tku_msgs::msg::Parametermessage & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: mode
  cdr << ros_message.mode;
  // Member: x_swing_range
  cdr << ros_message.x_swing_range;
  // Member: y_swing_range
  cdr << ros_message.y_swing_range;
  // Member: z_swing_range
  cdr << ros_message.z_swing_range;
  // Member: period_t
  cdr << ros_message.period_t;
  // Member: period_t2
  cdr << ros_message.period_t2;
  // Member: sample_time
  cdr << ros_message.sample_time;
  // Member: osc_lockrange
  cdr << ros_message.osc_lockrange;
  // Member: base_default_z
  cdr << ros_message.base_default_z;
  // Member: y_swing_shift
  cdr << ros_message.y_swing_shift;
  // Member: x_swing_com
  cdr << ros_message.x_swing_com;
  // Member: base_lift_z
  cdr << ros_message.base_lift_z;
  // Member: rightfoot_shift_z
  cdr << ros_message.rightfoot_shift_z;
  // Member: com_y_swing
  cdr << ros_message.com_y_swing;
  // Member: now_stand_height
  cdr << ros_message.now_stand_height;
  // Member: now_com_height
  cdr << ros_message.now_com_height;
  // Member: stand_balance
  cdr << (ros_message.stand_balance ? true : false);
  // Member: hip_roll
  cdr << ros_message.hip_roll;
  // Member: ankle_roll
  cdr << ros_message.ankle_roll;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_tku_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  tku_msgs::msg::Parametermessage & ros_message)
{
  // Member: mode
  cdr >> ros_message.mode;

  // Member: x_swing_range
  cdr >> ros_message.x_swing_range;

  // Member: y_swing_range
  cdr >> ros_message.y_swing_range;

  // Member: z_swing_range
  cdr >> ros_message.z_swing_range;

  // Member: period_t
  cdr >> ros_message.period_t;

  // Member: period_t2
  cdr >> ros_message.period_t2;

  // Member: sample_time
  cdr >> ros_message.sample_time;

  // Member: osc_lockrange
  cdr >> ros_message.osc_lockrange;

  // Member: base_default_z
  cdr >> ros_message.base_default_z;

  // Member: y_swing_shift
  cdr >> ros_message.y_swing_shift;

  // Member: x_swing_com
  cdr >> ros_message.x_swing_com;

  // Member: base_lift_z
  cdr >> ros_message.base_lift_z;

  // Member: rightfoot_shift_z
  cdr >> ros_message.rightfoot_shift_z;

  // Member: com_y_swing
  cdr >> ros_message.com_y_swing;

  // Member: now_stand_height
  cdr >> ros_message.now_stand_height;

  // Member: now_com_height
  cdr >> ros_message.now_com_height;

  // Member: stand_balance
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.stand_balance = tmp ? true : false;
  }

  // Member: hip_roll
  cdr >> ros_message.hip_roll;

  // Member: ankle_roll
  cdr >> ros_message.ankle_roll;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_tku_msgs
get_serialized_size(
  const tku_msgs::msg::Parametermessage & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: mode
  {
    size_t item_size = sizeof(ros_message.mode);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: x_swing_range
  {
    size_t item_size = sizeof(ros_message.x_swing_range);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: y_swing_range
  {
    size_t item_size = sizeof(ros_message.y_swing_range);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: z_swing_range
  {
    size_t item_size = sizeof(ros_message.z_swing_range);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: period_t
  {
    size_t item_size = sizeof(ros_message.period_t);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: period_t2
  {
    size_t item_size = sizeof(ros_message.period_t2);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: sample_time
  {
    size_t item_size = sizeof(ros_message.sample_time);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: osc_lockrange
  {
    size_t item_size = sizeof(ros_message.osc_lockrange);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: base_default_z
  {
    size_t item_size = sizeof(ros_message.base_default_z);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: y_swing_shift
  {
    size_t item_size = sizeof(ros_message.y_swing_shift);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: x_swing_com
  {
    size_t item_size = sizeof(ros_message.x_swing_com);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: base_lift_z
  {
    size_t item_size = sizeof(ros_message.base_lift_z);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: rightfoot_shift_z
  {
    size_t item_size = sizeof(ros_message.rightfoot_shift_z);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: com_y_swing
  {
    size_t item_size = sizeof(ros_message.com_y_swing);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: now_stand_height
  {
    size_t item_size = sizeof(ros_message.now_stand_height);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: now_com_height
  {
    size_t item_size = sizeof(ros_message.now_com_height);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: stand_balance
  {
    size_t item_size = sizeof(ros_message.stand_balance);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: hip_roll
  {
    size_t item_size = sizeof(ros_message.hip_roll);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: ankle_roll
  {
    size_t item_size = sizeof(ros_message.ankle_roll);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_tku_msgs
max_serialized_size_Parametermessage(
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


  // Member: mode
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: x_swing_range
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: y_swing_range
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: z_swing_range
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: period_t
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: period_t2
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: sample_time
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: osc_lockrange
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: base_default_z
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: y_swing_shift
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: x_swing_com
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: base_lift_z
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: rightfoot_shift_z
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: com_y_swing
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: now_stand_height
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: now_com_height
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: stand_balance
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: hip_roll
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: ankle_roll
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = tku_msgs::msg::Parametermessage;
    is_plain =
      (
      offsetof(DataType, ankle_roll) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _Parametermessage__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const tku_msgs::msg::Parametermessage *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _Parametermessage__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<tku_msgs::msg::Parametermessage *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _Parametermessage__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const tku_msgs::msg::Parametermessage *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _Parametermessage__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_Parametermessage(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _Parametermessage__callbacks = {
  "tku_msgs::msg",
  "Parametermessage",
  _Parametermessage__cdr_serialize,
  _Parametermessage__cdr_deserialize,
  _Parametermessage__get_serialized_size,
  _Parametermessage__max_serialized_size
};

static rosidl_message_type_support_t _Parametermessage__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_Parametermessage__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace tku_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_tku_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<tku_msgs::msg::Parametermessage>()
{
  return &tku_msgs::msg::typesupport_fastrtps_cpp::_Parametermessage__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, tku_msgs, msg, Parametermessage)() {
  return &tku_msgs::msg::typesupport_fastrtps_cpp::_Parametermessage__handle;
}

#ifdef __cplusplus
}
#endif
