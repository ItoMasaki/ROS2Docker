// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from ur_dashboard_msgs:srv/GetRobotMode.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "ur_dashboard_msgs/srv/detail/get_robot_mode__rosidl_typesupport_introspection_c.h"
#include "ur_dashboard_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "ur_dashboard_msgs/srv/detail/get_robot_mode__functions.h"
#include "ur_dashboard_msgs/srv/detail/get_robot_mode__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void GetRobotMode_Request__rosidl_typesupport_introspection_c__GetRobotMode_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  ur_dashboard_msgs__srv__GetRobotMode_Request__init(message_memory);
}

void GetRobotMode_Request__rosidl_typesupport_introspection_c__GetRobotMode_Request_fini_function(void * message_memory)
{
  ur_dashboard_msgs__srv__GetRobotMode_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember GetRobotMode_Request__rosidl_typesupport_introspection_c__GetRobotMode_Request_message_member_array[1] = {
  {
    "structure_needs_at_least_one_member",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ur_dashboard_msgs__srv__GetRobotMode_Request, structure_needs_at_least_one_member),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers GetRobotMode_Request__rosidl_typesupport_introspection_c__GetRobotMode_Request_message_members = {
  "ur_dashboard_msgs__srv",  // message namespace
  "GetRobotMode_Request",  // message name
  1,  // number of fields
  sizeof(ur_dashboard_msgs__srv__GetRobotMode_Request),
  GetRobotMode_Request__rosidl_typesupport_introspection_c__GetRobotMode_Request_message_member_array,  // message members
  GetRobotMode_Request__rosidl_typesupport_introspection_c__GetRobotMode_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  GetRobotMode_Request__rosidl_typesupport_introspection_c__GetRobotMode_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t GetRobotMode_Request__rosidl_typesupport_introspection_c__GetRobotMode_Request_message_type_support_handle = {
  0,
  &GetRobotMode_Request__rosidl_typesupport_introspection_c__GetRobotMode_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_ur_dashboard_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ur_dashboard_msgs, srv, GetRobotMode_Request)() {
  if (!GetRobotMode_Request__rosidl_typesupport_introspection_c__GetRobotMode_Request_message_type_support_handle.typesupport_identifier) {
    GetRobotMode_Request__rosidl_typesupport_introspection_c__GetRobotMode_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &GetRobotMode_Request__rosidl_typesupport_introspection_c__GetRobotMode_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "ur_dashboard_msgs/srv/detail/get_robot_mode__rosidl_typesupport_introspection_c.h"
// already included above
// #include "ur_dashboard_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "ur_dashboard_msgs/srv/detail/get_robot_mode__functions.h"
// already included above
// #include "ur_dashboard_msgs/srv/detail/get_robot_mode__struct.h"


// Include directives for member types
// Member `robot_mode`
#include "ur_dashboard_msgs/msg/robot_mode.h"
// Member `robot_mode`
#include "ur_dashboard_msgs/msg/detail/robot_mode__rosidl_typesupport_introspection_c.h"
// Member `answer`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void GetRobotMode_Response__rosidl_typesupport_introspection_c__GetRobotMode_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  ur_dashboard_msgs__srv__GetRobotMode_Response__init(message_memory);
}

void GetRobotMode_Response__rosidl_typesupport_introspection_c__GetRobotMode_Response_fini_function(void * message_memory)
{
  ur_dashboard_msgs__srv__GetRobotMode_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember GetRobotMode_Response__rosidl_typesupport_introspection_c__GetRobotMode_Response_message_member_array[3] = {
  {
    "robot_mode",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ur_dashboard_msgs__srv__GetRobotMode_Response, robot_mode),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "answer",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ur_dashboard_msgs__srv__GetRobotMode_Response, answer),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "success",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ur_dashboard_msgs__srv__GetRobotMode_Response, success),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers GetRobotMode_Response__rosidl_typesupport_introspection_c__GetRobotMode_Response_message_members = {
  "ur_dashboard_msgs__srv",  // message namespace
  "GetRobotMode_Response",  // message name
  3,  // number of fields
  sizeof(ur_dashboard_msgs__srv__GetRobotMode_Response),
  GetRobotMode_Response__rosidl_typesupport_introspection_c__GetRobotMode_Response_message_member_array,  // message members
  GetRobotMode_Response__rosidl_typesupport_introspection_c__GetRobotMode_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  GetRobotMode_Response__rosidl_typesupport_introspection_c__GetRobotMode_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t GetRobotMode_Response__rosidl_typesupport_introspection_c__GetRobotMode_Response_message_type_support_handle = {
  0,
  &GetRobotMode_Response__rosidl_typesupport_introspection_c__GetRobotMode_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_ur_dashboard_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ur_dashboard_msgs, srv, GetRobotMode_Response)() {
  GetRobotMode_Response__rosidl_typesupport_introspection_c__GetRobotMode_Response_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ur_dashboard_msgs, msg, RobotMode)();
  if (!GetRobotMode_Response__rosidl_typesupport_introspection_c__GetRobotMode_Response_message_type_support_handle.typesupport_identifier) {
    GetRobotMode_Response__rosidl_typesupport_introspection_c__GetRobotMode_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &GetRobotMode_Response__rosidl_typesupport_introspection_c__GetRobotMode_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "ur_dashboard_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "ur_dashboard_msgs/srv/detail/get_robot_mode__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers ur_dashboard_msgs__srv__detail__get_robot_mode__rosidl_typesupport_introspection_c__GetRobotMode_service_members = {
  "ur_dashboard_msgs__srv",  // service namespace
  "GetRobotMode",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // ur_dashboard_msgs__srv__detail__get_robot_mode__rosidl_typesupport_introspection_c__GetRobotMode_Request_message_type_support_handle,
  NULL  // response message
  // ur_dashboard_msgs__srv__detail__get_robot_mode__rosidl_typesupport_introspection_c__GetRobotMode_Response_message_type_support_handle
};

static rosidl_service_type_support_t ur_dashboard_msgs__srv__detail__get_robot_mode__rosidl_typesupport_introspection_c__GetRobotMode_service_type_support_handle = {
  0,
  &ur_dashboard_msgs__srv__detail__get_robot_mode__rosidl_typesupport_introspection_c__GetRobotMode_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ur_dashboard_msgs, srv, GetRobotMode_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ur_dashboard_msgs, srv, GetRobotMode_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_ur_dashboard_msgs
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ur_dashboard_msgs, srv, GetRobotMode)() {
  if (!ur_dashboard_msgs__srv__detail__get_robot_mode__rosidl_typesupport_introspection_c__GetRobotMode_service_type_support_handle.typesupport_identifier) {
    ur_dashboard_msgs__srv__detail__get_robot_mode__rosidl_typesupport_introspection_c__GetRobotMode_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)ur_dashboard_msgs__srv__detail__get_robot_mode__rosidl_typesupport_introspection_c__GetRobotMode_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ur_dashboard_msgs, srv, GetRobotMode_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ur_dashboard_msgs, srv, GetRobotMode_Response)()->data;
  }

  return &ur_dashboard_msgs__srv__detail__get_robot_mode__rosidl_typesupport_introspection_c__GetRobotMode_service_type_support_handle;
}
