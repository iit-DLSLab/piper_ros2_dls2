// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from dls2_interface:msg/ArmState.idl
// generated code does not contain a copyright notice

#ifndef DLS2_INTERFACE__MSG__DETAIL__ARM_STATE__STRUCT_H_
#define DLS2_INTERFACE__MSG__DETAIL__ARM_STATE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'frame_id'
// Member 'robot_name'
// Member 'joints_name'
#include "rosidl_runtime_c/string.h"
// Member 'joints_position'
// Member 'joints_velocity'
// Member 'joints_acceleration'
// Member 'joints_effort'
// Member 'joints_temperature'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in msg/ArmState in the package dls2_interface.
/**
  * Header
 */
typedef struct dls2_interface__msg__ArmState
{
  rosidl_runtime_c__String frame_id;
  uint32_t sequence_id;
  double timestamp;
  rosidl_runtime_c__String robot_name;
  rosidl_runtime_c__String__Sequence joints_name;
  rosidl_runtime_c__double__Sequence joints_position;
  rosidl_runtime_c__double__Sequence joints_velocity;
  rosidl_runtime_c__double__Sequence joints_acceleration;
  rosidl_runtime_c__double__Sequence joints_effort;
  rosidl_runtime_c__double__Sequence joints_temperature;
  double gripper_position;
  double gripper_velocity;
  double gripper_effort;
} dls2_interface__msg__ArmState;

// Struct for a sequence of dls2_interface__msg__ArmState.
typedef struct dls2_interface__msg__ArmState__Sequence
{
  dls2_interface__msg__ArmState * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} dls2_interface__msg__ArmState__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DLS2_INTERFACE__MSG__DETAIL__ARM_STATE__STRUCT_H_
