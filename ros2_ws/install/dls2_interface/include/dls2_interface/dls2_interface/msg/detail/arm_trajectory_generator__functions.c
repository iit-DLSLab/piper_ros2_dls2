// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from dls2_interface:msg/ArmTrajectoryGenerator.idl
// generated code does not contain a copyright notice
#include "dls2_interface/msg/detail/arm_trajectory_generator__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `frame_id`
#include "rosidl_runtime_c/string_functions.h"

bool
dls2_interface__msg__ArmTrajectoryGenerator__init(dls2_interface__msg__ArmTrajectoryGenerator * msg)
{
  if (!msg) {
    return false;
  }
  // frame_id
  if (!rosidl_runtime_c__String__init(&msg->frame_id)) {
    dls2_interface__msg__ArmTrajectoryGenerator__fini(msg);
    return false;
  }
  // sequence_id
  // timestamp
  // desired_arm_joints_position
  // desired_arm_joints_velocity
  // desired_arm_gripper_position
  // desired_arm_gripper_velocity
  // arm_kp
  // arm_kd
  return true;
}

void
dls2_interface__msg__ArmTrajectoryGenerator__fini(dls2_interface__msg__ArmTrajectoryGenerator * msg)
{
  if (!msg) {
    return;
  }
  // frame_id
  rosidl_runtime_c__String__fini(&msg->frame_id);
  // sequence_id
  // timestamp
  // desired_arm_joints_position
  // desired_arm_joints_velocity
  // desired_arm_gripper_position
  // desired_arm_gripper_velocity
  // arm_kp
  // arm_kd
}

bool
dls2_interface__msg__ArmTrajectoryGenerator__are_equal(const dls2_interface__msg__ArmTrajectoryGenerator * lhs, const dls2_interface__msg__ArmTrajectoryGenerator * rhs)
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
  // desired_arm_joints_position
  for (size_t i = 0; i < 6; ++i) {
    if (lhs->desired_arm_joints_position[i] != rhs->desired_arm_joints_position[i]) {
      return false;
    }
  }
  // desired_arm_joints_velocity
  for (size_t i = 0; i < 6; ++i) {
    if (lhs->desired_arm_joints_velocity[i] != rhs->desired_arm_joints_velocity[i]) {
      return false;
    }
  }
  // desired_arm_gripper_position
  if (lhs->desired_arm_gripper_position != rhs->desired_arm_gripper_position) {
    return false;
  }
  // desired_arm_gripper_velocity
  if (lhs->desired_arm_gripper_velocity != rhs->desired_arm_gripper_velocity) {
    return false;
  }
  // arm_kp
  for (size_t i = 0; i < 6; ++i) {
    if (lhs->arm_kp[i] != rhs->arm_kp[i]) {
      return false;
    }
  }
  // arm_kd
  for (size_t i = 0; i < 6; ++i) {
    if (lhs->arm_kd[i] != rhs->arm_kd[i]) {
      return false;
    }
  }
  return true;
}

bool
dls2_interface__msg__ArmTrajectoryGenerator__copy(
  const dls2_interface__msg__ArmTrajectoryGenerator * input,
  dls2_interface__msg__ArmTrajectoryGenerator * output)
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
  // desired_arm_joints_position
  for (size_t i = 0; i < 6; ++i) {
    output->desired_arm_joints_position[i] = input->desired_arm_joints_position[i];
  }
  // desired_arm_joints_velocity
  for (size_t i = 0; i < 6; ++i) {
    output->desired_arm_joints_velocity[i] = input->desired_arm_joints_velocity[i];
  }
  // desired_arm_gripper_position
  output->desired_arm_gripper_position = input->desired_arm_gripper_position;
  // desired_arm_gripper_velocity
  output->desired_arm_gripper_velocity = input->desired_arm_gripper_velocity;
  // arm_kp
  for (size_t i = 0; i < 6; ++i) {
    output->arm_kp[i] = input->arm_kp[i];
  }
  // arm_kd
  for (size_t i = 0; i < 6; ++i) {
    output->arm_kd[i] = input->arm_kd[i];
  }
  return true;
}

dls2_interface__msg__ArmTrajectoryGenerator *
dls2_interface__msg__ArmTrajectoryGenerator__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  dls2_interface__msg__ArmTrajectoryGenerator * msg = (dls2_interface__msg__ArmTrajectoryGenerator *)allocator.allocate(sizeof(dls2_interface__msg__ArmTrajectoryGenerator), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(dls2_interface__msg__ArmTrajectoryGenerator));
  bool success = dls2_interface__msg__ArmTrajectoryGenerator__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
dls2_interface__msg__ArmTrajectoryGenerator__destroy(dls2_interface__msg__ArmTrajectoryGenerator * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    dls2_interface__msg__ArmTrajectoryGenerator__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
dls2_interface__msg__ArmTrajectoryGenerator__Sequence__init(dls2_interface__msg__ArmTrajectoryGenerator__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  dls2_interface__msg__ArmTrajectoryGenerator * data = NULL;

  if (size) {
    data = (dls2_interface__msg__ArmTrajectoryGenerator *)allocator.zero_allocate(size, sizeof(dls2_interface__msg__ArmTrajectoryGenerator), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = dls2_interface__msg__ArmTrajectoryGenerator__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        dls2_interface__msg__ArmTrajectoryGenerator__fini(&data[i - 1]);
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
dls2_interface__msg__ArmTrajectoryGenerator__Sequence__fini(dls2_interface__msg__ArmTrajectoryGenerator__Sequence * array)
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
      dls2_interface__msg__ArmTrajectoryGenerator__fini(&array->data[i]);
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

dls2_interface__msg__ArmTrajectoryGenerator__Sequence *
dls2_interface__msg__ArmTrajectoryGenerator__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  dls2_interface__msg__ArmTrajectoryGenerator__Sequence * array = (dls2_interface__msg__ArmTrajectoryGenerator__Sequence *)allocator.allocate(sizeof(dls2_interface__msg__ArmTrajectoryGenerator__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = dls2_interface__msg__ArmTrajectoryGenerator__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
dls2_interface__msg__ArmTrajectoryGenerator__Sequence__destroy(dls2_interface__msg__ArmTrajectoryGenerator__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    dls2_interface__msg__ArmTrajectoryGenerator__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
dls2_interface__msg__ArmTrajectoryGenerator__Sequence__are_equal(const dls2_interface__msg__ArmTrajectoryGenerator__Sequence * lhs, const dls2_interface__msg__ArmTrajectoryGenerator__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!dls2_interface__msg__ArmTrajectoryGenerator__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
dls2_interface__msg__ArmTrajectoryGenerator__Sequence__copy(
  const dls2_interface__msg__ArmTrajectoryGenerator__Sequence * input,
  dls2_interface__msg__ArmTrajectoryGenerator__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(dls2_interface__msg__ArmTrajectoryGenerator);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    dls2_interface__msg__ArmTrajectoryGenerator * data =
      (dls2_interface__msg__ArmTrajectoryGenerator *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!dls2_interface__msg__ArmTrajectoryGenerator__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          dls2_interface__msg__ArmTrajectoryGenerator__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!dls2_interface__msg__ArmTrajectoryGenerator__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
