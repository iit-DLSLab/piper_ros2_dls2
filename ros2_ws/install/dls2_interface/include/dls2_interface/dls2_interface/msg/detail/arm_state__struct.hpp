// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from dls2_interface:msg/ArmState.idl
// generated code does not contain a copyright notice

#ifndef DLS2_INTERFACE__MSG__DETAIL__ARM_STATE__STRUCT_HPP_
#define DLS2_INTERFACE__MSG__DETAIL__ARM_STATE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__dls2_interface__msg__ArmState __attribute__((deprecated))
#else
# define DEPRECATED__dls2_interface__msg__ArmState __declspec(deprecated)
#endif

namespace dls2_interface
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ArmState_
{
  using Type = ArmState_<ContainerAllocator>;

  explicit ArmState_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->frame_id = "";
      this->sequence_id = 0ul;
      this->timestamp = 0.0;
      this->robot_name = "";
      this->gripper_position = 0.0;
      this->gripper_velocity = 0.0;
      this->gripper_effort = 0.0;
    }
  }

  explicit ArmState_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : frame_id(_alloc),
    robot_name(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->frame_id = "";
      this->sequence_id = 0ul;
      this->timestamp = 0.0;
      this->robot_name = "";
      this->gripper_position = 0.0;
      this->gripper_velocity = 0.0;
      this->gripper_effort = 0.0;
    }
  }

  // field types and members
  using _frame_id_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _frame_id_type frame_id;
  using _sequence_id_type =
    uint32_t;
  _sequence_id_type sequence_id;
  using _timestamp_type =
    double;
  _timestamp_type timestamp;
  using _robot_name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _robot_name_type robot_name;
  using _joints_name_type =
    std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>>;
  _joints_name_type joints_name;
  using _joints_position_type =
    std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>>;
  _joints_position_type joints_position;
  using _joints_velocity_type =
    std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>>;
  _joints_velocity_type joints_velocity;
  using _joints_acceleration_type =
    std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>>;
  _joints_acceleration_type joints_acceleration;
  using _joints_effort_type =
    std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>>;
  _joints_effort_type joints_effort;
  using _joints_temperature_type =
    std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>>;
  _joints_temperature_type joints_temperature;
  using _gripper_position_type =
    double;
  _gripper_position_type gripper_position;
  using _gripper_velocity_type =
    double;
  _gripper_velocity_type gripper_velocity;
  using _gripper_effort_type =
    double;
  _gripper_effort_type gripper_effort;

  // setters for named parameter idiom
  Type & set__frame_id(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->frame_id = _arg;
    return *this;
  }
  Type & set__sequence_id(
    const uint32_t & _arg)
  {
    this->sequence_id = _arg;
    return *this;
  }
  Type & set__timestamp(
    const double & _arg)
  {
    this->timestamp = _arg;
    return *this;
  }
  Type & set__robot_name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->robot_name = _arg;
    return *this;
  }
  Type & set__joints_name(
    const std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>> & _arg)
  {
    this->joints_name = _arg;
    return *this;
  }
  Type & set__joints_position(
    const std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>> & _arg)
  {
    this->joints_position = _arg;
    return *this;
  }
  Type & set__joints_velocity(
    const std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>> & _arg)
  {
    this->joints_velocity = _arg;
    return *this;
  }
  Type & set__joints_acceleration(
    const std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>> & _arg)
  {
    this->joints_acceleration = _arg;
    return *this;
  }
  Type & set__joints_effort(
    const std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>> & _arg)
  {
    this->joints_effort = _arg;
    return *this;
  }
  Type & set__joints_temperature(
    const std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>> & _arg)
  {
    this->joints_temperature = _arg;
    return *this;
  }
  Type & set__gripper_position(
    const double & _arg)
  {
    this->gripper_position = _arg;
    return *this;
  }
  Type & set__gripper_velocity(
    const double & _arg)
  {
    this->gripper_velocity = _arg;
    return *this;
  }
  Type & set__gripper_effort(
    const double & _arg)
  {
    this->gripper_effort = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    dls2_interface::msg::ArmState_<ContainerAllocator> *;
  using ConstRawPtr =
    const dls2_interface::msg::ArmState_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<dls2_interface::msg::ArmState_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<dls2_interface::msg::ArmState_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      dls2_interface::msg::ArmState_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<dls2_interface::msg::ArmState_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      dls2_interface::msg::ArmState_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<dls2_interface::msg::ArmState_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<dls2_interface::msg::ArmState_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<dls2_interface::msg::ArmState_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__dls2_interface__msg__ArmState
    std::shared_ptr<dls2_interface::msg::ArmState_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__dls2_interface__msg__ArmState
    std::shared_ptr<dls2_interface::msg::ArmState_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ArmState_ & other) const
  {
    if (this->frame_id != other.frame_id) {
      return false;
    }
    if (this->sequence_id != other.sequence_id) {
      return false;
    }
    if (this->timestamp != other.timestamp) {
      return false;
    }
    if (this->robot_name != other.robot_name) {
      return false;
    }
    if (this->joints_name != other.joints_name) {
      return false;
    }
    if (this->joints_position != other.joints_position) {
      return false;
    }
    if (this->joints_velocity != other.joints_velocity) {
      return false;
    }
    if (this->joints_acceleration != other.joints_acceleration) {
      return false;
    }
    if (this->joints_effort != other.joints_effort) {
      return false;
    }
    if (this->joints_temperature != other.joints_temperature) {
      return false;
    }
    if (this->gripper_position != other.gripper_position) {
      return false;
    }
    if (this->gripper_velocity != other.gripper_velocity) {
      return false;
    }
    if (this->gripper_effort != other.gripper_effort) {
      return false;
    }
    return true;
  }
  bool operator!=(const ArmState_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ArmState_

// alias to use template instance with default allocator
using ArmState =
  dls2_interface::msg::ArmState_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace dls2_interface

#endif  // DLS2_INTERFACE__MSG__DETAIL__ARM_STATE__STRUCT_HPP_
