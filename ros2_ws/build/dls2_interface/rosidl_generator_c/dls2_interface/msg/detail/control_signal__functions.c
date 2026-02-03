// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from dls2_interface:msg/ControlSignal.idl
// generated code does not contain a copyright notice
#include "dls2_interface/msg/detail/control_signal__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `frame_id`
#include "rosidl_runtime_c/string_functions.h"
// Member `torques`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
dls2_interface__msg__ControlSignal__init(dls2_interface__msg__ControlSignal * msg)
{
  if (!msg) {
    return false;
  }
  // frame_id
  if (!rosidl_runtime_c__String__init(&msg->frame_id)) {
    dls2_interface__msg__ControlSignal__fini(msg);
    return false;
  }
  // sequence_id
  // timestamp
  // torques
  if (!rosidl_runtime_c__double__Sequence__init(&msg->torques, 0)) {
    dls2_interface__msg__ControlSignal__fini(msg);
    return false;
  }
  // signal_reconstruction_method
  return true;
}

void
dls2_interface__msg__ControlSignal__fini(dls2_interface__msg__ControlSignal * msg)
{
  if (!msg) {
    return;
  }
  // frame_id
  rosidl_runtime_c__String__fini(&msg->frame_id);
  // sequence_id
  // timestamp
  // torques
  rosidl_runtime_c__double__Sequence__fini(&msg->torques);
  // signal_reconstruction_method
}

bool
dls2_interface__msg__ControlSignal__are_equal(const dls2_interface__msg__ControlSignal * lhs, const dls2_interface__msg__ControlSignal * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // frame_id
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->frame_id), &(rhs->frame_id)))
  {
    return false;
  }
  // sequence_id
  if (lhs->sequence_id != rhs->sequence_id) {
    return false;
  }
  // timestamp
  if (lhs->timestamp != rhs->timestamp) {
    return false;
  }
  // torques
  if (!rosidl_runtime_c__double__Sequence__are_equal(
      &(lhs->torques), &(rhs->torques)))
  {
    return false;
  }
  // signal_reconstruction_method
  if (lhs->signal_reconstruction_method != rhs->signal_reconstruction_method) {
    return false;
  }
  return true;
}

bool
dls2_interface__msg__ControlSignal__copy(
  const dls2_interface__msg__ControlSignal * input,
  dls2_interface__msg__ControlSignal * output)
{
  if (!input || !output) {
    return false;
  }
  // frame_id
  if (!rosidl_runtime_c__String__copy(
      &(input->frame_id), &(output->frame_id)))
  {
    return false;
  }
  // sequence_id
  output->sequence_id = input->sequence_id;
  // timestamp
  output->timestamp = input->timestamp;
  // torques
  if (!rosidl_runtime_c__double__Sequence__copy(
      &(input->torques), &(output->torques)))
  {
    return false;
  }
  // signal_reconstruction_method
  output->signal_reconstruction_method = input->signal_reconstruction_method;
  return true;
}

dls2_interface__msg__ControlSignal *
dls2_interface__msg__ControlSignal__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  dls2_interface__msg__ControlSignal * msg = (dls2_interface__msg__ControlSignal *)allocator.allocate(sizeof(dls2_interface__msg__ControlSignal), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(dls2_interface__msg__ControlSignal));
  bool success = dls2_interface__msg__ControlSignal__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
dls2_interface__msg__ControlSignal__destroy(dls2_interface__msg__ControlSignal * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    dls2_interface__msg__ControlSignal__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
dls2_interface__msg__ControlSignal__Sequence__init(dls2_interface__msg__ControlSignal__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  dls2_interface__msg__ControlSignal * data = NULL;

  if (size) {
    data = (dls2_interface__msg__ControlSignal *)allocator.zero_allocate(size, sizeof(dls2_interface__msg__ControlSignal), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = dls2_interface__msg__ControlSignal__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        dls2_interface__msg__ControlSignal__fini(&data[i - 1]);
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
dls2_interface__msg__ControlSignal__Sequence__fini(dls2_interface__msg__ControlSignal__Sequence * array)
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
      dls2_interface__msg__ControlSignal__fini(&array->data[i]);
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

dls2_interface__msg__ControlSignal__Sequence *
dls2_interface__msg__ControlSignal__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  dls2_interface__msg__ControlSignal__Sequence * array = (dls2_interface__msg__ControlSignal__Sequence *)allocator.allocate(sizeof(dls2_interface__msg__ControlSignal__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = dls2_interface__msg__ControlSignal__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
dls2_interface__msg__ControlSignal__Sequence__destroy(dls2_interface__msg__ControlSignal__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    dls2_interface__msg__ControlSignal__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
dls2_interface__msg__ControlSignal__Sequence__are_equal(const dls2_interface__msg__ControlSignal__Sequence * lhs, const dls2_interface__msg__ControlSignal__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!dls2_interface__msg__ControlSignal__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
dls2_interface__msg__ControlSignal__Sequence__copy(
  const dls2_interface__msg__ControlSignal__Sequence * input,
  dls2_interface__msg__ControlSignal__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(dls2_interface__msg__ControlSignal);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    dls2_interface__msg__ControlSignal * data =
      (dls2_interface__msg__ControlSignal *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!dls2_interface__msg__ControlSignal__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          dls2_interface__msg__ControlSignal__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!dls2_interface__msg__ControlSignal__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
