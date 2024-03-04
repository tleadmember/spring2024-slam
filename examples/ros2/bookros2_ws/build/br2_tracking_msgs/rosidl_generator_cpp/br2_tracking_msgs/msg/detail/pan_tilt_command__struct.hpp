// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from br2_tracking_msgs:msg/PanTiltCommand.idl
// generated code does not contain a copyright notice

#ifndef BR2_TRACKING_MSGS__MSG__DETAIL__PAN_TILT_COMMAND__STRUCT_HPP_
#define BR2_TRACKING_MSGS__MSG__DETAIL__PAN_TILT_COMMAND__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__br2_tracking_msgs__msg__PanTiltCommand __attribute__((deprecated))
#else
# define DEPRECATED__br2_tracking_msgs__msg__PanTiltCommand __declspec(deprecated)
#endif

namespace br2_tracking_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct PanTiltCommand_
{
  using Type = PanTiltCommand_<ContainerAllocator>;

  explicit PanTiltCommand_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->pan = 0.0;
      this->tilt = 0.0;
    }
  }

  explicit PanTiltCommand_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->pan = 0.0;
      this->tilt = 0.0;
    }
  }

  // field types and members
  using _pan_type =
    double;
  _pan_type pan;
  using _tilt_type =
    double;
  _tilt_type tilt;

  // setters for named parameter idiom
  Type & set__pan(
    const double & _arg)
  {
    this->pan = _arg;
    return *this;
  }
  Type & set__tilt(
    const double & _arg)
  {
    this->tilt = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    br2_tracking_msgs::msg::PanTiltCommand_<ContainerAllocator> *;
  using ConstRawPtr =
    const br2_tracking_msgs::msg::PanTiltCommand_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<br2_tracking_msgs::msg::PanTiltCommand_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<br2_tracking_msgs::msg::PanTiltCommand_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      br2_tracking_msgs::msg::PanTiltCommand_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<br2_tracking_msgs::msg::PanTiltCommand_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      br2_tracking_msgs::msg::PanTiltCommand_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<br2_tracking_msgs::msg::PanTiltCommand_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<br2_tracking_msgs::msg::PanTiltCommand_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<br2_tracking_msgs::msg::PanTiltCommand_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__br2_tracking_msgs__msg__PanTiltCommand
    std::shared_ptr<br2_tracking_msgs::msg::PanTiltCommand_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__br2_tracking_msgs__msg__PanTiltCommand
    std::shared_ptr<br2_tracking_msgs::msg::PanTiltCommand_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PanTiltCommand_ & other) const
  {
    if (this->pan != other.pan) {
      return false;
    }
    if (this->tilt != other.tilt) {
      return false;
    }
    return true;
  }
  bool operator!=(const PanTiltCommand_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PanTiltCommand_

// alias to use template instance with default allocator
using PanTiltCommand =
  br2_tracking_msgs::msg::PanTiltCommand_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace br2_tracking_msgs

#endif  // BR2_TRACKING_MSGS__MSG__DETAIL__PAN_TILT_COMMAND__STRUCT_HPP_
