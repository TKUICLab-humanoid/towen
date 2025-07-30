// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from tku_msgs:srv/ReadMotion.idl
// generated code does not contain a copyright notice
#include "tku_msgs/srv/detail/read_motion__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

// Include directives for member types
// Member `name`
#include "rosidl_runtime_c/string_functions.h"

bool
tku_msgs__srv__ReadMotion_Request__init(tku_msgs__srv__ReadMotion_Request * msg)
{
  if (!msg) {
    return false;
  }
  // read
  // name
  if (!rosidl_runtime_c__String__init(&msg->name)) {
    tku_msgs__srv__ReadMotion_Request__fini(msg);
    return false;
  }
  // readstate
  return true;
}

void
tku_msgs__srv__ReadMotion_Request__fini(tku_msgs__srv__ReadMotion_Request * msg)
{
  if (!msg) {
    return;
  }
  // read
  // name
  rosidl_runtime_c__String__fini(&msg->name);
  // readstate
}

bool
tku_msgs__srv__ReadMotion_Request__are_equal(const tku_msgs__srv__ReadMotion_Request * lhs, const tku_msgs__srv__ReadMotion_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // read
  if (lhs->read != rhs->read) {
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->name), &(rhs->name)))
  {
    return false;
  }
  // readstate
  if (lhs->readstate != rhs->readstate) {
    return false;
  }
  return true;
}

bool
tku_msgs__srv__ReadMotion_Request__copy(
  const tku_msgs__srv__ReadMotion_Request * input,
  tku_msgs__srv__ReadMotion_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // read
  output->read = input->read;
  // name
  if (!rosidl_runtime_c__String__copy(
      &(input->name), &(output->name)))
  {
    return false;
  }
  // readstate
  output->readstate = input->readstate;
  return true;
}

