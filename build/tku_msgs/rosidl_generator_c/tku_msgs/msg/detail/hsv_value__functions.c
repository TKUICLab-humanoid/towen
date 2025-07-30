// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from tku_msgs:msg/HSVValue.idl
// generated code does not contain a copyright notice
#include "tku_msgs/msg/detail/hsv_value__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
tku_msgs__msg__HSVValue__init(tku_msgs__msg__HSVValue * msg)
{
  if (!msg) {
    return false;
  }
  // hmin
  // hmax
  // smin
  // smax
  // vmin
  // vmax
  return true;
}

void
tku_msgs__msg__HSVValue__fini(tku_msgs__msg__HSVValue * msg)
{
  if (!msg) {
    return;
  }
  // hmin
  // hmax
  // smin
  // smax
  // vmin
  // vmax
}

bool
tku_msgs__msg__HSVValue__are_equal(const tku_msgs__msg__HSVValue * lhs, const tku_msgs__msg__HSVValue * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // hmin
  if (lhs->hmin != rhs->hmin) {
    return false;
  }
  // hmax
  if (lhs->hmax != rhs->hmax) {
    return false;
  }
  // smin
  if (lhs->smin != rhs->smin) {
    return false;
  }
  // smax
  if (lhs->smax != rhs->smax) {
    return false;
  }
  // vmin
  if (lhs->vmin != rhs->vmin) {
    return false;
  }
  // vmax
  if (lhs->vmax != rhs->vmax) {
    return false;
  }
  return true;
}

bool
tku_msgs__msg__HSVValue__copy(
  const tku_msgs__msg__HSVValue * input,
  tku_msgs__msg__HSVValue * output)
{
  if (!input || !output) {
    return false;
  }
  // hmin
  output->hmin = input->hmin;
  // hmax
  output->hmax = input->hmax;
  // smin
  output->smin = input->smin;
  // smax
  output->smax = input->smax;
  // vmin
  output->vmin = input->vmin;
  // vmax
  output->vmax = input->vmax;
  return true;
}

tku_msgs__msg__HSVValue *
tku_msgs__msg__HSVValue__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tku_msgs__msg__HSVValue * msg = (tku_msgs__msg__HSVValue *)allocator.allocate(sizeof(tku_msgs__msg__HSVValue), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(tku_msgs__msg__HSVValue));
  bool success = tku_msgs__msg__HSVValue__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
tku_msgs__msg__HSVValue__destroy(tku_msgs__msg__HSVValue * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    tku_msgs__msg__HSVValue__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
tku_msgs__msg__HSVValue__Sequence__init(tku_msgs__msg__HSVValue__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tku_msgs__msg__HSVValue * data = NULL;

  if (size) {
    data = (tku_msgs__msg__HSVValue *)allocator.zero_allocate(size, sizeof(tku_msgs__msg__HSVValue), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = tku_msgs__msg__HSVValue__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        tku_msgs__msg__HSVValue__fini(&data[i - 1]);
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
tku_msgs__msg__HSVValue__Sequence__fini(tku_msgs__msg__HSVValue__Sequence * array)
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
      tku_msgs__msg__HSVValue__fini(&array->data[i]);
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

tku_msgs__msg__HSVValue__Sequence *
tku_msgs__msg__HSVValue__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tku_msgs__msg__HSVValue__Sequence * array = (tku_msgs__msg__HSVValue__Sequence *)allocator.allocate(sizeof(tku_msgs__msg__HSVValue__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = tku_msgs__msg__HSVValue__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
tku_msgs__msg__HSVValue__Sequence__destroy(tku_msgs__msg__HSVValue__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    tku_msgs__msg__HSVValue__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
tku_msgs__msg__HSVValue__Sequence__are_equal(const tku_msgs__msg__HSVValue__Sequence * lhs, const tku_msgs__msg__HSVValue__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!tku_msgs__msg__HSVValue__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
tku_msgs__msg__HSVValue__Sequence__copy(
  const tku_msgs__msg__HSVValue__Sequence * input,
  tku_msgs__msg__HSVValue__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(tku_msgs__msg__HSVValue);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    tku_msgs__msg__HSVValue * data =
      (tku_msgs__msg__HSVValue *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!tku_msgs__msg__HSVValue__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          tku_msgs__msg__HSVValue__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!tku_msgs__msg__HSVValue__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
