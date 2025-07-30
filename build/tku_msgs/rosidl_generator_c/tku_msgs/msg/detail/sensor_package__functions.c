// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from tku_msgs:msg/SensorPackage.idl
// generated code does not contain a copyright notice
#include "tku_msgs/msg/detail/sensor_package__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `layout`
#include "std_msgs/msg/detail/multi_array_layout__functions.h"
// Member `imudata`
// Member `forcesensordata`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
tku_msgs__msg__SensorPackage__init(tku_msgs__msg__SensorPackage * msg)
{
  if (!msg) {
    return false;
  }
  // layout
  if (!std_msgs__msg__MultiArrayLayout__init(&msg->layout)) {
    tku_msgs__msg__SensorPackage__fini(msg);
    return false;
  }
  // imudata
  if (!rosidl_runtime_c__double__Sequence__init(&msg->imudata, 0)) {
    tku_msgs__msg__SensorPackage__fini(msg);
    return false;
  }
  // forcesensordata
  if (!rosidl_runtime_c__int32__Sequence__init(&msg->forcesensordata, 0)) {
    tku_msgs__msg__SensorPackage__fini(msg);
    return false;
  }
  // yaw
  // pitch
  // roll
  return true;
}

void
tku_msgs__msg__SensorPackage__fini(tku_msgs__msg__SensorPackage * msg)
{
  if (!msg) {
    return;
  }
  // layout
  std_msgs__msg__MultiArrayLayout__fini(&msg->layout);
  // imudata
  rosidl_runtime_c__double__Sequence__fini(&msg->imudata);
  // forcesensordata
  rosidl_runtime_c__int32__Sequence__fini(&msg->forcesensordata);
  // yaw
  // pitch
  // roll
}

bool
tku_msgs__msg__SensorPackage__are_equal(const tku_msgs__msg__SensorPackage * lhs, const tku_msgs__msg__SensorPackage * rhs)
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
  // imudata
  if (!rosidl_runtime_c__double__Sequence__are_equal(
      &(lhs->imudata), &(rhs->imudata)))
  {
    return false;
  }
  // forcesensordata
  if (!rosidl_runtime_c__int32__Sequence__are_equal(
      &(lhs->forcesensordata), &(rhs->forcesensordata)))
  {
    return false;
  }
  // yaw
  if (lhs->yaw != rhs->yaw) {
    return false;
  }
  // pitch
  if (lhs->pitch != rhs->pitch) {
    return false;
  }
  // roll
  if (lhs->roll != rhs->roll) {
    return false;
  }
  return true;
}

bool
tku_msgs__msg__SensorPackage__copy(
  const tku_msgs__msg__SensorPackage * input,
  tku_msgs__msg__SensorPackage * output)
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
  // imudata
  if (!rosidl_runtime_c__double__Sequence__copy(
      &(input->imudata), &(output->imudata)))
  {
    return false;
  }
  // forcesensordata
  if (!rosidl_runtime_c__int32__Sequence__copy(
      &(input->forcesensordata), &(output->forcesensordata)))
  {
    return false;
  }
  // yaw
  output->yaw = input->yaw;
  // pitch
  output->pitch = input->pitch;
  // roll
  output->roll = input->roll;
  return true;
}

tku_msgs__msg__SensorPackage *
tku_msgs__msg__SensorPackage__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tku_msgs__msg__SensorPackage * msg = (tku_msgs__msg__SensorPackage *)allocator.allocate(sizeof(tku_msgs__msg__SensorPackage), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(tku_msgs__msg__SensorPackage));
  bool success = tku_msgs__msg__SensorPackage__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
tku_msgs__msg__SensorPackage__destroy(tku_msgs__msg__SensorPackage * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    tku_msgs__msg__SensorPackage__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
tku_msgs__msg__SensorPackage__Sequence__init(tku_msgs__msg__SensorPackage__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tku_msgs__msg__SensorPackage * data = NULL;

  if (size) {
    data = (tku_msgs__msg__SensorPackage *)allocator.zero_allocate(size, sizeof(tku_msgs__msg__SensorPackage), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = tku_msgs__msg__SensorPackage__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        tku_msgs__msg__SensorPackage__fini(&data[i - 1]);
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
tku_msgs__msg__SensorPackage__Sequence__fini(tku_msgs__msg__SensorPackage__Sequence * array)
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
      tku_msgs__msg__SensorPackage__fini(&array->data[i]);
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

tku_msgs__msg__SensorPackage__Sequence *
tku_msgs__msg__SensorPackage__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tku_msgs__msg__SensorPackage__Sequence * array = (tku_msgs__msg__SensorPackage__Sequence *)allocator.allocate(sizeof(tku_msgs__msg__SensorPackage__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = tku_msgs__msg__SensorPackage__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
tku_msgs__msg__SensorPackage__Sequence__destroy(tku_msgs__msg__SensorPackage__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    tku_msgs__msg__SensorPackage__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
tku_msgs__msg__SensorPackage__Sequence__are_equal(const tku_msgs__msg__SensorPackage__Sequence * lhs, const tku_msgs__msg__SensorPackage__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!tku_msgs__msg__SensorPackage__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
tku_msgs__msg__SensorPackage__Sequence__copy(
  const tku_msgs__msg__SensorPackage__Sequence * input,
  tku_msgs__msg__SensorPackage__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(tku_msgs__msg__SensorPackage);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    tku_msgs__msg__SensorPackage * data =
      (tku_msgs__msg__SensorPackage *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!tku_msgs__msg__SensorPackage__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          tku_msgs__msg__SensorPackage__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!tku_msgs__msg__SensorPackage__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
