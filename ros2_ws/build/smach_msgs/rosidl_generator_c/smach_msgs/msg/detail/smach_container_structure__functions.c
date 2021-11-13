// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from smach_msgs:msg/SmachContainerStructure.idl
// generated code does not contain a copyright notice
#include "smach_msgs/msg/detail/smach_container_structure__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `path`
// Member `children`
// Member `internal_outcomes`
// Member `outcomes_from`
// Member `outcomes_to`
// Member `container_outcomes`
#include "rosidl_runtime_c/string_functions.h"

bool
smach_msgs__msg__SmachContainerStructure__init(smach_msgs__msg__SmachContainerStructure * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    smach_msgs__msg__SmachContainerStructure__fini(msg);
    return false;
  }
  // path
  if (!rosidl_runtime_c__String__init(&msg->path)) {
    smach_msgs__msg__SmachContainerStructure__fini(msg);
    return false;
  }
  // children
  if (!rosidl_runtime_c__String__Sequence__init(&msg->children, 0)) {
    smach_msgs__msg__SmachContainerStructure__fini(msg);
    return false;
  }
  // internal_outcomes
  if (!rosidl_runtime_c__String__Sequence__init(&msg->internal_outcomes, 0)) {
    smach_msgs__msg__SmachContainerStructure__fini(msg);
    return false;
  }
  // outcomes_from
  if (!rosidl_runtime_c__String__Sequence__init(&msg->outcomes_from, 0)) {
    smach_msgs__msg__SmachContainerStructure__fini(msg);
    return false;
  }
  // outcomes_to
  if (!rosidl_runtime_c__String__Sequence__init(&msg->outcomes_to, 0)) {
    smach_msgs__msg__SmachContainerStructure__fini(msg);
    return false;
  }
  // container_outcomes
  if (!rosidl_runtime_c__String__Sequence__init(&msg->container_outcomes, 0)) {
    smach_msgs__msg__SmachContainerStructure__fini(msg);
    return false;
  }
  return true;
}

void
smach_msgs__msg__SmachContainerStructure__fini(smach_msgs__msg__SmachContainerStructure * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // path
  rosidl_runtime_c__String__fini(&msg->path);
  // children
  rosidl_runtime_c__String__Sequence__fini(&msg->children);
  // internal_outcomes
  rosidl_runtime_c__String__Sequence__fini(&msg->internal_outcomes);
  // outcomes_from
  rosidl_runtime_c__String__Sequence__fini(&msg->outcomes_from);
  // outcomes_to
  rosidl_runtime_c__String__Sequence__fini(&msg->outcomes_to);
  // container_outcomes
  rosidl_runtime_c__String__Sequence__fini(&msg->container_outcomes);
}

smach_msgs__msg__SmachContainerStructure *
smach_msgs__msg__SmachContainerStructure__create()
{
  smach_msgs__msg__SmachContainerStructure * msg = (smach_msgs__msg__SmachContainerStructure *)malloc(sizeof(smach_msgs__msg__SmachContainerStructure));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(smach_msgs__msg__SmachContainerStructure));
  bool success = smach_msgs__msg__SmachContainerStructure__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
smach_msgs__msg__SmachContainerStructure__destroy(smach_msgs__msg__SmachContainerStructure * msg)
{
  if (msg) {
    smach_msgs__msg__SmachContainerStructure__fini(msg);
  }
  free(msg);
}


bool
smach_msgs__msg__SmachContainerStructure__Sequence__init(smach_msgs__msg__SmachContainerStructure__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  smach_msgs__msg__SmachContainerStructure * data = NULL;
  if (size) {
    data = (smach_msgs__msg__SmachContainerStructure *)calloc(size, sizeof(smach_msgs__msg__SmachContainerStructure));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = smach_msgs__msg__SmachContainerStructure__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        smach_msgs__msg__SmachContainerStructure__fini(&data[i - 1]);
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
smach_msgs__msg__SmachContainerStructure__Sequence__fini(smach_msgs__msg__SmachContainerStructure__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      smach_msgs__msg__SmachContainerStructure__fini(&array->data[i]);
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

smach_msgs__msg__SmachContainerStructure__Sequence *
smach_msgs__msg__SmachContainerStructure__Sequence__create(size_t size)
{
  smach_msgs__msg__SmachContainerStructure__Sequence * array = (smach_msgs__msg__SmachContainerStructure__Sequence *)malloc(sizeof(smach_msgs__msg__SmachContainerStructure__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = smach_msgs__msg__SmachContainerStructure__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
smach_msgs__msg__SmachContainerStructure__Sequence__destroy(smach_msgs__msg__SmachContainerStructure__Sequence * array)
{
  if (array) {
    smach_msgs__msg__SmachContainerStructure__Sequence__fini(array);
  }
  free(array);
}
