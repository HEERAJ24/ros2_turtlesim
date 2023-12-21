// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from msg_interface:msg/LedStates.idl
// generated code does not contain a copyright notice

#ifndef MSG_INTERFACE__MSG__DETAIL__LED_STATES__STRUCT_HPP_
#define MSG_INTERFACE__MSG__DETAIL__LED_STATES__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__msg_interface__msg__LedStates __attribute__((deprecated))
#else
# define DEPRECATED__msg_interface__msg__LedStates __declspec(deprecated)
#endif

namespace msg_interface
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct LedStates_
{
  using Type = LedStates_<ContainerAllocator>;

  explicit LedStates_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->led = "";
    }
  }

  explicit LedStates_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : led(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->led = "";
    }
  }

  // field types and members
  using _led_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _led_type led;

  // setters for named parameter idiom
  Type & set__led(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->led = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    msg_interface::msg::LedStates_<ContainerAllocator> *;
  using ConstRawPtr =
    const msg_interface::msg::LedStates_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<msg_interface::msg::LedStates_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<msg_interface::msg::LedStates_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      msg_interface::msg::LedStates_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<msg_interface::msg::LedStates_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      msg_interface::msg::LedStates_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<msg_interface::msg::LedStates_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<msg_interface::msg::LedStates_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<msg_interface::msg::LedStates_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__msg_interface__msg__LedStates
    std::shared_ptr<msg_interface::msg::LedStates_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__msg_interface__msg__LedStates
    std::shared_ptr<msg_interface::msg::LedStates_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const LedStates_ & other) const
  {
    if (this->led != other.led) {
      return false;
    }
    return true;
  }
  bool operator!=(const LedStates_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct LedStates_

// alias to use template instance with default allocator
using LedStates =
  msg_interface::msg::LedStates_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace msg_interface

#endif  // MSG_INTERFACE__MSG__DETAIL__LED_STATES__STRUCT_HPP_
