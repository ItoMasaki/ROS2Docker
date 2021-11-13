// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from smach_msgs:msg/SmachContainerStatus.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "smach_msgs/msg/detail/smach_container_status__rosidl_typesupport_introspection_c.h"
#include "smach_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "smach_msgs/msg/detail/smach_container_status__functions.h"
#include "smach_msgs/msg/detail/smach_container_status__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `path`
// Member `initial_states`
// Member `active_states`
// Member `info`
#include "rosidl_runtime_c/string_functions.h"
// Member `local_data`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void SmachContainerStatus__rosidl_typesupport_introspection_c__SmachContainerStatus_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  smach_msgs__msg__SmachContainerStatus__init(message_memory);
}

void SmachContainerStatus__rosidl_typesupport_introspection_c__SmachContainerStatus_fini_function(void * message_memory)
{
  smach_msgs__msg__SmachContainerStatus__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember SmachContainerStatus__rosidl_typesupport_introspection_c__SmachContainerStatus_message_member_array[6] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(smach_msgs__msg__SmachContainerStatus, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "path",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(smach_msgs__msg__SmachContainerStatus, path),  // bytes offset in struct
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
    offsetof(smach_msgs__msg__SmachContainerStatus, initial_states),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "active_states",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(smach_msgs__msg__SmachContainerStatus, active_states),  // bytes offset in struct
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
    offsetof(smach_msgs__msg__SmachContainerStatus, local_data),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "info",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(smach_msgs__msg__SmachContainerStatus, info),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers SmachContainerStatus__rosidl_typesupport_introspection_c__SmachContainerStatus_message_members = {
  "smach_msgs__msg",  // message namespace
  "SmachContainerStatus",  // message name
  6,  // number of fields
  sizeof(smach_msgs__msg__SmachContainerStatus),
  SmachContainerStatus__rosidl_typesupport_introspection_c__SmachContainerStatus_message_member_array,  // message members
  SmachContainerStatus__rosidl_typesupport_introspection_c__SmachContainerStatus_init_function,  // function to initialize message memory (memory has to be allocated)
  SmachContainerStatus__rosidl_typesupport_introspection_c__SmachContainerStatus_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t SmachContainerStatus__rosidl_typesupport_introspection_c__SmachContainerStatus_message_type_support_handle = {
  0,
  &SmachContainerStatus__rosidl_typesupport_introspection_c__SmachContainerStatus_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_smach_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, smach_msgs, msg, SmachContainerStatus)() {
  SmachContainerStatus__rosidl_typesupport_introspection_c__SmachContainerStatus_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  if (!SmachContainerStatus__rosidl_typesupport_introspection_c__SmachContainerStatus_message_type_support_handle.typesupport_identifier) {
    SmachContainerStatus__rosidl_typesupport_introspection_c__SmachContainerStatus_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &SmachContainerStatus__rosidl_typesupport_introspection_c__SmachContainerStatus_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
