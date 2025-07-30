// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from webrtc_ros_msgs:msg/IceServer.idl
// generated code does not contain a copyright notice
#include "webrtc_ros_msgs/msg/detail/ice_server__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `uri`
// Member `username`
// Member `password`
#include "rosidl_runtime_c/string_functions.h"

bool
webrtc_ros_msgs__msg__IceServer__init(webrtc_ros_msgs__msg__IceServer * msg)
{
  if (!msg) {
    return false;
  }
  // uri
  if (!rosidl_runtime_c__String__init(&msg->uri)) {
    webrtc_ros_msgs__msg__IceServer__fini(msg);
    return false;
  }
  // username
  if (!rosidl_runtime_c__String__init(&msg->username)) {
    webrtc_ros_msgs__msg__IceServer__fini(msg);
    return false;
  }
  // password
  if (!rosidl_runtime_c__String__init(&msg->password)) {
    webrtc_ros_msgs__msg__IceServer__fini(msg);
    return false;
  }
  return true;
}

void
webrtc_ros_msgs__msg__IceServer__fini(webrtc_ros_msgs__msg__IceServer * msg)
{
  if (!msg) {
    return;
  }
  // uri
  rosidl_runtime_c__String__fini(&msg->uri);
  // username
  rosidl_runtime_c__String__fini(&msg->username);
  // password
  rosidl_runtime_c__String__fini(&msg->password);
}

bool
webrtc_ros_msgs__msg__IceServer__are_equal(const webrtc_ros_msgs__msg__IceServer * lhs, const webrtc_ros_msgs__msg__IceServer * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // uri
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->uri), &(rhs->uri)))
  {
    return false;
  }
  // username
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->username), &(rhs->username)))
  {
    return false;
  }
  // password
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->password), &(rhs->password)))
  {
    return false;
  }
  return true;
}

bool
webrtc_ros_msgs__msg__IceServer__copy(
  const webrtc_ros_msgs__msg__IceServer * input,
  webrtc_ros_msgs__msg__IceServer * output)
{
  if (!input || !output) {
    return false;
  }
  // uri
  if (!rosidl_runtime_c__String__copy(
      &(input->uri), &(output->uri)))
  {
    return false;
  }
  // username
  if (!rosidl_runtime_c__String__copy(
      &(input->username), &(output->username)))
  {
    return false;
  }
  // password
  if (!rosidl_runtime_c__String__copy(
      &(input->password), &(output->password)))
  {
    return false;
  }
  return true;
}

webrtc_ros_msgs__msg__IceServer *
webrtc_ros_msgs__msg__IceServer__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  webrtc_ros_msgs__msg__IceServer * msg = (webrtc_ros_msgs__msg__IceServer *)allocator.allocate(sizeof(webrtc_ros_msgs__msg__IceServer), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(webrtc_ros_msgs__msg__IceServer));
  bool success = webrtc_ros_msgs__msg__IceServer__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
webrtc_ros_msgs__msg__IceServer__destroy(webrtc_ros_msgs__msg__IceServer * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    webrtc_ros_msgs__msg__IceServer__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
webrtc_ros_msgs__msg__IceServer__Sequence__init(webrtc_ros_msgs__msg__IceServer__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  webrtc_ros_msgs__msg__IceServer * data = NULL;

  if (size) {
    data = (webrtc_ros_msgs__msg__IceServer *)allocator.zero_allocate(size, sizeof(webrtc_ros_msgs__msg__IceServer), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = webrtc_ros_msgs__msg__IceServer__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        webrtc_ros_msgs__msg__IceServer__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
webrtc_ros_msgs__msg__IceServer__Sequence__fini(webrtc_ros_msgs__msg__IceServer__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      webrtc_ros_msgs__msg__IceServer__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

webrtc_ros_msgs__msg__IceServer__Sequence *
webrtc_ros_msgs__msg__IceServer__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  webrtc_ros_msgs__msg__IceServer__Sequence * array = (webrtc_ros_msgs__msg__IceServer__Sequence *)allocator.allocate(sizeof(webrtc_ros_msgs__msg__IceServer__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = webrtc_ros_msgs__msg__IceServer__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
webrtc_ros_msgs__msg__IceServer__Sequence__destroy(webrtc_ros_msgs__msg__IceServer__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    webrtc_ros_msgs__msg__IceServer__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
webrtc_ros_msgs__msg__IceServer__Sequence__are_equal(const webrtc_ros_msgs__msg__IceServer__Sequence * lhs, const webrtc_ros_msgs__msg__IceServer__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!webrtc_ros_msgs__msg__IceServer__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
webrtc_ros_msgs__msg__IceServer__Sequence__copy(
  const webrtc_ros_msgs__msg__IceServer__Sequence * input,
  webrtc_ros_msgs__msg__IceServer__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(webrtc_ros_msgs__msg__IceServer);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    webrtc_ros_msgs__msg__IceServer * data =
      (webrtc_ros_msgs__msg__IceServer *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!webrtc_ros_msgs__msg__IceServer__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          webrtc_ros_msgs__msg__IceServer__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!webrtc_ros_msgs__msg__IceServer__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
