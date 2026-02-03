// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from dls2_interface:msg/ArmTrajectoryGenerator.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "dls2_interface/msg/detail/arm_trajectory_generator__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace dls2_interface
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void ArmTrajectoryGenerator_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) dls2_interface::msg::ArmTrajectoryGenerator(_init);
}

void ArmTrajectoryGenerator_fini_function(void * message_memory)
{
  auto typed_message = static_cast<dls2_interface::msg::ArmTrajectoryGenerator *>(message_memory);
  typed_message->~ArmTrajectoryGenerator();
}

size_t size_function__ArmTrajectoryGenerator__desired_arm_joints_position(const void * untyped_member)
{
  (void)untyped_member;
  return 6;
}

const void * get_const_function__ArmTrajectoryGenerator__desired_arm_joints_position(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<double, 6> *>(untyped_member);
  return &member[index];
}

void * get_function__ArmTrajectoryGenerator__desired_arm_joints_position(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<double, 6> *>(untyped_member);
  return &member[index];
}

void fetch_function__ArmTrajectoryGenerator__desired_arm_joints_position(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const double *>(
    get_const_function__ArmTrajectoryGenerator__desired_arm_joints_position(untyped_member, index));
  auto & value = *reinterpret_cast<double *>(untyped_value);
  value = item;
}

void assign_function__ArmTrajectoryGenerator__desired_arm_joints_position(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<double *>(
    get_function__ArmTrajectoryGenerator__desired_arm_joints_position(untyped_member, index));
  const auto & value = *reinterpret_cast<const double *>(untyped_value);
  item = value;
}

size_t size_function__ArmTrajectoryGenerator__desired_arm_joints_velocity(const void * untyped_member)
{
  (void)untyped_member;
  return 6;
}

const void * get_const_function__ArmTrajectoryGenerator__desired_arm_joints_velocity(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<double, 6> *>(untyped_member);
  return &member[index];
}

void * get_function__ArmTrajectoryGenerator__desired_arm_joints_velocity(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<double, 6> *>(untyped_member);
  return &member[index];
}

void fetch_function__ArmTrajectoryGenerator__desired_arm_joints_velocity(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const double *>(
    get_const_function__ArmTrajectoryGenerator__desired_arm_joints_velocity(untyped_member, index));
  auto & value = *reinterpret_cast<double *>(untyped_value);
  value = item;
}

void assign_function__ArmTrajectoryGenerator__desired_arm_joints_velocity(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<double *>(
    get_function__ArmTrajectoryGenerator__desired_arm_joints_velocity(untyped_member, index));
  const auto & value = *reinterpret_cast<const double *>(untyped_value);
  item = value;
}

size_t size_function__ArmTrajectoryGenerator__arm_kp(const void * untyped_member)
{
  (void)untyped_member;
  return 6;
}

const void * get_const_function__ArmTrajectoryGenerator__arm_kp(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<double, 6> *>(untyped_member);
  return &member[index];
}

void * get_function__ArmTrajectoryGenerator__arm_kp(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<double, 6> *>(untyped_member);
  return &member[index];
}

void fetch_function__ArmTrajectoryGenerator__arm_kp(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const double *>(
    get_const_function__ArmTrajectoryGenerator__arm_kp(untyped_member, index));
  auto & value = *reinterpret_cast<double *>(untyped_value);
  value = item;
}

void assign_function__ArmTrajectoryGenerator__arm_kp(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<double *>(
    get_function__ArmTrajectoryGenerator__arm_kp(untyped_member, index));
  const auto & value = *reinterpret_cast<const double *>(untyped_value);
  item = value;
}

size_t size_function__ArmTrajectoryGenerator__arm_kd(const void * untyped_member)
{
  (void)untyped_member;
  return 6;
}

const void * get_const_function__ArmTrajectoryGenerator__arm_kd(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<double, 6> *>(untyped_member);
  return &member[index];
}

void * get_function__ArmTrajectoryGenerator__arm_kd(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<double, 6> *>(untyped_member);
  return &member[index];
}

void fetch_function__ArmTrajectoryGenerator__arm_kd(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const double *>(
    get_const_function__ArmTrajectoryGenerator__arm_kd(untyped_member, index));
  auto & value = *reinterpret_cast<double *>(untyped_value);
  value = item;
}

