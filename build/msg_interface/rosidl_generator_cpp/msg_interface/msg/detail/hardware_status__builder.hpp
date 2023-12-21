// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from msg_interface:msg/HardwareStatus.idl
// generated code does not contain a copyright notice

#ifndef MSG_INTERFACE__MSG__DETAIL__HARDWARE_STATUS__BUILDER_HPP_
#define MSG_INTERFACE__MSG__DETAIL__HARDWARE_STATUS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "msg_interface/msg/detail/hardware_status__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace msg_interface
{

namespace msg
{

namespace builder
{

class Init_HardwareStatus_debug_msg
{
public:
  explicit Init_HardwareStatus_debug_msg(::msg_interface::msg::HardwareStatus & msg)
  : msg_(msg)
  {}
  ::msg_interface::msg::HardwareStatus debug_msg(::msg_interface::msg::HardwareStatus::_debug_msg_type arg)
  {
    msg_.debug_msg = std::move(arg);
    return std::move(msg_);
  }

private:
  ::msg_interface::msg::HardwareStatus msg_;
};

class Init_HardwareStatus_motors_ready
{
public:
  explicit Init_HardwareStatus_motors_ready(::msg_interface::msg::HardwareStatus & msg)
  : msg_(msg)
  {}
  Init_HardwareStatus_debug_msg motors_ready(::msg_interface::msg::HardwareStatus::_motors_ready_type arg)
  {
    msg_.motors_ready = std::move(arg);
    return Init_HardwareStatus_debug_msg(msg_);
  }

private:
  ::msg_interface::msg::HardwareStatus msg_;
};

class Init_HardwareStatus_temp
{
public:
  Init_HardwareStatus_temp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_HardwareStatus_motors_ready temp(::msg_interface::msg::HardwareStatus::_temp_type arg)
  {
    msg_.temp = std::move(arg);
    return Init_HardwareStatus_motors_ready(msg_);
  }

private:
  ::msg_interface::msg::HardwareStatus msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::msg_interface::msg::HardwareStatus>()
{
  return msg_interface::msg::builder::Init_HardwareStatus_temp();
}

}  // namespace msg_interface

#endif  // MSG_INTERFACE__MSG__DETAIL__HARDWARE_STATUS__BUILDER_HPP_
