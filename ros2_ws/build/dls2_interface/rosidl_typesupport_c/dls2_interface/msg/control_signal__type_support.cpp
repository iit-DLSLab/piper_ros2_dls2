// generated from rosidl_typesupport_c/resource/idl__type_support.cpp.em
// with input from dls2_interface:msg/ControlSignal.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "dls2_interface/msg/detail/control_signal__struct.h"
#include "dls2_interface/msg/detail/control_signal__type_support.h"
#include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/message_type_support_dispatch.h"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_c/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace dls2_interface
{

namespace msg
{

namespace rosidl_typesupport_c
{

typedef struct _ControlSignal_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _ControlSignal_type_support_ids_t;

static const _ControlSignal_type_support_ids_t _ControlSignal_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _ControlSignal_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _ControlSignal_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _ControlSignal_type_support_symbol_names_t _ControlSignal_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, dls2_interface, msg, ControlSignal)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, dls2_interface, msg, ControlSignal)),
  }
};

typedef struct _ControlSignal_type_support_data_t
{
  void * data[2];
} _ControlSignal_type_support_data_t;

static _ControlSignal_type_support_data_t _ControlSignal_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _ControlSignal_message_typesupport_map = {
  2,
  "dls2_interface",
  &_ControlSignal_message_typesupport_ids.typesupport_identifier[0],
  &_ControlSignal_message_typesupport_symbol_names.symbol_name[0],
  &_ControlSignal_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t ControlSignal_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_ControlSignal_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace msg

}  // namespace dls2_interface

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, dls2_interface, msg, ControlSignal)() {
  return &::dls2_interface::msg::rosidl_typesupport_c::ControlSignal_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
