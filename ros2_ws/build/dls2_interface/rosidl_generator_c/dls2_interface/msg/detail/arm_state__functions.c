// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from dls2_interface:msg/ArmState.idl
// generated code does not contain a copyright notice
#include "dls2_interface/msg/detail/arm_state__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `frame_id`
// Member `robot_name`
// Member `joints_name`
#include "rosidl_runtime_c/string_functions.h"
// Member `joints_position`
// Member `joints_velocity`
// Member `joints_acceleration`
// Member `joints_effort`
// Member `joints_temperature`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
dls2_interface__msg__ArmState__init(dls2_interface__msg__ArmState * msg)
{
  if (!msg) {
    return false;
  }
  // frame_id
  if (!rosidl_runtime_c__String__init(&msg->frame_id)) {
    dls2_interface__msg__ArmState__fini(msg);
    return false;
  }
  // sequence_id
  // timestamp
  // robot_name
  if (!rosidl_runtime_c__String__init(&msg->robot_name)) {
    dls2_interface__msg__ArmState__fini(msg);
    return false;
  }
  // joints_name
  if (!rosidl_runtime_c__String__Sequence__init(&msg->joints_name, 0)) {
    dls2_interface__msg__ArmState__fini(msg);
    return false;
  }
  // joints_position
  if (!rosidl_runtime_c__double__Sequence__init(&msg->joints_position, 0)) {
    dls2_interface__msg__ArmState__fini(msg);
    return false;
  }
  // joints_velocity
  if (!rosidl_runtime_c__double__Sequence__init(&msg->joints_velocity, 0)) {
    dls2_interface__msg__ArmState__fini(msg);
    return false;
  }
  // joints_acceleration
  if (!rosidl_runtime_c__double__Sequence__init(&msg->joints_acceleration, 0)) {
    dls2_interface__msg__ArmState__fini(msg);
    return false;
  }
  // joints_effort
  if (!rosidl_runtime_c__double__Sequence__init(&msg->joints_effort, 0)) {
    dls2_interface__msg__ArmState__fini(msg);
    return false;
  }
  // joints_temperature
  if (!rosidl_runtime_c__double__Sequence__init(&msg->joints_temperature, 0)) {
    dls2_interface__msg__ArmState__fini(msg);
    return false;
  }
  // gripper_position
  // gripper_velocity
  // gripper_effort
  return true;
}

void
dls2_interface__msg__ArmState__fini(dls2_interface__msg__ArmState * msg)
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
  // joints_name
  rosidl_runtime_c__String__Sequence__fini(&msg->joints_name);
  // joints_position
  rosidl_runtime_c__double__Sequence__fini(&msg->joints_position);
  // joints_velocity
  rosidl_runtime_c__double__Sequence__fini(&msg->joints_velocity);
  // joints_acceleration
  rosidl_runtime_c__double__Sequence__fini(&msg->joints_acceleration);
  // joints_effort
  rosidl_runtime_c__double__Sequence__fini(&msg->joints_effort);
  // joints_temperature
  rosidl_runtime_c__double__Sequence__fini(&msg->joints_temperature);
  // gripper_position
  // gripper_velocity
  // gripper_effort
}

bool
dls2_interface__msg__ArmState__are_equal(const dls2_interface__msg__ArmState * lhs, const dls2_interface__msg__ArmState * rhs)
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
  // joints_name
  if (!rosidl_runtime_c__String__Sequence__are_equal(
      &(lhs->joints_name), &(rhs->joints_name)))
  {
    return false;
  }
  // joints_position
  if (!rosidl_runtime_c__double__Sequence__are_equal(
      &(lhs->joints_position), &(rhs->joints_position)))
  {
    return false;
  }
  // joints_velocity
  if (!rosidl_runtime_c__double__Sequence__are_equal(
      &(lhs->joints_velocity), &(rhs->joints_velocity)))
  {
    return false;
  }
  // joints_acceleration
  if (!rosidl_runtime_c__double__Sequence__are_equal(
      &(lhs->joints_acceleration), &(rhs->joints_acceleration)))
  {
    return false;
  }
  // joints_effort
  if (!rosidl_runtime_c__double__Sequence__are_equal(
      &(lhs->joints_effort), &(rhs->joints_effort)))
  {
    return false;
  }
  // joints_temperature
  if (!rosidl_runtime_c__double__Sequence__are_equal(
      &(lhs->joints_temperature), &(rhs->joints_temperature)))
  {
    return false;
  }
  // gripper_position
  if (lhs->gripper_position != rhs->gripper_position) {
    return false;
  }
  // gripper_velocity
  if (lhs->gripper_velocity != rhs->gripper_velocity) {
    return false;
  }
  // gripper_effort
  if (lhs->gripper_effort != rhs->gripper_effort) {
    return false;
  }
  return true;
}

