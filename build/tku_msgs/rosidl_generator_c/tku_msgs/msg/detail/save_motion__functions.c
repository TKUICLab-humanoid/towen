// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from tku_msgs:msg/SaveMotion.idl
// generated code does not contain a copyright notice
#include "tku_msgs/msg/detail/save_motion__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `layout`
#include "std_msgs/msg/detail/multi_array_layout__functions.h"
// Member `name`
#include "rosidl_runtime_c/string_functions.h"
// Member `motionlist`
// Member `motordata`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
tku_msgs__msg__SaveMotion__init(tku_msgs__msg__SaveMotion * msg)
{
  if (!msg) {
    return false;
  }
  // layout
  if (!std_msgs__msg__MultiArrayLayout__init(&msg->layout)) {
    tku_msgs__msg__SaveMotion__fini(msg);
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__init(&msg->name)) {
    tku_msgs__msg__SaveMotion__fini(msg);
    return false;
  }
  // motionstate
  // id
  // savestate
  // saveflag
  // motionlist
  if (!rosidl_runtime_c__int32__Sequence__init(&msg->motionlist, 0)) {
    tku_msgs__msg__SaveMotion__fini(msg);
    return false;
  }
  // motordata
  if (!rosidl_runtime_c__int32__Sequence__init(&msg->motordata, 0)) {
    tku_msgs__msg__SaveMotion__fini(msg);
    return false;
  }
  return true;
}

void
tku_msgs__msg__SaveMotion__fini(tku_msgs__msg__SaveMotion * msg)
{
  if (!msg) {
    return;
  }
  // layout
  std_msgs__msg__MultiArrayLayout__fini(&msg->layout);
  // name
  rosidl_runtime_c__String__fini(&msg->name);
  // motionstate
  // id
  // savestate
  // saveflag
  // motionlist
  rosidl_runtime_c__int32__Sequence__fini(&msg->motionlist);
  // motordata
  rosidl_runtime_c__int32__Sequence__fini(&msg->motordata);
}

bool
tku_msgs__msg__SaveMotion__are_equal(const tku_msgs__msg__SaveMotion * lhs, const tku_msgs__msg__SaveMotion * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // layout
  if (!std_msgs__msg__MultiArrayLayout__are_equal(
      &(lhs->layout), &(rhs->layout)))
  {
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->name), &(rhs->name)))
  {
    return false;
  }
  // motionstate
  if (lhs->motionstate != rhs->motionstate) {
    return false;
  }
  // id
  if (lhs->id != rhs->id) {
    return false;
  }
  // savestate
  if (lhs->savestate != rhs->savestate) {
    return false;
  }
  // saveflag
  if (lhs->saveflag != rhs->saveflag) {
    return false;
  }
  // motionlist
  if (!rosidl_runtime_c__int32__Sequence__are_equal(
      &(lhs->motionlist), &(rhs->motionlist)))
  {
    return false;
  }
  // motordata
  if (!rosidl_runtime_c__int32__Sequence__are_equal(
      &(lhs->motordata), &(rhs->motordata)))
  {
    return false;
  }
  return true;
}

bool
tku_msgs__msg__SaveMotion__copy(
  const tku_msgs__msg__SaveMotion * input,
  tku_msgs__msg__SaveMotion * output)
{
  if (!input || !output) {
    return false;
  }
  // layout
  if (!std_msgs__msg__MultiArrayLayout__copy(
      &(input->layout), &(output->layout)))
  {
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__copy(
      &(input->name), &(output->name)))
  {
    return false;
  }
  // motionstate
  output->motionstate = input->motionstate;
  // id
  output->id = input->id;
  // savestate
  output->savestate = input->savestate;
  // saveflag
  output->saveflag = input->saveflag;
  // motionlist
  if (!rosidl_runtime_c__int32__Sequence__copy(
      &(input->motionlist), &(output->motionlist)))
  {
    return false;
  }
  // motordata
  if (!rosidl_runtime_c__int32__Sequence__copy(
      &(input->motordata), &(output->motordata)))
  {
    return false;
  }
  return true;
}

tku_msgs__msg__SaveMotion *
tku_msgs__msg__SaveMotion__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tku_msgs__msg__SaveMotion * msg = (tku_msgs__msg__SaveMotion *)allocator.allocate(sizeof(tku_msgs__msg__SaveMotion), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(tku_msgs__msg__SaveMotion));
  bool success = tku_msgs__msg__SaveMotion__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
tku_msgs__msg__SaveMotion__destroy(tku_msgs__msg__SaveMotion * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    tku_msgs__msg__SaveMotion__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
tku_msgs__msg__SaveMotion__Sequence__init(tku_msgs__msg__SaveMotion__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tku_msgs__msg__SaveMotion * data = NULL;

  if (size) {
    data = (tku_msgs__msg__SaveMotion *)allocator.zero_allocate(size, sizeof(tku_msgs__msg__SaveMotion), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = tku_msgs__msg__SaveMotion__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        tku_msgs__msg__SaveMotion__fini(&data[i - 1]);
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
tku_msgs__msg__SaveMotion__Sequence__fini(tku_msgs__msg__SaveMotion__Sequence * array)
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
      tku_msgs__msg__SaveMotion__fini(&array->data[i]);
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

tku_msgs__msg__SaveMotion__Sequence *
tku_msgs__msg__SaveMotion__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tku_msgs__msg__SaveMotion__Sequence * array = (tku_msgs__msg__SaveMotion__Sequence *)allocator.allocate(sizeof(tku_msgs__msg__SaveMotion__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = tku_msgs__msg__SaveMotion__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
tku_msgs__msg__SaveMotion__Sequence__destroy(tku_msgs__msg__SaveMotion__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    tku_msgs__msg__SaveMotion__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
tku_msgs__msg__SaveMotion__Sequence__are_equal(const tku_msgs__msg__SaveMotion__Sequence * lhs, const tku_msgs__msg__SaveMotion__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!tku_msgs__msg__SaveMotion__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
tku_msgs__msg__SaveMotion__Sequence__copy(
  const tku_msgs__msg__SaveMotion__Sequence * input,
  tku_msgs__msg__SaveMotion__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(tku_msgs__msg__SaveMotion);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    tku_msgs__msg__SaveMotion * data =
      (tku_msgs__msg__SaveMotion *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!tku_msgs__msg__SaveMotion__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          tku_msgs__msg__SaveMotion__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!tku_msgs__msg__SaveMotion__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