void assign_function__ArmTrajectoryGenerator__arm_kd(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<double *>(
    get_function__ArmTrajectoryGenerator__arm_kd(untyped_member, index));
  const auto & value = *reinterpret_cast<const double *>(untyped_value);
  item = value;
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember ArmTrajectoryGenerator_message_member_array[9] = {
  {
    "frame_id",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(dls2_interface::msg::ArmTrajectoryGenerator, frame_id),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "sequence_id",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(dls2_interface::msg::ArmTrajectoryGenerator, sequence_id),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "timestamp",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(dls2_interface::msg::ArmTrajectoryGenerator, timestamp),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "desired_arm_joints_position",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    6,  // array size
    false,  // is upper bound
    offsetof(dls2_interface::msg::ArmTrajectoryGenerator, desired_arm_joints_position),  // bytes offset in struct
    nullptr,  // default value
    size_function__ArmTrajectoryGenerator__desired_arm_joints_position,  // size() function pointer
    get_const_function__ArmTrajectoryGenerator__desired_arm_joints_position,  // get_const(index) function pointer
    get_function__ArmTrajectoryGenerator__desired_arm_joints_position,  // get(index) function pointer
    fetch_function__ArmTrajectoryGenerator__desired_arm_joints_position,  // fetch(index, &value) function pointer
    assign_function__ArmTrajectoryGenerator__desired_arm_joints_position,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "desired_arm_joints_velocity",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    6,  // array size
    false,  // is upper bound
    offsetof(dls2_interface::msg::ArmTrajectoryGenerator, desired_arm_joints_velocity),  // bytes offset in struct
    nullptr,  // default value
    size_function__ArmTrajectoryGenerator__desired_arm_joints_velocity,  // size() function pointer
    get_const_function__ArmTrajectoryGenerator__desired_arm_joints_velocity,  // get_const(index) function pointer
    get_function__ArmTrajectoryGenerator__desired_arm_joints_velocity,  // get(index) function pointer
    fetch_function__ArmTrajectoryGenerator__desired_arm_joints_velocity,  // fetch(index, &value) function pointer
    assign_function__ArmTrajectoryGenerator__desired_arm_joints_velocity,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "desired_arm_gripper_position",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(dls2_interface::msg::ArmTrajectoryGenerator, desired_arm_gripper_position),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "desired_arm_gripper_velocity",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(dls2_interface::msg::ArmTrajectoryGenerator, desired_arm_gripper_velocity),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "arm_kp",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    6,  // array size
    false,  // is upper bound
    offsetof(dls2_interface::msg::ArmTrajectoryGenerator, arm_kp),  // bytes offset in struct
    nullptr,  // default value
    size_function__ArmTrajectoryGenerator__arm_kp,  // size() function pointer
    get_const_function__ArmTrajectoryGenerator__arm_kp,  // get_const(index) function pointer
    get_function__ArmTrajectoryGenerator__arm_kp,  // get(index) function pointer
    fetch_function__ArmTrajectoryGenerator__arm_kp,  // fetch(index, &value) function pointer
    assign_function__ArmTrajectoryGenerator__arm_kp,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "arm_kd",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    6,  // array size
    false,  // is upper bound
    offsetof(dls2_interface::msg::ArmTrajectoryGenerator, arm_kd),  // bytes offset in struct
    nullptr,  // default value
    size_function__ArmTrajectoryGenerator__arm_kd,  // size() function pointer
    get_const_function__ArmTrajectoryGenerator__arm_kd,  // get_const(index) function pointer
    get_function__ArmTrajectoryGenerator__arm_kd,  // get(index) function pointer
    fetch_function__ArmTrajectoryGenerator__arm_kd,  // fetch(index, &value) function pointer
    assign_function__ArmTrajectoryGenerator__arm_kd,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers ArmTrajectoryGenerator_message_members = {
  "dls2_interface::msg",  // message namespace
  "ArmTrajectoryGenerator",  // message name
  9,  // number of fields
  sizeof(dls2_interface::msg::ArmTrajectoryGenerator),
  ArmTrajectoryGenerator_message_member_array,  // message members
  ArmTrajectoryGenerator_init_function,  // function to initialize message memory (memory has to be allocated)
  ArmTrajectoryGenerator_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t ArmTrajectoryGenerator_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &ArmTrajectoryGenerator_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace dls2_interface


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<dls2_interface::msg::ArmTrajectoryGenerator>()
{
  return &::dls2_interface::msg::rosidl_typesupport_introspection_cpp::ArmTrajectoryGenerator_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, dls2_interface, msg, ArmTrajectoryGenerator)() {
  return &::dls2_interface::msg::rosidl_typesupport_introspection_cpp::ArmTrajectoryGenerator_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
