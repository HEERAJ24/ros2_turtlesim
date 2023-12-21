// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from msg_interface:msg/LedStates.idl
// generated code does not contain a copyright notice

#ifndef MSG_INTERFACE__MSG__DETAIL__LED_STATES__BUILDER_HPP_
#define MSG_INTERFACE__MSG__DETAIL__LED_STATES__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "msg_interface/msg/detail/led_states__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace msg_interface
{

namespace msg
{

namespace builder
{

class Init_LedStates_led
{
public:
  Init_LedStates_led()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::msg_interface::msg::LedStates led(::msg_interface::msg::LedStates::_led_type arg)
  {
    msg_.led = std::move(arg);
    return std::move(msg_);
  }

private:
  ::msg_interface::msg::LedStates msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::msg_interface::msg::LedStates>()
{
  return msg_interface::msg::builder::Init_LedStates_led();
}

}  // namespace msg_interface

#endif  // MSG_INTERFACE__MSG__DETAIL__LED_STATES__BUILDER_HPP_
