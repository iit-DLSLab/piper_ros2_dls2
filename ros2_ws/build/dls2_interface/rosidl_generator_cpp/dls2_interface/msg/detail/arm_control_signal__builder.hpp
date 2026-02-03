// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from dls2_interface:msg/ArmControlSignal.idl
// generated code does not contain a copyright notice

#ifndef DLS2_INTERFACE__MSG__DETAIL__ARM_CONTROL_SIGNAL__BUILDER_HPP_
#define DLS2_INTERFACE__MSG__DETAIL__ARM_CONTROL_SIGNAL__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "dls2_interface/msg/detail/arm_control_signal__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace dls2_interface
{

namespace msg
{

namespace builder
{

class Init_ArmControlSignal_desired_arm_gripper_torque
{
public:
  explicit Init_ArmControlSignal_desired_arm_gripper_torque(::dls2_interface::msg::ArmControlSignal & msg)
  : msg_(msg)
  {}
  ::dls2_interface::msg::ArmControlSignal desired_arm_gripper_torque(::dls2_interface::msg::ArmControlSignal::_desired_arm_gripper_torque_type arg)
  {
    msg_.desired_arm_gripper_torque = std::move(arg);
    return std::move(msg_);
  }

private:
  ::dls2_interface::msg::ArmControlSignal msg_;
};

class Init_ArmControlSignal_desired_arm_joints_torque
{
public:
  explicit Init_ArmControlSignal_desired_arm_joints_torque(::dls2_interface::msg::ArmControlSignal & msg)
  : msg_(msg)
  {}
  Init_ArmControlSignal_desired_arm_gripper_torque desired_arm_joints_torque(::dls2_interface::msg::ArmControlSignal::_desired_arm_joints_torque_type arg)
  {
    msg_.desired_arm_joints_torque = std::move(arg);
    return Init_ArmControlSignal_desired_arm_gripper_torque(msg_);
  }

private:
  ::dls2_interface::msg::ArmControlSignal msg_;
};

class Init_ArmControlSignal_timestamp
{
public:
  explicit Init_ArmControlSignal_timestamp(::dls2_interface::msg::ArmControlSignal & msg)
  : msg_(msg)
  {}
  Init_ArmControlSignal_desired_arm_joints_torque timestamp(::dls2_interface::msg::ArmControlSignal::_timestamp_type arg)
  {
    msg_.timestamp = std::move(arg);
    return Init_ArmControlSignal_desired_arm_joints_torque(msg_);
  }

private:
  ::dls2_interface::msg::ArmControlSignal msg_;
};

class Init_ArmControlSignal_sequence_id
{
public:
  explicit Init_ArmControlSignal_sequence_id(::dls2_interface::msg::ArmControlSignal & msg)
  : msg_(msg)
  {}
  Init_ArmControlSignal_timestamp sequence_id(::dls2_interface::msg::ArmControlSignal::_sequence_id_type arg)
  {
    msg_.sequence_id = std::move(arg);
    return Init_ArmControlSignal_timestamp(msg_);
  }

private:
  ::dls2_interface::msg::ArmControlSignal msg_;
};

class Init_ArmControlSignal_frame_id
{
public:
  Init_ArmControlSignal_frame_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ArmControlSignal_sequence_id frame_id(::dls2_interface::msg::ArmControlSignal::_frame_id_type arg)
  {
    msg_.frame_id = std::move(arg);
    return Init_ArmControlSignal_sequence_id(msg_);
  }

private:
  ::dls2_interface::msg::ArmControlSignal msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::dls2_interface::msg::ArmControlSignal>()
{
  return dls2_interface::msg::builder::Init_ArmControlSignal_frame_id();
}

}  // namespace dls2_interface

#endif  // DLS2_INTERFACE__MSG__DETAIL__ARM_CONTROL_SIGNAL__BUILDER_HPP_
