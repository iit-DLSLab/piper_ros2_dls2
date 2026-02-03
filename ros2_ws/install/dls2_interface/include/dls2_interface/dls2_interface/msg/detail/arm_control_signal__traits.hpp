// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from dls2_interface:msg/ArmControlSignal.idl
// generated code does not contain a copyright notice

#ifndef DLS2_INTERFACE__MSG__DETAIL__ARM_CONTROL_SIGNAL__TRAITS_HPP_
#define DLS2_INTERFACE__MSG__DETAIL__ARM_CONTROL_SIGNAL__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "dls2_interface/msg/detail/arm_control_signal__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace dls2_interface
{

namespace msg
{

inline void to_flow_style_yaml(
  const ArmControlSignal & msg,
  std::ostream & out)
{
  out << "{";
  // member: frame_id
  {
    out << "frame_id: ";
    rosidl_generator_traits::value_to_yaml(msg.frame_id, out);
    out << ", ";
  }

  // member: sequence_id
  {
    out << "sequence_id: ";
    rosidl_generator_traits::value_to_yaml(msg.sequence_id, out);
    out << ", ";
  }

  // member: timestamp
  {
    out << "timestamp: ";
    rosidl_generator_traits::value_to_yaml(msg.timestamp, out);
    out << ", ";
  }

  // member: desired_arm_joints_torque
  {
    if (msg.desired_arm_joints_torque.size() == 0) {
      out << "desired_arm_joints_torque: []";
    } else {
      out << "desired_arm_joints_torque: [";
      size_t pending_items = msg.desired_arm_joints_torque.size();
      for (auto item : msg.desired_arm_joints_torque) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: desired_arm_gripper_torque
  {
    out << "desired_arm_gripper_torque: ";
    rosidl_generator_traits::value_to_yaml(msg.desired_arm_gripper_torque, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ArmControlSignal & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: frame_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "frame_id: ";
    rosidl_generator_traits::value_to_yaml(msg.frame_id, out);
    out << "\n";
  }

  // member: sequence_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "sequence_id: ";
    rosidl_generator_traits::value_to_yaml(msg.sequence_id, out);
    out << "\n";
  }

  // member: timestamp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "timestamp: ";
    rosidl_generator_traits::value_to_yaml(msg.timestamp, out);
    out << "\n";
  }

  // member: desired_arm_joints_torque
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.desired_arm_joints_torque.size() == 0) {
      out << "desired_arm_joints_torque: []\n";
    } else {
      out << "desired_arm_joints_torque:\n";
      for (auto item : msg.desired_arm_joints_torque) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: desired_arm_gripper_torque
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "desired_arm_gripper_torque: ";
    rosidl_generator_traits::value_to_yaml(msg.desired_arm_gripper_torque, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ArmControlSignal & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace dls2_interface

namespace rosidl_generator_traits
{

[[deprecated("use dls2_interface::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const dls2_interface::msg::ArmControlSignal & msg,
  std::ostream & out, size_t indentation = 0)
{
  dls2_interface::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use dls2_interface::msg::to_yaml() instead")]]
inline std::string to_yaml(const dls2_interface::msg::ArmControlSignal & msg)
{
  return dls2_interface::msg::to_yaml(msg);
}

template<>
inline const char * data_type<dls2_interface::msg::ArmControlSignal>()
{
  return "dls2_interface::msg::ArmControlSignal";
}

template<>
inline const char * name<dls2_interface::msg::ArmControlSignal>()
{
  return "dls2_interface/msg/ArmControlSignal";
}

template<>
struct has_fixed_size<dls2_interface::msg::ArmControlSignal>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<dls2_interface::msg::ArmControlSignal>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<dls2_interface::msg::ArmControlSignal>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // DLS2_INTERFACE__MSG__DETAIL__ARM_CONTROL_SIGNAL__TRAITS_HPP_
