// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from msg_srv_act_interface_ex:srv/ArithmeticOperator.idl
// generated code does not contain a copyright notice

#ifndef MSG_SRV_ACT_INTERFACE_EX__SRV__DETAIL__ARITHMETIC_OPERATOR__STRUCT_HPP_
#define MSG_SRV_ACT_INTERFACE_EX__SRV__DETAIL__ARITHMETIC_OPERATOR__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__msg_srv_act_interface_ex__srv__ArithmeticOperator_Request __attribute__((deprecated))
#else
# define DEPRECATED__msg_srv_act_interface_ex__srv__ArithmeticOperator_Request __declspec(deprecated)
#endif

namespace msg_srv_act_interface_ex
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct ArithmeticOperator_Request_
{
  using Type = ArithmeticOperator_Request_<ContainerAllocator>;

  explicit ArithmeticOperator_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->arithmetic_operator = 0;
    }
  }

  explicit ArithmeticOperator_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->arithmetic_operator = 0;
    }
  }

  // field types and members
  using _arithmetic_operator_type =
    int8_t;
  _arithmetic_operator_type arithmetic_operator;

  // setters for named parameter idiom
  Type & set__arithmetic_operator(
    const int8_t & _arg)
  {
    this->arithmetic_operator = _arg;
    return *this;
  }

  // constant declarations
  static constexpr int8_t PLUS =
    1;
  static constexpr int8_t MINUS =
    2;
  static constexpr int8_t MULTIPLY =
    3;
  static constexpr int8_t DIVISION =
    4;

  // pointer types
  using RawPtr =
    msg_srv_act_interface_ex::srv::ArithmeticOperator_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const msg_srv_act_interface_ex::srv::ArithmeticOperator_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<msg_srv_act_interface_ex::srv::ArithmeticOperator_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<msg_srv_act_interface_ex::srv::ArithmeticOperator_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      msg_srv_act_interface_ex::srv::ArithmeticOperator_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<msg_srv_act_interface_ex::srv::ArithmeticOperator_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      msg_srv_act_interface_ex::srv::ArithmeticOperator_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<msg_srv_act_interface_ex::srv::ArithmeticOperator_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<msg_srv_act_interface_ex::srv::ArithmeticOperator_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<msg_srv_act_interface_ex::srv::ArithmeticOperator_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__msg_srv_act_interface_ex__srv__ArithmeticOperator_Request
    std::shared_ptr<msg_srv_act_interface_ex::srv::ArithmeticOperator_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__msg_srv_act_interface_ex__srv__ArithmeticOperator_Request
    std::shared_ptr<msg_srv_act_interface_ex::srv::ArithmeticOperator_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ArithmeticOperator_Request_ & other) const
  {
    if (this->arithmetic_operator != other.arithmetic_operator) {
      return false;
    }
    return true;
  }
  bool operator!=(const ArithmeticOperator_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ArithmeticOperator_Request_

// alias to use template instance with default allocator
using ArithmeticOperator_Request =
  msg_srv_act_interface_ex::srv::ArithmeticOperator_Request_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t ArithmeticOperator_Request_<ContainerAllocator>::PLUS;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t ArithmeticOperator_Request_<ContainerAllocator>::MINUS;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t ArithmeticOperator_Request_<ContainerAllocator>::MULTIPLY;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t ArithmeticOperator_Request_<ContainerAllocator>::DIVISION;
#endif  // __cplusplus < 201703L

}  // namespace srv

}  // namespace msg_srv_act_interface_ex


#ifndef _WIN32
# define DEPRECATED__msg_srv_act_interface_ex__srv__ArithmeticOperator_Response __attribute__((deprecated))
#else
# define DEPRECATED__msg_srv_act_interface_ex__srv__ArithmeticOperator_Response __declspec(deprecated)
#endif

namespace msg_srv_act_interface_ex
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct ArithmeticOperator_Response_
{
  using Type = ArithmeticOperator_Response_<ContainerAllocator>;

  explicit ArithmeticOperator_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->arithmetic_result = 0.0f;
    }
  }

  explicit ArithmeticOperator_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->arithmetic_result = 0.0f;
    }
  }

  // field types and members
  using _arithmetic_result_type =
    float;
  _arithmetic_result_type arithmetic_result;

  // setters for named parameter idiom
  Type & set__arithmetic_result(
    const float & _arg)
  {
    this->arithmetic_result = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    msg_srv_act_interface_ex::srv::ArithmeticOperator_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const msg_srv_act_interface_ex::srv::ArithmeticOperator_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<msg_srv_act_interface_ex::srv::ArithmeticOperator_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<msg_srv_act_interface_ex::srv::ArithmeticOperator_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      msg_srv_act_interface_ex::srv::ArithmeticOperator_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<msg_srv_act_interface_ex::srv::ArithmeticOperator_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      msg_srv_act_interface_ex::srv::ArithmeticOperator_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<msg_srv_act_interface_ex::srv::ArithmeticOperator_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<msg_srv_act_interface_ex::srv::ArithmeticOperator_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<msg_srv_act_interface_ex::srv::ArithmeticOperator_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__msg_srv_act_interface_ex__srv__ArithmeticOperator_Response
    std::shared_ptr<msg_srv_act_interface_ex::srv::ArithmeticOperator_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__msg_srv_act_interface_ex__srv__ArithmeticOperator_Response
    std::shared_ptr<msg_srv_act_interface_ex::srv::ArithmeticOperator_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ArithmeticOperator_Response_ & other) const
  {
    if (this->arithmetic_result != other.arithmetic_result) {
      return false;
    }
    return true;
  }
  bool operator!=(const ArithmeticOperator_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ArithmeticOperator_Response_

// alias to use template instance with default allocator
using ArithmeticOperator_Response =
  msg_srv_act_interface_ex::srv::ArithmeticOperator_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace msg_srv_act_interface_ex

namespace msg_srv_act_interface_ex
{

namespace srv
{

struct ArithmeticOperator
{
  using Request = msg_srv_act_interface_ex::srv::ArithmeticOperator_Request;
  using Response = msg_srv_act_interface_ex::srv::ArithmeticOperator_Response;
};

}  // namespace srv

}  // namespace msg_srv_act_interface_ex

#endif  // MSG_SRV_ACT_INTERFACE_EX__SRV__DETAIL__ARITHMETIC_OPERATOR__STRUCT_HPP_
