// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from smach_msgs:msg/SmachContainerInitialStatusCmd.idl
// generated code does not contain a copyright notice
#include "smach_msgs/msg/detail/smach_container_initial_status_cmd__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "smach_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "smach_msgs/msg/detail/smach_container_initial_status_cmd__struct.h"
#include "smach_msgs/msg/detail/smach_container_initial_status_cmd__functions.h"
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

#include "rosidl_runtime_c/primitives_sequence.h"  // local_data
#include "rosidl_runtime_c/primitives_sequence_functions.h"  // local_data
#include "rosidl_runtime_c/string.h"  // initial_states, path
#include "rosidl_runtime_c/string_functions.h"  // initial_states, path

// forward declare type support functions


using _SmachContainerInitialStatusCmd__ros_msg_type = smach_msgs__msg__SmachContainerInitialStatusCmd;

static bool _SmachContainerInitialStatusCmd__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _SmachContainerInitialStatusCmd__ros_msg_type * ros_message = static_cast<const _SmachContainerInitialStatusCmd__ros_msg_type *>(untyped_ros_message);
  // Field name: path
  {
    const rosidl_runtime_c__String * str = &ros_message->path;
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

  // Field name: initial_states
  {
    size_t size = ros_message->initial_states.size;
    auto array_ptr = ros_message->initial_states.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      const rosidl_runtime_c__String * str = &array_ptr[i];
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
  }

  // Field name: local_data
  {
    size_t size = ros_message->local_data.size;
    auto array_ptr = ros_message->local_data.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  return true;
}

static bool _SmachContainerInitialStatusCmd__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _SmachContainerInitialStatusCmd__ros_msg_type * ros_message = static_cast<_SmachContainerInitialStatusCmd__ros_msg_type *>(untyped_ros_message);
  // Field name: path
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->path.data) {
      rosidl_runtime_c__String__init(&ros_message->path);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->path,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'path'\n");
      return false;
    }
  }

  // Field name: initial_states
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->initial_states.data) {
      rosidl_runtime_c__String__Sequence__fini(&ros_message->initial_states);
    }
    if (!rosidl_runtime_c__String__Sequence__init(&ros_message->initial_states, size)) {
      return "failed to create array for field 'initial_states'";
    }
    auto array_ptr = ros_message->initial_states.data;
    for (size_t i = 0; i < size; ++i) {
      std::string tmp;
      cdr >> tmp;
      auto & ros_i = array_ptr[i];
      if (!ros_i.data) {
        rosidl_runtime_c__String__init(&ros_i);
      }
      bool succeeded = rosidl_runtime_c__String__assign(
        &ros_i,
        tmp.c_str());
      if (!succeeded) {
        fprintf(stderr, "failed to assign string into field 'initial_states'\n");
        return false;
      }
    }
  }

  // Field name: local_data
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->local_data.data) {
      rosidl_runtime_c__uint8__Sequence__fini(&ros_message->local_data);
    }
    if (!rosidl_runtime_c__uint8__Sequence__init(&ros_message->local_data, size)) {
      return "failed to create array for field 'local_data'";
    }
    auto array_ptr = ros_message->local_data.data;
    cdr.deserializeArray(array_ptr, size);
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_smach_msgs
size_t get_serialized_size_smach_msgs__msg__SmachContainerInitialStatusCmd(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _SmachContainerInitialStatusCmd__ros_msg_type * ros_message = static_cast<const _SmachContainerInitialStatusCmd__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name path
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->path.size + 1);
  // field.name initial_states
  {
    size_t array_size = ros_message->initial_states.size;
    auto array_ptr = ros_message->initial_states.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        (array_ptr[index].size + 1);
    }
  }
  // field.name local_data
  {
    size_t array_size = ros_message->local_data.size;
    auto array_ptr = ros_message->local_data.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _SmachContainerInitialStatusCmd__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_smach_msgs__msg__SmachContainerInitialStatusCmd(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_smach_msgs
size_t max_serialized_size_smach_msgs__msg__SmachContainerInitialStatusCmd(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: path
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: initial_states
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: local_data
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static size_t _SmachContainerInitialStatusCmd__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_smach_msgs__msg__SmachContainerInitialStatusCmd(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_SmachContainerInitialStatusCmd = {
  "smach_msgs::msg",
  "SmachContainerInitialStatusCmd",
  _SmachContainerInitialStatusCmd__cdr_serialize,
  _SmachContainerInitialStatusCmd__cdr_deserialize,
  _SmachContainerInitialStatusCmd__get_serialized_size,
  _SmachContainerInitialStatusCmd__max_serialized_size
};

static rosidl_message_type_support_t _SmachContainerInitialStatusCmd__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_SmachContainerInitialStatusCmd,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, smach_msgs, msg, SmachContainerInitialStatusCmd)() {
  return &_SmachContainerInitialStatusCmd__type_support;
}

#if defined(__cplusplus)
}
#endif
