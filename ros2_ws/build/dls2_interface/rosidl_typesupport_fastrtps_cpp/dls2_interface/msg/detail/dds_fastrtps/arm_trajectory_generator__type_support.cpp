// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from dls2_interface:msg/ArmTrajectoryGenerator.idl
// generated code does not contain a copyright notice
#include "dls2_interface/msg/detail/arm_trajectory_generator__rosidl_typesupport_fastrtps_cpp.hpp"
#include "dls2_interface/msg/detail/arm_trajectory_generator__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

namespace dls2_interface
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_dls2_interface
cdr_serialize(
  const dls2_interface::msg::ArmTrajectoryGenerator & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: frame_id
  cdr << ros_message.frame_id;
  // Member: sequence_id
  cdr << ros_message.sequence_id;
  // Member: timestamp
  cdr << ros_message.timestamp;
  // Member: desired_arm_joints_position
  {
    cdr << ros_message.desired_arm_joints_position;
  }
  // Member: desired_arm_joints_velocity
  {
    cdr << ros_message.desired_arm_joints_velocity;
  }
  // Member: desired_arm_gripper_position
  cdr << ros_message.desired_arm_gripper_position;
  // Member: desired_arm_gripper_velocity
  cdr << ros_message.desired_arm_gripper_velocity;
  // Member: arm_kp
  {
    cdr << ros_message.arm_kp;
  }
  // Member: arm_kd
  {
    cdr << ros_message.arm_kd;
  }
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_dls2_interface
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  dls2_interface::msg::ArmTrajectoryGenerator & ros_message)
{
  // Member: frame_id
  cdr >> ros_message.frame_id;

  // Member: sequence_id
  cdr >> ros_message.sequence_id;

  // Member: timestamp
  cdr >> ros_message.timestamp;

  // Member: desired_arm_joints_position
  {
    cdr >> ros_message.desired_arm_joints_position;
  }

  // Member: desired_arm_joints_velocity
  {
    cdr >> ros_message.desired_arm_joints_velocity;
  }

  // Member: desired_arm_gripper_position
  cdr >> ros_message.desired_arm_gripper_position;

  // Member: desired_arm_gripper_velocity
  cdr >> ros_message.desired_arm_gripper_velocity;

  // Member: arm_kp
  {
    cdr >> ros_message.arm_kp;
  }

  // Member: arm_kd
  {
    cdr >> ros_message.arm_kd;
  }

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_dls2_interface
get_serialized_size(
  const dls2_interface::msg::ArmTrajectoryGenerator & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: frame_id
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.frame_id.size() + 1);
  // Member: sequence_id
  {
    size_t item_size = sizeof(ros_message.sequence_id);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: timestamp
  {
    size_t item_size = sizeof(ros_message.timestamp);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: desired_arm_joints_position
  {
    size_t array_size = 6;
    size_t item_size = sizeof(ros_message.desired_arm_joints_position[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: desired_arm_joints_velocity
  {
    size_t array_size = 6;
    size_t item_size = sizeof(ros_message.desired_arm_joints_velocity[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: desired_arm_gripper_position
  {
    size_t item_size = sizeof(ros_message.desired_arm_gripper_position);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: desired_arm_gripper_velocity
  {
    size_t item_size = sizeof(ros_message.desired_arm_gripper_velocity);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: arm_kp
  {
    size_t array_size = 6;
    size_t item_size = sizeof(ros_message.arm_kp[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: arm_kd
  {
    size_t array_size = 6;
    size_t item_size = sizeof(ros_message.arm_kd[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_dls2_interface
max_serialized_size_ArmTrajectoryGenerator(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;


  // Member: frame_id
  {
    size_t array_size = 1;

    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Member: sequence_id
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: timestamp
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: desired_arm_joints_position
  {
    size_t array_size = 6;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: desired_arm_joints_velocity
  {
    size_t array_size = 6;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: desired_arm_gripper_position
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: desired_arm_gripper_velocity
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: arm_kp
  {
    size_t array_size = 6;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: arm_kd
  {
    size_t array_size = 6;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = dls2_interface::msg::ArmTrajectoryGenerator;
    is_plain =
      (
      offsetof(DataType, arm_kd) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _ArmTrajectoryGenerator__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const dls2_interface::msg::ArmTrajectoryGenerator *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _ArmTrajectoryGenerator__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<dls2_interface::msg::ArmTrajectoryGenerator *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _ArmTrajectoryGenerator__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const dls2_interface::msg::ArmTrajectoryGenerator *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _ArmTrajectoryGenerator__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_ArmTrajectoryGenerator(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _ArmTrajectoryGenerator__callbacks = {
  "dls2_interface::msg",
  "ArmTrajectoryGenerator",
  _ArmTrajectoryGenerator__cdr_serialize,
  _ArmTrajectoryGenerator__cdr_deserialize,
  _ArmTrajectoryGenerator__get_serialized_size,
  _ArmTrajectoryGenerator__max_serialized_size
};

static rosidl_message_type_support_t _ArmTrajectoryGenerator__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_ArmTrajectoryGenerator__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace dls2_interface

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_dls2_interface
const rosidl_message_type_support_t *
get_message_type_support_handle<dls2_interface::msg::ArmTrajectoryGenerator>()
{
  return &dls2_interface::msg::typesupport_fastrtps_cpp::_ArmTrajectoryGenerator__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, dls2_interface, msg, ArmTrajectoryGenerator)() {
  return &dls2_interface::msg::typesupport_fastrtps_cpp::_ArmTrajectoryGenerator__handle;
}

#ifdef __cplusplus
}
#endif
