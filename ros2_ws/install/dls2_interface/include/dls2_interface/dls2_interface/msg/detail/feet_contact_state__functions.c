// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from dls2_interface:msg/FeetContactState.idl
// generated code does not contain a copyright notice
#include "dls2_interface/msg/detail/feet_contact_state__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `frame_id`
// Member `robot_name`
// Member `feet_name`
#include "rosidl_runtime_c/string_functions.h"
// Member `linear_grf_feet`
// Member `angular_grf_feet`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
dls2_interface__msg__FeetContactState__init(dls2_interface__msg__FeetContactState * msg)
{
  if (!msg) {
    return false;
  }
  // frame_id
  if (!rosidl_runtime_c__String__init(&msg->frame_id)) {
    dls2_interface__msg__FeetContactState__fini(msg);
    return false;
  }
  // sequence_id
  // timestamp
  // robot_name
  if (!rosidl_runtime_c__String__init(&msg->robot_name)) {
    dls2_interface__msg__FeetContactState__fini(msg);
    return false;
  }
  // feet_name
  if (!rosidl_runtime_c__String__Sequence__init(&msg->feet_name, 0)) {
    dls2_interface__msg__FeetContactState__fini(msg);
    return false;
  }
  // linear_grf_feet
  if (!rosidl_runtime_c__double__Sequence__init(&msg->linear_grf_feet, 0)) {
    dls2_interface__msg__FeetContactState__fini(msg);
    return false;
  }
  // angular_grf_feet
  if (!rosidl_runtime_c__double__Sequence__init(&msg->angular_grf_feet, 0)) {
    dls2_interface__msg__FeetContactState__fini(msg);
    return false;
  }
  return true;
}

void
dls2_interface__msg__FeetContactState__fini(dls2_interface__msg__FeetContactState * msg)
{
  if (!msg) {
    return;
  }
  // frame_id
  rosidl_runtime_c__String__fini(&msg->frame_id);
  // sequence_id
  // timestamp
  // robot_name
  rosidl_runtime_c__String__fini(&msg->robot_name);
  // feet_name
  rosidl_runtime_c__String__Sequence__fini(&msg->feet_name);
  // linear_grf_feet
  rosidl_runtime_c__double__Sequence__fini(&msg->linear_grf_feet);
  // angular_grf_feet
  rosidl_runtime_c__double__Sequence__fini(&msg->angular_grf_feet);
}

bool
dls2_interface__msg__FeetContactState__are_equal(const dls2_interface__msg__FeetContactState * lhs, const dls2_interface__msg__FeetContactState * rhs)
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
  // robot_name
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->robot_name), &(rhs->robot_name)))
  {
    return false;
  }
  // feet_name
  if (!rosidl_runtime_c__String__Sequence__are_equal(
      &(lhs->feet_name), &(rhs->feet_name)))
  {
    return false;
  }
  // linear_grf_feet
  if (!rosidl_runtime_c__double__Sequence__are_equal(
      &(lhs->linear_grf_feet), &(rhs->linear_grf_feet)))
  {
    return false;
  }
  // angular_grf_feet
  if (!rosidl_runtime_c__double__Sequence__are_equal(
      &(lhs->angular_grf_feet), &(rhs->angular_grf_feet)))
  {
    return false;
  }
  return true;
}

bool
dls2_interface__msg__FeetContactState__copy(
  const dls2_interface__msg__FeetContactState * input,
  dls2_interface__msg__FeetContactState * output)
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
  // robot_name
  if (!rosidl_runtime_c__String__copy(
      &(input->robot_name), &(output->robot_name)))
  {
    return false;
  }
  // feet_name
  if (!rosidl_runtime_c__String__Sequence__copy(
      &(input->feet_name), &(output->feet_name)))
  {
    return false;
  }
  // linear_grf_feet
  if (!rosidl_runtime_c__double__Sequence__copy(
      &(input->linear_grf_feet), &(output->linear_grf_feet)))
  {
    return false;
  }
  // angular_grf_feet
  if (!rosidl_runtime_c__double__Sequence__copy(
      &(input->angular_grf_feet), &(output->angular_grf_feet)))
  {
    return false;
  }
  return true;
}

dls2_interface__msg__FeetContactState *
dls2_interface__msg__FeetContactState__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  dls2_interface__msg__FeetContactState * msg = (dls2_interface__msg__FeetContactState *)allocator.allocate(sizeof(dls2_interface__msg__FeetContactState), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(dls2_interface__msg__FeetContactState));
  bool success = dls2_interface__msg__FeetContactState__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
dls2_interface__msg__FeetContactState__destroy(dls2_interface__msg__FeetContactState * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    dls2_interface__msg__FeetContactState__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
dls2_interface__msg__FeetContactState__Sequence__init(dls2_interface__msg__FeetContactState__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  dls2_interface__msg__FeetContactState * data = NULL;

  if (size) {
    data = (dls2_interface__msg__FeetContactState *)allocator.zero_allocate(size, sizeof(dls2_interface__msg__FeetContactState), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = dls2_interface__msg__FeetContactState__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        dls2_interface__msg__FeetContactState__fini(&data[i - 1]);
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
dls2_interface__msg__FeetContactState__Sequence__fini(dls2_interface__msg__FeetContactState__Sequence * array)
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
      dls2_interface__msg__FeetContactState__fini(&array->data[i]);
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

dls2_interface__msg__FeetContactState__Sequence *
dls2_interface__msg__FeetContactState__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  dls2_interface__msg__FeetContactState__Sequence * array = (dls2_interface__msg__FeetContactState__Sequence *)allocator.allocate(sizeof(dls2_interface__msg__FeetContactState__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = dls2_interface__msg__FeetContactState__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
dls2_interface__msg__FeetContactState__Sequence__destroy(dls2_interface__msg__FeetContactState__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    dls2_interface__msg__FeetContactState__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
dls2_interface__msg__FeetContactState__Sequence__are_equal(const dls2_interface__msg__FeetContactState__Sequence * lhs, const dls2_interface__msg__FeetContactState__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!dls2_interface__msg__FeetContactState__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
dls2_interface__msg__FeetContactState__Sequence__copy(
  const dls2_interface__msg__FeetContactState__Sequence * input,
  dls2_interface__msg__FeetContactState__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(dls2_interface__msg__FeetContactState);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    dls2_interface__msg__FeetContactState * data =
      (dls2_interface__msg__FeetContactState *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!dls2_interface__msg__FeetContactState__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          dls2_interface__msg__FeetContactState__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!dls2_interface__msg__FeetContactState__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
