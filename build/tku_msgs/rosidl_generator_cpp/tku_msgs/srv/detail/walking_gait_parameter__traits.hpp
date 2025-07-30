// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from tku_msgs:srv/WalkingGaitParameter.idl
// generated code does not contain a copyright notice

#ifndef TKU_MSGS__SRV__DETAIL__WALKING_GAIT_PARAMETER__TRAITS_HPP_
#define TKU_MSGS__SRV__DETAIL__WALKING_GAIT_PARAMETER__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "tku_msgs/srv/detail/walking_gait_parameter__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace tku_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const WalkingGaitParameter_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: mode
  {
    out << "mode: ";
    rosidl_generator_traits::value_to_yaml(msg.mode, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const WalkingGaitParameter_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: mode
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "mode: ";
    rosidl_generator_traits::value_to_yaml(msg.mode, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const WalkingGaitParameter_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace tku_msgs

namespace rosidl_generator_traits
{

[[deprecated("use tku_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const tku_msgs::srv::WalkingGaitParameter_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  tku_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use tku_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const tku_msgs::srv::WalkingGaitParameter_Request & msg)
{
  return tku_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<tku_msgs::srv::WalkingGaitParameter_Request>()
{
  return "tku_msgs::srv::WalkingGaitParameter_Request";
}

template<>
inline const char * name<tku_msgs::srv::WalkingGaitParameter_Request>()
{
  return "tku_msgs/srv/WalkingGaitParameter_Request";
}

template<>
struct has_fixed_size<tku_msgs::srv::WalkingGaitParameter_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<tku_msgs::srv::WalkingGaitParameter_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<tku_msgs::srv::WalkingGaitParameter_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace tku_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const WalkingGaitParameter_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: x_swing_range
  {
    out << "x_swing_range: ";
    rosidl_generator_traits::value_to_yaml(msg.x_swing_range, out);
    out << ", ";
  }

  // member: y_swing_range
  {
    out << "y_swing_range: ";
    rosidl_generator_traits::value_to_yaml(msg.y_swing_range, out);
    out << ", ";
  }

  // member: z_swing_range
  {
    out << "z_swing_range: ";
    rosidl_generator_traits::value_to_yaml(msg.z_swing_range, out);
    out << ", ";
  }

  // member: period_t
  {
    out << "period_t: ";
    rosidl_generator_traits::value_to_yaml(msg.period_t, out);
    out << ", ";
  }

  // member: period_t2
  {
    out << "period_t2: ";
    rosidl_generator_traits::value_to_yaml(msg.period_t2, out);
    out << ", ";
  }

  // member: sample_time
  {
    out << "sample_time: ";
    rosidl_generator_traits::value_to_yaml(msg.sample_time, out);
    out << ", ";
  }

  // member: osc_lockrange
  {
    out << "osc_lockrange: ";
    rosidl_generator_traits::value_to_yaml(msg.osc_lockrange, out);
    out << ", ";
  }

  // member: base_default_z
  {
    out << "base_default_z: ";
    rosidl_generator_traits::value_to_yaml(msg.base_default_z, out);
    out << ", ";
  }

  // member: y_swing_shift
  {
    out << "y_swing_shift: ";
    rosidl_generator_traits::value_to_yaml(msg.y_swing_shift, out);
    out << ", ";
  }

  // member: x_swing_com
  {
    out << "x_swing_com: ";
    rosidl_generator_traits::value_to_yaml(msg.x_swing_com, out);
    out << ", ";
  }

  // member: base_lift_z
  {
    out << "base_lift_z: ";
    rosidl_generator_traits::value_to_yaml(msg.base_lift_z, out);
    out << ", ";
  }

  // member: rightfoot_shift_z
  {
    out << "rightfoot_shift_z: ";
    rosidl_generator_traits::value_to_yaml(msg.rightfoot_shift_z, out);
    out << ", ";
  }

  // member: com_y_swing
  {
    out << "com_y_swing: ";
    rosidl_generator_traits::value_to_yaml(msg.com_y_swing, out);
    out << ", ";
  }

  // member: now_stand_height
  {
    out << "now_stand_height: ";
    rosidl_generator_traits::value_to_yaml(msg.now_stand_height, out);
    out << ", ";
  }

  // member: now_com_height
  {
    out << "now_com_height: ";
    rosidl_generator_traits::value_to_yaml(msg.now_com_height, out);
    out << ", ";
  }

  // member: stand_balance
  {
    out << "stand_balance: ";
    rosidl_generator_traits::value_to_yaml(msg.stand_balance, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const WalkingGaitParameter_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: x_swing_range
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "x_swing_range: ";
    rosidl_generator_traits::value_to_yaml(msg.x_swing_range, out);
    out << "\n";
  }

  // member: y_swing_range
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "y_swing_range: ";
    rosidl_generator_traits::value_to_yaml(msg.y_swing_range, out);
    out << "\n";
  }

  // member: z_swing_range
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "z_swing_range: ";
    rosidl_generator_traits::value_to_yaml(msg.z_swing_range, out);
    out << "\n";
  }

  // member: period_t
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "period_t: ";
    rosidl_generator_traits::value_to_yaml(msg.period_t, out);
    out << "\n";
  }

  // member: period_t2
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "period_t2: ";
    rosidl_generator_traits::value_to_yaml(msg.period_t2, out);
    out << "\n";
  }

  // member: sample_time
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "sample_time: ";
    rosidl_generator_traits::value_to_yaml(msg.sample_time, out);
    out << "\n";
  }

  // member: osc_lockrange
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "osc_lockrange: ";
    rosidl_generator_traits::value_to_yaml(msg.osc_lockrange, out);
    out << "\n";
  }

  // member: base_default_z
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "base_default_z: ";
    rosidl_generator_traits::value_to_yaml(msg.base_default_z, out);
    out << "\n";
  }

  // member: y_swing_shift
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "y_swing_shift: ";
    rosidl_generator_traits::value_to_yaml(msg.y_swing_shift, out);
    out << "\n";
  }

  // member: x_swing_com
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "x_swing_com: ";
    rosidl_generator_traits::value_to_yaml(msg.x_swing_com, out);
    out << "\n";
  }

  // member: base_lift_z
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "base_lift_z: ";
    rosidl_generator_traits::value_to_yaml(msg.base_lift_z, out);
    out << "\n";
  }

  // member: rightfoot_shift_z
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "rightfoot_shift_z: ";
    rosidl_generator_traits::value_to_yaml(msg.rightfoot_shift_z, out);
    out << "\n";
  }

  // member: com_y_swing
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "com_y_swing: ";
    rosidl_generator_traits::value_to_yaml(msg.com_y_swing, out);
    out << "\n";
  }

  // member: now_stand_height
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "now_stand_height: ";
    rosidl_generator_traits::value_to_yaml(msg.now_stand_height, out);
    out << "\n";
  }

  // member: now_com_height
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "now_com_height: ";
    rosidl_generator_traits::value_to_yaml(msg.now_com_height, out);
    out << "\n";
  }

  // member: stand_balance
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "stand_balance: ";
    rosidl_generator_traits::value_to_yaml(msg.stand_balance, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const WalkingGaitParameter_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace tku_msgs

namespace rosidl_generator_traits
{

[[deprecated("use tku_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const tku_msgs::srv::WalkingGaitParameter_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  tku_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use tku_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const tku_msgs::srv::WalkingGaitParameter_Response & msg)
{
  return tku_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<tku_msgs::srv::WalkingGaitParameter_Response>()
{
  return "tku_msgs::srv::WalkingGaitParameter_Response";
}

template<>
inline const char * name<tku_msgs::srv::WalkingGaitParameter_Response>()
{
  return "tku_msgs/srv/WalkingGaitParameter_Response";
}

template<>
struct has_fixed_size<tku_msgs::srv::WalkingGaitParameter_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<tku_msgs::srv::WalkingGaitParameter_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<tku_msgs::srv::WalkingGaitParameter_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<tku_msgs::srv::WalkingGaitParameter>()
{
  return "tku_msgs::srv::WalkingGaitParameter";
}

template<>
inline const char * name<tku_msgs::srv::WalkingGaitParameter>()
{
  return "tku_msgs/srv/WalkingGaitParameter";
}

template<>
struct has_fixed_size<tku_msgs::srv::WalkingGaitParameter>
  : std::integral_constant<
    bool,
    has_fixed_size<tku_msgs::srv::WalkingGaitParameter_Request>::value &&
    has_fixed_size<tku_msgs::srv::WalkingGaitParameter_Response>::value
  >
{
};

template<>
struct has_bounded_size<tku_msgs::srv::WalkingGaitParameter>
  : std::integral_constant<
    bool,
    has_bounded_size<tku_msgs::srv::WalkingGaitParameter_Request>::value &&
    has_bounded_size<tku_msgs::srv::WalkingGaitParameter_Response>::value
  >
{
};

template<>
struct is_service<tku_msgs::srv::WalkingGaitParameter>
  : std::true_type
{
};

template<>
struct is_service_request<tku_msgs::srv::WalkingGaitParameter_Request>
  : std::true_type
{
};

template<>
struct is_service_response<tku_msgs::srv::WalkingGaitParameter_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // TKU_MSGS__SRV__DETAIL__WALKING_GAIT_PARAMETER__TRAITS_HPP_
