// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from tku_msgs:msg/ObjectList.idl
// generated code does not contain a copyright notice
#include "tku_msgs/msg/detail/object_list__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `objectlist`
#include "tku_msgs/msg/detail/color_array__functions.h"

bool
tku_msgs__msg__ObjectList__init(tku_msgs__msg__ObjectList * msg)
{
  if (!msg) {
    return false;
  }
  // objectlist
  if (!tku_msgs__msg__ColorArray__Sequence__init(&msg->objectlist, 0)) {
    tku_msgs__msg__ObjectList__fini(msg);
    return false;
  }
  return true;
}

void
tku_msgs__msg__ObjectList__fini(tku_msgs__msg__ObjectList * msg)
{
  if (!msg) {
    return;
  }
  // objectlist
  tku_msgs__msg__ColorArray__Sequence__fini(&msg->objectlist);
}

bool
tku_msgs__msg__ObjectList__are_equal(const tku_msgs__msg__ObjectList * lhs, const tku_msgs__msg__ObjectList * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // objectlist
  if (!tku_msgs__msg__ColorArray__Sequence__are_equal(
      &(lhs->objectlist), &(rhs->objectlist)))
  {
    return false;
  }
  return true;
}

bool
tku_msgs__msg__ObjectList__copy(
  const tku_msgs__msg__ObjectList * input,
  tku_msgs__msg__ObjectList * output)
{
  if (!input || !output) {
    return false;
  }
  // objectlist
  if (!tku_msgs__msg__ColorArray__Sequence__copy(
      &(input->objectlist), &(output->objectlist)))
  {
    return false;
  }
  return true;
}

tku_msgs__msg__ObjectList *
tku_msgs__msg__ObjectList__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tku_msgs__msg__ObjectList * msg = (tku_msgs__msg__ObjectList *)allocator.allocate(sizeof(tku_msgs__msg__ObjectList), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(tku_msgs__msg__ObjectList));
  bool success = tku_msgs__msg__ObjectList__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
tku_msgs__msg__ObjectList__destroy(tku_msgs__msg__ObjectList * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    tku_msgs__msg__ObjectList__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
tku_msgs__msg__ObjectList__Sequence__init(tku_msgs__msg__ObjectList__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tku_msgs__msg__ObjectList * data = NULL;

  if (size) {
    data = (tku_msgs__msg__ObjectList *)allocator.zero_allocate(size, sizeof(tku_msgs__msg__ObjectList), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = tku_msgs__msg__ObjectList__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        tku_msgs__msg__ObjectList__fini(&data[i - 1]);
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
tku_msgs__msg__ObjectList__Sequence__fini(tku_msgs__msg__ObjectList__Sequence * array)
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
      tku_msgs__msg__ObjectList__fini(&array->data[i]);
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

tku_msgs__msg__ObjectList__Sequence *
tku_msgs__msg__ObjectList__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tku_msgs__msg__ObjectList__Sequence * array = (tku_msgs__msg__ObjectList__Sequence *)allocator.allocate(sizeof(tku_msgs__msg__ObjectList__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = tku_msgs__msg__ObjectList__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
tku_msgs__msg__ObjectList__Sequence__destroy(tku_msgs__msg__ObjectList__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    tku_msgs__msg__ObjectList__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
tku_msgs__msg__ObjectList__Sequence__are_equal(const tku_msgs__msg__ObjectList__Sequence * lhs, const tku_msgs__msg__ObjectList__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!tku_msgs__msg__ObjectList__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
tku_msgs__msg__ObjectList__Sequence__copy(
  const tku_msgs__msg__ObjectList__Sequence * input,
  tku_msgs__msg__ObjectList__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(tku_msgs__msg__ObjectList);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    tku_msgs__msg__ObjectList * data =
      (tku_msgs__msg__ObjectList *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!tku_msgs__msg__ObjectList__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          tku_msgs__msg__ObjectList__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!tku_msgs__msg__ObjectList__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
