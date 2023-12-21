// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from msg_interface:srv/SetLed.idl
// generated code does not contain a copyright notice

#ifndef MSG_INTERFACE__SRV__DETAIL__SET_LED__STRUCT_H_
#define MSG_INTERFACE__SRV__DETAIL__SET_LED__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'state'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/SetLed in the package msg_interface.
typedef struct msg_interface__srv__SetLed_Request
{
  int64_t ledno;
  rosidl_runtime_c__String state;
} msg_interface__srv__SetLed_Request;

// Struct for a sequence of msg_interface__srv__SetLed_Request.
typedef struct msg_interface__srv__SetLed_Request__Sequence
{
  msg_interface__srv__SetLed_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} msg_interface__srv__SetLed_Request__Sequence;


// Constants defined in the message

/// Struct defined in srv/SetLed in the package msg_interface.
typedef struct msg_interface__srv__SetLed_Response
{
  bool success;
} msg_interface__srv__SetLed_Response;

// Struct for a sequence of msg_interface__srv__SetLed_Response.
typedef struct msg_interface__srv__SetLed_Response__Sequence
{
  msg_interface__srv__SetLed_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} msg_interface__srv__SetLed_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MSG_INTERFACE__SRV__DETAIL__SET_LED__STRUCT_H_
