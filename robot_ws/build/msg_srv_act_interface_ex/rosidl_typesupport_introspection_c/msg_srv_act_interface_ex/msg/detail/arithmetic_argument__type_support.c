// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from msg_srv_act_interface_ex:msg/ArithmeticArgument.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "msg_srv_act_interface_ex/msg/detail/arithmetic_argument__rosidl_typesupport_introspection_c.h"
#include "msg_srv_act_interface_ex/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "msg_srv_act_interface_ex/msg/detail/arithmetic_argument__functions.h"
#include "msg_srv_act_interface_ex/msg/detail/arithmetic_argument__struct.h"


// Include directives for member types
// Member `stamp`
#include "builtin_interfaces/msg/time.h"
// Member `stamp`
#include "builtin_interfaces/msg/detail/time__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void msg_srv_act_interface_ex__msg__ArithmeticArgument__rosidl_typesupport_introspection_c__ArithmeticArgument_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  msg_srv_act_interface_ex__msg__ArithmeticArgument__init(message_memory);
}

void msg_srv_act_interface_ex__msg__ArithmeticArgument__rosidl_typesupport_introspection_c__ArithmeticArgument_fini_function(void * message_memory)
{
  msg_srv_act_interface_ex__msg__ArithmeticArgument__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember msg_srv_act_interface_ex__msg__ArithmeticArgument__rosidl_typesupport_introspection_c__ArithmeticArgument_message_member_array[3] = {
  {
    "stamp",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(msg_srv_act_interface_ex__msg__ArithmeticArgument, stamp),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "argument_a",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(msg_srv_act_interface_ex__msg__ArithmeticArgument, argument_a),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "argument_b",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(msg_srv_act_interface_ex__msg__ArithmeticArgument, argument_b),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers msg_srv_act_interface_ex__msg__ArithmeticArgument__rosidl_typesupport_introspection_c__ArithmeticArgument_message_members = {
  "msg_srv_act_interface_ex__msg",  // message namespace
  "ArithmeticArgument",  // message name
  3,  // number of fields
  sizeof(msg_srv_act_interface_ex__msg__ArithmeticArgument),
  msg_srv_act_interface_ex__msg__ArithmeticArgument__rosidl_typesupport_introspection_c__ArithmeticArgument_message_member_array,  // message members
  msg_srv_act_interface_ex__msg__ArithmeticArgument__rosidl_typesupport_introspection_c__ArithmeticArgument_init_function,  // function to initialize message memory (memory has to be allocated)
  msg_srv_act_interface_ex__msg__ArithmeticArgument__rosidl_typesupport_introspection_c__ArithmeticArgument_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t msg_srv_act_interface_ex__msg__ArithmeticArgument__rosidl_typesupport_introspection_c__ArithmeticArgument_message_type_support_handle = {
  0,
  &msg_srv_act_interface_ex__msg__ArithmeticArgument__rosidl_typesupport_introspection_c__ArithmeticArgument_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_msg_srv_act_interface_ex
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, msg_srv_act_interface_ex, msg, ArithmeticArgument)() {
  msg_srv_act_interface_ex__msg__ArithmeticArgument__rosidl_typesupport_introspection_c__ArithmeticArgument_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, builtin_interfaces, msg, Time)();
  if (!msg_srv_act_interface_ex__msg__ArithmeticArgument__rosidl_typesupport_introspection_c__ArithmeticArgument_message_type_support_handle.typesupport_identifier) {
    msg_srv_act_interface_ex__msg__ArithmeticArgument__rosidl_typesupport_introspection_c__ArithmeticArgument_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &msg_srv_act_interface_ex__msg__ArithmeticArgument__rosidl_typesupport_introspection_c__ArithmeticArgument_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
