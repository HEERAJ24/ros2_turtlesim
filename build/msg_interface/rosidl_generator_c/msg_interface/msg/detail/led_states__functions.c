// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from msg_interface:msg/LedStates.idl
// generated code does not contain a copyright notice
#include "msg_interface/msg/detail/led_states__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
msg_interface__msg__LedStates__init(msg_interface__msg__LedStates * msg)
{
  if (!msg) {
    return false;
  }
  // led1
  // led2
  // led3
  return true;
}

void
msg_interface__msg__LedStates__fini(msg_interface__msg__LedStates * msg)
{
  if (!msg) {
    return;
  }
  // led1
  // led2
  // led3
}

bool
msg_interface__msg__LedStates__are_equal(const msg_interface__msg__LedStates * lhs, const msg_interface__msg__LedStates * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // led1
  if (lhs->led1 != rhs->led1) {
    return false;
  }
  // led2
  if (lhs->led2 != rhs->led2) {
    return false;
  }
  // led3
  if (lhs->led3 != rhs->led3) {
    return false;
  }
  return true;
}

bool
msg_interface__msg__LedStates__copy(
  const msg_interface__msg__LedStates * input,
  msg_interface__msg__LedStates * output)
{
  if (!input || !output) {
    return false;
  }
  // led1
  output->led1 = input->led1;
  // led2
  output->led2 = input->led2;
  // led3
  output->led3 = input->led3;
  return true;
}

msg_interface__msg__LedStates *
msg_interface__msg__LedStates__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  msg_interface__msg__LedStates * msg = (msg_interface__msg__LedStates *)allocator.allocate(sizeof(msg_interface__msg__LedStates), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(msg_interface__msg__LedStates));
  bool success = msg_interface__msg__LedStates__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
msg_interface__msg__LedStates__destroy(msg_interface__msg__LedStates * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    msg_interface__msg__LedStates__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
msg_interface__msg__LedStates__Sequence__init(msg_interface__msg__LedStates__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  msg_interface__msg__LedStates * data = NULL;

  if (size) {
    data = (msg_interface__msg__LedStates *)allocator.zero_allocate(size, sizeof(msg_interface__msg__LedStates), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = msg_interface__msg__LedStates__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        msg_interface__msg__LedStates__fini(&data[i - 1]);
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
msg_interface__msg__LedStates__Sequence__fini(msg_interface__msg__LedStates__Sequence * array)
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
      msg_interface__msg__LedStates__fini(&array->data[i]);
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

msg_interface__msg__LedStates__Sequence *
msg_interface__msg__LedStates__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  msg_interface__msg__LedStates__Sequence * array = (msg_interface__msg__LedStates__Sequence *)allocator.allocate(sizeof(msg_interface__msg__LedStates__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = msg_interface__msg__LedStates__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
msg_interface__msg__LedStates__Sequence__destroy(msg_interface__msg__LedStates__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    msg_interface__msg__LedStates__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
msg_interface__msg__LedStates__Sequence__are_equal(const msg_interface__msg__LedStates__Sequence * lhs, const msg_interface__msg__LedStates__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!msg_interface__msg__LedStates__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
msg_interface__msg__LedStates__Sequence__copy(
  const msg_interface__msg__LedStates__Sequence * input,
  msg_interface__msg__LedStates__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(msg_interface__msg__LedStates);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    msg_interface__msg__LedStates * data =
      (msg_interface__msg__LedStates *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!msg_interface__msg__LedStates__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          msg_interface__msg__LedStates__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!msg_interface__msg__LedStates__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
