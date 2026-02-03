// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from dls2_interface:msg/FeetContactState.idl
// generated code does not contain a copyright notice

#ifndef DLS2_INTERFACE__MSG__DETAIL__FEET_CONTACT_STATE__BUILDER_HPP_
#define DLS2_INTERFACE__MSG__DETAIL__FEET_CONTACT_STATE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "dls2_interface/msg/detail/feet_contact_state__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace dls2_interface
{

namespace msg
{

namespace builder
{

class Init_FeetContactState_angular_grf_feet
{
public:
  explicit Init_FeetContactState_angular_grf_feet(::dls2_interface::msg::FeetContactState & msg)
  : msg_(msg)
  {}
  ::dls2_interface::msg::FeetContactState angular_grf_feet(::dls2_interface::msg::FeetContactState::_angular_grf_feet_type arg)
  {
    msg_.angular_grf_feet = std::move(arg);
    return std::move(msg_);
  }

private:
  ::dls2_interface::msg::FeetContactState msg_;
};

class Init_FeetContactState_linear_grf_feet
{
public:
  explicit Init_FeetContactState_linear_grf_feet(::dls2_interface::msg::FeetContactState & msg)
  : msg_(msg)
  {}
  Init_FeetContactState_angular_grf_feet linear_grf_feet(::dls2_interface::msg::FeetContactState::_linear_grf_feet_type arg)
  {
    msg_.linear_grf_feet = std::move(arg);
    return Init_FeetContactState_angular_grf_feet(msg_);
  }

private:
  ::dls2_interface::msg::FeetContactState msg_;
};

class Init_FeetContactState_feet_name
{
public:
  explicit Init_FeetContactState_feet_name(::dls2_interface::msg::FeetContactState & msg)
  : msg_(msg)
  {}
  Init_FeetContactState_linear_grf_feet feet_name(::dls2_interface::msg::FeetContactState::_feet_name_type arg)
  {
    msg_.feet_name = std::move(arg);
    return Init_FeetContactState_linear_grf_feet(msg_);
  }

private:
  ::dls2_interface::msg::FeetContactState msg_;
};

class Init_FeetContactState_robot_name
{
public:
  explicit Init_FeetContactState_robot_name(::dls2_interface::msg::FeetContactState & msg)
  : msg_(msg)
  {}
  Init_FeetContactState_feet_name robot_name(::dls2_interface::msg::FeetContactState::_robot_name_type arg)
  {
    msg_.robot_name = std::move(arg);
    return Init_FeetContactState_feet_name(msg_);
  }

private:
  ::dls2_interface::msg::FeetContactState msg_;
};

class Init_FeetContactState_timestamp
{
public:
  explicit Init_FeetContactState_timestamp(::dls2_interface::msg::FeetContactState & msg)
  : msg_(msg)
  {}
  Init_FeetContactState_robot_name timestamp(::dls2_interface::msg::FeetContactState::_timestamp_type arg)
  {
    msg_.timestamp = std::move(arg);
    return Init_FeetContactState_robot_name(msg_);
  }

private:
  ::dls2_interface::msg::FeetContactState msg_;
};

class Init_FeetContactState_sequence_id
{
public:
  explicit Init_FeetContactState_sequence_id(::dls2_interface::msg::FeetContactState & msg)
  : msg_(msg)
  {}
  Init_FeetContactState_timestamp sequence_id(::dls2_interface::msg::FeetContactState::_sequence_id_type arg)
  {
    msg_.sequence_id = std::move(arg);
    return Init_FeetContactState_timestamp(msg_);
  }

private:
  ::dls2_interface::msg::FeetContactState msg_;
};

class Init_FeetContactState_frame_id
{
public:
  Init_FeetContactState_frame_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_FeetContactState_sequence_id frame_id(::dls2_interface::msg::FeetContactState::_frame_id_type arg)
  {
    msg_.frame_id = std::move(arg);
    return Init_FeetContactState_sequence_id(msg_);
  }

private:
  ::dls2_interface::msg::FeetContactState msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::dls2_interface::msg::FeetContactState>()
{
  return dls2_interface::msg::builder::Init_FeetContactState_frame_id();
}

}  // namespace dls2_interface

#endif  // DLS2_INTERFACE__MSG__DETAIL__FEET_CONTACT_STATE__BUILDER_HPP_
