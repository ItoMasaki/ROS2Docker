// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from smach_msgs:msg/SmachContainerInitialStatusCmd.idl
// generated code does not contain a copyright notice

#ifndef SMACH_MSGS__MSG__DETAIL__SMACH_CONTAINER_INITIAL_STATUS_CMD__STRUCT_H_
#define SMACH_MSGS__MSG__DETAIL__SMACH_CONTAINER_INITIAL_STATUS_CMD__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'path'
// Member 'initial_states'
#include "rosidl_runtime_c/string.h"
// Member 'local_data'
#include "rosidl_runtime_c/primitives_sequence.h"

// Struct defined in msg/SmachContainerInitialStatusCmd in the package smach_msgs.
typedef struct smach_msgs__msg__SmachContainerInitialStatusCmd
{
  rosidl_runtime_c__String path;
  rosidl_runtime_c__String__Sequence initial_states;
  rosidl_runtime_c__uint8__Sequence local_data;
} smach_msgs__msg__SmachContainerInitialStatusCmd;

// Struct for a sequence of smach_msgs__msg__SmachContainerInitialStatusCmd.
typedef struct smach_msgs__msg__SmachContainerInitialStatusCmd__Sequence
{
  smach_msgs__msg__SmachContainerInitialStatusCmd * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} smach_msgs__msg__SmachContainerInitialStatusCmd__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SMACH_MSGS__MSG__DETAIL__SMACH_CONTAINER_INITIAL_STATUS_CMD__STRUCT_H_
