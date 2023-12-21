// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from msg_interface:srv/SetLed.idl
// generated code does not contain a copyright notice

#ifndef MSG_INTERFACE__SRV__DETAIL__SET_LED__TRAITS_HPP_
#define MSG_INTERFACE__SRV__DETAIL__SET_LED__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "msg_interface/srv/detail/set_led__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace msg_interface
{

namespace srv
{

inline void to_flow_style_yaml(
  const SetLed_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: ledno
  {
    out << "ledno: ";
    rosidl_generator_traits::value_to_yaml(msg.ledno, out);
    out << ", ";
  }

  // member: state
  {
    out << "state: ";
    rosidl_generator_traits::value_to_yaml(msg.state, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SetLed_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: ledno
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ledno: ";
    rosidl_generator_traits::value_to_yaml(msg.ledno, out);
    out << "\n";
  }

  // member: state
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "state: ";
    rosidl_generator_traits::value_to_yaml(msg.state, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SetLed_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace msg_interface

namespace rosidl_generator_traits
{

[[deprecated("use msg_interface::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const msg_interface::srv::SetLed_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  msg_interface::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use msg_interface::srv::to_yaml() instead")]]
inline std::string to_yaml(const msg_interface::srv::SetLed_Request & msg)
{
  return msg_interface::srv::to_yaml(msg);
}

template<>
inline const char * data_type<msg_interface::srv::SetLed_Request>()
{
  return "msg_interface::srv::SetLed_Request";
}

template<>
inline const char * name<msg_interface::srv::SetLed_Request>()
{
  return "msg_interface/srv/SetLed_Request";
}

template<>
struct has_fixed_size<msg_interface::srv::SetLed_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<msg_interface::srv::SetLed_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<msg_interface::srv::SetLed_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace msg_interface
{

namespace srv
{

inline void to_flow_style_yaml(
  const SetLed_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: success
  {
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SetLed_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: success
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SetLed_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace msg_interface

namespace rosidl_generator_traits
{

[[deprecated("use msg_interface::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const msg_interface::srv::SetLed_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  msg_interface::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use msg_interface::srv::to_yaml() instead")]]
inline std::string to_yaml(const msg_interface::srv::SetLed_Response & msg)
{
  return msg_interface::srv::to_yaml(msg);
}

template<>
inline const char * data_type<msg_interface::srv::SetLed_Response>()
{
  return "msg_interface::srv::SetLed_Response";
}

template<>
inline const char * name<msg_interface::srv::SetLed_Response>()
{
  return "msg_interface/srv/SetLed_Response";
}

template<>
struct has_fixed_size<msg_interface::srv::SetLed_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<msg_interface::srv::SetLed_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<msg_interface::srv::SetLed_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<msg_interface::srv::SetLed>()
{
  return "msg_interface::srv::SetLed";
}

template<>
inline const char * name<msg_interface::srv::SetLed>()
{
  return "msg_interface/srv/SetLed";
}

template<>
struct has_fixed_size<msg_interface::srv::SetLed>
  : std::integral_constant<
    bool,
    has_fixed_size<msg_interface::srv::SetLed_Request>::value &&
    has_fixed_size<msg_interface::srv::SetLed_Response>::value
  >
{
};

template<>
struct has_bounded_size<msg_interface::srv::SetLed>
  : std::integral_constant<
    bool,
    has_bounded_size<msg_interface::srv::SetLed_Request>::value &&
    has_bounded_size<msg_interface::srv::SetLed_Response>::value
  >
{
};

template<>
struct is_service<msg_interface::srv::SetLed>
  : std::true_type
{
};

template<>
struct is_service_request<msg_interface::srv::SetLed_Request>
  : std::true_type
{
};

template<>
struct is_service_response<msg_interface::srv::SetLed_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // MSG_INTERFACE__SRV__DETAIL__SET_LED__TRAITS_HPP_
