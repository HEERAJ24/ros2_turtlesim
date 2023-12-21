// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from msg_interface:msg/HardwareStatus.idl
// generated code does not contain a copyright notice

#ifndef MSG_INTERFACE__MSG__DETAIL__HARDWARE_STATUS__TRAITS_HPP_
#define MSG_INTERFACE__MSG__DETAIL__HARDWARE_STATUS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "msg_interface/msg/detail/hardware_status__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace msg_interface
{

namespace msg
{

inline void to_flow_style_yaml(
  const HardwareStatus & msg,
  std::ostream & out)
{
  out << "{";
  // member: temp
  {
    out << "temp: ";
    rosidl_generator_traits::value_to_yaml(msg.temp, out);
    out << ", ";
  }

  // member: motors_ready
  {
    out << "motors_ready: ";
    rosidl_generator_traits::value_to_yaml(msg.motors_ready, out);
    out << ", ";
  }

  // member: debug_msg
  {
    out << "debug_msg: ";
    rosidl_generator_traits::value_to_yaml(msg.debug_msg, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const HardwareStatus & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: temp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "temp: ";
    rosidl_generator_traits::value_to_yaml(msg.temp, out);
    out << "\n";
  }

  // member: motors_ready
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "motors_ready: ";
    rosidl_generator_traits::value_to_yaml(msg.motors_ready, out);
    out << "\n";
  }

  // member: debug_msg
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "debug_msg: ";
    rosidl_generator_traits::value_to_yaml(msg.debug_msg, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const HardwareStatus & msg, bool use_flow_style = false)
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
  const msg_interface::msg::HardwareStatus & msg,
  std::ostream & out, size_t indentation = 0)
{
  msg_interface::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use msg_interface::msg::to_yaml() instead")]]
inline std::string to_yaml(const msg_interface::msg::HardwareStatus & msg)
{
  return msg_interface::msg::to_yaml(msg);
}

template<>
inline const char * data_type<msg_interface::msg::HardwareStatus>()
{
  return "msg_interface::msg::HardwareStatus";
}

template<>
inline const char * name<msg_interface::msg::HardwareStatus>()
{
  return "msg_interface/msg/HardwareStatus";
}

template<>
struct has_fixed_size<msg_interface::msg::HardwareStatus>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<msg_interface::msg::HardwareStatus>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<msg_interface::msg::HardwareStatus>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MSG_INTERFACE__MSG__DETAIL__HARDWARE_STATUS__TRAITS_HPP_
