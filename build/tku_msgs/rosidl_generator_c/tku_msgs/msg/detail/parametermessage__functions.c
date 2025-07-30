// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from tku_msgs:msg/Parametermessage.idl
// generated code does not contain a copyright notice
#include "tku_msgs/msg/detail/parametermessage__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
tku_msgs__msg__Parametermessage__init(tku_msgs__msg__Parametermessage * msg)
{
  if (!msg) {
    return false;
  }
  // mode
  // x_swing_range
  // y_swing_range
  // z_swing_range
  // period_t
  // period_t2
  // sample_time
  // osc_lockrange
  // base_default_z
  // y_swing_shift
  // x_swing_com
  // base_lift_z
  // rightfoot_shift_z
  // com_y_swing
  // now_stand_height
  // now_com_height
  // stand_balance
  return true;
}

void
tku_msgs__msg__Parametermessage__fini(tku_msgs__msg__Parametermessage * msg)
{
  if (!msg) {
    return;
  }
  // mode
  // x_swing_range
  // y_swing_range
  // z_swing_range
  // period_t
  // period_t2
  // sample_time
  // osc_lockrange
  // base_default_z
  // y_swing_shift
  // x_swing_com
  // base_lift_z
  // rightfoot_shift_z
  // com_y_swing
  // now_stand_height
  // now_com_height
  // stand_balance
}

bool
tku_msgs__msg__Parametermessage__are_equal(const tku_msgs__msg__Parametermessage * lhs, const tku_msgs__msg__Parametermessage * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // mode
  if (lhs->mode != rhs->mode) {
    return false;
  }
  // x_swing_range
  if (lhs->x_swing_range != rhs->x_swing_range) {
    return false;
  }
  // y_swing_range
  if (lhs->y_swing_range != rhs->y_swing_range) {
    return false;
  }
  // z_swing_range
  if (lhs->z_swing_range != rhs->z_swing_range) {
    return false;
  }
  // period_t
  if (lhs->period_t != rhs->period_t) {
    return false;
  }
  // period_t2
  if (lhs->period_t2 != rhs->period_t2) {
    return false;
  }
  // sample_time
  if (lhs->sample_time != rhs->sample_time) {
    return false;
  }
  // osc_lockrange
  if (lhs->osc_lockrange != rhs->osc_lockrange) {
    return false;
  }
  // base_default_z
  if (lhs->base_default_z != rhs->base_default_z) {
    return false;
  }
  // y_swing_shift
  if (lhs->y_swing_shift != rhs->y_swing_shift) {
    return false;
  }
  // x_swing_com
  if (lhs->x_swing_com != rhs->x_swing_com) {
    return false;
  }
  // base_lift_z
  if (lhs->base_lift_z != rhs->base_lift_z) {
    return false;
  }
  // rightfoot_shift_z
  if (lhs->rightfoot_shift_z != rhs->rightfoot_shift_z) {
    return false;
  }
  // com_y_swing
  if (lhs->com_y_swing != rhs->com_y_swing) {
    return false;
  }
  // now_stand_height
  if (lhs->now_stand_height != rhs->now_stand_height) {
    return false;
  }
  // now_com_height
  if (lhs->now_com_height != rhs->now_com_height) {
    return false;
  }
  // stand_balance
  if (lhs->stand_balance != rhs->stand_balance) {
    return false;
  }
  return true;
}

bool
tku_msgs__msg__Parametermessage__copy(
  const tku_msgs__msg__Parametermessage * input,
  tku_msgs__msg__Parametermessage * output)
{
  if (!input || !output) {
    return false;
  }
  // mode
  output->mode = input->mode;
  // x_swing_range
  output->x_swing_range = input->x_swing_range;
  // y_swing_range
  output->y_swing_range = input->y_swing_range;
  // z_swing_range
  output->z_swing_range = input->z_swing_range;
  // period_t
  output->period_t = input->period_t;
  // period_t2
  output->period_t2 = input->period_t2;
  // sample_time
  output->sample_time = input->sample_time;
  // osc_lockrange
  output->osc_lockrange = input->osc_lockrange;
  // base_default_z
  output->base_default_z = input->base_default_z;
  // y_swing_shift
  output->y_swing_shift = input->y_swing_shift;
  // x_swing_com
  output->x_swing_com = input->x_swing_com;
  // base_lift_z
  output->base_lift_z = input->base_lift_z;
  // rightfoot_shift_z
  output->rightfoot_shift_z = input->rightfoot_shift_z;
  // com_y_swing
  output->com_y_swing = input->com_y_swing;
  // now_stand_height
  output->now_stand_height = input->now_stand_height;
  // now_com_height
  output->now_com_height = input->now_com_height;
  // stand_balance
  output->stand_balance = input->stand_balance;
  return true;
}

tku_msgs__msg__Parametermessage *
tku_msgs__msg__Parametermessage__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tku_msgs__msg__Parametermessage * msg = (tku_msgs__msg__Parametermessage *)allocator.allocate(sizeof(tku_msgs__msg__Parametermessage), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(tku_msgs__msg__Parametermessage));
  bool success = tku_msgs__msg__Parametermessage__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
tku_msgs__msg__Parametermessage__destroy(tku_msgs__msg__Parametermessage * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    tku_msgs__msg__Parametermessage__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
tku_msgs__msg__Parametermessage__Sequence__init(tku_msgs__msg__Parametermessage__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tku_msgs__msg__Parametermessage * data = NULL;

  if (size) {
    data = (tku_msgs__msg__Parametermessage *)allocator.zero_allocate(size, sizeof(tku_msgs__msg__Parametermessage), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = tku_msgs__msg__Parametermessage__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        tku_msgs__msg__Parametermessage__fini(&data[i - 1]);
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
tku_msgs__msg__Parametermessage__Sequence__fini(tku_msgs__msg__Parametermessage__Sequence * array)
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
      tku_msgs__msg__Parametermessage__fini(&array->data[i]);
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

tku_msgs__msg__Parametermessage__Sequence *
tku_msgs__msg__Parametermessage__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tku_msgs__msg__Parametermessage__Sequence * array = (tku_msgs__msg__Parametermessage__Sequence *)allocator.allocate(sizeof(tku_msgs__msg__Parametermessage__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = tku_msgs__msg__Parametermessage__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
tku_msgs__msg__Parametermessage__Sequence__destroy(tku_msgs__msg__Parametermessage__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    tku_msgs__msg__Parametermessage__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
tku_msgs__msg__Parametermessage__Sequence__are_equal(const tku_msgs__msg__Parametermessage__Sequence * lhs, const tku_msgs__msg__Parametermessage__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!tku_msgs__msg__Parametermessage__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
tku_msgs__msg__Parametermessage__Sequence__copy(
  const tku_msgs__msg__Parametermessage__Sequence * input,
  tku_msgs__msg__Parametermessage__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(tku_msgs__msg__Parametermessage);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    tku_msgs__msg__Parametermessage * data =
      (tku_msgs__msg__Parametermessage *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!tku_msgs__msg__Parametermessage__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          tku_msgs__msg__Parametermessage__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!tku_msgs__msg__Parametermessage__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
