// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from ur_dashboard_msgs:msg/ProgramState.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "ur_dashboard_msgs/msg/detail/program_state__rosidl_typesupport_introspection_c.h"
#include "ur_dashboard_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "ur_dashboard_msgs/msg/detail/program_state__functions.h"
#include "ur_dashboard_msgs/msg/detail/program_state__struct.h"


// Include directives for member types
// Member `state`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void ProgramState__rosidl_typesupport_introspection_c__ProgramState_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  ur_dashboard_msgs__msg__ProgramState__init(message_memory);
}

void ProgramState__rosidl_typesupport_introspection_c__ProgramState_fini_function(void * message_memory)
{
  ur_dashboard_msgs__msg__ProgramState__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember ProgramState__rosidl_typesupport_introspection_c__ProgramState_message_member_array[1] = {
  {
    "state",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ur_dashboard_msgs__msg__ProgramState, state),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers ProgramState__rosidl_typesupport_introspection_c__ProgramState_message_members = {
  "ur_dashboard_msgs__msg",  // message namespace
  "ProgramState",  // message name
  1,  // number of fields
  sizeof(ur_dashboard_msgs__msg__ProgramState),
  ProgramState__rosidl_typesupport_introspection_c__ProgramState_message_member_array,  // message members
  ProgramState__rosidl_typesupport_introspection_c__ProgramState_init_function,  // function to initialize message memory (memory has to be allocated)
  ProgramState__rosidl_typesupport_introspection_c__ProgramState_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t ProgramState__rosidl_typesupport_introspection_c__ProgramState_message_type_support_handle = {
  0,
  &ProgramState__rosidl_typesupport_introspection_c__ProgramState_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_ur_dashboard_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ur_dashboard_msgs, msg, ProgramState)() {
  if (!ProgramState__rosidl_typesupport_introspection_c__ProgramState_message_type_support_handle.typesupport_identifier) {
    ProgramState__rosidl_typesupport_introspection_c__ProgramState_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &ProgramState__rosidl_typesupport_introspection_c__ProgramState_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
