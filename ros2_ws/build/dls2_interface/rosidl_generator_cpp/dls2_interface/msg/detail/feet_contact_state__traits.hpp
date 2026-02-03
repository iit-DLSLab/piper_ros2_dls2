// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from dls2_interface:msg/FeetContactState.idl
// generated code does not contain a copyright notice

#ifndef DLS2_INTERFACE__MSG__DETAIL__FEET_CONTACT_STATE__TRAITS_HPP_
#define DLS2_INTERFACE__MSG__DETAIL__FEET_CONTACT_STATE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "dls2_interface/msg/detail/feet_contact_state__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace dls2_interface
{

namespace msg
{

inline void to_flow_style_yaml(
  const FeetContactState & msg,
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

  // member: feet_name
  {
    if (msg.feet_name.size() == 0) {
      out << "feet_name: []";
    } else {
      out << "feet_name: [";
      size_t pending_items = msg.feet_name.size();
      for (auto item : msg.feet_name) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: linear_grf_feet
  {
    if (msg.linear_grf_feet.size() == 0) {
      out << "linear_grf_feet: []";
    } else {
      out << "linear_grf_feet: [";
      size_t pending_items = msg.linear_grf_feet.size();
      for (auto item : msg.linear_grf_feet) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: angular_grf_feet
  {
    if (msg.angular_grf_feet.size() == 0) {
      out << "angular_grf_feet: []";
    } else {
      out << "angular_grf_feet: [";
      size_t pending_items = msg.angular_grf_feet.size();
      for (auto item : msg.angular_grf_feet) {
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
  const FeetContactState & msg,
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

  // member: feet_name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.feet_name.size() == 0) {
      out << "feet_name: []\n";
    } else {
      out << "feet_name:\n";
      for (auto item : msg.feet_name) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: linear_grf_feet
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.linear_grf_feet.size() == 0) {
      out << "linear_grf_feet: []\n";
    } else {
      out << "linear_grf_feet:\n";
      for (auto item : msg.linear_grf_feet) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: angular_grf_feet
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.angular_grf_feet.size() == 0) {
      out << "angular_grf_feet: []\n";
    } else {
      out << "angular_grf_feet:\n";
      for (auto item : msg.angular_grf_feet) {
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

inline std::string to_yaml(const FeetContactState & msg, bool use_flow_style = false)
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
  const dls2_interface::msg::FeetContactState & msg,
  std::ostream & out, size_t indentation = 0)
{
  dls2_interface::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use dls2_interface::msg::to_yaml() instead")]]
inline std::string to_yaml(const dls2_interface::msg::FeetContactState & msg)
{
  return dls2_interface::msg::to_yaml(msg);
}

template<>
inline const char * data_type<dls2_interface::msg::FeetContactState>()
{
  return "dls2_interface::msg::FeetContactState";
}

template<>
inline const char * name<dls2_interface::msg::FeetContactState>()
{
  return "dls2_interface/msg/FeetContactState";
}

template<>
struct has_fixed_size<dls2_interface::msg::FeetContactState>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<dls2_interface::msg::FeetContactState>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<dls2_interface::msg::FeetContactState>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // DLS2_INTERFACE__MSG__DETAIL__FEET_CONTACT_STATE__TRAITS_HPP_
