// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from smach_msgs:msg/SmachContainerStatus.idl
// generated code does not contain a copyright notice
#include "smach_msgs/msg/detail/smach_container_status__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `path`
// Member `initial_states`
// Member `active_states`
// Member `info`
#include "rosidl_runtime_c/string_functions.h"
// Member `local_data`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
smach_msgs__msg__SmachContainerStatus__init(smach_msgs__msg__SmachContainerStatus * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    smach_msgs__msg__SmachContainerStatus__fini(msg);
    return false;
  }
  // path
  if (!rosidl_runtime_c__String__init(&msg->path)) {
    smach_msgs__msg__SmachContainerStatus__fini(msg);
    return false;
  }
  // initial_states
  if (!rosidl_runtime_c__String__Sequence__init(&msg->initial_states, 0)) {
    smach_msgs__msg__SmachContainerStatus__fini(msg);
    return false;
  }
  // active_states
  if (!rosidl_runtime_c__String__Sequence__init(&msg->active_states, 0)) {
    smach_msgs__msg__SmachContainerStatus__fini(msg);
    return false;
  }
  // local_data
  if (!rosidl_runtime_c__uint8__Sequence__init(&msg->local_data, 0)) {
    smach_msgs__msg__SmachContainerStatus__fini(msg);
    return false;
  }
  // info
  if (!rosidl_runtime_c__String__init(&msg->info)) {
    smach_msgs__msg__SmachContainerStatus__fini(msg);
    return false;
  }
  return true;
}

void
smach_msgs__msg__SmachContainerStatus__fini(smach_msgs__msg__SmachContainerStatus * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // path
  rosidl_runtime_c__String__fini(&msg->path);
  // initial_states
  rosidl_runtime_c__String__Sequence__fini(&msg->initial_states);
  // active_states
  rosidl_runtime_c__String__Sequence__fini(&msg->active_states);
  // local_data
  rosidl_runtime_c__uint8__Sequence__fini(&msg->local_data);
  // info
  rosidl_runtime_c__String__fini(&msg->info);
}

smach_msgs__msg__SmachContainerStatus *
smach_msgs__msg__SmachContainerStatus__create()
{
  smach_msgs__msg__SmachContainerStatus * msg = (smach_msgs__msg__SmachContainerStatus *)malloc(sizeof(smach_msgs__msg__SmachContainerStatus));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(smach_msgs__msg__SmachContainerStatus));
  bool success = smach_msgs__msg__SmachContainerStatus__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
smach_msgs__msg__SmachContainerStatus__destroy(smach_msgs__msg__SmachContainerStatus * msg)
{
  if (msg) {
    smach_msgs__msg__SmachContainerStatus__fini(msg);
  }
  free(msg);
}


bool
smach_msgs__msg__SmachContainerStatus__Sequence__init(smach_msgs__msg__SmachContainerStatus__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  smach_msgs__msg__SmachContainerStatus * data = NULL;
  if (size) {
    data = (smach_msgs__msg__SmachContainerStatus *)calloc(size, sizeof(smach_msgs__msg__SmachContainerStatus));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = smach_msgs__msg__SmachContainerStatus__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        smach_msgs__msg__SmachContainerStatus__fini(&data[i - 1]);
      }
      free(data);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
smach_msgs__msg__SmachContainerStatus__Sequence__fini(smach_msgs__msg__SmachContainerStatus__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      smach_msgs__msg__SmachContainerStatus__fini(&array->data[i]);
    }
    free(array->data);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

smach_msgs__msg__SmachContainerStatus__Sequence *
smach_msgs__msg__SmachContainerStatus__Sequence__create(size_t size)
{
  smach_msgs__msg__SmachContainerStatus__Sequence * array = (smach_msgs__msg__SmachContainerStatus__Sequence *)malloc(sizeof(smach_msgs__msg__SmachContainerStatus__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = smach_msgs__msg__SmachContainerStatus__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
smach_msgs__msg__SmachContainerStatus__Sequence__destroy(smach_msgs__msg__SmachContainerStatus__Sequence * array)
{
  if (array) {
    smach_msgs__msg__SmachContainerStatus__Sequence__fini(array);
  }
  free(array);
}
