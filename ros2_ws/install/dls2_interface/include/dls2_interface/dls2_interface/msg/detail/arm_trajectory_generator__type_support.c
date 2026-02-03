// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from dls2_interface:msg/ArmTrajectoryGenerator.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "dls2_interface/msg/detail/arm_trajectory_generator__rosidl_typesupport_introspection_c.h"
#include "dls2_interface/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "dls2_interface/msg/detail/arm_trajectory_generator__functions.h"
#include "dls2_interface/msg/detail/arm_trajectory_generator__struct.h"


// Include directives for member types
// Member `frame_id`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void dls2_interface__msg__ArmTrajectoryGenerator__rosidl_typesupport_introspection_c__ArmTrajectoryGenerator_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  dls2_interface__msg__ArmTrajectoryGenerator__init(message_memory);
}

void dls2_interface__msg__ArmTrajectoryGenerator__rosidl_typesupport_introspection_c__ArmTrajectoryGenerator_fini_function(void * message_memory)
{
  dls2_interface__msg__ArmTrajectoryGenerator__fini(message_memory);
}

size_t dls2_interface__msg__ArmTrajectoryGenerator__rosidl_typesupport_introspection_c__size_function__ArmTrajectoryGenerator__desired_arm_joints_position(
  const void * untyped_member)
{
  (void)untyped_member;
  return 6;
}

const void * dls2_interface__msg__ArmTrajectoryGenerator__rosidl_typesupport_introspection_c__get_const_function__ArmTrajectoryGenerator__desired_arm_joints_position(
  const void * untyped_member, size_t index)
{
  const double * member =
    (const double *)(untyped_member);
  return &member[index];
}

void * dls2_interface__msg__ArmTrajectoryGenerator__rosidl_typesupport_introspection_c__get_function__ArmTrajectoryGenerator__desired_arm_joints_position(
  void * untyped_member, size_t index)
{
  double * member =
    (double *)(untyped_member);
  return &member[index];
}

