// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from dls2_interface:msg/ArmState.idl
// generated code does not contain a copyright notice

#ifndef DLS2_INTERFACE__MSG__DETAIL__ARM_STATE__BUILDER_HPP_
#define DLS2_INTERFACE__MSG__DETAIL__ARM_STATE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "dls2_interface/msg/detail/arm_state__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace dls2_interface
{

namespace msg
{

namespace builder
{

class Init_ArmState_gripper_effort
{
public:
  explicit Init_ArmState_gripper_effort(::dls2_interface::msg::ArmState & msg)
  : msg_(msg)
  {}
  ::dls2_interface::msg::ArmState gripper_effort(::dls2_interface::msg::ArmState::_gripper_effort_type arg)
  {
    msg_.gripper_effort = std::move(arg);
    return std::move(msg_);
  }

private:
  ::dls2_interface::msg::ArmState msg_;
};

class Init_ArmState_gripper_velocity
{
public:
  explicit Init_ArmState_gripper_velocity(::dls2_interface::msg::ArmState & msg)
  : msg_(msg)
  {}
  Init_ArmState_gripper_effort gripper_velocity(::dls2_interface::msg::ArmState::_gripper_velocity_type arg)
  {
    msg_.gripper_velocity = std::move(arg);
    return Init_ArmState_gripper_effort(msg_);
  }

private:
  ::dls2_interface::msg::ArmState msg_;
};

class Init_ArmState_gripper_position
{
public:
  explicit Init_ArmState_gripper_position(::dls2_interface::msg::ArmState & msg)
  : msg_(msg)
  {}
  Init_ArmState_gripper_velocity gripper_position(::dls2_interface::msg::ArmState::_gripper_position_type arg)
  {
    msg_.gripper_position = std::move(arg);
    return Init_ArmState_gripper_velocity(msg_);
  }

private:
  ::dls2_interface::msg::ArmState msg_;
};

class Init_ArmState_joints_temperature
{
public:
  explicit Init_ArmState_joints_temperature(::dls2_interface::msg::ArmState & msg)
  : msg_(msg)
  {}
  Init_ArmState_gripper_position joints_temperature(::dls2_interface::msg::ArmState::_joints_temperature_type arg)
  {
    msg_.joints_temperature = std::move(arg);
    return Init_ArmState_gripper_position(msg_);
  }

private:
  ::dls2_interface::msg::ArmState msg_;
};

class Init_ArmState_joints_effort
{
public:
  explicit Init_ArmState_joints_effort(::dls2_interface::msg::ArmState & msg)
  : msg_(msg)
  {}
  Init_ArmState_joints_temperature joints_effort(::dls2_interface::msg::ArmState::_joints_effort_type arg)
  {
    msg_.joints_effort = std::move(arg);
    return Init_ArmState_joints_temperature(msg_);
  }

private:
  ::dls2_interface::msg::ArmState msg_;
};

class Init_ArmState_joints_acceleration
{
public:
  explicit Init_ArmState_joints_acceleration(::dls2_interface::msg::ArmState & msg)
  : msg_(msg)
  {}
  Init_ArmState_joints_effort joints_acceleration(::dls2_interface::msg::ArmState::_joints_acceleration_type arg)
  {
    msg_.joints_acceleration = std::move(arg);
    return Init_ArmState_joints_effort(msg_);
  }

private:
  ::dls2_interface::msg::ArmState msg_;
};

class Init_ArmState_joints_velocity
{
public:
  explicit Init_ArmState_joints_velocity(::dls2_interface::msg::ArmState & msg)
  : msg_(msg)
  {}
  Init_ArmState_joints_acceleration joints_velocity(::dls2_interface::msg::ArmState::_joints_velocity_type arg)
  {
    msg_.joints_velocity = std::move(arg);
    return Init_ArmState_joints_acceleration(msg_);
  }

private:
  ::dls2_interface::msg::ArmState msg_;
};

class Init_ArmState_joints_position
{
public:
  explicit Init_ArmState_joints_position(::dls2_interface::msg::ArmState & msg)
  : msg_(msg)
  {}
  Init_ArmState_joints_velocity joints_position(::dls2_interface::msg::ArmState::_joints_position_type arg)
  {
    msg_.joints_position = std::move(arg);
    return Init_ArmState_joints_velocity(msg_);
  }

private:
  ::dls2_interface::msg::ArmState msg_;
};

class Init_ArmState_joints_name
{
public:
  explicit Init_ArmState_joints_name(::dls2_interface::msg::ArmState & msg)
  : msg_(msg)
  {}
  Init_ArmState_joints_position joints_name(::dls2_interface::msg::ArmState::_joints_name_type arg)
  {
    msg_.joints_name = std::move(arg);
    return Init_ArmState_joints_position(msg_);
  }

private:
  ::dls2_interface::msg::ArmState msg_;
};

class Init_ArmState_robot_name
{
public:
  explicit Init_ArmState_robot_name(::dls2_interface::msg::ArmState & msg)
  : msg_(msg)
  {}
  Init_ArmState_joints_name robot_name(::dls2_interface::msg::ArmState::_robot_name_type arg)
  {
    msg_.robot_name = std::move(arg);
    return Init_ArmState_joints_name(msg_);
  }

private:
  ::dls2_interface::msg::ArmState msg_;
};

class Init_ArmState_timestamp
{
public:
  explicit Init_ArmState_timestamp(::dls2_interface::msg::ArmState & msg)
  : msg_(msg)
  {}
  Init_ArmState_robot_name timestamp(::dls2_interface::msg::ArmState::_timestamp_type arg)
  {
    msg_.timestamp = std::move(arg);
    return Init_ArmState_robot_name(msg_);
  }

private:
  ::dls2_interface::msg::ArmState msg_;
};

class Init_ArmState_sequence_id
{
public:
  explicit Init_ArmState_sequence_id(::dls2_interface::msg::ArmState & msg)
  : msg_(msg)
  {}
  Init_ArmState_timestamp sequence_id(::dls2_interface::msg::ArmState::_sequence_id_type arg)
  {
    msg_.sequence_id = std::move(arg);
    return Init_ArmState_timestamp(msg_);
  }

private:
  ::dls2_interface::msg::ArmState msg_;
};

class Init_ArmState_frame_id
{
public:
  Init_ArmState_frame_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ArmState_sequence_id frame_id(::dls2_interface::msg::ArmState::_frame_id_type arg)
  {
    msg_.frame_id = std::move(arg);
    return Init_ArmState_sequence_id(msg_);
  }

private:
  ::dls2_interface::msg::ArmState msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::dls2_interface::msg::ArmState>()
{
  return dls2_interface::msg::builder::Init_ArmState_frame_id();
}

}  // namespace dls2_interface

#endif  // DLS2_INTERFACE__MSG__DETAIL__ARM_STATE__BUILDER_HPP_
