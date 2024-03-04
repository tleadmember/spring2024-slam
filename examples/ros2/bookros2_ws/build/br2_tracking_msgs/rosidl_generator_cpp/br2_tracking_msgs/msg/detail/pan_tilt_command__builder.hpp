// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from br2_tracking_msgs:msg/PanTiltCommand.idl
// generated code does not contain a copyright notice

#ifndef BR2_TRACKING_MSGS__MSG__DETAIL__PAN_TILT_COMMAND__BUILDER_HPP_
#define BR2_TRACKING_MSGS__MSG__DETAIL__PAN_TILT_COMMAND__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "br2_tracking_msgs/msg/detail/pan_tilt_command__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace br2_tracking_msgs
{

namespace msg
{

namespace builder
{

class Init_PanTiltCommand_tilt
{
public:
  explicit Init_PanTiltCommand_tilt(::br2_tracking_msgs::msg::PanTiltCommand & msg)
  : msg_(msg)
  {}
  ::br2_tracking_msgs::msg::PanTiltCommand tilt(::br2_tracking_msgs::msg::PanTiltCommand::_tilt_type arg)
  {
    msg_.tilt = std::move(arg);
    return std::move(msg_);
  }

private:
  ::br2_tracking_msgs::msg::PanTiltCommand msg_;
};

class Init_PanTiltCommand_pan
{
public:
  Init_PanTiltCommand_pan()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PanTiltCommand_tilt pan(::br2_tracking_msgs::msg::PanTiltCommand::_pan_type arg)
  {
    msg_.pan = std::move(arg);
    return Init_PanTiltCommand_tilt(msg_);
  }

private:
  ::br2_tracking_msgs::msg::PanTiltCommand msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::br2_tracking_msgs::msg::PanTiltCommand>()
{
  return br2_tracking_msgs::msg::builder::Init_PanTiltCommand_pan();
}

}  // namespace br2_tracking_msgs

#endif  // BR2_TRACKING_MSGS__MSG__DETAIL__PAN_TILT_COMMAND__BUILDER_HPP_
