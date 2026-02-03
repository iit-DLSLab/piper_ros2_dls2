// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from dls2_interface:msg/Screw.idl
// generated code does not contain a copyright notice

#ifndef DLS2_INTERFACE__MSG__DETAIL__SCREW__TRAITS_HPP_
#define DLS2_INTERFACE__MSG__DETAIL__SCREW__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "dls2_interface/msg/detail/screw__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace dls2_interface
{

namespace msg
{

inline void to_flow_style_yaml(
  const Screw & msg,
  std::ostream & out)
{
  out << "{";
  // member: linear
  {
    if (msg.linear.size() == 0) {
      out << "linear: []";
    } else {
      out << "linear: [";
      size_t pending_items = msg.linear.size();
      for (auto item : msg.linear) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: angular
  {
    if (msg.angular.size() == 0) {
      out << "angular: []";
    } else {
      out << "angular: [";
      size_t pending_items = msg.angular.size();
      for (auto item : msg.angular) {
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
  const Screw & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: linear
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.linear.size() == 0) {
      out << "linear: []\n";
    } else {
      out << "linear:\n";
      for (auto item : msg.linear) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: angular
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.angular.size() == 0) {
      out << "angular: []\n";
    } else {
      out << "angular:\n";
      for (auto item : msg.angular) {
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

inline std::string to_yaml(const Screw & msg, bool use_flow_style = false)
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
  const dls2_interface::msg::Screw & msg,
  std::ostream & out, size_t indentation = 0)
{
  dls2_interface::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use dls2_interface::msg::to_yaml() instead")]]
inline std::string to_yaml(const dls2_interface::msg::Screw & msg)
{
  return dls2_interface::msg::to_yaml(msg);
}

template<>
inline const char * data_type<dls2_interface::msg::Screw>()
{
  return "dls2_interface::msg::Screw";
}

template<>
inline const char * name<dls2_interface::msg::Screw>()
{
  return "dls2_interface/msg/Screw";
}

template<>
struct has_fixed_size<dls2_interface::msg::Screw>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<dls2_interface::msg::Screw>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<dls2_interface::msg::Screw>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // DLS2_INTERFACE__MSG__DETAIL__SCREW__TRAITS_HPP_
