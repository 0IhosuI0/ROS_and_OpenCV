// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from my_second_pkg_msgs:msg/CmdAndPoseVel.idl
// generated code does not contain a copyright notice

#ifndef MY_SECOND_PKG_MSGS__MSG__DETAIL__CMD_AND_POSE_VEL__STRUCT_H_
#define MY_SECOND_PKG_MSGS__MSG__DETAIL__CMD_AND_POSE_VEL__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/CmdAndPoseVel in the package my_second_pkg_msgs.
typedef struct my_second_pkg_msgs__msg__CmdAndPoseVel
{
  float cmd_vel_linear;
  float cmd_vel_angular;
  float pose_x;
  float pose_y;
  float linear_vel;
  float angular_vel;
} my_second_pkg_msgs__msg__CmdAndPoseVel;

// Struct for a sequence of my_second_pkg_msgs__msg__CmdAndPoseVel.
typedef struct my_second_pkg_msgs__msg__CmdAndPoseVel__Sequence
{
  my_second_pkg_msgs__msg__CmdAndPoseVel * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} my_second_pkg_msgs__msg__CmdAndPoseVel__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MY_SECOND_PKG_MSGS__MSG__DETAIL__CMD_AND_POSE_VEL__STRUCT_H_
