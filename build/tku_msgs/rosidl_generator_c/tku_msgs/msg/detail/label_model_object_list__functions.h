// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from tku_msgs:msg/LabelModelObjectList.idl
// generated code does not contain a copyright notice

#ifndef TKU_MSGS__MSG__DETAIL__LABEL_MODEL_OBJECT_LIST__FUNCTIONS_H_
#define TKU_MSGS__MSG__DETAIL__LABEL_MODEL_OBJECT_LIST__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "tku_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "tku_msgs/msg/detail/label_model_object_list__struct.h"

/// Initialize msg/LabelModelObjectList message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * tku_msgs__msg__LabelModelObjectList
 * )) before or use
 * tku_msgs__msg__LabelModelObjectList__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_tku_msgs
bool
tku_msgs__msg__LabelModelObjectList__init(tku_msgs__msg__LabelModelObjectList * msg);

/// Finalize msg/LabelModelObjectList message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_tku_msgs
void
tku_msgs__msg__LabelModelObjectList__fini(tku_msgs__msg__LabelModelObjectList * msg);

/// Create msg/LabelModelObjectList message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * tku_msgs__msg__LabelModelObjectList__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_tku_msgs
tku_msgs__msg__LabelModelObjectList *
tku_msgs__msg__LabelModelObjectList__create();

/// Destroy msg/LabelModelObjectList message.
/**
 * It calls
 * tku_msgs__msg__LabelModelObjectList__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_tku_msgs
void
tku_msgs__msg__LabelModelObjectList__destroy(tku_msgs__msg__LabelModelObjectList * msg);

/// Check for msg/LabelModelObjectList message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_tku_msgs
bool
tku_msgs__msg__LabelModelObjectList__are_equal(const tku_msgs__msg__LabelModelObjectList * lhs, const tku_msgs__msg__LabelModelObjectList * rhs);

/// Copy a msg/LabelModelObjectList message.
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
ROSIDL_GENERATOR_C_PUBLIC_tku_msgs
bool
tku_msgs__msg__LabelModelObjectList__copy(
  const tku_msgs__msg__LabelModelObjectList * input,
  tku_msgs__msg__LabelModelObjectList * output);

/// Initialize array of msg/LabelModelObjectList messages.
/**
 * It allocates the memory for the number of elements and calls
 * tku_msgs__msg__LabelModelObjectList__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_tku_msgs
bool
tku_msgs__msg__LabelModelObjectList__Sequence__init(tku_msgs__msg__LabelModelObjectList__Sequence * array, size_t size);

/// Finalize array of msg/LabelModelObjectList messages.
/**
 * It calls
 * tku_msgs__msg__LabelModelObjectList__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_tku_msgs
void
tku_msgs__msg__LabelModelObjectList__Sequence__fini(tku_msgs__msg__LabelModelObjectList__Sequence * array);

/// Create array of msg/LabelModelObjectList messages.
/**
 * It allocates the memory for the array and calls
 * tku_msgs__msg__LabelModelObjectList__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_tku_msgs
tku_msgs__msg__LabelModelObjectList__Sequence *
tku_msgs__msg__LabelModelObjectList__Sequence__create(size_t size);

/// Destroy array of msg/LabelModelObjectList messages.
/**
 * It calls
 * tku_msgs__msg__LabelModelObjectList__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_tku_msgs
void
tku_msgs__msg__LabelModelObjectList__Sequence__destroy(tku_msgs__msg__LabelModelObjectList__Sequence * array);

/// Check for msg/LabelModelObjectList message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_tku_msgs
bool
tku_msgs__msg__LabelModelObjectList__Sequence__are_equal(const tku_msgs__msg__LabelModelObjectList__Sequence * lhs, const tku_msgs__msg__LabelModelObjectList__Sequence * rhs);

/// Copy an array of msg/LabelModelObjectList messages.
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
ROSIDL_GENERATOR_C_PUBLIC_tku_msgs
bool
tku_msgs__msg__LabelModelObjectList__Sequence__copy(
  const tku_msgs__msg__LabelModelObjectList__Sequence * input,
  tku_msgs__msg__LabelModelObjectList__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // TKU_MSGS__MSG__DETAIL__LABEL_MODEL_OBJECT_LIST__FUNCTIONS_H_