void dls2_interface__msg__ArmTrajectoryGenerator__rosidl_typesupport_introspection_c__fetch_function__ArmTrajectoryGenerator__desired_arm_joints_position(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    dls2_interface__msg__ArmTrajectoryGenerator__rosidl_typesupport_introspection_c__get_const_function__ArmTrajectoryGenerator__desired_arm_joints_position(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void dls2_interface__msg__ArmTrajectoryGenerator__rosidl_typesupport_introspection_c__assign_function__ArmTrajectoryGenerator__desired_arm_joints_position(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    dls2_interface__msg__ArmTrajectoryGenerator__rosidl_typesupport_introspection_c__get_function__ArmTrajectoryGenerator__desired_arm_joints_position(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

size_t dls2_interface__msg__ArmTrajectoryGenerator__rosidl_typesupport_introspection_c__size_function__ArmTrajectoryGenerator__desired_arm_joints_velocity(
  const void * untyped_member)
{
  (void)untyped_member;
  return 6;
}

const void * dls2_interface__msg__ArmTrajectoryGenerator__rosidl_typesupport_introspection_c__get_const_function__ArmTrajectoryGenerator__desired_arm_joints_velocity(
  const void * untyped_member, size_t index)
{
  const double * member =
    (const double *)(untyped_member);
  return &member[index];
}

void * dls2_interface__msg__ArmTrajectoryGenerator__rosidl_typesupport_introspection_c__get_function__ArmTrajectoryGenerator__desired_arm_joints_velocity(
  void * untyped_member, size_t index)
{
  double * member =
    (double *)(untyped_member);
  return &member[index];
}

void dls2_interface__msg__ArmTrajectoryGenerator__rosidl_typesupport_introspection_c__fetch_function__ArmTrajectoryGenerator__desired_arm_joints_velocity(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    dls2_interface__msg__ArmTrajectoryGenerator__rosidl_typesupport_introspection_c__get_const_function__ArmTrajectoryGenerator__desired_arm_joints_velocity(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void dls2_interface__msg__ArmTrajectoryGenerator__rosidl_typesupport_introspection_c__assign_function__ArmTrajectoryGenerator__desired_arm_joints_velocity(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    dls2_interface__msg__ArmTrajectoryGenerator__rosidl_typesupport_introspection_c__get_function__ArmTrajectoryGenerator__desired_arm_joints_velocity(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

size_t dls2_interface__msg__ArmTrajectoryGenerator__rosidl_typesupport_introspection_c__size_function__ArmTrajectoryGenerator__arm_kp(
  const void * untyped_member)
{
  (void)untyped_member;
  return 6;
}

const void * dls2_interface__msg__ArmTrajectoryGenerator__rosidl_typesupport_introspection_c__get_const_function__ArmTrajectoryGenerator__arm_kp(
  const void * untyped_member, size_t index)
{
  const double * member =
    (const double *)(untyped_member);
  return &member[index];
}

void * dls2_interface__msg__ArmTrajectoryGenerator__rosidl_typesupport_introspection_c__get_function__ArmTrajectoryGenerator__arm_kp(
  void * untyped_member, size_t index)
{
  double * member =
    (double *)(untyped_member);
  return &member[index];
}

void dls2_interface__msg__ArmTrajectoryGenerator__rosidl_typesupport_introspection_c__fetch_function__ArmTrajectoryGenerator__arm_kp(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    dls2_interface__msg__ArmTrajectoryGenerator__rosidl_typesupport_introspection_c__get_const_function__ArmTrajectoryGenerator__arm_kp(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void dls2_interface__msg__ArmTrajectoryGenerator__rosidl_typesupport_introspection_c__assign_function__ArmTrajectoryGenerator__arm_kp(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    dls2_interface__msg__ArmTrajectoryGenerator__rosidl_typesupport_introspection_c__get_function__ArmTrajectoryGenerator__arm_kp(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

size_t dls2_interface__msg__ArmTrajectoryGenerator__rosidl_typesupport_introspection_c__size_function__ArmTrajectoryGenerator__arm_kd(
  const void * untyped_member)
{
  (void)untyped_member;
  return 6;
}

const void * dls2_interface__msg__ArmTrajectoryGenerator__rosidl_typesupport_introspection_c__get_const_function__ArmTrajectoryGenerator__arm_kd(
  const void * untyped_member, size_t index)
{
  const double * member =
    (const double *)(untyped_member);
  return &member[index];
}

void * dls2_interface__msg__ArmTrajectoryGenerator__rosidl_typesupport_introspection_c__get_function__ArmTrajectoryGenerator__arm_kd(
  void * untyped_member, size_t index)
{
  double * member =
    (double *)(untyped_member);
  return &member[index];
}

void dls2_interface__msg__ArmTrajectoryGenerator__rosidl_typesupport_introspection_c__fetch_function__ArmTrajectoryGenerator__arm_kd(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    dls2_interface__msg__ArmTrajectoryGenerator__rosidl_typesupport_introspection_c__get_const_function__ArmTrajectoryGenerator__arm_kd(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void dls2_interface__msg__ArmTrajectoryGenerator__rosidl_typesupport_introspection_c__assign_function__ArmTrajectoryGenerator__arm_kd(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    dls2_interface__msg__ArmTrajectoryGenerator__rosidl_typesupport_introspection_c__get_function__ArmTrajectoryGenerator__arm_kd(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

static rosidl_typesupport_introspection_c__MessageMember dls2_interface__msg__ArmTrajectoryGenerator__rosidl_typesupport_introspection_c__ArmTrajectoryGenerator_message_member_array[9] = {
  {
    "frame_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(dls2_interface__msg__ArmTrajectoryGenerator, frame_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "sequence_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(dls2_interface__msg__ArmTrajectoryGenerator, sequence_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "timestamp",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(dls2_interface__msg__ArmTrajectoryGenerator, timestamp),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "desired_arm_joints_position",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    6,  // array size
    false,  // is upper bound
    offsetof(dls2_interface__msg__ArmTrajectoryGenerator, desired_arm_joints_position),  // bytes offset in struct
    NULL,  // default value
    dls2_interface__msg__ArmTrajectoryGenerator__rosidl_typesupport_introspection_c__size_function__ArmTrajectoryGenerator__desired_arm_joints_position,  // size() function pointer
    dls2_interface__msg__ArmTrajectoryGenerator__rosidl_typesupport_introspection_c__get_const_function__ArmTrajectoryGenerator__desired_arm_joints_position,  // get_const(index) function pointer
    dls2_interface__msg__ArmTrajectoryGenerator__rosidl_typesupport_introspection_c__get_function__ArmTrajectoryGenerator__desired_arm_joints_position,  // get(index) function pointer
    dls2_interface__msg__ArmTrajectoryGenerator__rosidl_typesupport_introspection_c__fetch_function__ArmTrajectoryGenerator__desired_arm_joints_position,  // fetch(index, &value) function pointer
    dls2_interface__msg__ArmTrajectoryGenerator__rosidl_typesupport_introspection_c__assign_function__ArmTrajectoryGenerator__desired_arm_joints_position,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "desired_arm_joints_velocity",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    6,  // array size
    false,  // is upper bound
    offsetof(dls2_interface__msg__ArmTrajectoryGenerator, desired_arm_joints_velocity),  // bytes offset in struct
    NULL,  // default value
    dls2_interface__msg__ArmTrajectoryGenerator__rosidl_typesupport_introspection_c__size_function__ArmTrajectoryGenerator__desired_arm_joints_velocity,  // size() function pointer
    dls2_interface__msg__ArmTrajectoryGenerator__rosidl_typesupport_introspection_c__get_const_function__ArmTrajectoryGenerator__desired_arm_joints_velocity,  // get_const(index) function pointer
    dls2_interface__msg__ArmTrajectoryGenerator__rosidl_typesupport_introspection_c__get_function__ArmTrajectoryGenerator__desired_arm_joints_velocity,  // get(index) function pointer
    dls2_interface__msg__ArmTrajectoryGenerator__rosidl_typesupport_introspection_c__fetch_function__ArmTrajectoryGenerator__desired_arm_joints_velocity,  // fetch(index, &value) function pointer
    dls2_interface__msg__ArmTrajectoryGenerator__rosidl_typesupport_introspection_c__assign_function__ArmTrajectoryGenerator__desired_arm_joints_velocity,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "desired_arm_gripper_position",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(dls2_interface__msg__ArmTrajectoryGenerator, desired_arm_gripper_position),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "desired_arm_gripper_velocity",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(dls2_interface__msg__ArmTrajectoryGenerator, desired_arm_gripper_velocity),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "arm_kp",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    6,  // array size
    false,  // is upper bound
    offsetof(dls2_interface__msg__ArmTrajectoryGenerator, arm_kp),  // bytes offset in struct
    NULL,  // default value
    dls2_interface__msg__ArmTrajectoryGenerator__rosidl_typesupport_introspection_c__size_function__ArmTrajectoryGenerator__arm_kp,  // size() function pointer
    dls2_interface__msg__ArmTrajectoryGenerator__rosidl_typesupport_introspection_c__get_const_function__ArmTrajectoryGenerator__arm_kp,  // get_const(index) function pointer
    dls2_interface__msg__ArmTrajectoryGenerator__rosidl_typesupport_introspection_c__get_function__ArmTrajectoryGenerator__arm_kp,  // get(index) function pointer
    dls2_interface__msg__ArmTrajectoryGenerator__rosidl_typesupport_introspection_c__fetch_function__ArmTrajectoryGenerator__arm_kp,  // fetch(index, &value) function pointer
    dls2_interface__msg__ArmTrajectoryGenerator__rosidl_typesupport_introspection_c__assign_function__ArmTrajectoryGenerator__arm_kp,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "arm_kd",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    6,  // array size
    false,  // is upper bound
    offsetof(dls2_interface__msg__ArmTrajectoryGenerator, arm_kd),  // bytes offset in struct
    NULL,  // default value
    dls2_interface__msg__ArmTrajectoryGenerator__rosidl_typesupport_introspection_c__size_function__ArmTrajectoryGenerator__arm_kd,  // size() function pointer
    dls2_interface__msg__ArmTrajectoryGenerator__rosidl_typesupport_introspection_c__get_const_function__ArmTrajectoryGenerator__arm_kd,  // get_const(index) function pointer
    dls2_interface__msg__ArmTrajectoryGenerator__rosidl_typesupport_introspection_c__get_function__ArmTrajectoryGenerator__arm_kd,  // get(index) function pointer
    dls2_interface__msg__ArmTrajectoryGenerator__rosidl_typesupport_introspection_c__fetch_function__ArmTrajectoryGenerator__arm_kd,  // fetch(index, &value) function pointer
    dls2_interface__msg__ArmTrajectoryGenerator__rosidl_typesupport_introspection_c__assign_function__ArmTrajectoryGenerator__arm_kd,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers dls2_interface__msg__ArmTrajectoryGenerator__rosidl_typesupport_introspection_c__ArmTrajectoryGenerator_message_members = {
  "dls2_interface__msg",  // message namespace
  "ArmTrajectoryGenerator",  // message name
  9,  // number of fields
  sizeof(dls2_interface__msg__ArmTrajectoryGenerator),
  dls2_interface__msg__ArmTrajectoryGenerator__rosidl_typesupport_introspection_c__ArmTrajectoryGenerator_message_member_array,  // message members
  dls2_interface__msg__ArmTrajectoryGenerator__rosidl_typesupport_introspection_c__ArmTrajectoryGenerator_init_function,  // function to initialize message memory (memory has to be allocated)
  dls2_interface__msg__ArmTrajectoryGenerator__rosidl_typesupport_introspection_c__ArmTrajectoryGenerator_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t dls2_interface__msg__ArmTrajectoryGenerator__rosidl_typesupport_introspection_c__ArmTrajectoryGenerator_message_type_support_handle = {
  0,
  &dls2_interface__msg__ArmTrajectoryGenerator__rosidl_typesupport_introspection_c__ArmTrajectoryGenerator_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_dls2_interface
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, dls2_interface, msg, ArmTrajectoryGenerator)() {
  if (!dls2_interface__msg__ArmTrajectoryGenerator__rosidl_typesupport_introspection_c__ArmTrajectoryGenerator_message_type_support_handle.typesupport_identifier) {
    dls2_interface__msg__ArmTrajectoryGenerator__rosidl_typesupport_introspection_c__ArmTrajectoryGenerator_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &dls2_interface__msg__ArmTrajectoryGenerator__rosidl_typesupport_introspection_c__ArmTrajectoryGenerator_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
