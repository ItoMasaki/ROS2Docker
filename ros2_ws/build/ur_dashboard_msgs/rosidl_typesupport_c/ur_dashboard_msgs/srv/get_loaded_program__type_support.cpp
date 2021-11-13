// generated from rosidl_typesupport_c/resource/idl__type_support.cpp.em
// with input from ur_dashboard_msgs:srv/GetLoadedProgram.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "ur_dashboard_msgs/msg/rosidl_typesupport_c__visibility_control.h"
#include "ur_dashboard_msgs/srv/detail/get_loaded_program__struct.h"
#include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/message_type_support_dispatch.h"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_c/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace ur_dashboard_msgs
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _GetLoadedProgram_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _GetLoadedProgram_Request_type_support_ids_t;

static const _GetLoadedProgram_Request_type_support_ids_t _GetLoadedProgram_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _GetLoadedProgram_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _GetLoadedProgram_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _GetLoadedProgram_Request_type_support_symbol_names_t _GetLoadedProgram_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, ur_dashboard_msgs, srv, GetLoadedProgram_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ur_dashboard_msgs, srv, GetLoadedProgram_Request)),
  }
};

typedef struct _GetLoadedProgram_Request_type_support_data_t
{
  void * data[2];
} _GetLoadedProgram_Request_type_support_data_t;

static _GetLoadedProgram_Request_type_support_data_t _GetLoadedProgram_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _GetLoadedProgram_Request_message_typesupport_map = {
  2,
  "ur_dashboard_msgs",
  &_GetLoadedProgram_Request_message_typesupport_ids.typesupport_identifier[0],
  &_GetLoadedProgram_Request_message_typesupport_symbol_names.symbol_name[0],
  &_GetLoadedProgram_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t GetLoadedProgram_Request_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_GetLoadedProgram_Request_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace ur_dashboard_msgs

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_C_EXPORT_ur_dashboard_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, ur_dashboard_msgs, srv, GetLoadedProgram_Request)() {
  return &::ur_dashboard_msgs::srv::rosidl_typesupport_c::GetLoadedProgram_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "ur_dashboard_msgs/msg/rosidl_typesupport_c__visibility_control.h"
// already included above
// #include "ur_dashboard_msgs/srv/detail/get_loaded_program__struct.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace ur_dashboard_msgs
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _GetLoadedProgram_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _GetLoadedProgram_Response_type_support_ids_t;

static const _GetLoadedProgram_Response_type_support_ids_t _GetLoadedProgram_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _GetLoadedProgram_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _GetLoadedProgram_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _GetLoadedProgram_Response_type_support_symbol_names_t _GetLoadedProgram_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, ur_dashboard_msgs, srv, GetLoadedProgram_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ur_dashboard_msgs, srv, GetLoadedProgram_Response)),
  }
};

typedef struct _GetLoadedProgram_Response_type_support_data_t
{
  void * data[2];
} _GetLoadedProgram_Response_type_support_data_t;

static _GetLoadedProgram_Response_type_support_data_t _GetLoadedProgram_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _GetLoadedProgram_Response_message_typesupport_map = {
  2,
  "ur_dashboard_msgs",
  &_GetLoadedProgram_Response_message_typesupport_ids.typesupport_identifier[0],
  &_GetLoadedProgram_Response_message_typesupport_symbol_names.symbol_name[0],
  &_GetLoadedProgram_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t GetLoadedProgram_Response_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_GetLoadedProgram_Response_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace ur_dashboard_msgs

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_C_EXPORT_ur_dashboard_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, ur_dashboard_msgs, srv, GetLoadedProgram_Response)() {
  return &::ur_dashboard_msgs::srv::rosidl_typesupport_c::GetLoadedProgram_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "ur_dashboard_msgs/msg/rosidl_typesupport_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/service_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace ur_dashboard_msgs
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _GetLoadedProgram_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _GetLoadedProgram_type_support_ids_t;

static const _GetLoadedProgram_type_support_ids_t _GetLoadedProgram_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _GetLoadedProgram_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _GetLoadedProgram_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _GetLoadedProgram_type_support_symbol_names_t _GetLoadedProgram_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, ur_dashboard_msgs, srv, GetLoadedProgram)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ur_dashboard_msgs, srv, GetLoadedProgram)),
  }
};

typedef struct _GetLoadedProgram_type_support_data_t
{
  void * data[2];
} _GetLoadedProgram_type_support_data_t;

static _GetLoadedProgram_type_support_data_t _GetLoadedProgram_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _GetLoadedProgram_service_typesupport_map = {
  2,
  "ur_dashboard_msgs",
  &_GetLoadedProgram_service_typesupport_ids.typesupport_identifier[0],
  &_GetLoadedProgram_service_typesupport_symbol_names.symbol_name[0],
  &_GetLoadedProgram_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t GetLoadedProgram_service_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_GetLoadedProgram_service_typesupport_map),
  rosidl_typesupport_c__get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace ur_dashboard_msgs

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_C_EXPORT_ur_dashboard_msgs
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_c, ur_dashboard_msgs, srv, GetLoadedProgram)() {
  return &::ur_dashboard_msgs::srv::rosidl_typesupport_c::GetLoadedProgram_service_type_support_handle;
}

#ifdef __cplusplus
}
#endif
