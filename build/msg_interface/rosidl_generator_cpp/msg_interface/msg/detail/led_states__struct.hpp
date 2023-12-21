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
      this->led1 = 0ll;
      this->led2 = 0ll;
      this->led3 = 0ll;
    }
  }

  explicit LedStates_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->led1 = 0ll;
      this->led2 = 0ll;
      this->led3 = 0ll;
    }
  }

  // field types and members
  using _led1_type =
    int64_t;
  _led1_type led1;
  using _led2_type =
    int64_t;
  _led2_type led2;
  using _led3_type =
    int64_t;
  _led3_type led3;

  // setters for named parameter idiom
  Type & set__led1(
    const int64_t & _arg)
  {
    this->led1 = _arg;
    return *this;
  }
  Type & set__led2(
    const int64_t & _arg)
  {
    this->led2 = _arg;
    return *this;
  }
  Type & set__led3(
    const int64_t & _arg)
  {
    this->led3 = _arg;
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
    if (this->led1 != other.led1) {
      return false;
    }
    if (this->led2 != other.led2) {
      return false;
    }
    if (this->led3 != other.led3) {
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
