// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from dls2_interface:msg/ControlSignal.idl
// generated code does not contain a copyright notice

#ifndef DLS2_INTERFACE__MSG__DETAIL__CONTROL_SIGNAL__BUILDER_HPP_
#define DLS2_INTERFACE__MSG__DETAIL__CONTROL_SIGNAL__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "dls2_interface/msg/detail/control_signal__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace dls2_interface
{

namespace msg
{

namespace builder
{

class Init_ControlSignal_signal_reconstruction_method
{
public:
  explicit Init_ControlSignal_signal_reconstruction_method(::dls2_interface::msg::ControlSignal & msg)
  : msg_(msg)
  {}
  ::dls2_interface::msg::ControlSignal signal_reconstruction_method(::dls2_interface::msg::ControlSignal::_signal_reconstruction_method_type arg)
  {
    msg_.signal_reconstruction_method = std::move(arg);
    return std::move(msg_);
  }

private:
  ::dls2_interface::msg::ControlSignal msg_;
};

class Init_ControlSignal_torques
{
public:
  explicit Init_ControlSignal_torques(::dls2_interface::msg::ControlSignal & msg)
  : msg_(msg)
  {}
  Init_ControlSignal_signal_reconstruction_method torques(::dls2_interface::msg::ControlSignal::_torques_type arg)
  {
    msg_.torques = std::move(arg);
    return Init_ControlSignal_signal_reconstruction_method(msg_);
  }

private:
  ::dls2_interface::msg::ControlSignal msg_;
};

class Init_ControlSignal_timestamp
{
public:
  explicit Init_ControlSignal_timestamp(::dls2_interface::msg::ControlSignal & msg)
  : msg_(msg)
  {}
  Init_ControlSignal_torques timestamp(::dls2_interface::msg::ControlSignal::_timestamp_type arg)
  {
    msg_.timestamp = std::move(arg);
    return Init_ControlSignal_torques(msg_);
  }

private:
  ::dls2_interface::msg::ControlSignal msg_;
};

class Init_ControlSignal_sequence_id
{
public:
  explicit Init_ControlSignal_sequence_id(::dls2_interface::msg::ControlSignal & msg)
  : msg_(msg)
  {}
  Init_ControlSignal_timestamp sequence_id(::dls2_interface::msg::ControlSignal::_sequence_id_type arg)
  {
    msg_.sequence_id = std::move(arg);
    return Init_ControlSignal_timestamp(msg_);
  }

private:
  ::dls2_interface::msg::ControlSignal msg_;
};

class Init_ControlSignal_frame_id
{
public:
  Init_ControlSignal_frame_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ControlSignal_sequence_id frame_id(::dls2_interface::msg::ControlSignal::_frame_id_type arg)
  {
    msg_.frame_id = std::move(arg);
    return Init_ControlSignal_sequence_id(msg_);
  }

private:
  ::dls2_interface::msg::ControlSignal msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::dls2_interface::msg::ControlSignal>()
{
  return dls2_interface::msg::builder::Init_ControlSignal_frame_id();
}

}  // namespace dls2_interface

#endif  // DLS2_INTERFACE__MSG__DETAIL__CONTROL_SIGNAL__BUILDER_HPP_
