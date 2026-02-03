// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from dls2_interface:msg/Pose.idl
// generated code does not contain a copyright notice

#ifndef DLS2_INTERFACE__MSG__DETAIL__POSE__BUILDER_HPP_
#define DLS2_INTERFACE__MSG__DETAIL__POSE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "dls2_interface/msg/detail/pose__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace dls2_interface
{

namespace msg
{

namespace builder
{

class Init_Pose_orientation
{
public:
  explicit Init_Pose_orientation(::dls2_interface::msg::Pose & msg)
  : msg_(msg)
  {}
  ::dls2_interface::msg::Pose orientation(::dls2_interface::msg::Pose::_orientation_type arg)
  {
    msg_.orientation = std::move(arg);
    return std::move(msg_);
  }

private:
  ::dls2_interface::msg::Pose msg_;
};

class Init_Pose_position
{
public:
  Init_Pose_position()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Pose_orientation position(::dls2_interface::msg::Pose::_position_type arg)
  {
    msg_.position = std::move(arg);
    return Init_Pose_orientation(msg_);
  }

private:
  ::dls2_interface::msg::Pose msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::dls2_interface::msg::Pose>()
{
  return dls2_interface::msg::builder::Init_Pose_position();
}

}  // namespace dls2_interface

#endif  // DLS2_INTERFACE__MSG__DETAIL__POSE__BUILDER_HPP_
