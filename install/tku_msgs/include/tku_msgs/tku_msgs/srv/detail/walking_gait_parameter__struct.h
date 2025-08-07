// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from tku_msgs:srv/WalkingGaitParameter.idl
// generated code does not contain a copyright notice

#ifndef TKU_MSGS__SRV__DETAIL__WALKING_GAIT_PARAMETER__STRUCT_H_
#define TKU_MSGS__SRV__DETAIL__WALKING_GAIT_PARAMETER__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/WalkingGaitParameter in the package tku_msgs.
typedef struct tku_msgs__srv__WalkingGaitParameter_Request
{
  int32_t mode;
} tku_msgs__srv__WalkingGaitParameter_Request;

// Struct for a sequence of tku_msgs__srv__WalkingGaitParameter_Request.
typedef struct tku_msgs__srv__WalkingGaitParameter_Request__Sequence
{
  tku_msgs__srv__WalkingGaitParameter_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} tku_msgs__srv__WalkingGaitParameter_Request__Sequence;


// Constants defined in the message

/// Struct defined in srv/WalkingGaitParameter in the package tku_msgs.
typedef struct tku_msgs__srv__WalkingGaitParameter_Response
{
  float x_swing_range;
  float y_swing_range;
  float z_swing_range;
  int32_t period_t;
  int32_t period_t2;
  int32_t sample_time;
  float osc_lockrange;
  float base_default_z;
  float y_swing_shift;
  float x_swing_com;
  float base_lift_z;
  float rightfoot_shift_z;
  float com_y_swing;
  float now_stand_height;
  float now_com_height;
  bool stand_balance;
  float hip_roll;
  float ankle_roll;
} tku_msgs__srv__WalkingGaitParameter_Response;

// Struct for a sequence of tku_msgs__srv__WalkingGaitParameter_Response.
typedef struct tku_msgs__srv__WalkingGaitParameter_Response__Sequence
{
  tku_msgs__srv__WalkingGaitParameter_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} tku_msgs__srv__WalkingGaitParameter_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TKU_MSGS__SRV__DETAIL__WALKING_GAIT_PARAMETER__STRUCT_H_