bool
dls2_interface__msg__ArmState__copy(
  const dls2_interface__msg__ArmState * input,
  dls2_interface__msg__ArmState * output)
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
  // joints_name
  if (!rosidl_runtime_c__String__Sequence__copy(
      &(input->joints_name), &(output->joints_name)))
  {
    return false;
  }
  // joints_position
  if (!rosidl_runtime_c__double__Sequence__copy(
      &(input->joints_position), &(output->joints_position)))
  {
    return false;
  }
  // joints_velocity
  if (!rosidl_runtime_c__double__Sequence__copy(
      &(input->joints_velocity), &(output->joints_velocity)))
  {
    return false;
  }
  // joints_acceleration
  if (!rosidl_runtime_c__double__Sequence__copy(
      &(input->joints_acceleration), &(output->joints_acceleration)))
  {
    return false;
  }
  // joints_effort
  if (!rosidl_runtime_c__double__Sequence__copy(
      &(input->joints_effort), &(output->joints_effort)))
  {
    return false;
  }
  // joints_temperature
  if (!rosidl_runtime_c__double__Sequence__copy(
      &(input->joints_temperature), &(output->joints_temperature)))
  {
    return false;
  }
  // gripper_position
  output->gripper_position = input->gripper_position;
  // gripper_velocity
  output->gripper_velocity = input->gripper_velocity;
  // gripper_effort
  output->gripper_effort = input->gripper_effort;
  return true;
}

dls2_interface__msg__ArmState *
dls2_interface__msg__ArmState__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  dls2_interface__msg__ArmState * msg = (dls2_interface__msg__ArmState *)allocator.allocate(sizeof(dls2_interface__msg__ArmState), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(dls2_interface__msg__ArmState));
  bool success = dls2_interface__msg__ArmState__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
dls2_interface__msg__ArmState__destroy(dls2_interface__msg__ArmState * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    dls2_interface__msg__ArmState__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
dls2_interface__msg__ArmState__Sequence__init(dls2_interface__msg__ArmState__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  dls2_interface__msg__ArmState * data = NULL;

  if (size) {
    data = (dls2_interface__msg__ArmState *)allocator.zero_allocate(size, sizeof(dls2_interface__msg__ArmState), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = dls2_interface__msg__ArmState__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        dls2_interface__msg__ArmState__fini(&data[i - 1]);
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
dls2_interface__msg__ArmState__Sequence__fini(dls2_interface__msg__ArmState__Sequence * array)
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
      dls2_interface__msg__ArmState__fini(&array->data[i]);
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

dls2_interface__msg__ArmState__Sequence *
dls2_interface__msg__ArmState__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  dls2_interface__msg__ArmState__Sequence * array = (dls2_interface__msg__ArmState__Sequence *)allocator.allocate(sizeof(dls2_interface__msg__ArmState__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = dls2_interface__msg__ArmState__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
dls2_interface__msg__ArmState__Sequence__destroy(dls2_interface__msg__ArmState__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    dls2_interface__msg__ArmState__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
dls2_interface__msg__ArmState__Sequence__are_equal(const dls2_interface__msg__ArmState__Sequence * lhs, const dls2_interface__msg__ArmState__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!dls2_interface__msg__ArmState__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
dls2_interface__msg__ArmState__Sequence__copy(
  const dls2_interface__msg__ArmState__Sequence * input,
  dls2_interface__msg__ArmState__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(dls2_interface__msg__ArmState);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    dls2_interface__msg__ArmState * data =
      (dls2_interface__msg__ArmState *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!dls2_interface__msg__ArmState__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          dls2_interface__msg__ArmState__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!dls2_interface__msg__ArmState__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