tku_msgs__srv__ReadMotion_Request *
tku_msgs__srv__ReadMotion_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tku_msgs__srv__ReadMotion_Request * msg = (tku_msgs__srv__ReadMotion_Request *)allocator.allocate(sizeof(tku_msgs__srv__ReadMotion_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(tku_msgs__srv__ReadMotion_Request));
  bool success = tku_msgs__srv__ReadMotion_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
tku_msgs__srv__ReadMotion_Request__destroy(tku_msgs__srv__ReadMotion_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    tku_msgs__srv__ReadMotion_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
tku_msgs__srv__ReadMotion_Request__Sequence__init(tku_msgs__srv__ReadMotion_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tku_msgs__srv__ReadMotion_Request * data = NULL;

  if (size) {
    data = (tku_msgs__srv__ReadMotion_Request *)allocator.zero_allocate(size, sizeof(tku_msgs__srv__ReadMotion_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = tku_msgs__srv__ReadMotion_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        tku_msgs__srv__ReadMotion_Request__fini(&data[i - 1]);
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
tku_msgs__srv__ReadMotion_Request__Sequence__fini(tku_msgs__srv__ReadMotion_Request__Sequence * array)
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
      tku_msgs__srv__ReadMotion_Request__fini(&array->data[i]);
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

tku_msgs__srv__ReadMotion_Request__Sequence *
tku_msgs__srv__ReadMotion_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tku_msgs__srv__ReadMotion_Request__Sequence * array = (tku_msgs__srv__ReadMotion_Request__Sequence *)allocator.allocate(sizeof(tku_msgs__srv__ReadMotion_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = tku_msgs__srv__ReadMotion_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
tku_msgs__srv__ReadMotion_Request__Sequence__destroy(tku_msgs__srv__ReadMotion_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    tku_msgs__srv__ReadMotion_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
tku_msgs__srv__ReadMotion_Request__Sequence__are_equal(const tku_msgs__srv__ReadMotion_Request__Sequence * lhs, const tku_msgs__srv__ReadMotion_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!tku_msgs__srv__ReadMotion_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
tku_msgs__srv__ReadMotion_Request__Sequence__copy(
  const tku_msgs__srv__ReadMotion_Request__Sequence * input,
  tku_msgs__srv__ReadMotion_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(tku_msgs__srv__ReadMotion_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    tku_msgs__srv__ReadMotion_Request * data =
      (tku_msgs__srv__ReadMotion_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!tku_msgs__srv__ReadMotion_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          tku_msgs__srv__ReadMotion_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!tku_msgs__srv__ReadMotion_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `motionstate`
// Member `id`
// Member `motionlist`
// Member `relativedata`
// Member `absolutedata`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
tku_msgs__srv__ReadMotion_Response__init(tku_msgs__srv__ReadMotion_Response * msg)
{
  if (!msg) {
    return false;
  }
  // readcheck
  // vectorcnt
  // motionstate
  if (!rosidl_runtime_c__int32__Sequence__init(&msg->motionstate, 0)) {
    tku_msgs__srv__ReadMotion_Response__fini(msg);
    return false;
  }
  // id
  if (!rosidl_runtime_c__int32__Sequence__init(&msg->id, 0)) {
    tku_msgs__srv__ReadMotion_Response__fini(msg);
    return false;
  }
  // motionlist
  if (!rosidl_runtime_c__int32__Sequence__init(&msg->motionlist, 0)) {
    tku_msgs__srv__ReadMotion_Response__fini(msg);
    return false;
  }
  // relativedata
  if (!rosidl_runtime_c__int32__Sequence__init(&msg->relativedata, 0)) {
    tku_msgs__srv__ReadMotion_Response__fini(msg);
    return false;
  }
  // absolutedata
  if (!rosidl_runtime_c__int32__Sequence__init(&msg->absolutedata, 0)) {
    tku_msgs__srv__ReadMotion_Response__fini(msg);
    return false;
  }
  return true;
}

void
tku_msgs__srv__ReadMotion_Response__fini(tku_msgs__srv__ReadMotion_Response * msg)
{
  if (!msg) {
    return;
  }
  // readcheck
  // vectorcnt
  // motionstate
  rosidl_runtime_c__int32__Sequence__fini(&msg->motionstate);
  // id
  rosidl_runtime_c__int32__Sequence__fini(&msg->id);
  // motionlist
  rosidl_runtime_c__int32__Sequence__fini(&msg->motionlist);
  // relativedata
  rosidl_runtime_c__int32__Sequence__fini(&msg->relativedata);
  // absolutedata
  rosidl_runtime_c__int32__Sequence__fini(&msg->absolutedata);
}

bool
tku_msgs__srv__ReadMotion_Response__are_equal(const tku_msgs__srv__ReadMotion_Response * lhs, const tku_msgs__srv__ReadMotion_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // readcheck
  if (lhs->readcheck != rhs->readcheck) {
    return false;
  }
  // vectorcnt
  if (lhs->vectorcnt != rhs->vectorcnt) {
    return false;
  }
  // motionstate
  if (!rosidl_runtime_c__int32__Sequence__are_equal(
      &(lhs->motionstate), &(rhs->motionstate)))
  {
    return false;
  }
  // id
  if (!rosidl_runtime_c__int32__Sequence__are_equal(
      &(lhs->id), &(rhs->id)))
  {
    return false;
  }
  // motionlist
  if (!rosidl_runtime_c__int32__Sequence__are_equal(
      &(lhs->motionlist), &(rhs->motionlist)))
  {
    return false;
  }
  // relativedata
  if (!rosidl_runtime_c__int32__Sequence__are_equal(
      &(lhs->relativedata), &(rhs->relativedata)))
  {
    return false;
  }
  // absolutedata
  if (!rosidl_runtime_c__int32__Sequence__are_equal(
      &(lhs->absolutedata), &(rhs->absolutedata)))
  {
    return false;
  }
  return true;
}

bool
tku_msgs__srv__ReadMotion_Response__copy(
  const tku_msgs__srv__ReadMotion_Response * input,
  tku_msgs__srv__ReadMotion_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // readcheck
  output->readcheck = input->readcheck;
  // vectorcnt
  output->vectorcnt = input->vectorcnt;
  // motionstate
  if (!rosidl_runtime_c__int32__Sequence__copy(
      &(input->motionstate), &(output->motionstate)))
  {
    return false;
  }
  // id
  if (!rosidl_runtime_c__int32__Sequence__copy(
      &(input->id), &(output->id)))
  {
    return false;
  }
  // motionlist
  if (!rosidl_runtime_c__int32__Sequence__copy(
      &(input->motionlist), &(output->motionlist)))
  {
    return false;
  }
  // relativedata
  if (!rosidl_runtime_c__int32__Sequence__copy(
      &(input->relativedata), &(output->relativedata)))
  {
    return false;
  }
  // absolutedata
  if (!rosidl_runtime_c__int32__Sequence__copy(
      &(input->absolutedata), &(output->absolutedata)))
  {
    return false;
  }
  return true;
}

tku_msgs__srv__ReadMotion_Response *
tku_msgs__srv__ReadMotion_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tku_msgs__srv__ReadMotion_Response * msg = (tku_msgs__srv__ReadMotion_Response *)allocator.allocate(sizeof(tku_msgs__srv__ReadMotion_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(tku_msgs__srv__ReadMotion_Response));
  bool success = tku_msgs__srv__ReadMotion_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
tku_msgs__srv__ReadMotion_Response__destroy(tku_msgs__srv__ReadMotion_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    tku_msgs__srv__ReadMotion_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
tku_msgs__srv__ReadMotion_Response__Sequence__init(tku_msgs__srv__ReadMotion_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tku_msgs__srv__ReadMotion_Response * data = NULL;

  if (size) {
    data = (tku_msgs__srv__ReadMotion_Response *)allocator.zero_allocate(size, sizeof(tku_msgs__srv__ReadMotion_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = tku_msgs__srv__ReadMotion_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        tku_msgs__srv__ReadMotion_Response__fini(&data[i - 1]);
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
tku_msgs__srv__ReadMotion_Response__Sequence__fini(tku_msgs__srv__ReadMotion_Response__Sequence * array)
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
      tku_msgs__srv__ReadMotion_Response__fini(&array->data[i]);
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

tku_msgs__srv__ReadMotion_Response__Sequence *
tku_msgs__srv__ReadMotion_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tku_msgs__srv__ReadMotion_Response__Sequence * array = (tku_msgs__srv__ReadMotion_Response__Sequence *)allocator.allocate(sizeof(tku_msgs__srv__ReadMotion_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = tku_msgs__srv__ReadMotion_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
tku_msgs__srv__ReadMotion_Response__Sequence__destroy(tku_msgs__srv__ReadMotion_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    tku_msgs__srv__ReadMotion_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
tku_msgs__srv__ReadMotion_Response__Sequence__are_equal(const tku_msgs__srv__ReadMotion_Response__Sequence * lhs, const tku_msgs__srv__ReadMotion_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!tku_msgs__srv__ReadMotion_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
tku_msgs__srv__ReadMotion_Response__Sequence__copy(
  const tku_msgs__srv__ReadMotion_Response__Sequence * input,
  tku_msgs__srv__ReadMotion_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(tku_msgs__srv__ReadMotion_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    tku_msgs__srv__ReadMotion_Response * data =
      (tku_msgs__srv__ReadMotion_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!tku_msgs__srv__ReadMotion_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          tku_msgs__srv__ReadMotion_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!tku_msgs__srv__ReadMotion_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
