// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from br2_tracking_msgs:msg/PanTiltCommand.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "br2_tracking_msgs/msg/detail/pan_tilt_command__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace br2_tracking_msgs
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void PanTiltCommand_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) br2_tracking_msgs::msg::PanTiltCommand(_init);
}

void PanTiltCommand_fini_function(void * message_memory)
{
  auto typed_message = static_cast<br2_tracking_msgs::msg::PanTiltCommand *>(message_memory);
  typed_message->~PanTiltCommand();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember PanTiltCommand_message_member_array[2] = {
  {
    "pan",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(br2_tracking_msgs::msg::PanTiltCommand, pan),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "tilt",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(br2_tracking_msgs::msg::PanTiltCommand, tilt),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers PanTiltCommand_message_members = {
  "br2_tracking_msgs::msg",  // message namespace
  "PanTiltCommand",  // message name
  2,  // number of fields
  sizeof(br2_tracking_msgs::msg::PanTiltCommand),
  PanTiltCommand_message_member_array,  // message members
  PanTiltCommand_init_function,  // function to initialize message memory (memory has to be allocated)
  PanTiltCommand_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t PanTiltCommand_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &PanTiltCommand_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace br2_tracking_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<br2_tracking_msgs::msg::PanTiltCommand>()
{
  return &::br2_tracking_msgs::msg::rosidl_typesupport_introspection_cpp::PanTiltCommand_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, br2_tracking_msgs, msg, PanTiltCommand)() {
  return &::br2_tracking_msgs::msg::rosidl_typesupport_introspection_cpp::PanTiltCommand_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
