// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from my_second_pkg_msgs:msg/CmdAndPoseVel.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "my_second_pkg_msgs/msg/detail/cmd_and_pose_vel__rosidl_typesupport_introspection_c.h"
#include "my_second_pkg_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "my_second_pkg_msgs/msg/detail/cmd_and_pose_vel__functions.h"
#include "my_second_pkg_msgs/msg/detail/cmd_and_pose_vel__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void my_second_pkg_msgs__msg__CmdAndPoseVel__rosidl_typesupport_introspection_c__CmdAndPoseVel_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  my_second_pkg_msgs__msg__CmdAndPoseVel__init(message_memory);
}

void my_second_pkg_msgs__msg__CmdAndPoseVel__rosidl_typesupport_introspection_c__CmdAndPoseVel_fini_function(void * message_memory)
{
  my_second_pkg_msgs__msg__CmdAndPoseVel__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember my_second_pkg_msgs__msg__CmdAndPoseVel__rosidl_typesupport_introspection_c__CmdAndPoseVel_message_member_array[6] = {
  {
    "cmd_vel_linear",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(my_second_pkg_msgs__msg__CmdAndPoseVel, cmd_vel_linear),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "cmd_vel_angular",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(my_second_pkg_msgs__msg__CmdAndPoseVel, cmd_vel_angular),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "pose_x",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(my_second_pkg_msgs__msg__CmdAndPoseVel, pose_x),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "pose_y",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(my_second_pkg_msgs__msg__CmdAndPoseVel, pose_y),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "linear_vel",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(my_second_pkg_msgs__msg__CmdAndPoseVel, linear_vel),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "angular_vel",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(my_second_pkg_msgs__msg__CmdAndPoseVel, angular_vel),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers my_second_pkg_msgs__msg__CmdAndPoseVel__rosidl_typesupport_introspection_c__CmdAndPoseVel_message_members = {
  "my_second_pkg_msgs__msg",  // message namespace
  "CmdAndPoseVel",  // message name
  6,  // number of fields
  sizeof(my_second_pkg_msgs__msg__CmdAndPoseVel),
  my_second_pkg_msgs__msg__CmdAndPoseVel__rosidl_typesupport_introspection_c__CmdAndPoseVel_message_member_array,  // message members
  my_second_pkg_msgs__msg__CmdAndPoseVel__rosidl_typesupport_introspection_c__CmdAndPoseVel_init_function,  // function to initialize message memory (memory has to be allocated)
  my_second_pkg_msgs__msg__CmdAndPoseVel__rosidl_typesupport_introspection_c__CmdAndPoseVel_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t my_second_pkg_msgs__msg__CmdAndPoseVel__rosidl_typesupport_introspection_c__CmdAndPoseVel_message_type_support_handle = {
  0,
  &my_second_pkg_msgs__msg__CmdAndPoseVel__rosidl_typesupport_introspection_c__CmdAndPoseVel_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_my_second_pkg_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, my_second_pkg_msgs, msg, CmdAndPoseVel)() {
  if (!my_second_pkg_msgs__msg__CmdAndPoseVel__rosidl_typesupport_introspection_c__CmdAndPoseVel_message_type_support_handle.typesupport_identifier) {
    my_second_pkg_msgs__msg__CmdAndPoseVel__rosidl_typesupport_introspection_c__CmdAndPoseVel_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &my_second_pkg_msgs__msg__CmdAndPoseVel__rosidl_typesupport_introspection_c__CmdAndPoseVel_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
