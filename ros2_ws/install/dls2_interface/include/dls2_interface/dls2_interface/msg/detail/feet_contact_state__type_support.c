// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from dls2_interface:msg/FeetContactState.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "dls2_interface/msg/detail/feet_contact_state__rosidl_typesupport_introspection_c.h"
#include "dls2_interface/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "dls2_interface/msg/detail/feet_contact_state__functions.h"
#include "dls2_interface/msg/detail/feet_contact_state__struct.h"


// Include directives for member types
// Member `frame_id`
// Member `robot_name`
// Member `feet_name`
#include "rosidl_runtime_c/string_functions.h"
// Member `linear_grf_feet`
// Member `angular_grf_feet`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void dls2_interface__msg__FeetContactState__rosidl_typesupport_introspection_c__FeetContactState_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  dls2_interface__msg__FeetContactState__init(message_memory);
}

void dls2_interface__msg__FeetContactState__rosidl_typesupport_introspection_c__FeetContactState_fini_function(void * message_memory)
{
  dls2_interface__msg__FeetContactState__fini(message_memory);
}

size_t dls2_interface__msg__FeetContactState__rosidl_typesupport_introspection_c__size_function__FeetContactState__feet_name(
  const void * untyped_member)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return member->size;
}

const void * dls2_interface__msg__FeetContactState__rosidl_typesupport_introspection_c__get_const_function__FeetContactState__feet_name(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void * dls2_interface__msg__FeetContactState__rosidl_typesupport_introspection_c__get_function__FeetContactState__feet_name(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void dls2_interface__msg__FeetContactState__rosidl_typesupport_introspection_c__fetch_function__FeetContactState__feet_name(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const rosidl_runtime_c__String * item =
    ((const rosidl_runtime_c__String *)
    dls2_interface__msg__FeetContactState__rosidl_typesupport_introspection_c__get_const_function__FeetContactState__feet_name(untyped_member, index));
  rosidl_runtime_c__String * value =
    (rosidl_runtime_c__String *)(untyped_value);
  *value = *item;
}

void dls2_interface__msg__FeetContactState__rosidl_typesupport_introspection_c__assign_function__FeetContactState__feet_name(
  void * untyped_member, size_t index, const void * untyped_value)
{
  rosidl_runtime_c__String * item =
    ((rosidl_runtime_c__String *)
    dls2_interface__msg__FeetContactState__rosidl_typesupport_introspection_c__get_function__FeetContactState__feet_name(untyped_member, index));
  const rosidl_runtime_c__String * value =
    (const rosidl_runtime_c__String *)(untyped_value);
  *item = *value;
}

bool dls2_interface__msg__FeetContactState__rosidl_typesupport_introspection_c__resize_function__FeetContactState__feet_name(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  rosidl_runtime_c__String__Sequence__fini(member);
  return rosidl_runtime_c__String__Sequence__init(member, size);
}

size_t dls2_interface__msg__FeetContactState__rosidl_typesupport_introspection_c__size_function__FeetContactState__linear_grf_feet(
  const void * untyped_member)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return member->size;
}

const void * dls2_interface__msg__FeetContactState__rosidl_typesupport_introspection_c__get_const_function__FeetContactState__linear_grf_feet(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void * dls2_interface__msg__FeetContactState__rosidl_typesupport_introspection_c__get_function__FeetContactState__linear_grf_feet(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void dls2_interface__msg__FeetContactState__rosidl_typesupport_introspection_c__fetch_function__FeetContactState__linear_grf_feet(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    dls2_interface__msg__FeetContactState__rosidl_typesupport_introspection_c__get_const_function__FeetContactState__linear_grf_feet(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void dls2_interface__msg__FeetContactState__rosidl_typesupport_introspection_c__assign_function__FeetContactState__linear_grf_feet(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    dls2_interface__msg__FeetContactState__rosidl_typesupport_introspection_c__get_function__FeetContactState__linear_grf_feet(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

bool dls2_interface__msg__FeetContactState__rosidl_typesupport_introspection_c__resize_function__FeetContactState__linear_grf_feet(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  rosidl_runtime_c__double__Sequence__fini(member);
  return rosidl_runtime_c__double__Sequence__init(member, size);
}

size_t dls2_interface__msg__FeetContactState__rosidl_typesupport_introspection_c__size_function__FeetContactState__angular_grf_feet(
  const void * untyped_member)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return member->size;
}

const void * dls2_interface__msg__FeetContactState__rosidl_typesupport_introspection_c__get_const_function__FeetContactState__angular_grf_feet(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void * dls2_interface__msg__FeetContactState__rosidl_typesupport_introspection_c__get_function__FeetContactState__angular_grf_feet(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void dls2_interface__msg__FeetContactState__rosidl_typesupport_introspection_c__fetch_function__FeetContactState__angular_grf_feet(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    dls2_interface__msg__FeetContactState__rosidl_typesupport_introspection_c__get_const_function__FeetContactState__angular_grf_feet(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void dls2_interface__msg__FeetContactState__rosidl_typesupport_introspection_c__assign_function__FeetContactState__angular_grf_feet(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    dls2_interface__msg__FeetContactState__rosidl_typesupport_introspection_c__get_function__FeetContactState__angular_grf_feet(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

bool dls2_interface__msg__FeetContactState__rosidl_typesupport_introspection_c__resize_function__FeetContactState__angular_grf_feet(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  rosidl_runtime_c__double__Sequence__fini(member);
  return rosidl_runtime_c__double__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember dls2_interface__msg__FeetContactState__rosidl_typesupport_introspection_c__FeetContactState_message_member_array[7] = {
  {
    "frame_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(dls2_interface__msg__FeetContactState, frame_id),  // bytes offset in struct
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
    offsetof(dls2_interface__msg__FeetContactState, sequence_id),  // bytes offset in struct
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
    offsetof(dls2_interface__msg__FeetContactState, timestamp),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "robot_name",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(dls2_interface__msg__FeetContactState, robot_name),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "feet_name",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(dls2_interface__msg__FeetContactState, feet_name),  // bytes offset in struct
    NULL,  // default value
    dls2_interface__msg__FeetContactState__rosidl_typesupport_introspection_c__size_function__FeetContactState__feet_name,  // size() function pointer
    dls2_interface__msg__FeetContactState__rosidl_typesupport_introspection_c__get_const_function__FeetContactState__feet_name,  // get_const(index) function pointer
    dls2_interface__msg__FeetContactState__rosidl_typesupport_introspection_c__get_function__FeetContactState__feet_name,  // get(index) function pointer
    dls2_interface__msg__FeetContactState__rosidl_typesupport_introspection_c__fetch_function__FeetContactState__feet_name,  // fetch(index, &value) function pointer
    dls2_interface__msg__FeetContactState__rosidl_typesupport_introspection_c__assign_function__FeetContactState__feet_name,  // assign(index, value) function pointer
    dls2_interface__msg__FeetContactState__rosidl_typesupport_introspection_c__resize_function__FeetContactState__feet_name  // resize(index) function pointer
  },
  {
    "linear_grf_feet",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(dls2_interface__msg__FeetContactState, linear_grf_feet),  // bytes offset in struct
    NULL,  // default value
    dls2_interface__msg__FeetContactState__rosidl_typesupport_introspection_c__size_function__FeetContactState__linear_grf_feet,  // size() function pointer
    dls2_interface__msg__FeetContactState__rosidl_typesupport_introspection_c__get_const_function__FeetContactState__linear_grf_feet,  // get_const(index) function pointer
    dls2_interface__msg__FeetContactState__rosidl_typesupport_introspection_c__get_function__FeetContactState__linear_grf_feet,  // get(index) function pointer
    dls2_interface__msg__FeetContactState__rosidl_typesupport_introspection_c__fetch_function__FeetContactState__linear_grf_feet,  // fetch(index, &value) function pointer
    dls2_interface__msg__FeetContactState__rosidl_typesupport_introspection_c__assign_function__FeetContactState__linear_grf_feet,  // assign(index, value) function pointer
    dls2_interface__msg__FeetContactState__rosidl_typesupport_introspection_c__resize_function__FeetContactState__linear_grf_feet  // resize(index) function pointer
  },
  {
    "angular_grf_feet",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(dls2_interface__msg__FeetContactState, angular_grf_feet),  // bytes offset in struct
    NULL,  // default value
    dls2_interface__msg__FeetContactState__rosidl_typesupport_introspection_c__size_function__FeetContactState__angular_grf_feet,  // size() function pointer
    dls2_interface__msg__FeetContactState__rosidl_typesupport_introspection_c__get_const_function__FeetContactState__angular_grf_feet,  // get_const(index) function pointer
    dls2_interface__msg__FeetContactState__rosidl_typesupport_introspection_c__get_function__FeetContactState__angular_grf_feet,  // get(index) function pointer
    dls2_interface__msg__FeetContactState__rosidl_typesupport_introspection_c__fetch_function__FeetContactState__angular_grf_feet,  // fetch(index, &value) function pointer
    dls2_interface__msg__FeetContactState__rosidl_typesupport_introspection_c__assign_function__FeetContactState__angular_grf_feet,  // assign(index, value) function pointer
    dls2_interface__msg__FeetContactState__rosidl_typesupport_introspection_c__resize_function__FeetContactState__angular_grf_feet  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers dls2_interface__msg__FeetContactState__rosidl_typesupport_introspection_c__FeetContactState_message_members = {
  "dls2_interface__msg",  // message namespace
  "FeetContactState",  // message name
  7,  // number of fields
  sizeof(dls2_interface__msg__FeetContactState),
  dls2_interface__msg__FeetContactState__rosidl_typesupport_introspection_c__FeetContactState_message_member_array,  // message members
  dls2_interface__msg__FeetContactState__rosidl_typesupport_introspection_c__FeetContactState_init_function,  // function to initialize message memory (memory has to be allocated)
  dls2_interface__msg__FeetContactState__rosidl_typesupport_introspection_c__FeetContactState_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t dls2_interface__msg__FeetContactState__rosidl_typesupport_introspection_c__FeetContactState_message_type_support_handle = {
  0,
  &dls2_interface__msg__FeetContactState__rosidl_typesupport_introspection_c__FeetContactState_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_dls2_interface
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, dls2_interface, msg, FeetContactState)() {
  if (!dls2_interface__msg__FeetContactState__rosidl_typesupport_introspection_c__FeetContactState_message_type_support_handle.typesupport_identifier) {
    dls2_interface__msg__FeetContactState__rosidl_typesupport_introspection_c__FeetContactState_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &dls2_interface__msg__FeetContactState__rosidl_typesupport_introspection_c__FeetContactState_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
