// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from ur_dashboard_msgs:srv/IsProgramSaved.idl
// generated code does not contain a copyright notice
#include "ur_dashboard_msgs/srv/detail/is_program_saved__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "ur_dashboard_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "ur_dashboard_msgs/srv/detail/is_program_saved__struct.h"
#include "ur_dashboard_msgs/srv/detail/is_program_saved__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif


// forward declare type support functions


using _IsProgramSaved_Request__ros_msg_type = ur_dashboard_msgs__srv__IsProgramSaved_Request;

static bool _IsProgramSaved_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _IsProgramSaved_Request__ros_msg_type * ros_message = static_cast<const _IsProgramSaved_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: structure_needs_at_least_one_member
  {
    cdr << ros_message->structure_needs_at_least_one_member;
  }

  return true;
}

static bool _IsProgramSaved_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _IsProgramSaved_Request__ros_msg_type * ros_message = static_cast<_IsProgramSaved_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: structure_needs_at_least_one_member
  {
    cdr >> ros_message->structure_needs_at_least_one_member;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_ur_dashboard_msgs
size_t get_serialized_size_ur_dashboard_msgs__srv__IsProgramSaved_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _IsProgramSaved_Request__ros_msg_type * ros_message = static_cast<const _IsProgramSaved_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name structure_needs_at_least_one_member
  {
    size_t item_size = sizeof(ros_message->structure_needs_at_least_one_member);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _IsProgramSaved_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_ur_dashboard_msgs__srv__IsProgramSaved_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_ur_dashboard_msgs
size_t max_serialized_size_ur_dashboard_msgs__srv__IsProgramSaved_Request(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: structure_needs_at_least_one_member
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static size_t _IsProgramSaved_Request__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_ur_dashboard_msgs__srv__IsProgramSaved_Request(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_IsProgramSaved_Request = {
  "ur_dashboard_msgs::srv",
  "IsProgramSaved_Request",
  _IsProgramSaved_Request__cdr_serialize,
  _IsProgramSaved_Request__cdr_deserialize,
  _IsProgramSaved_Request__get_serialized_size,
  _IsProgramSaved_Request__max_serialized_size
};

static rosidl_message_type_support_t _IsProgramSaved_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_IsProgramSaved_Request,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, ur_dashboard_msgs, srv, IsProgramSaved_Request)() {
  return &_IsProgramSaved_Request__type_support;
}

#if defined(__cplusplus)
}
#endif

// already included above
// #include <cassert>
// already included above
// #include <limits>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "ur_dashboard_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
// already included above
// #include "ur_dashboard_msgs/srv/detail/is_program_saved__struct.h"
// already included above
// #include "ur_dashboard_msgs/srv/detail/is_program_saved__functions.h"
// already included above
// #include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "rosidl_runtime_c/string.h"  // answer, program_name
#include "rosidl_runtime_c/string_functions.h"  // answer, program_name

// forward declare type support functions


using _IsProgramSaved_Response__ros_msg_type = ur_dashboard_msgs__srv__IsProgramSaved_Response;

static bool _IsProgramSaved_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _IsProgramSaved_Response__ros_msg_type * ros_message = static_cast<const _IsProgramSaved_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: answer
  {
    const rosidl_runtime_c__String * str = &ros_message->answer;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: program_name
  {
    const rosidl_runtime_c__String * str = &ros_message->program_name;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: program_saved
  {
    cdr << (ros_message->program_saved ? true : false);
  }

  // Field name: success
  {
    cdr << (ros_message->success ? true : false);
  }

  return true;
}

static bool _IsProgramSaved_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _IsProgramSaved_Response__ros_msg_type * ros_message = static_cast<_IsProgramSaved_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: answer
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->answer.data) {
      rosidl_runtime_c__String__init(&ros_message->answer);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->answer,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'answer'\n");
      return false;
    }
  }

  // Field name: program_name
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->program_name.data) {
      rosidl_runtime_c__String__init(&ros_message->program_name);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->program_name,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'program_name'\n");
      return false;
    }
  }

  // Field name: program_saved
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->program_saved = tmp ? true : false;
  }

  // Field name: success
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->success = tmp ? true : false;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_ur_dashboard_msgs
size_t get_serialized_size_ur_dashboard_msgs__srv__IsProgramSaved_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _IsProgramSaved_Response__ros_msg_type * ros_message = static_cast<const _IsProgramSaved_Response__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name answer
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->answer.size + 1);
  // field.name program_name
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->program_name.size + 1);
  // field.name program_saved
  {
    size_t item_size = sizeof(ros_message->program_saved);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name success
  {
    size_t item_size = sizeof(ros_message->success);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _IsProgramSaved_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_ur_dashboard_msgs__srv__IsProgramSaved_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_ur_dashboard_msgs
size_t max_serialized_size_ur_dashboard_msgs__srv__IsProgramSaved_Response(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: answer
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: program_name
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: program_saved
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: success
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static size_t _IsProgramSaved_Response__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_ur_dashboard_msgs__srv__IsProgramSaved_Response(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_IsProgramSaved_Response = {
  "ur_dashboard_msgs::srv",
  "IsProgramSaved_Response",
  _IsProgramSaved_Response__cdr_serialize,
  _IsProgramSaved_Response__cdr_deserialize,
  _IsProgramSaved_Response__get_serialized_size,
  _IsProgramSaved_Response__max_serialized_size
};

static rosidl_message_type_support_t _IsProgramSaved_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_IsProgramSaved_Response,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, ur_dashboard_msgs, srv, IsProgramSaved_Response)() {
  return &_IsProgramSaved_Response__type_support;
}

#if defined(__cplusplus)
}
#endif

#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "ur_dashboard_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "ur_dashboard_msgs/srv/is_program_saved.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t IsProgramSaved__callbacks = {
  "ur_dashboard_msgs::srv",
  "IsProgramSaved",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, ur_dashboard_msgs, srv, IsProgramSaved_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, ur_dashboard_msgs, srv, IsProgramSaved_Response)(),
};

static rosidl_service_type_support_t IsProgramSaved__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &IsProgramSaved__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, ur_dashboard_msgs, srv, IsProgramSaved)() {
  return &IsProgramSaved__handle;
}

#if defined(__cplusplus)
}
#endif
