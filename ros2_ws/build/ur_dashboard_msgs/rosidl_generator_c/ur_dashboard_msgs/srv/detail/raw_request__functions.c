// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from ur_dashboard_msgs:srv/RawRequest.idl
// generated code does not contain a copyright notice
#include "ur_dashboard_msgs/srv/detail/raw_request__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

// Include directives for member types
// Member `query`
#include "rosidl_runtime_c/string_functions.h"

bool
ur_dashboard_msgs__srv__RawRequest_Request__init(ur_dashboard_msgs__srv__RawRequest_Request * msg)
{
  if (!msg) {
    return false;
  }
  // query
  if (!rosidl_runtime_c__String__init(&msg->query)) {
    ur_dashboard_msgs__srv__RawRequest_Request__fini(msg);
    return false;
  }
  return true;
}

void
ur_dashboard_msgs__srv__RawRequest_Request__fini(ur_dashboard_msgs__srv__RawRequest_Request * msg)
{
  if (!msg) {
    return;
  }
  // query
  rosidl_runtime_c__String__fini(&msg->query);
}

ur_dashboard_msgs__srv__RawRequest_Request *
ur_dashboard_msgs__srv__RawRequest_Request__create()
{
  ur_dashboard_msgs__srv__RawRequest_Request * msg = (ur_dashboard_msgs__srv__RawRequest_Request *)malloc(sizeof(ur_dashboard_msgs__srv__RawRequest_Request));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ur_dashboard_msgs__srv__RawRequest_Request));
  bool success = ur_dashboard_msgs__srv__RawRequest_Request__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
ur_dashboard_msgs__srv__RawRequest_Request__destroy(ur_dashboard_msgs__srv__RawRequest_Request * msg)
{
  if (msg) {
    ur_dashboard_msgs__srv__RawRequest_Request__fini(msg);
  }
  free(msg);
}


bool
ur_dashboard_msgs__srv__RawRequest_Request__Sequence__init(ur_dashboard_msgs__srv__RawRequest_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  ur_dashboard_msgs__srv__RawRequest_Request * data = NULL;
  if (size) {
    data = (ur_dashboard_msgs__srv__RawRequest_Request *)calloc(size, sizeof(ur_dashboard_msgs__srv__RawRequest_Request));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ur_dashboard_msgs__srv__RawRequest_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ur_dashboard_msgs__srv__RawRequest_Request__fini(&data[i - 1]);
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
ur_dashboard_msgs__srv__RawRequest_Request__Sequence__fini(ur_dashboard_msgs__srv__RawRequest_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      ur_dashboard_msgs__srv__RawRequest_Request__fini(&array->data[i]);
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

ur_dashboard_msgs__srv__RawRequest_Request__Sequence *
ur_dashboard_msgs__srv__RawRequest_Request__Sequence__create(size_t size)
{
  ur_dashboard_msgs__srv__RawRequest_Request__Sequence * array = (ur_dashboard_msgs__srv__RawRequest_Request__Sequence *)malloc(sizeof(ur_dashboard_msgs__srv__RawRequest_Request__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = ur_dashboard_msgs__srv__RawRequest_Request__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
ur_dashboard_msgs__srv__RawRequest_Request__Sequence__destroy(ur_dashboard_msgs__srv__RawRequest_Request__Sequence * array)
{
  if (array) {
    ur_dashboard_msgs__srv__RawRequest_Request__Sequence__fini(array);
  }
  free(array);
}


// Include directives for member types
// Member `answer`
// already included above
// #include "rosidl_runtime_c/string_functions.h"

bool
ur_dashboard_msgs__srv__RawRequest_Response__init(ur_dashboard_msgs__srv__RawRequest_Response * msg)
{
  if (!msg) {
    return false;
  }
  // answer
  if (!rosidl_runtime_c__String__init(&msg->answer)) {
    ur_dashboard_msgs__srv__RawRequest_Response__fini(msg);
    return false;
  }
  return true;
}

void
ur_dashboard_msgs__srv__RawRequest_Response__fini(ur_dashboard_msgs__srv__RawRequest_Response * msg)
{
  if (!msg) {
    return;
  }
  // answer
  rosidl_runtime_c__String__fini(&msg->answer);
}

ur_dashboard_msgs__srv__RawRequest_Response *
ur_dashboard_msgs__srv__RawRequest_Response__create()
{
  ur_dashboard_msgs__srv__RawRequest_Response * msg = (ur_dashboard_msgs__srv__RawRequest_Response *)malloc(sizeof(ur_dashboard_msgs__srv__RawRequest_Response));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ur_dashboard_msgs__srv__RawRequest_Response));
  bool success = ur_dashboard_msgs__srv__RawRequest_Response__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
ur_dashboard_msgs__srv__RawRequest_Response__destroy(ur_dashboard_msgs__srv__RawRequest_Response * msg)
{
  if (msg) {
    ur_dashboard_msgs__srv__RawRequest_Response__fini(msg);
  }
  free(msg);
}


bool
ur_dashboard_msgs__srv__RawRequest_Response__Sequence__init(ur_dashboard_msgs__srv__RawRequest_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  ur_dashboard_msgs__srv__RawRequest_Response * data = NULL;
  if (size) {
    data = (ur_dashboard_msgs__srv__RawRequest_Response *)calloc(size, sizeof(ur_dashboard_msgs__srv__RawRequest_Response));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ur_dashboard_msgs__srv__RawRequest_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ur_dashboard_msgs__srv__RawRequest_Response__fini(&data[i - 1]);
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
ur_dashboard_msgs__srv__RawRequest_Response__Sequence__fini(ur_dashboard_msgs__srv__RawRequest_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      ur_dashboard_msgs__srv__RawRequest_Response__fini(&array->data[i]);
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

ur_dashboard_msgs__srv__RawRequest_Response__Sequence *
ur_dashboard_msgs__srv__RawRequest_Response__Sequence__create(size_t size)
{
  ur_dashboard_msgs__srv__RawRequest_Response__Sequence * array = (ur_dashboard_msgs__srv__RawRequest_Response__Sequence *)malloc(sizeof(ur_dashboard_msgs__srv__RawRequest_Response__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = ur_dashboard_msgs__srv__RawRequest_Response__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
ur_dashboard_msgs__srv__RawRequest_Response__Sequence__destroy(ur_dashboard_msgs__srv__RawRequest_Response__Sequence * array)
{
  if (array) {
    ur_dashboard_msgs__srv__RawRequest_Response__Sequence__fini(array);
  }
  free(array);
}
