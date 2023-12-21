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

class Init_LedStates_led3
{
public:
  explicit Init_LedStates_led3(::msg_interface::msg::LedStates & msg)
  : msg_(msg)
  {}
  ::msg_interface::msg::LedStates led3(::msg_interface::msg::LedStates::_led3_type arg)
  {
    msg_.led3 = std::move(arg);
    return std::move(msg_);
  }

private:
  ::msg_interface::msg::LedStates msg_;
};

class Init_LedStates_led2
{
public:
  explicit Init_LedStates_led2(::msg_interface::msg::LedStates & msg)
  : msg_(msg)
  {}
  Init_LedStates_led3 led2(::msg_interface::msg::LedStates::_led2_type arg)
  {
    msg_.led2 = std::move(arg);
    return Init_LedStates_led3(msg_);
  }

private:
  ::msg_interface::msg::LedStates msg_;
};

class Init_LedStates_led1
{
public:
  Init_LedStates_led1()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_LedStates_led2 led1(::msg_interface::msg::LedStates::_led1_type arg)
  {
    msg_.led1 = std::move(arg);
    return Init_LedStates_led2(msg_);
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
  return msg_interface::msg::builder::Init_LedStates_led1();
}

}  // namespace msg_interface

#endif  // MSG_INTERFACE__MSG__DETAIL__LED_STATES__BUILDER_HPP_
