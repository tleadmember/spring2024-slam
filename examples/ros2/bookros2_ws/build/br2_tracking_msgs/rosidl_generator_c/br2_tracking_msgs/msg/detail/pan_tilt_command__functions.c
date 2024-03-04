// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from br2_tracking_msgs:msg/PanTiltCommand.idl
// generated code does not contain a copyright notice
#include "br2_tracking_msgs/msg/detail/pan_tilt_command__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
br2_tracking_msgs__msg__PanTiltCommand__init(br2_tracking_msgs__msg__PanTiltCommand * msg)
{
  if (!msg) {
    return false;
  }
  // pan
  // tilt
  return true;
}

void
br2_tracking_msgs__msg__PanTiltCommand__fini(br2_tracking_msgs__msg__PanTiltCommand * msg)
{
  if (!msg) {
    return;
  }
  // pan
  // tilt
}

bool
br2_tracking_msgs__msg__PanTiltCommand__are_equal(const br2_tracking_msgs__msg__PanTiltCommand * lhs, const br2_tracking_msgs__msg__PanTiltCommand * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // pan
  if (lhs->pan != rhs->pan) {
    return false;
  }
  // tilt
  if (lhs->tilt != rhs->tilt) {
    return false;
  }
  return true;
}

bool
br2_tracking_msgs__msg__PanTiltCommand__copy(
  const br2_tracking_msgs__msg__PanTiltCommand * input,
  br2_tracking_msgs__msg__PanTiltCommand * output)
{
  if (!input || !output) {
    return false;
  }
  // pan
  output->pan = input->pan;
  // tilt
  output->tilt = input->tilt;
  return true;
}

br2_tracking_msgs__msg__PanTiltCommand *
br2_tracking_msgs__msg__PanTiltCommand__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  br2_tracking_msgs__msg__PanTiltCommand * msg = (br2_tracking_msgs__msg__PanTiltCommand *)allocator.allocate(sizeof(br2_tracking_msgs__msg__PanTiltCommand), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(br2_tracking_msgs__msg__PanTiltCommand));
  bool success = br2_tracking_msgs__msg__PanTiltCommand__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
br2_tracking_msgs__msg__PanTiltCommand__destroy(br2_tracking_msgs__msg__PanTiltCommand * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    br2_tracking_msgs__msg__PanTiltCommand__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
br2_tracking_msgs__msg__PanTiltCommand__Sequence__init(br2_tracking_msgs__msg__PanTiltCommand__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  br2_tracking_msgs__msg__PanTiltCommand * data = NULL;

  if (size) {
    data = (br2_tracking_msgs__msg__PanTiltCommand *)allocator.zero_allocate(size, sizeof(br2_tracking_msgs__msg__PanTiltCommand), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = br2_tracking_msgs__msg__PanTiltCommand__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        br2_tracking_msgs__msg__PanTiltCommand__fini(&data[i - 1]);
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
br2_tracking_msgs__msg__PanTiltCommand__Sequence__fini(br2_tracking_msgs__msg__PanTiltCommand__Sequence * array)
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
      br2_tracking_msgs__msg__PanTiltCommand__fini(&array->data[i]);
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

br2_tracking_msgs__msg__PanTiltCommand__Sequence *
br2_tracking_msgs__msg__PanTiltCommand__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  br2_tracking_msgs__msg__PanTiltCommand__Sequence * array = (br2_tracking_msgs__msg__PanTiltCommand__Sequence *)allocator.allocate(sizeof(br2_tracking_msgs__msg__PanTiltCommand__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = br2_tracking_msgs__msg__PanTiltCommand__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
br2_tracking_msgs__msg__PanTiltCommand__Sequence__destroy(br2_tracking_msgs__msg__PanTiltCommand__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    br2_tracking_msgs__msg__PanTiltCommand__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
br2_tracking_msgs__msg__PanTiltCommand__Sequence__are_equal(const br2_tracking_msgs__msg__PanTiltCommand__Sequence * lhs, const br2_tracking_msgs__msg__PanTiltCommand__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!br2_tracking_msgs__msg__PanTiltCommand__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
br2_tracking_msgs__msg__PanTiltCommand__Sequence__copy(
  const br2_tracking_msgs__msg__PanTiltCommand__Sequence * input,
  br2_tracking_msgs__msg__PanTiltCommand__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(br2_tracking_msgs__msg__PanTiltCommand);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    br2_tracking_msgs__msg__PanTiltCommand * data =
      (br2_tracking_msgs__msg__PanTiltCommand *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!br2_tracking_msgs__msg__PanTiltCommand__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          br2_tracking_msgs__msg__PanTiltCommand__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!br2_tracking_msgs__msg__PanTiltCommand__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
