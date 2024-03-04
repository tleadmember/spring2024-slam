// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from br2_tracking_msgs:msg/PanTiltCommand.idl
// generated code does not contain a copyright notice

#ifndef BR2_TRACKING_MSGS__MSG__DETAIL__PAN_TILT_COMMAND__TRAITS_HPP_
#define BR2_TRACKING_MSGS__MSG__DETAIL__PAN_TILT_COMMAND__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "br2_tracking_msgs/msg/detail/pan_tilt_command__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace br2_tracking_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const PanTiltCommand & msg,
  std::ostream & out)
{
  out << "{";
  // member: pan
  {
    out << "pan: ";
    rosidl_generator_traits::value_to_yaml(msg.pan, out);
    out << ", ";
  }

  // member: tilt
  {
    out << "tilt: ";
    rosidl_generator_traits::value_to_yaml(msg.tilt, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const PanTiltCommand & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: pan
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pan: ";
    rosidl_generator_traits::value_to_yaml(msg.pan, out);
    out << "\n";
  }

  // member: tilt
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "tilt: ";
    rosidl_generator_traits::value_to_yaml(msg.tilt, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const PanTiltCommand & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace br2_tracking_msgs

namespace rosidl_generator_traits
{

[[deprecated("use br2_tracking_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const br2_tracking_msgs::msg::PanTiltCommand & msg,
  std::ostream & out, size_t indentation = 0)
{
  br2_tracking_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use br2_tracking_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const br2_tracking_msgs::msg::PanTiltCommand & msg)
{
  return br2_tracking_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<br2_tracking_msgs::msg::PanTiltCommand>()
{
  return "br2_tracking_msgs::msg::PanTiltCommand";
}

template<>
inline const char * name<br2_tracking_msgs::msg::PanTiltCommand>()
{
  return "br2_tracking_msgs/msg/PanTiltCommand";
}

template<>
struct has_fixed_size<br2_tracking_msgs::msg::PanTiltCommand>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<br2_tracking_msgs::msg::PanTiltCommand>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<br2_tracking_msgs::msg::PanTiltCommand>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // BR2_TRACKING_MSGS__MSG__DETAIL__PAN_TILT_COMMAND__TRAITS_HPP_
