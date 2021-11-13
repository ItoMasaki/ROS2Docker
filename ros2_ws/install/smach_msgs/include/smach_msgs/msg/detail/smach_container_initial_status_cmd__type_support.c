// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from smach_msgs:msg/SmachContainerInitialStatusCmd.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "smach_msgs/msg/detail/smach_container_initial_status_cmd__rosidl_typesupport_introspection_c.h"
#include "smach_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "smach_msgs/msg/detail/smach_container_initial_status_cmd__functions.h"
#include "smach_msgs/msg/detail/smach_container_initial_status_cmd__struct.h"


// Include directives for member types
// Member `path`
// Member `initial_states`
#include "rosidl_runtime_c/string_functions.h"
// Member `local_data`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void SmachContainerInitialStatusCmd__rosidl_typesupport_introspection_c__SmachContainerInitialStatusCmd_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  smach_msgs__msg__SmachContainerInitialStatusCmd__init(message_memory);
}

void SmachContainerInitialStatusCmd__rosidl_typesupport_introspection_c__SmachContainerInitialStatusCmd_fini_function(void * message_memory)
{
  smach_msgs__msg__SmachContainerInitialStatusCmd__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember SmachContainerInitialStatusCmd__rosidl_typesupport_introspection_c__SmachContainerInitialStatusCmd_message_member_array[3] = {
  {
    "path",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(smach_msgs__msg__SmachContainerInitialStatusCmd, path),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "initial_states",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(smach_msgs__msg__SmachContainerInitialStatusCmd, initial_states),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "local_data",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(smach_msgs__msg__SmachContainerInitialStatusCmd, local_data),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers SmachContainerInitialStatusCmd__rosidl_typesupport_introspection_c__SmachContainerInitialStatusCmd_message_members = {
  "smach_msgs__msg",  // message namespace
  "SmachContainerInitialStatusCmd",  // message name
  3,  // number of fields
  sizeof(smach_msgs__msg__SmachContainerInitialStatusCmd),
  SmachContainerInitialStatusCmd__rosidl_typesupport_introspection_c__SmachContainerInitialStatusCmd_message_member_array,  // message members
  SmachContainerInitialStatusCmd__rosidl_typesupport_introspection_c__SmachContainerInitialStatusCmd_init_function,  // function to initialize message memory (memory has to be allocated)
  SmachContainerInitialStatusCmd__rosidl_typesupport_introspection_c__SmachContainerInitialStatusCmd_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t SmachContainerInitialStatusCmd__rosidl_typesupport_introspection_c__SmachContainerInitialStatusCmd_message_type_support_handle = {
  0,
  &SmachContainerInitialStatusCmd__rosidl_typesupport_introspection_c__SmachContainerInitialStatusCmd_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_smach_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, smach_msgs, msg, SmachContainerInitialStatusCmd)() {
  if (!SmachContainerInitialStatusCmd__rosidl_typesupport_introspection_c__SmachContainerInitialStatusCmd_message_type_support_handle.typesupport_identifier) {
    SmachContainerInitialStatusCmd__rosidl_typesupport_introspection_c__SmachContainerInitialStatusCmd_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &SmachContainerInitialStatusCmd__rosidl_typesupport_introspection_c__SmachContainerInitialStatusCmd_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
