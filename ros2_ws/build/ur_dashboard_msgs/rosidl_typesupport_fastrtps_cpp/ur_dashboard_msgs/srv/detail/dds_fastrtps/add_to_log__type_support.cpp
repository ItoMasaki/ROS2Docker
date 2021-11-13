// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from ur_dashboard_msgs:srv/AddToLog.idl
// generated code does not contain a copyright notice
#include "ur_dashboard_msgs/srv/detail/add_to_log__rosidl_typesupport_fastrtps_cpp.hpp"
#include "ur_dashboard_msgs/srv/detail/add_to_log__struct.hpp"

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

namespace ur_dashboard_msgs
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_ur_dashboard_msgs
cdr_serialize(
  const ur_dashboard_msgs::srv::AddToLog_Request & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: message
  cdr << ros_message.message;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_ur_dashboard_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  ur_dashboard_msgs::srv::AddToLog_Request & ros_message)
{
  // Member: message
  cdr >> ros_message.message;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_ur_dashboard_msgs
get_serialized_size(
  const ur_dashboard_msgs::srv::AddToLog_Request & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: message
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.message.size() + 1);

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_ur_dashboard_msgs
max_serialized_size_AddToLog_Request(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: message
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  return current_alignment - initial_alignment;
}

static bool _AddToLog_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const ur_dashboard_msgs::srv::AddToLog_Request *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _AddToLog_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<ur_dashboard_msgs::srv::AddToLog_Request *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _AddToLog_Request__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const ur_dashboard_msgs::srv::AddToLog_Request *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _AddToLog_Request__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_AddToLog_Request(full_bounded, 0);
}

static message_type_support_callbacks_t _AddToLog_Request__callbacks = {
  "ur_dashboard_msgs::srv",
  "AddToLog_Request",
  _AddToLog_Request__cdr_serialize,
  _AddToLog_Request__cdr_deserialize,
  _AddToLog_Request__get_serialized_size,
  _AddToLog_Request__max_serialized_size
};

static rosidl_message_type_support_t _AddToLog_Request__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_AddToLog_Request__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace ur_dashboard_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_ur_dashboard_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<ur_dashboard_msgs::srv::AddToLog_Request>()
{
  return &ur_dashboard_msgs::srv::typesupport_fastrtps_cpp::_AddToLog_Request__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, ur_dashboard_msgs, srv, AddToLog_Request)() {
  return &ur_dashboard_msgs::srv::typesupport_fastrtps_cpp::_AddToLog_Request__handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include <limits>
// already included above
// #include <stdexcept>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
// already included above
// #include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

namespace ur_dashboard_msgs
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_ur_dashboard_msgs
cdr_serialize(
  const ur_dashboard_msgs::srv::AddToLog_Response & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: answer
  cdr << ros_message.answer;
  // Member: success
  cdr << (ros_message.success ? true : false);
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_ur_dashboard_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  ur_dashboard_msgs::srv::AddToLog_Response & ros_message)
{
  // Member: answer
  cdr >> ros_message.answer;

  // Member: success
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.success = tmp ? true : false;
  }

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_ur_dashboard_msgs
get_serialized_size(
  const ur_dashboard_msgs::srv::AddToLog_Response & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: answer
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.answer.size() + 1);
  // Member: success
  {
    size_t item_size = sizeof(ros_message.success);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_ur_dashboard_msgs
max_serialized_size_AddToLog_Response(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: answer
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Member: success
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static bool _AddToLog_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const ur_dashboard_msgs::srv::AddToLog_Response *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _AddToLog_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<ur_dashboard_msgs::srv::AddToLog_Response *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _AddToLog_Response__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const ur_dashboard_msgs::srv::AddToLog_Response *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _AddToLog_Response__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_AddToLog_Response(full_bounded, 0);
}

static message_type_support_callbacks_t _AddToLog_Response__callbacks = {
  "ur_dashboard_msgs::srv",
  "AddToLog_Response",
  _AddToLog_Response__cdr_serialize,
  _AddToLog_Response__cdr_deserialize,
  _AddToLog_Response__get_serialized_size,
  _AddToLog_Response__max_serialized_size
};

static rosidl_message_type_support_t _AddToLog_Response__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_AddToLog_Response__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace ur_dashboard_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_ur_dashboard_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<ur_dashboard_msgs::srv::AddToLog_Response>()
{
  return &ur_dashboard_msgs::srv::typesupport_fastrtps_cpp::_AddToLog_Response__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, ur_dashboard_msgs, srv, AddToLog_Response)() {
  return &ur_dashboard_msgs::srv::typesupport_fastrtps_cpp::_AddToLog_Response__handle;
}

#ifdef __cplusplus
}
#endif

#include "rmw/error_handling.h"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/service_type_support_decl.hpp"

namespace ur_dashboard_msgs
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

static service_type_support_callbacks_t _AddToLog__callbacks = {
  "ur_dashboard_msgs::srv",
  "AddToLog",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, ur_dashboard_msgs, srv, AddToLog_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, ur_dashboard_msgs, srv, AddToLog_Response)(),
};

static rosidl_service_type_support_t _AddToLog__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_AddToLog__callbacks,
  get_service_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace ur_dashboard_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_ur_dashboard_msgs
const rosidl_service_type_support_t *
get_service_type_support_handle<ur_dashboard_msgs::srv::AddToLog>()
{
  return &ur_dashboard_msgs::srv::typesupport_fastrtps_cpp::_AddToLog__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, ur_dashboard_msgs, srv, AddToLog)() {
  return &ur_dashboard_msgs::srv::typesupport_fastrtps_cpp::_AddToLog__handle;
}

#ifdef __cplusplus
}
#endif
