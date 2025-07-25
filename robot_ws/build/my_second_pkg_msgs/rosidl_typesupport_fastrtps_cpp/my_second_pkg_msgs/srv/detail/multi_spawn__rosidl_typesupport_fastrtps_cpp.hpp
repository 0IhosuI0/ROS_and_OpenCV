// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__rosidl_typesupport_fastrtps_cpp.hpp.em
// with input from my_second_pkg_msgs:srv/MultiSpawn.idl
// generated code does not contain a copyright notice

#ifndef MY_SECOND_PKG_MSGS__SRV__DETAIL__MULTI_SPAWN__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
#define MY_SECOND_PKG_MSGS__SRV__DETAIL__MULTI_SPAWN__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_

#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "my_second_pkg_msgs/msg/rosidl_typesupport_fastrtps_cpp__visibility_control.h"
#include "my_second_pkg_msgs/srv/detail/multi_spawn__struct.hpp"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

#include "fastcdr/Cdr.h"

namespace my_second_pkg_msgs
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_my_second_pkg_msgs
cdr_serialize(
  const my_second_pkg_msgs::srv::MultiSpawn_Request & ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_my_second_pkg_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  my_second_pkg_msgs::srv::MultiSpawn_Request & ros_message);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_my_second_pkg_msgs
get_serialized_size(
  const my_second_pkg_msgs::srv::MultiSpawn_Request & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_my_second_pkg_msgs
max_serialized_size_MultiSpawn_Request(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace my_second_pkg_msgs

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_my_second_pkg_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, my_second_pkg_msgs, srv, MultiSpawn_Request)();

#ifdef __cplusplus
}
#endif

// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "my_second_pkg_msgs/msg/rosidl_typesupport_fastrtps_cpp__visibility_control.h"
// already included above
// #include "my_second_pkg_msgs/srv/detail/multi_spawn__struct.hpp"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// already included above
// #include "fastcdr/Cdr.h"

namespace my_second_pkg_msgs
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_my_second_pkg_msgs
cdr_serialize(
  const my_second_pkg_msgs::srv::MultiSpawn_Response & ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_my_second_pkg_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  my_second_pkg_msgs::srv::MultiSpawn_Response & ros_message);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_my_second_pkg_msgs
get_serialized_size(
  const my_second_pkg_msgs::srv::MultiSpawn_Response & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_my_second_pkg_msgs
max_serialized_size_MultiSpawn_Response(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace my_second_pkg_msgs

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_my_second_pkg_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, my_second_pkg_msgs, srv, MultiSpawn_Response)();

#ifdef __cplusplus
}
#endif

#include "rmw/types.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "my_second_pkg_msgs/msg/rosidl_typesupport_fastrtps_cpp__visibility_control.h"

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_my_second_pkg_msgs
const rosidl_service_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, my_second_pkg_msgs, srv, MultiSpawn)();

#ifdef __cplusplus
}
#endif

#endif  // MY_SECOND_PKG_MSGS__SRV__DETAIL__MULTI_SPAWN__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
