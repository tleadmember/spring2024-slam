// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from br2_tracking_msgs:msg/PanTiltCommand.idl
// generated code does not contain a copyright notice

#ifndef BR2_TRACKING_MSGS__MSG__DETAIL__PAN_TILT_COMMAND__STRUCT_H_
#define BR2_TRACKING_MSGS__MSG__DETAIL__PAN_TILT_COMMAND__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/PanTiltCommand in the package br2_tracking_msgs.
typedef struct br2_tracking_msgs__msg__PanTiltCommand
{
  double pan;
  double tilt;
} br2_tracking_msgs__msg__PanTiltCommand;

// Struct for a sequence of br2_tracking_msgs__msg__PanTiltCommand.
typedef struct br2_tracking_msgs__msg__PanTiltCommand__Sequence
{
  br2_tracking_msgs__msg__PanTiltCommand * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} br2_tracking_msgs__msg__PanTiltCommand__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // BR2_TRACKING_MSGS__MSG__DETAIL__PAN_TILT_COMMAND__STRUCT_H_
