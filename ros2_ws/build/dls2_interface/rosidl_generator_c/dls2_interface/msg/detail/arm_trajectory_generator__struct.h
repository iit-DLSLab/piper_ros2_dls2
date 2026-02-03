// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from dls2_interface:msg/ArmTrajectoryGenerator.idl
// generated code does not contain a copyright notice

#ifndef DLS2_INTERFACE__MSG__DETAIL__ARM_TRAJECTORY_GENERATOR__STRUCT_H_
#define DLS2_INTERFACE__MSG__DETAIL__ARM_TRAJECTORY_GENERATOR__STRUCT_H_

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

/// Struct defined in msg/ArmTrajectoryGenerator in the package dls2_interface.
/**
  * Header
 */
typedef struct dls2_interface__msg__ArmTrajectoryGenerator
{
  rosidl_runtime_c__String frame_id;
  uint32_t sequence_id;
  double timestamp;
  double desired_arm_joints_position[6];
  double desired_arm_joints_velocity[6];
  double desired_arm_gripper_position;
  double desired_arm_gripper_velocity;
  double arm_kp[6];
  double arm_kd[6];
} dls2_interface__msg__ArmTrajectoryGenerator;

// Struct for a sequence of dls2_interface__msg__ArmTrajectoryGenerator.
typedef struct dls2_interface__msg__ArmTrajectoryGenerator__Sequence
{
  dls2_interface__msg__ArmTrajectoryGenerator * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} dls2_interface__msg__ArmTrajectoryGenerator__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DLS2_INTERFACE__MSG__DETAIL__ARM_TRAJECTORY_GENERATOR__STRUCT_H_
