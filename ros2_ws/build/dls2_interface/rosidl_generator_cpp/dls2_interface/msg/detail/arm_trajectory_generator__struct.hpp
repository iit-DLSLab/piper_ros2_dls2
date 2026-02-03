// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from dls2_interface:msg/ArmTrajectoryGenerator.idl
// generated code does not contain a copyright notice

#ifndef DLS2_INTERFACE__MSG__DETAIL__ARM_TRAJECTORY_GENERATOR__STRUCT_HPP_
#define DLS2_INTERFACE__MSG__DETAIL__ARM_TRAJECTORY_GENERATOR__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__dls2_interface__msg__ArmTrajectoryGenerator __attribute__((deprecated))
#else
# define DEPRECATED__dls2_interface__msg__ArmTrajectoryGenerator __declspec(deprecated)
#endif

namespace dls2_interface
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ArmTrajectoryGenerator_
{
  using Type = ArmTrajectoryGenerator_<ContainerAllocator>;

  explicit ArmTrajectoryGenerator_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->frame_id = "";
      this->sequence_id = 0ul;
      this->timestamp = 0.0;
      std::fill<typename std::array<double, 6>::iterator, double>(this->desired_arm_joints_position.begin(), this->desired_arm_joints_position.end(), 0.0);
      std::fill<typename std::array<double, 6>::iterator, double>(this->desired_arm_joints_velocity.begin(), this->desired_arm_joints_velocity.end(), 0.0);
      this->desired_arm_gripper_position = 0.0;
      this->desired_arm_gripper_velocity = 0.0;
      std::fill<typename std::array<double, 6>::iterator, double>(this->arm_kp.begin(), this->arm_kp.end(), 0.0);
      std::fill<typename std::array<double, 6>::iterator, double>(this->arm_kd.begin(), this->arm_kd.end(), 0.0);
    }
  }

  explicit ArmTrajectoryGenerator_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : frame_id(_alloc),
    desired_arm_joints_position(_alloc),
    desired_arm_joints_velocity(_alloc),
    arm_kp(_alloc),
    arm_kd(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->frame_id = "";
      this->sequence_id = 0ul;
      this->timestamp = 0.0;
      std::fill<typename std::array<double, 6>::iterator, double>(this->desired_arm_joints_position.begin(), this->desired_arm_joints_position.end(), 0.0);
      std::fill<typename std::array<double, 6>::iterator, double>(this->desired_arm_joints_velocity.begin(), this->desired_arm_joints_velocity.end(), 0.0);
      this->desired_arm_gripper_position = 0.0;
      this->desired_arm_gripper_velocity = 0.0;
      std::fill<typename std::array<double, 6>::iterator, double>(this->arm_kp.begin(), this->arm_kp.end(), 0.0);
      std::fill<typename std::array<double, 6>::iterator, double>(this->arm_kd.begin(), this->arm_kd.end(), 0.0);
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
  using _desired_arm_joints_position_type =
    std::array<double, 6>;
  _desired_arm_joints_position_type desired_arm_joints_position;
  using _desired_arm_joints_velocity_type =
    std::array<double, 6>;
  _desired_arm_joints_velocity_type desired_arm_joints_velocity;
  using _desired_arm_gripper_position_type =
    double;
  _desired_arm_gripper_position_type desired_arm_gripper_position;
  using _desired_arm_gripper_velocity_type =
    double;
  _desired_arm_gripper_velocity_type desired_arm_gripper_velocity;
  using _arm_kp_type =
    std::array<double, 6>;
  _arm_kp_type arm_kp;
  using _arm_kd_type =
    std::array<double, 6>;
  _arm_kd_type arm_kd;

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
  Type & set__desired_arm_joints_position(
    const std::array<double, 6> & _arg)
  {
    this->desired_arm_joints_position = _arg;
    return *this;
  }
  Type & set__desired_arm_joints_velocity(
    const std::array<double, 6> & _arg)
  {
    this->desired_arm_joints_velocity = _arg;
    return *this;
  }
  Type & set__desired_arm_gripper_position(
    const double & _arg)
  {
    this->desired_arm_gripper_position = _arg;
    return *this;
  }
  Type & set__desired_arm_gripper_velocity(
    const double & _arg)
  {
    this->desired_arm_gripper_velocity = _arg;
    return *this;
  }
  Type & set__arm_kp(
    const std::array<double, 6> & _arg)
  {
    this->arm_kp = _arg;
    return *this;
  }
  Type & set__arm_kd(
    const std::array<double, 6> & _arg)
  {
    this->arm_kd = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    dls2_interface::msg::ArmTrajectoryGenerator_<ContainerAllocator> *;
  using ConstRawPtr =
    const dls2_interface::msg::ArmTrajectoryGenerator_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<dls2_interface::msg::ArmTrajectoryGenerator_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<dls2_interface::msg::ArmTrajectoryGenerator_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      dls2_interface::msg::ArmTrajectoryGenerator_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<dls2_interface::msg::ArmTrajectoryGenerator_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      dls2_interface::msg::ArmTrajectoryGenerator_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<dls2_interface::msg::ArmTrajectoryGenerator_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<dls2_interface::msg::ArmTrajectoryGenerator_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<dls2_interface::msg::ArmTrajectoryGenerator_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__dls2_interface__msg__ArmTrajectoryGenerator
    std::shared_ptr<dls2_interface::msg::ArmTrajectoryGenerator_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__dls2_interface__msg__ArmTrajectoryGenerator
    std::shared_ptr<dls2_interface::msg::ArmTrajectoryGenerator_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ArmTrajectoryGenerator_ & other) const
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
    if (this->desired_arm_joints_position != other.desired_arm_joints_position) {
      return false;
    }
    if (this->desired_arm_joints_velocity != other.desired_arm_joints_velocity) {
      return false;
    }
    if (this->desired_arm_gripper_position != other.desired_arm_gripper_position) {
      return false;
    }
    if (this->desired_arm_gripper_velocity != other.desired_arm_gripper_velocity) {
      return false;
    }
    if (this->arm_kp != other.arm_kp) {
      return false;
    }
    if (this->arm_kd != other.arm_kd) {
      return false;
    }
    return true;
  }
  bool operator!=(const ArmTrajectoryGenerator_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ArmTrajectoryGenerator_

// alias to use template instance with default allocator
using ArmTrajectoryGenerator =
  dls2_interface::msg::ArmTrajectoryGenerator_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace dls2_interface

#endif  // DLS2_INTERFACE__MSG__DETAIL__ARM_TRAJECTORY_GENERATOR__STRUCT_HPP_
