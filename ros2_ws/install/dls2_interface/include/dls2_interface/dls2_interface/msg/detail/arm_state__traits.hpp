// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from dls2_interface:msg/ArmState.idl
// generated code does not contain a copyright notice

#ifndef DLS2_INTERFACE__MSG__DETAIL__ARM_STATE__TRAITS_HPP_
#define DLS2_INTERFACE__MSG__DETAIL__ARM_STATE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "dls2_interface/msg/detail/arm_state__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace dls2_interface
{

namespace msg
{

inline void to_flow_style_yaml(
  const ArmState & msg,
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

  // member: robot_name
  {
    out << "robot_name: ";
    rosidl_generator_traits::value_to_yaml(msg.robot_name, out);
    out << ", ";
  }

  // member: joints_name
  {
    if (msg.joints_name.size() == 0) {
      out << "joints_name: []";
    } else {
      out << "joints_name: [";
      size_t pending_items = msg.joints_name.size();
      for (auto item : msg.joints_name) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: joints_position
  {
    if (msg.joints_position.size() == 0) {
      out << "joints_position: []";
    } else {
      out << "joints_position: [";
      size_t pending_items = msg.joints_position.size();
      for (auto item : msg.joints_position) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: joints_velocity
  {
    if (msg.joints_velocity.size() == 0) {
      out << "joints_velocity: []";
    } else {
      out << "joints_velocity: [";
      size_t pending_items = msg.joints_velocity.size();
      for (auto item : msg.joints_velocity) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: joints_acceleration
  {
    if (msg.joints_acceleration.size() == 0) {
      out << "joints_acceleration: []";
    } else {
      out << "joints_acceleration: [";
      size_t pending_items = msg.joints_acceleration.size();
      for (auto item : msg.joints_acceleration) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: joints_effort
  {
    if (msg.joints_effort.size() == 0) {
      out << "joints_effort: []";
    } else {
      out << "joints_effort: [";
      size_t pending_items = msg.joints_effort.size();
      for (auto item : msg.joints_effort) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: joints_temperature
  {
    if (msg.joints_temperature.size() == 0) {
      out << "joints_temperature: []";
    } else {
      out << "joints_temperature: [";
      size_t pending_items = msg.joints_temperature.size();
      for (auto item : msg.joints_temperature) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: gripper_position
  {
    out << "gripper_position: ";
    rosidl_generator_traits::value_to_yaml(msg.gripper_position, out);
    out << ", ";
  }

  // member: gripper_velocity
  {
    out << "gripper_velocity: ";
    rosidl_generator_traits::value_to_yaml(msg.gripper_velocity, out);
    out << ", ";
  }

  // member: gripper_effort
  {
    out << "gripper_effort: ";
    rosidl_generator_traits::value_to_yaml(msg.gripper_effort, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ArmState & msg,
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

  // member: robot_name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "robot_name: ";
    rosidl_generator_traits::value_to_yaml(msg.robot_name, out);
    out << "\n";
  }

  // member: joints_name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.joints_name.size() == 0) {
      out << "joints_name: []\n";
    } else {
      out << "joints_name:\n";
      for (auto item : msg.joints_name) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: joints_position
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.joints_position.size() == 0) {
      out << "joints_position: []\n";
    } else {
      out << "joints_position:\n";
      for (auto item : msg.joints_position) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: joints_velocity
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.joints_velocity.size() == 0) {
      out << "joints_velocity: []\n";
    } else {
      out << "joints_velocity:\n";
      for (auto item : msg.joints_velocity) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: joints_acceleration
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.joints_acceleration.size() == 0) {
      out << "joints_acceleration: []\n";
    } else {
      out << "joints_acceleration:\n";
      for (auto item : msg.joints_acceleration) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: joints_effort
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.joints_effort.size() == 0) {
      out << "joints_effort: []\n";
    } else {
      out << "joints_effort:\n";
      for (auto item : msg.joints_effort) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: joints_temperature
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.joints_temperature.size() == 0) {
      out << "joints_temperature: []\n";
    } else {
      out << "joints_temperature:\n";
      for (auto item : msg.joints_temperature) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: gripper_position
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "gripper_position: ";
    rosidl_generator_traits::value_to_yaml(msg.gripper_position, out);
    out << "\n";
  }

  // member: gripper_velocity
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "gripper_velocity: ";
    rosidl_generator_traits::value_to_yaml(msg.gripper_velocity, out);
    out << "\n";
  }

  // member: gripper_effort
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "gripper_effort: ";
    rosidl_generator_traits::value_to_yaml(msg.gripper_effort, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ArmState & msg, bool use_flow_style = false)
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
  const dls2_interface::msg::ArmState & msg,
  std::ostream & out, size_t indentation = 0)
{
  dls2_interface::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use dls2_interface::msg::to_yaml() instead")]]
inline std::string to_yaml(const dls2_interface::msg::ArmState & msg)
{
  return dls2_interface::msg::to_yaml(msg);
}

template<>
inline const char * data_type<dls2_interface::msg::ArmState>()
{
  return "dls2_interface::msg::ArmState";
}

template<>
inline const char * name<dls2_interface::msg::ArmState>()
{
  return "dls2_interface/msg/ArmState";
}

template<>
struct has_fixed_size<dls2_interface::msg::ArmState>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<dls2_interface::msg::ArmState>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<dls2_interface::msg::ArmState>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // DLS2_INTERFACE__MSG__DETAIL__ARM_STATE__TRAITS_HPP_
