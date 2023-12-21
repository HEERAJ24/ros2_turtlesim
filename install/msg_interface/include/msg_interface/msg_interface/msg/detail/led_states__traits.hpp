// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from msg_interface:msg/LedStates.idl
// generated code does not contain a copyright notice

#ifndef MSG_INTERFACE__MSG__DETAIL__LED_STATES__TRAITS_HPP_
#define MSG_INTERFACE__MSG__DETAIL__LED_STATES__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "msg_interface/msg/detail/led_states__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace msg_interface
{

namespace msg
{

inline void to_flow_style_yaml(
  const LedStates & msg,
  std::ostream & out)
{
  out << "{";
  // member: led1
  {
    out << "led1: ";
    rosidl_generator_traits::value_to_yaml(msg.led1, out);
    out << ", ";
  }

  // member: led2
  {
    out << "led2: ";
    rosidl_generator_traits::value_to_yaml(msg.led2, out);
    out << ", ";
  }

  // member: led3
  {
    out << "led3: ";
    rosidl_generator_traits::value_to_yaml(msg.led3, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const LedStates & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: led1
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "led1: ";
    rosidl_generator_traits::value_to_yaml(msg.led1, out);
    out << "\n";
  }

  // member: led2
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "led2: ";
    rosidl_generator_traits::value_to_yaml(msg.led2, out);
    out << "\n";
  }

  // member: led3
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "led3: ";
    rosidl_generator_traits::value_to_yaml(msg.led3, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const LedStates & msg, bool use_flow_style = false)
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

}  // namespace msg_interface

namespace rosidl_generator_traits
{

[[deprecated("use msg_interface::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const msg_interface::msg::LedStates & msg,
  std::ostream & out, size_t indentation = 0)
{
  msg_interface::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use msg_interface::msg::to_yaml() instead")]]
inline std::string to_yaml(const msg_interface::msg::LedStates & msg)
{
  return msg_interface::msg::to_yaml(msg);
}

template<>
inline const char * data_type<msg_interface::msg::LedStates>()
{
  return "msg_interface::msg::LedStates";
}

template<>
inline const char * name<msg_interface::msg::LedStates>()
{
  return "msg_interface/msg/LedStates";
}

template<>
struct has_fixed_size<msg_interface::msg::LedStates>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<msg_interface::msg::LedStates>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<msg_interface::msg::LedStates>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MSG_INTERFACE__MSG__DETAIL__LED_STATES__TRAITS_HPP_
