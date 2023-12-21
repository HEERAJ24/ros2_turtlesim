// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from msg_interface:srv/SetLed.idl
// generated code does not contain a copyright notice

#ifndef MSG_INTERFACE__SRV__DETAIL__SET_LED__BUILDER_HPP_
#define MSG_INTERFACE__SRV__DETAIL__SET_LED__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "msg_interface/srv/detail/set_led__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace msg_interface
{

namespace srv
{

namespace builder
{

class Init_SetLed_Request_state
{
public:
  explicit Init_SetLed_Request_state(::msg_interface::srv::SetLed_Request & msg)
  : msg_(msg)
  {}
  ::msg_interface::srv::SetLed_Request state(::msg_interface::srv::SetLed_Request::_state_type arg)
  {
    msg_.state = std::move(arg);
    return std::move(msg_);
  }

private:
  ::msg_interface::srv::SetLed_Request msg_;
};

class Init_SetLed_Request_ledno
{
public:
  Init_SetLed_Request_ledno()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SetLed_Request_state ledno(::msg_interface::srv::SetLed_Request::_ledno_type arg)
  {
    msg_.ledno = std::move(arg);
    return Init_SetLed_Request_state(msg_);
  }

private:
  ::msg_interface::srv::SetLed_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::msg_interface::srv::SetLed_Request>()
{
  return msg_interface::srv::builder::Init_SetLed_Request_ledno();
}

}  // namespace msg_interface


namespace msg_interface
{

namespace srv
{

namespace builder
{

class Init_SetLed_Response_success
{
public:
  Init_SetLed_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::msg_interface::srv::SetLed_Response success(::msg_interface::srv::SetLed_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return std::move(msg_);
  }

private:
  ::msg_interface::srv::SetLed_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::msg_interface::srv::SetLed_Response>()
{
  return msg_interface::srv::builder::Init_SetLed_Response_success();
}

}  // namespace msg_interface

#endif  // MSG_INTERFACE__SRV__DETAIL__SET_LED__BUILDER_HPP_
