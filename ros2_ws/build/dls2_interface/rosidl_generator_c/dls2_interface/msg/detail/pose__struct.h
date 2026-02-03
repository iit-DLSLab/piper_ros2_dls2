// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from dls2_interface:msg/Pose.idl
// generated code does not contain a copyright notice

#ifndef DLS2_INTERFACE__MSG__DETAIL__POSE__STRUCT_H_
#define DLS2_INTERFACE__MSG__DETAIL__POSE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/Pose in the package dls2_interface.
typedef struct dls2_interface__msg__Pose
{
  double position[3];
  double orientation[4];
} dls2_interface__msg__Pose;

// Struct for a sequence of dls2_interface__msg__Pose.
typedef struct dls2_interface__msg__Pose__Sequence
{
  dls2_interface__msg__Pose * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} dls2_interface__msg__Pose__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DLS2_INTERFACE__MSG__DETAIL__POSE__STRUCT_H_
