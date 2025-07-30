// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from tku_msgs:msg/Interface.idl
// generated code does not contain a copyright notice
#include "tku_msgs/msg/detail/interface__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
tku_msgs__msg__Interface__init(tku_msgs__msg__Interface * msg)
{
  if (!msg) {
    return false;
  }
  // x
  // y
  // z
  // theta
  // walking_mode
  // walking_state
  // sensor_mode
  return true;
}

void
tku_msgs__msg__Interface__fini(tku_msgs__msg__Interface * msg)
{
  if (!msg) {
    return;
  }
  // x
  // y
  // z
  // theta
  // walking_mode
  // walking_state
  // sensor_mode
}

bool
tku_msgs__msg__Interface__are_equal(const tku_msgs__msg__Interface * lhs, const tku_msgs__msg__Interface * rhs)
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
  // walking_mode
  if (lhs->walking_mode != rhs->walking_mode) {
    return false;
  }
  // walking_state
  if (lhs->walking_state != rhs->walking_state) {
    return false;
  }
  // sensor_mode
  if (lhs->sensor_mode != rhs->sensor_mode) {
    return false;
  }
  return true;
}

bool
tku_msgs__msg__Interface__copy(
  const tku_msgs__msg__Interface * input,
  tku_msgs__msg__Interface * output)
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
  // walking_mode
  output->walking_mode = input->walking_mode;
  // walking_state
  output->walking_state = input->walking_state;
  // sensor_mode
  output->sensor_mode = input->sensor_mode;
  return true;
}

tku_msgs__msg__Interface *
tku_msgs__msg__Interface__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tku_msgs__msg__Interface * msg = (tku_msgs__msg__Interface *)allocator.allocate(sizeof(tku_msgs__msg__Interface), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(tku_msgs__msg__Interface));
  bool success = tku_msgs__msg__Interface__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
tku_msgs__msg__Interface__destroy(tku_msgs__msg__Interface * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    tku_msgs__msg__Interface__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
tku_msgs__msg__Interface__Sequence__init(tku_msgs__msg__Interface__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tku_msgs__msg__Interface * data = NULL;

  if (size) {
    data = (tku_msgs__msg__Interface *)allocator.zero_allocate(size, sizeof(tku_msgs__msg__Interface), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = tku_msgs__msg__Interface__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        tku_msgs__msg__Interface__fini(&data[i - 1]);
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
tku_msgs__msg__Interface__Sequence__fini(tku_msgs__msg__Interface__Sequence * array)
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
      tku_msgs__msg__Interface__fini(&array->data[i]);
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

tku_msgs__msg__Interface__Sequence *
tku_msgs__msg__Interface__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tku_msgs__msg__Interface__Sequence * array = (tku_msgs__msg__Interface__Sequence *)allocator.allocate(sizeof(tku_msgs__msg__Interface__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = tku_msgs__msg__Interface__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
tku_msgs__msg__Interface__Sequence__destroy(tku_msgs__msg__Interface__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    tku_msgs__msg__Interface__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
tku_msgs__msg__Interface__Sequence__are_equal(const tku_msgs__msg__Interface__Sequence * lhs, const tku_msgs__msg__Interface__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!tku_msgs__msg__Interface__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
tku_msgs__msg__Interface__Sequence__copy(
  const tku_msgs__msg__Interface__Sequence * input,
  tku_msgs__msg__Interface__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(tku_msgs__msg__Interface);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    tku_msgs__msg__Interface * data =
      (tku_msgs__msg__Interface *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!tku_msgs__msg__Interface__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          tku_msgs__msg__Interface__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!tku_msgs__msg__Interface__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
