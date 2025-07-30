// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from webrtc_ros_msgs:msg/IceServer.idl
// generated code does not contain a copyright notice

#ifndef WEBRTC_ROS_MSGS__MSG__DETAIL__ICE_SERVER__FUNCTIONS_H_
#define WEBRTC_ROS_MSGS__MSG__DETAIL__ICE_SERVER__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "webrtc_ros_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "webrtc_ros_msgs/msg/detail/ice_server__struct.h"

/// Initialize msg/IceServer message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * webrtc_ros_msgs__msg__IceServer
 * )) before or use
 * webrtc_ros_msgs__msg__IceServer__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_webrtc_ros_msgs
bool
webrtc_ros_msgs__msg__IceServer__init(webrtc_ros_msgs__msg__IceServer * msg);

/// Finalize msg/IceServer message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_webrtc_ros_msgs
void
webrtc_ros_msgs__msg__IceServer__fini(webrtc_ros_msgs__msg__IceServer * msg);

/// Create msg/IceServer message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * webrtc_ros_msgs__msg__IceServer__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_webrtc_ros_msgs
webrtc_ros_msgs__msg__IceServer *
webrtc_ros_msgs__msg__IceServer__create();

/// Destroy msg/IceServer message.
/**
 * It calls
 * webrtc_ros_msgs__msg__IceServer__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_webrtc_ros_msgs
void
webrtc_ros_msgs__msg__IceServer__destroy(webrtc_ros_msgs__msg__IceServer * msg);

/// Check for msg/IceServer message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_webrtc_ros_msgs
bool
webrtc_ros_msgs__msg__IceServer__are_equal(const webrtc_ros_msgs__msg__IceServer * lhs, const webrtc_ros_msgs__msg__IceServer * rhs);

/// Copy a msg/IceServer message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_webrtc_ros_msgs
bool
webrtc_ros_msgs__msg__IceServer__copy(
  const webrtc_ros_msgs__msg__IceServer * input,
  webrtc_ros_msgs__msg__IceServer * output);

/// Initialize array of msg/IceServer messages.
/**
 * It allocates the memory for the number of elements and calls
 * webrtc_ros_msgs__msg__IceServer__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_webrtc_ros_msgs
bool
webrtc_ros_msgs__msg__IceServer__Sequence__init(webrtc_ros_msgs__msg__IceServer__Sequence * array, size_t size);

/// Finalize array of msg/IceServer messages.
/**
 * It calls
 * webrtc_ros_msgs__msg__IceServer__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_webrtc_ros_msgs
void
webrtc_ros_msgs__msg__IceServer__Sequence__fini(webrtc_ros_msgs__msg__IceServer__Sequence * array);

/// Create array of msg/IceServer messages.
/**
 * It allocates the memory for the array and calls
 * webrtc_ros_msgs__msg__IceServer__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_webrtc_ros_msgs
webrtc_ros_msgs__msg__IceServer__Sequence *
webrtc_ros_msgs__msg__IceServer__Sequence__create(size_t size);

/// Destroy array of msg/IceServer messages.
/**
 * It calls
 * webrtc_ros_msgs__msg__IceServer__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_webrtc_ros_msgs
void
webrtc_ros_msgs__msg__IceServer__Sequence__destroy(webrtc_ros_msgs__msg__IceServer__Sequence * array);

/// Check for msg/IceServer message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_webrtc_ros_msgs
bool
webrtc_ros_msgs__msg__IceServer__Sequence__are_equal(const webrtc_ros_msgs__msg__IceServer__Sequence * lhs, const webrtc_ros_msgs__msg__IceServer__Sequence * rhs);

/// Copy an array of msg/IceServer messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_webrtc_ros_msgs
bool
webrtc_ros_msgs__msg__IceServer__Sequence__copy(
  const webrtc_ros_msgs__msg__IceServer__Sequence * input,
  webrtc_ros_msgs__msg__IceServer__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // WEBRTC_ROS_MSGS__MSG__DETAIL__ICE_SERVER__FUNCTIONS_H_
