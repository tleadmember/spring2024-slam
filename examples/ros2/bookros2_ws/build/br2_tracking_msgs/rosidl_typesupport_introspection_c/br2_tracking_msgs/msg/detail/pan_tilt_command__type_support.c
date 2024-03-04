// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from br2_tracking_msgs:msg/PanTiltCommand.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "br2_tracking_msgs/msg/detail/pan_tilt_command__rosidl_typesupport_introspection_c.h"
#include "br2_tracking_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "br2_tracking_msgs/msg/detail/pan_tilt_command__functions.h"
#include "br2_tracking_msgs/msg/detail/pan_tilt_command__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void br2_tracking_msgs__msg__PanTiltCommand__rosidl_typesupport_introspection_c__PanTiltCommand_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  br2_tracking_msgs__msg__PanTiltCommand__init(message_memory);
}

void br2_tracking_msgs__msg__PanTiltCommand__rosidl_typesupport_introspection_c__PanTiltCommand_fini_function(void * message_memory)
{
  br2_tracking_msgs__msg__PanTiltCommand__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember br2_tracking_msgs__msg__PanTiltCommand__rosidl_typesupport_introspection_c__PanTiltCommand_message_member_array[2] = {
  {
    "pan",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(br2_tracking_msgs__msg__PanTiltCommand, pan),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "tilt",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(br2_tracking_msgs__msg__PanTiltCommand, tilt),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers br2_tracking_msgs__msg__PanTiltCommand__rosidl_typesupport_introspection_c__PanTiltCommand_message_members = {
  "br2_tracking_msgs__msg",  // message namespace
  "PanTiltCommand",  // message name
  2,  // number of fields
  sizeof(br2_tracking_msgs__msg__PanTiltCommand),
  br2_tracking_msgs__msg__PanTiltCommand__rosidl_typesupport_introspection_c__PanTiltCommand_message_member_array,  // message members
  br2_tracking_msgs__msg__PanTiltCommand__rosidl_typesupport_introspection_c__PanTiltCommand_init_function,  // function to initialize message memory (memory has to be allocated)
  br2_tracking_msgs__msg__PanTiltCommand__rosidl_typesupport_introspection_c__PanTiltCommand_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t br2_tracking_msgs__msg__PanTiltCommand__rosidl_typesupport_introspection_c__PanTiltCommand_message_type_support_handle = {
  0,
  &br2_tracking_msgs__msg__PanTiltCommand__rosidl_typesupport_introspection_c__PanTiltCommand_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_br2_tracking_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, br2_tracking_msgs, msg, PanTiltCommand)() {
  if (!br2_tracking_msgs__msg__PanTiltCommand__rosidl_typesupport_introspection_c__PanTiltCommand_message_type_support_handle.typesupport_identifier) {
    br2_tracking_msgs__msg__PanTiltCommand__rosidl_typesupport_introspection_c__PanTiltCommand_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &br2_tracking_msgs__msg__PanTiltCommand__rosidl_typesupport_introspection_c__PanTiltCommand_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
