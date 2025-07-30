// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from tku_msgs:msg/Walkingmessage.idl
// generated code does not contain a copyright notice
#include "tku_msgs/msg/detail/walkingmessage__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
tku_msgs__msg__Walkingmessage__init(tku_msgs__msg__Walkingmessage * msg)
{
  if (!msg) {
    return false;
  }
  // x
  // y
  // z
  // theta
  // walking_cmd
  // sensor_mode
  return true;
}

void
tku_msgs__msg__Walkingmessage__fini(tku_msgs__msg__Walkingmessage * msg)
{
  if (!msg) {
    return;
  }
  // x
  // y
  // z
  // theta
  // walking_cmd
  // sensor_mode
}

bool
tku_msgs__msg__Walkingmessage__are_equal(const tku_msgs__msg__Walkingmessage * lhs, const tku_msgs__msg__Walkingmessage * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // x
  if (lhs->x != rhs->x) {
    return false;
  }
  // y
  if (lhs->y != rhs->y) {
    return false;
  }
  // z
  if (lhs->z != rhs->z) {
    return false;
  }
  // theta
  if (lhs->theta != rhs->theta) {
    return false;
  }
  // walking_cmd
  if (lhs->walking_cmd != rhs->walking_cmd) {
    return false;
  }
  // sensor_mode
  if (lhs->sensor_mode != rhs->sensor_mode) {
    return false;
  }
  return true;
}

bool
tku_msgs__msg__Walkingmessage__copy(
  const tku_msgs__msg__Walkingmessage * input,
  tku_msgs__msg__Walkingmessage * output)
{
  if (!input || !output) {
    return false;
  }
  // x
  output->x = input->x;
  // y
  output->y = input->y;
  // z
  output->z = input->z;
  // theta
  output->theta = input->theta;
  // walking_cmd
  output->walking_cmd = input->walking_cmd;
  // sensor_mode
  output->sensor_mode = input->sensor_mode;
  return true;
}

tku_msgs__msg__Walkingmessage *
tku_msgs__msg__Walkingmessage__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tku_msgs__msg__Walkingmessage * msg = (tku_msgs__msg__Walkingmessage *)allocator.allocate(sizeof(tku_msgs__msg__Walkingmessage), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(tku_msgs__msg__Walkingmessage));
  bool success = tku_msgs__msg__Walkingmessage__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
tku_msgs__msg__Walkingmessage__destroy(tku_msgs__msg__Walkingmessage * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    tku_msgs__msg__Walkingmessage__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
tku_msgs__msg__Walkingmessage__Sequence__init(tku_msgs__msg__Walkingmessage__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tku_msgs__msg__Walkingmessage * data = NULL;

  if (size) {
    data = (tku_msgs__msg__Walkingmessage *)allocator.zero_allocate(size, sizeof(tku_msgs__msg__Walkingmessage), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = tku_msgs__msg__Walkingmessage__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        tku_msgs__msg__Walkingmessage__fini(&data[i - 1]);
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
tku_msgs__msg__Walkingmessage__Sequence__fini(tku_msgs__msg__Walkingmessage__Sequence * array)
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
      tku_msgs__msg__Walkingmessage__fini(&array->data[i]);
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

tku_msgs__msg__Walkingmessage__Sequence *
tku_msgs__msg__Walkingmessage__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tku_msgs__msg__Walkingmessage__Sequence * array = (tku_msgs__msg__Walkingmessage__Sequence *)allocator.allocate(sizeof(tku_msgs__msg__Walkingmessage__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = tku_msgs__msg__Walkingmessage__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
tku_msgs__msg__Walkingmessage__Sequence__destroy(tku_msgs__msg__Walkingmessage__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    tku_msgs__msg__Walkingmessage__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
tku_msgs__msg__Walkingmessage__Sequence__are_equal(const tku_msgs__msg__Walkingmessage__Sequence * lhs, const tku_msgs__msg__Walkingmessage__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!tku_msgs__msg__Walkingmessage__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
tku_msgs__msg__Walkingmessage__Sequence__copy(
  const tku_msgs__msg__Walkingmessage__Sequence * input,
  tku_msgs__msg__Walkingmessage__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(tku_msgs__msg__Walkingmessage);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    tku_msgs__msg__Walkingmessage * data =
      (tku_msgs__msg__Walkingmessage *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!tku_msgs__msg__Walkingmessage__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          tku_msgs__msg__Walkingmessage__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!tku_msgs__msg__Walkingmessage__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
