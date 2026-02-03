// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from dls2_interface:msg/FeetContactState.idl
// generated code does not contain a copyright notice

#ifndef DLS2_INTERFACE__MSG__DETAIL__FEET_CONTACT_STATE__STRUCT_H_
#define DLS2_INTERFACE__MSG__DETAIL__FEET_CONTACT_STATE__STRUCT_H_

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
// Member 'feet_name'
#include "rosidl_runtime_c/string.h"
// Member 'linear_grf_feet'
// Member 'angular_grf_feet'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in msg/FeetContactState in the package dls2_interface.
/**
  * Header
 */
typedef struct dls2_interface__msg__FeetContactState
{
  rosidl_runtime_c__String frame_id;
  uint32_t sequence_id;
  double timestamp;
  rosidl_runtime_c__String robot_name;
  rosidl_runtime_c__String__Sequence feet_name;
  rosidl_runtime_c__double__Sequence linear_grf_feet;
  rosidl_runtime_c__double__Sequence angular_grf_feet;
} dls2_interface__msg__FeetContactState;

// Struct for a sequence of dls2_interface__msg__FeetContactState.
typedef struct dls2_interface__msg__FeetContactState__Sequence
{
  dls2_interface__msg__FeetContactState * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} dls2_interface__msg__FeetContactState__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DLS2_INTERFACE__MSG__DETAIL__FEET_CONTACT_STATE__STRUCT_H_
