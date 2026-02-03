// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from dls2_interface:msg/ControlSignal.idl
// generated code does not contain a copyright notice

#ifndef DLS2_INTERFACE__MSG__DETAIL__CONTROL_SIGNAL__STRUCT_H_
#define DLS2_INTERFACE__MSG__DETAIL__CONTROL_SIGNAL__STRUCT_H_

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
// Member 'torques'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in msg/ControlSignal in the package dls2_interface.
/**
  * Header
 */
typedef struct dls2_interface__msg__ControlSignal
{
  rosidl_runtime_c__String frame_id;
  uint32_t sequence_id;
  double timestamp;
  rosidl_runtime_c__double__Sequence torques;
  uint64_t signal_reconstruction_method;
} dls2_interface__msg__ControlSignal;

// Struct for a sequence of dls2_interface__msg__ControlSignal.
typedef struct dls2_interface__msg__ControlSignal__Sequence
{
  dls2_interface__msg__ControlSignal * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} dls2_interface__msg__ControlSignal__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DLS2_INTERFACE__MSG__DETAIL__CONTROL_SIGNAL__STRUCT_H_
