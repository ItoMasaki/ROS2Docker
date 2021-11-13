// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from ur_dashboard_msgs:srv/Popup.idl
// generated code does not contain a copyright notice

#ifndef UR_DASHBOARD_MSGS__SRV__DETAIL__POPUP__FUNCTIONS_H_
#define UR_DASHBOARD_MSGS__SRV__DETAIL__POPUP__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "ur_dashboard_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "ur_dashboard_msgs/srv/detail/popup__struct.h"

/// Initialize srv/Popup message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * ur_dashboard_msgs__srv__Popup_Request
 * )) before or use
 * ur_dashboard_msgs__srv__Popup_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_ur_dashboard_msgs
bool
ur_dashboard_msgs__srv__Popup_Request__init(ur_dashboard_msgs__srv__Popup_Request * msg);

/// Finalize srv/Popup message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ur_dashboard_msgs
void
ur_dashboard_msgs__srv__Popup_Request__fini(ur_dashboard_msgs__srv__Popup_Request * msg);

/// Create srv/Popup message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * ur_dashboard_msgs__srv__Popup_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_ur_dashboard_msgs
ur_dashboard_msgs__srv__Popup_Request *
ur_dashboard_msgs__srv__Popup_Request__create();

/// Destroy srv/Popup message.
/**
 * It calls
 * ur_dashboard_msgs__srv__Popup_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ur_dashboard_msgs
void
ur_dashboard_msgs__srv__Popup_Request__destroy(ur_dashboard_msgs__srv__Popup_Request * msg);


/// Initialize array of srv/Popup messages.
/**
 * It allocates the memory for the number of elements and calls
 * ur_dashboard_msgs__srv__Popup_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_ur_dashboard_msgs
bool
ur_dashboard_msgs__srv__Popup_Request__Sequence__init(ur_dashboard_msgs__srv__Popup_Request__Sequence * array, size_t size);

/// Finalize array of srv/Popup messages.
/**
 * It calls
 * ur_dashboard_msgs__srv__Popup_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ur_dashboard_msgs
void
ur_dashboard_msgs__srv__Popup_Request__Sequence__fini(ur_dashboard_msgs__srv__Popup_Request__Sequence * array);

/// Create array of srv/Popup messages.
/**
 * It allocates the memory for the array and calls
 * ur_dashboard_msgs__srv__Popup_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_ur_dashboard_msgs
ur_dashboard_msgs__srv__Popup_Request__Sequence *
ur_dashboard_msgs__srv__Popup_Request__Sequence__create(size_t size);

/// Destroy array of srv/Popup messages.
/**
 * It calls
 * ur_dashboard_msgs__srv__Popup_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ur_dashboard_msgs
void
ur_dashboard_msgs__srv__Popup_Request__Sequence__destroy(ur_dashboard_msgs__srv__Popup_Request__Sequence * array);

/// Initialize srv/Popup message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * ur_dashboard_msgs__srv__Popup_Response
 * )) before or use
 * ur_dashboard_msgs__srv__Popup_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_ur_dashboard_msgs
bool
ur_dashboard_msgs__srv__Popup_Response__init(ur_dashboard_msgs__srv__Popup_Response * msg);

/// Finalize srv/Popup message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ur_dashboard_msgs
void
ur_dashboard_msgs__srv__Popup_Response__fini(ur_dashboard_msgs__srv__Popup_Response * msg);

/// Create srv/Popup message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * ur_dashboard_msgs__srv__Popup_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_ur_dashboard_msgs
ur_dashboard_msgs__srv__Popup_Response *
ur_dashboard_msgs__srv__Popup_Response__create();

/// Destroy srv/Popup message.
/**
 * It calls
 * ur_dashboard_msgs__srv__Popup_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ur_dashboard_msgs
void
ur_dashboard_msgs__srv__Popup_Response__destroy(ur_dashboard_msgs__srv__Popup_Response * msg);


/// Initialize array of srv/Popup messages.
/**
 * It allocates the memory for the number of elements and calls
 * ur_dashboard_msgs__srv__Popup_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_ur_dashboard_msgs
bool
ur_dashboard_msgs__srv__Popup_Response__Sequence__init(ur_dashboard_msgs__srv__Popup_Response__Sequence * array, size_t size);

/// Finalize array of srv/Popup messages.
/**
 * It calls
 * ur_dashboard_msgs__srv__Popup_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ur_dashboard_msgs
void
ur_dashboard_msgs__srv__Popup_Response__Sequence__fini(ur_dashboard_msgs__srv__Popup_Response__Sequence * array);

/// Create array of srv/Popup messages.
/**
 * It allocates the memory for the array and calls
 * ur_dashboard_msgs__srv__Popup_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_ur_dashboard_msgs
ur_dashboard_msgs__srv__Popup_Response__Sequence *
ur_dashboard_msgs__srv__Popup_Response__Sequence__create(size_t size);

/// Destroy array of srv/Popup messages.
/**
 * It calls
 * ur_dashboard_msgs__srv__Popup_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ur_dashboard_msgs
void
ur_dashboard_msgs__srv__Popup_Response__Sequence__destroy(ur_dashboard_msgs__srv__Popup_Response__Sequence * array);

#ifdef __cplusplus
}
#endif

#endif  // UR_DASHBOARD_MSGS__SRV__DETAIL__POPUP__FUNCTIONS_H_
