// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from dls2_interface:msg/FeetContactState.idl
// generated code does not contain a copyright notice
#include "dls2_interface/msg/detail/feet_contact_state__rosidl_typesupport_fastrtps_cpp.hpp"
#include "dls2_interface/msg/detail/feet_contact_state__struct.hpp"

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
  const dls2_interface::msg::FeetContactState & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: frame_id
  cdr << ros_message.frame_id;
  // Member: sequence_id
  cdr << ros_message.sequence_id;
  // Member: timestamp
  cdr << ros_message.timestamp;
  // Member: robot_name
  cdr << ros_message.robot_name;
  // Member: feet_name
  {
    cdr << ros_message.feet_name;
  }
  // Member: linear_grf_feet
  {
    cdr << ros_message.linear_grf_feet;
  }
  // Member: angular_grf_feet
  {
    cdr << ros_message.angular_grf_feet;
  }
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_dls2_interface
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  dls2_interface::msg::FeetContactState & ros_message)
{
  // Member: frame_id
  cdr >> ros_message.frame_id;

  // Member: sequence_id
  cdr >> ros_message.sequence_id;

  // Member: timestamp
  cdr >> ros_message.timestamp;

  // Member: robot_name
  cdr >> ros_message.robot_name;

  // Member: feet_name
  {
    cdr >> ros_message.feet_name;
  }

  // Member: linear_grf_feet
  {
    cdr >> ros_message.linear_grf_feet;
  }

  // Member: angular_grf_feet
  {
    cdr >> ros_message.angular_grf_feet;
  }

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_dls2_interface
get_serialized_size(
  const dls2_interface::msg::FeetContactState & ros_message,
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
  // Member: robot_name
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.robot_name.size() + 1);
  // Member: feet_name
  {
    size_t array_size = ros_message.feet_name.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        (ros_message.feet_name[index].size() + 1);
    }
  }
  // Member: linear_grf_feet
  {
    size_t array_size = ros_message.linear_grf_feet.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    size_t item_size = sizeof(ros_message.linear_grf_feet[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: angular_grf_feet
  {
    size_t array_size = ros_message.angular_grf_feet.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    size_t item_size = sizeof(ros_message.angular_grf_feet[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_dls2_interface
max_serialized_size_FeetContactState(
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

  // Member: robot_name
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

  // Member: feet_name
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Member: linear_grf_feet
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: angular_grf_feet
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = dls2_interface::msg::FeetContactState;
    is_plain =
      (
      offsetof(DataType, angular_grf_feet) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _FeetContactState__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const dls2_interface::msg::FeetContactState *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _FeetContactState__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<dls2_interface::msg::FeetContactState *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _FeetContactState__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const dls2_interface::msg::FeetContactState *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _FeetContactState__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_FeetContactState(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _FeetContactState__callbacks = {
  "dls2_interface::msg",
  "FeetContactState",
  _FeetContactState__cdr_serialize,
  _FeetContactState__cdr_deserialize,
  _FeetContactState__get_serialized_size,
  _FeetContactState__max_serialized_size
};

static rosidl_message_type_support_t _FeetContactState__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_FeetContactState__callbacks,
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
get_message_type_support_handle<dls2_interface::msg::FeetContactState>()
{
  return &dls2_interface::msg::typesupport_fastrtps_cpp::_FeetContactState__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, dls2_interface, msg, FeetContactState)() {
  return &dls2_interface::msg::typesupport_fastrtps_cpp::_FeetContactState__handle;
}

#ifdef __cplusplus
}
#endif
