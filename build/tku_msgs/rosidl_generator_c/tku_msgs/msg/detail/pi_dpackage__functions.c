// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from tku_msgs:msg/PIDpackage.idl
// generated code does not contain a copyright notice
#include "tku_msgs/msg/detail/pi_dpackage__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
tku_msgs__msg__PIDpackage__init(tku_msgs__msg__PIDpackage * msg)
{
  if (!msg) {
    return false;
  }
  // motor_p
  // motor_i
  // motor_d
  // pflag
  // iflag
  // dflag
  // motorid
  return true;
}

void
tku_msgs__msg__PIDpackage__fini(tku_msgs__msg__PIDpackage * msg)
{
  if (!msg) {
    return;
  }
  // motor_p
  // motor_i
  // motor_d
  // pflag
  // iflag
  // dflag
  // motorid
}

bool
tku_msgs__msg__PIDpackage__are_equal(const tku_msgs__msg__PIDpackage * lhs, const tku_msgs__msg__PIDpackage * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // motor_p
  if (lhs->motor_p != rhs->motor_p) {
    return false;
  }
  // motor_i
  if (lhs->motor_i != rhs->motor_i) {
    return false;
  }
  // motor_d
  if (lhs->motor_d != rhs->motor_d) {
    return false;
  }
  // pflag
  if (lhs->pflag != rhs->pflag) {
    return false;
  }
  // iflag
  if (lhs->iflag != rhs->iflag) {
    return false;
  }
  // dflag
  if (lhs->dflag != rhs->dflag) {
    return false;
  }
  // motorid
  if (lhs->motorid != rhs->motorid) {
    return false;
  }
  return true;
}

bool
tku_msgs__msg__PIDpackage__copy(
  const tku_msgs__msg__PIDpackage * input,
  tku_msgs__msg__PIDpackage * output)
{
  if (!input || !output) {
    return false;
  }
  // motor_p
  output->motor_p = input->motor_p;
  // motor_i
  output->motor_i = input->motor_i;
  // motor_d
  output->motor_d = input->motor_d;
  // pflag
  output->pflag = input->pflag;
  // iflag
  output->iflag = input->iflag;
  // dflag
  output->dflag = input->dflag;
  // motorid
  output->motorid = input->motorid;
  return true;
}

tku_msgs__msg__PIDpackage *
tku_msgs__msg__PIDpackage__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tku_msgs__msg__PIDpackage * msg = (tku_msgs__msg__PIDpackage *)allocator.allocate(sizeof(tku_msgs__msg__PIDpackage), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(tku_msgs__msg__PIDpackage));
  bool success = tku_msgs__msg__PIDpackage__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
tku_msgs__msg__PIDpackage__destroy(tku_msgs__msg__PIDpackage * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    tku_msgs__msg__PIDpackage__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
tku_msgs__msg__PIDpackage__Sequence__init(tku_msgs__msg__PIDpackage__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tku_msgs__msg__PIDpackage * data = NULL;

  if (size) {
    data = (tku_msgs__msg__PIDpackage *)allocator.zero_allocate(size, sizeof(tku_msgs__msg__PIDpackage), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = tku_msgs__msg__PIDpackage__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        tku_msgs__msg__PIDpackage__fini(&data[i - 1]);
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
tku_msgs__msg__PIDpackage__Sequence__fini(tku_msgs__msg__PIDpackage__Sequence * array)
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
      tku_msgs__msg__PIDpackage__fini(&array->data[i]);
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

tku_msgs__msg__PIDpackage__Sequence *
tku_msgs__msg__PIDpackage__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tku_msgs__msg__PIDpackage__Sequence * array = (tku_msgs__msg__PIDpackage__Sequence *)allocator.allocate(sizeof(tku_msgs__msg__PIDpackage__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = tku_msgs__msg__PIDpackage__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
tku_msgs__msg__PIDpackage__Sequence__destroy(tku_msgs__msg__PIDpackage__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    tku_msgs__msg__PIDpackage__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
tku_msgs__msg__PIDpackage__Sequence__are_equal(const tku_msgs__msg__PIDpackage__Sequence * lhs, const tku_msgs__msg__PIDpackage__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!tku_msgs__msg__PIDpackage__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
tku_msgs__msg__PIDpackage__Sequence__copy(
  const tku_msgs__msg__PIDpackage__Sequence * input,
  tku_msgs__msg__PIDpackage__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(tku_msgs__msg__PIDpackage);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    tku_msgs__msg__PIDpackage * data =
      (tku_msgs__msg__PIDpackage *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!tku_msgs__msg__PIDpackage__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          tku_msgs__msg__PIDpackage__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!tku_msgs__msg__PIDpackage__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
