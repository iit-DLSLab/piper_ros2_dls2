// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from dls2_interface:msg/ArmTrajectoryGenerator.idl
// generated code does not contain a copyright notice

#ifndef DLS2_INTERFACE__MSG__DETAIL__ARM_TRAJECTORY_GENERATOR__TRAITS_HPP_
#define DLS2_INTERFACE__MSG__DETAIL__ARM_TRAJECTORY_GENERATOR__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "dls2_interface/msg/detail/arm_trajectory_generator__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace dls2_interface
{

namespace msg
{

inline void to_flow_style_yaml(
  const ArmTrajectoryGenerator & msg,
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

  // member: desired_arm_joints_position
  {
    if (msg.desired_arm_joints_position.size() == 0) {
      out << "desired_arm_joints_position: []";
    } else {
      out << "desired_arm_joints_position: [";
      size_t pending_items = msg.desired_arm_joints_position.size();
      for (auto item : msg.desired_arm_joints_position) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: desired_arm_joints_velocity
  {
    if (msg.desired_arm_joints_velocity.size() == 0) {
      out << "desired_arm_joints_velocity: []";
    } else {
      out << "desired_arm_joints_velocity: [";
      size_t pending_items = msg.desired_arm_joints_velocity.size();
      for (auto item : msg.desired_arm_joints_velocity) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: desired_arm_gripper_position
  {
    out << "desired_arm_gripper_position: ";
    rosidl_generator_traits::value_to_yaml(msg.desired_arm_gripper_position, out);
    out << ", ";
  }

  // member: desired_arm_gripper_velocity
  {
    out << "desired_arm_gripper_velocity: ";
    rosidl_generator_traits::value_to_yaml(msg.desired_arm_gripper_velocity, out);
    out << ", ";
  }

  // member: arm_kp
  {
    if (msg.arm_kp.size() == 0) {
      out << "arm_kp: []";
    } else {
      out << "arm_kp: [";
      size_t pending_items = msg.arm_kp.size();
      for (auto item : msg.arm_kp) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: arm_kd
  {
    if (msg.arm_kd.size() == 0) {
      out << "arm_kd: []";
    } else {
      out << "arm_kd: [";
      size_t pending_items = msg.arm_kd.size();
      for (auto item : msg.arm_kd) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ArmTrajectoryGenerator & msg,
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

  // member: desired_arm_joints_position
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.desired_arm_joints_position.size() == 0) {
      out << "desired_arm_joints_position: []\n";
    } else {
      out << "desired_arm_joints_position:\n";
      for (auto item : msg.desired_arm_joints_position) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: desired_arm_joints_velocity
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.desired_arm_joints_velocity.size() == 0) {
      out << "desired_arm_joints_velocity: []\n";
    } else {
      out << "desired_arm_joints_velocity:\n";
      for (auto item : msg.desired_arm_joints_velocity) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: desired_arm_gripper_position
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "desired_arm_gripper_position: ";
    rosidl_generator_traits::value_to_yaml(msg.desired_arm_gripper_position, out);
    out << "\n";
  }

  // member: desired_arm_gripper_velocity
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "desired_arm_gripper_velocity: ";
    rosidl_generator_traits::value_to_yaml(msg.desired_arm_gripper_velocity, out);
    out << "\n";
  }

  // member: arm_kp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.arm_kp.size() == 0) {
      out << "arm_kp: []\n";
    } else {
      out << "arm_kp:\n";
      for (auto item : msg.arm_kp) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: arm_kd
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.arm_kd.size() == 0) {
      out << "arm_kd: []\n";
    } else {
      out << "arm_kd:\n";
      for (auto item : msg.arm_kd) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ArmTrajectoryGenerator & msg, bool use_flow_style = false)
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
  const dls2_interface::msg::ArmTrajectoryGenerator & msg,
  std::ostream & out, size_t indentation = 0)
{
  dls2_interface::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use dls2_interface::msg::to_yaml() instead")]]
inline std::string to_yaml(const dls2_interface::msg::ArmTrajectoryGenerator & msg)
{
  return dls2_interface::msg::to_yaml(msg);
}

template<>
inline const char * data_type<dls2_interface::msg::ArmTrajectoryGenerator>()
{
  return "dls2_interface::msg::ArmTrajectoryGenerator";
}

template<>
inline const char * name<dls2_interface::msg::ArmTrajectoryGenerator>()
{
  return "dls2_interface/msg/ArmTrajectoryGenerator";
}

template<>
struct has_fixed_size<dls2_interface::msg::ArmTrajectoryGenerator>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<dls2_interface::msg::ArmTrajectoryGenerator>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<dls2_interface::msg::ArmTrajectoryGenerator>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // DLS2_INTERFACE__MSG__DETAIL__ARM_TRAJECTORY_GENERATOR__TRAITS_HPP_
