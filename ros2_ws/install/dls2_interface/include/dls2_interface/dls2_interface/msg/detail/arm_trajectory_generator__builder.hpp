// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from dls2_interface:msg/ArmTrajectoryGenerator.idl
// generated code does not contain a copyright notice

#ifndef DLS2_INTERFACE__MSG__DETAIL__ARM_TRAJECTORY_GENERATOR__BUILDER_HPP_
#define DLS2_INTERFACE__MSG__DETAIL__ARM_TRAJECTORY_GENERATOR__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "dls2_interface/msg/detail/arm_trajectory_generator__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace dls2_interface
{

namespace msg
{

namespace builder
{

class Init_ArmTrajectoryGenerator_arm_kd
{
public:
  explicit Init_ArmTrajectoryGenerator_arm_kd(::dls2_interface::msg::ArmTrajectoryGenerator & msg)
  : msg_(msg)
  {}
  ::dls2_interface::msg::ArmTrajectoryGenerator arm_kd(::dls2_interface::msg::ArmTrajectoryGenerator::_arm_kd_type arg)
  {
    msg_.arm_kd = std::move(arg);
    return std::move(msg_);
  }

private:
  ::dls2_interface::msg::ArmTrajectoryGenerator msg_;
};

class Init_ArmTrajectoryGenerator_arm_kp
{
public:
  explicit Init_ArmTrajectoryGenerator_arm_kp(::dls2_interface::msg::ArmTrajectoryGenerator & msg)
  : msg_(msg)
  {}
  Init_ArmTrajectoryGenerator_arm_kd arm_kp(::dls2_interface::msg::ArmTrajectoryGenerator::_arm_kp_type arg)
  {
    msg_.arm_kp = std::move(arg);
    return Init_ArmTrajectoryGenerator_arm_kd(msg_);
  }

private:
  ::dls2_interface::msg::ArmTrajectoryGenerator msg_;
};

class Init_ArmTrajectoryGenerator_desired_arm_gripper_velocity
{
public:
  explicit Init_ArmTrajectoryGenerator_desired_arm_gripper_velocity(::dls2_interface::msg::ArmTrajectoryGenerator & msg)
  : msg_(msg)
  {}
  Init_ArmTrajectoryGenerator_arm_kp desired_arm_gripper_velocity(::dls2_interface::msg::ArmTrajectoryGenerator::_desired_arm_gripper_velocity_type arg)
  {
    msg_.desired_arm_gripper_velocity = std::move(arg);
    return Init_ArmTrajectoryGenerator_arm_kp(msg_);
  }

private:
  ::dls2_interface::msg::ArmTrajectoryGenerator msg_;
};

class Init_ArmTrajectoryGenerator_desired_arm_gripper_position
{
public:
  explicit Init_ArmTrajectoryGenerator_desired_arm_gripper_position(::dls2_interface::msg::ArmTrajectoryGenerator & msg)
  : msg_(msg)
  {}
  Init_ArmTrajectoryGenerator_desired_arm_gripper_velocity desired_arm_gripper_position(::dls2_interface::msg::ArmTrajectoryGenerator::_desired_arm_gripper_position_type arg)
  {
    msg_.desired_arm_gripper_position = std::move(arg);
    return Init_ArmTrajectoryGenerator_desired_arm_gripper_velocity(msg_);
  }

private:
  ::dls2_interface::msg::ArmTrajectoryGenerator msg_;
};

class Init_ArmTrajectoryGenerator_desired_arm_joints_velocity
{
public:
  explicit Init_ArmTrajectoryGenerator_desired_arm_joints_velocity(::dls2_interface::msg::ArmTrajectoryGenerator & msg)
  : msg_(msg)
  {}
  Init_ArmTrajectoryGenerator_desired_arm_gripper_position desired_arm_joints_velocity(::dls2_interface::msg::ArmTrajectoryGenerator::_desired_arm_joints_velocity_type arg)
  {
    msg_.desired_arm_joints_velocity = std::move(arg);
    return Init_ArmTrajectoryGenerator_desired_arm_gripper_position(msg_);
  }

private:
  ::dls2_interface::msg::ArmTrajectoryGenerator msg_;
};

class Init_ArmTrajectoryGenerator_desired_arm_joints_position
{
public:
  explicit Init_ArmTrajectoryGenerator_desired_arm_joints_position(::dls2_interface::msg::ArmTrajectoryGenerator & msg)
  : msg_(msg)
  {}
  Init_ArmTrajectoryGenerator_desired_arm_joints_velocity desired_arm_joints_position(::dls2_interface::msg::ArmTrajectoryGenerator::_desired_arm_joints_position_type arg)
  {
    msg_.desired_arm_joints_position = std::move(arg);
    return Init_ArmTrajectoryGenerator_desired_arm_joints_velocity(msg_);
  }

private:
  ::dls2_interface::msg::ArmTrajectoryGenerator msg_;
};

class Init_ArmTrajectoryGenerator_timestamp
{
public:
  explicit Init_ArmTrajectoryGenerator_timestamp(::dls2_interface::msg::ArmTrajectoryGenerator & msg)
  : msg_(msg)
  {}
  Init_ArmTrajectoryGenerator_desired_arm_joints_position timestamp(::dls2_interface::msg::ArmTrajectoryGenerator::_timestamp_type arg)
  {
    msg_.timestamp = std::move(arg);
    return Init_ArmTrajectoryGenerator_desired_arm_joints_position(msg_);
  }

private:
  ::dls2_interface::msg::ArmTrajectoryGenerator msg_;
};

class Init_ArmTrajectoryGenerator_sequence_id
{
public:
  explicit Init_ArmTrajectoryGenerator_sequence_id(::dls2_interface::msg::ArmTrajectoryGenerator & msg)
  : msg_(msg)
  {}
  Init_ArmTrajectoryGenerator_timestamp sequence_id(::dls2_interface::msg::ArmTrajectoryGenerator::_sequence_id_type arg)
  {
    msg_.sequence_id = std::move(arg);
    return Init_ArmTrajectoryGenerator_timestamp(msg_);
  }

private:
  ::dls2_interface::msg::ArmTrajectoryGenerator msg_;
};

class Init_ArmTrajectoryGenerator_frame_id
{
public:
  Init_ArmTrajectoryGenerator_frame_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ArmTrajectoryGenerator_sequence_id frame_id(::dls2_interface::msg::ArmTrajectoryGenerator::_frame_id_type arg)
  {
    msg_.frame_id = std::move(arg);
    return Init_ArmTrajectoryGenerator_sequence_id(msg_);
  }

private:
  ::dls2_interface::msg::ArmTrajectoryGenerator msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::dls2_interface::msg::ArmTrajectoryGenerator>()
{
  return dls2_interface::msg::builder::Init_ArmTrajectoryGenerator_frame_id();
}

}  // namespace dls2_interface

#endif  // DLS2_INTERFACE__MSG__DETAIL__ARM_TRAJECTORY_GENERATOR__BUILDER_HPP_
