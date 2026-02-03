// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from dls2_interface:msg/ArmControlSignal.idl
// generated code does not contain a copyright notice

#ifndef DLS2_INTERFACE__MSG__DETAIL__ARM_CONTROL_SIGNAL__STRUCT_H_
#define DLS2_INTERFACE__MSG__DETAIL__ARM_CONTROL_SIGNAL__STRUCT_H_

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
#include "rosidl_runtime_c/string.h"
// Member 'desired_arm_joints_torque'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in msg/ArmControlSignal in the package dls2_interface.
/**
  * Header
 */
typedef struct dls2_interface__msg__ArmControlSignal
{
  rosidl_runtime_c__String frame_id;
  uint32_t sequence_id;
  double timestamp;
  rosidl_runtime_c__double__Sequence desired_arm_joints_torque;
  double desired_arm_gripper_torque;
} dls2_interface__msg__ArmControlSignal;

// Struct for a sequence of dls2_interface__msg__ArmControlSignal.
typedef struct dls2_interface__msg__ArmControlSignal__Sequence
{
  dls2_interface__msg__ArmControlSignal * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} dls2_interface__msg__ArmControlSignal__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DLS2_INTERFACE__MSG__DETAIL__ARM_CONTROL_SIGNAL__STRUCT_H_
