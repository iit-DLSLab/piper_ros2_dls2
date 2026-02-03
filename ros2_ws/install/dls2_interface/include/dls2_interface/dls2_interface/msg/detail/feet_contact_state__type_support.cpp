// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from dls2_interface:msg/FeetContactState.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "dls2_interface/msg/detail/feet_contact_state__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace dls2_interface
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void FeetContactState_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) dls2_interface::msg::FeetContactState(_init);
}

void FeetContactState_fini_function(void * message_memory)
{
  auto typed_message = static_cast<dls2_interface::msg::FeetContactState *>(message_memory);
  typed_message->~FeetContactState();
}

size_t size_function__FeetContactState__feet_name(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<std::string> *>(untyped_member);
  return member->size();
}

const void * get_const_function__FeetContactState__feet_name(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<std::string> *>(untyped_member);
  return &member[index];
}

void * get_function__FeetContactState__feet_name(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<std::string> *>(untyped_member);
  return &member[index];
}

void fetch_function__FeetContactState__feet_name(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const std::string *>(
    get_const_function__FeetContactState__feet_name(untyped_member, index));
  auto & value = *reinterpret_cast<std::string *>(untyped_value);
  value = item;
}

void assign_function__FeetContactState__feet_name(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<std::string *>(
    get_function__FeetContactState__feet_name(untyped_member, index));
  const auto & value = *reinterpret_cast<const std::string *>(untyped_value);
  item = value;
}

void resize_function__FeetContactState__feet_name(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<std::string> *>(untyped_member);
  member->resize(size);
}

size_t size_function__FeetContactState__linear_grf_feet(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<double> *>(untyped_member);
  return member->size();
}

const void * get_const_function__FeetContactState__linear_grf_feet(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<double> *>(untyped_member);
  return &member[index];
}

void * get_function__FeetContactState__linear_grf_feet(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<double> *>(untyped_member);
  return &member[index];
}

void fetch_function__FeetContactState__linear_grf_feet(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const double *>(
    get_const_function__FeetContactState__linear_grf_feet(untyped_member, index));
  auto & value = *reinterpret_cast<double *>(untyped_value);
  value = item;
}

void assign_function__FeetContactState__linear_grf_feet(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<double *>(
    get_function__FeetContactState__linear_grf_feet(untyped_member, index));
  const auto & value = *reinterpret_cast<const double *>(untyped_value);
  item = value;
}

void resize_function__FeetContactState__linear_grf_feet(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<double> *>(untyped_member);
  member->resize(size);
}

size_t size_function__FeetContactState__angular_grf_feet(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<double> *>(untyped_member);
  return member->size();
}

const void * get_const_function__FeetContactState__angular_grf_feet(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<double> *>(untyped_member);
  return &member[index];
}

void * get_function__FeetContactState__angular_grf_feet(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<double> *>(untyped_member);
  return &member[index];
}

void fetch_function__FeetContactState__angular_grf_feet(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const double *>(
    get_const_function__FeetContactState__angular_grf_feet(untyped_member, index));
  auto & value = *reinterpret_cast<double *>(untyped_value);
  value = item;
}

void assign_function__FeetContactState__angular_grf_feet(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<double *>(
    get_function__FeetContactState__angular_grf_feet(untyped_member, index));
  const auto & value = *reinterpret_cast<const double *>(untyped_value);
  item = value;
}

void resize_function__FeetContactState__angular_grf_feet(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<double> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember FeetContactState_message_member_array[7] = {
  {
    "frame_id",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(dls2_interface::msg::FeetContactState, frame_id),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "sequence_id",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(dls2_interface::msg::FeetContactState, sequence_id),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "timestamp",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(dls2_interface::msg::FeetContactState, timestamp),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "robot_name",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(dls2_interface::msg::FeetContactState, robot_name),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "feet_name",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(dls2_interface::msg::FeetContactState, feet_name),  // bytes offset in struct
    nullptr,  // default value
    size_function__FeetContactState__feet_name,  // size() function pointer
    get_const_function__FeetContactState__feet_name,  // get_const(index) function pointer
    get_function__FeetContactState__feet_name,  // get(index) function pointer
    fetch_function__FeetContactState__feet_name,  // fetch(index, &value) function pointer
    assign_function__FeetContactState__feet_name,  // assign(index, value) function pointer
    resize_function__FeetContactState__feet_name  // resize(index) function pointer
  },
  {
    "linear_grf_feet",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(dls2_interface::msg::FeetContactState, linear_grf_feet),  // bytes offset in struct
    nullptr,  // default value
    size_function__FeetContactState__linear_grf_feet,  // size() function pointer
    get_const_function__FeetContactState__linear_grf_feet,  // get_const(index) function pointer
    get_function__FeetContactState__linear_grf_feet,  // get(index) function pointer
    fetch_function__FeetContactState__linear_grf_feet,  // fetch(index, &value) function pointer
    assign_function__FeetContactState__linear_grf_feet,  // assign(index, value) function pointer
    resize_function__FeetContactState__linear_grf_feet  // resize(index) function pointer
  },
  {
    "angular_grf_feet",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(dls2_interface::msg::FeetContactState, angular_grf_feet),  // bytes offset in struct
    nullptr,  // default value
    size_function__FeetContactState__angular_grf_feet,  // size() function pointer
    get_const_function__FeetContactState__angular_grf_feet,  // get_const(index) function pointer
    get_function__FeetContactState__angular_grf_feet,  // get(index) function pointer
    fetch_function__FeetContactState__angular_grf_feet,  // fetch(index, &value) function pointer
    assign_function__FeetContactState__angular_grf_feet,  // assign(index, value) function pointer
    resize_function__FeetContactState__angular_grf_feet  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers FeetContactState_message_members = {
  "dls2_interface::msg",  // message namespace
  "FeetContactState",  // message name
  7,  // number of fields
  sizeof(dls2_interface::msg::FeetContactState),
  FeetContactState_message_member_array,  // message members
  FeetContactState_init_function,  // function to initialize message memory (memory has to be allocated)
  FeetContactState_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t FeetContactState_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &FeetContactState_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace dls2_interface


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<dls2_interface::msg::FeetContactState>()
{
  return &::dls2_interface::msg::rosidl_typesupport_introspection_cpp::FeetContactState_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, dls2_interface, msg, FeetContactState)() {
  return &::dls2_interface::msg::rosidl_typesupport_introspection_cpp::FeetContactState_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
