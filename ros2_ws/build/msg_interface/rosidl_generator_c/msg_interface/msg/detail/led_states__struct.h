// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from msg_interface:msg/LedStates.idl
// generated code does not contain a copyright notice

#ifndef MSG_INTERFACE__MSG__DETAIL__LED_STATES__STRUCT_H_
#define MSG_INTERFACE__MSG__DETAIL__LED_STATES__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'led'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/LedStates in the package msg_interface.
typedef struct msg_interface__msg__LedStates
{
  rosidl_runtime_c__String led;
} msg_interface__msg__LedStates;

// Struct for a sequence of msg_interface__msg__LedStates.
typedef struct msg_interface__msg__LedStates__Sequence
{
  msg_interface__msg__LedStates * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} msg_interface__msg__LedStates__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MSG_INTERFACE__MSG__DETAIL__LED_STATES__STRUCT_H_
