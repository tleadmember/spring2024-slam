// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from br2_tracking_msgs:msg/PanTiltCommand.idl
// generated code does not contain a copyright notice

#ifndef BR2_TRACKING_MSGS__MSG__DETAIL__PAN_TILT_COMMAND__FUNCTIONS_H_
#define BR2_TRACKING_MSGS__MSG__DETAIL__PAN_TILT_COMMAND__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "br2_tracking_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "br2_tracking_msgs/msg/detail/pan_tilt_command__struct.h"

/// Initialize msg/PanTiltCommand message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * br2_tracking_msgs__msg__PanTiltCommand
 * )) before or use
 * br2_tracking_msgs__msg__PanTiltCommand__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_br2_tracking_msgs
bool
br2_tracking_msgs__msg__PanTiltCommand__init(br2_tracking_msgs__msg__PanTiltCommand * msg);

/// Finalize msg/PanTiltCommand message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_br2_tracking_msgs
void
br2_tracking_msgs__msg__PanTiltCommand__fini(br2_tracking_msgs__msg__PanTiltCommand * msg);

/// Create msg/PanTiltCommand message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * br2_tracking_msgs__msg__PanTiltCommand__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_br2_tracking_msgs
br2_tracking_msgs__msg__PanTiltCommand *
br2_tracking_msgs__msg__PanTiltCommand__create();

/// Destroy msg/PanTiltCommand message.
/**
 * It calls
 * br2_tracking_msgs__msg__PanTiltCommand__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_br2_tracking_msgs
void
br2_tracking_msgs__msg__PanTiltCommand__destroy(br2_tracking_msgs__msg__PanTiltCommand * msg);

/// Check for msg/PanTiltCommand message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_br2_tracking_msgs
bool
br2_tracking_msgs__msg__PanTiltCommand__are_equal(const br2_tracking_msgs__msg__PanTiltCommand * lhs, const br2_tracking_msgs__msg__PanTiltCommand * rhs);

/// Copy a msg/PanTiltCommand message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_br2_tracking_msgs
bool
br2_tracking_msgs__msg__PanTiltCommand__copy(
  const br2_tracking_msgs__msg__PanTiltCommand * input,
  br2_tracking_msgs__msg__PanTiltCommand * output);

/// Initialize array of msg/PanTiltCommand messages.
/**
 * It allocates the memory for the number of elements and calls
 * br2_tracking_msgs__msg__PanTiltCommand__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_br2_tracking_msgs
bool
br2_tracking_msgs__msg__PanTiltCommand__Sequence__init(br2_tracking_msgs__msg__PanTiltCommand__Sequence * array, size_t size);

/// Finalize array of msg/PanTiltCommand messages.
/**
 * It calls
 * br2_tracking_msgs__msg__PanTiltCommand__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_br2_tracking_msgs
void
br2_tracking_msgs__msg__PanTiltCommand__Sequence__fini(br2_tracking_msgs__msg__PanTiltCommand__Sequence * array);

/// Create array of msg/PanTiltCommand messages.
/**
 * It allocates the memory for the array and calls
 * br2_tracking_msgs__msg__PanTiltCommand__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_br2_tracking_msgs
br2_tracking_msgs__msg__PanTiltCommand__Sequence *
br2_tracking_msgs__msg__PanTiltCommand__Sequence__create(size_t size);

/// Destroy array of msg/PanTiltCommand messages.
/**
 * It calls
 * br2_tracking_msgs__msg__PanTiltCommand__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_br2_tracking_msgs
void
br2_tracking_msgs__msg__PanTiltCommand__Sequence__destroy(br2_tracking_msgs__msg__PanTiltCommand__Sequence * array);

/// Check for msg/PanTiltCommand message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_br2_tracking_msgs
bool
br2_tracking_msgs__msg__PanTiltCommand__Sequence__are_equal(const br2_tracking_msgs__msg__PanTiltCommand__Sequence * lhs, const br2_tracking_msgs__msg__PanTiltCommand__Sequence * rhs);

/// Copy an array of msg/PanTiltCommand messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_br2_tracking_msgs
bool
br2_tracking_msgs__msg__PanTiltCommand__Sequence__copy(
  const br2_tracking_msgs__msg__PanTiltCommand__Sequence * input,
  br2_tracking_msgs__msg__PanTiltCommand__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // BR2_TRACKING_MSGS__MSG__DETAIL__PAN_TILT_COMMAND__FUNCTIONS_H_
