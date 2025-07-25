// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from msg_srv_act_interface_ex:srv/ArithmeticOperator.idl
// generated code does not contain a copyright notice
#include "msg_srv_act_interface_ex/srv/detail/arithmetic_operator__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "msg_srv_act_interface_ex/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "msg_srv_act_interface_ex/srv/detail/arithmetic_operator__struct.h"
#include "msg_srv_act_interface_ex/srv/detail/arithmetic_operator__functions.h"
#include "fastcdr/Cdr.h"

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

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif


// forward declare type support functions


using _ArithmeticOperator_Request__ros_msg_type = msg_srv_act_interface_ex__srv__ArithmeticOperator_Request;

static bool _ArithmeticOperator_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _ArithmeticOperator_Request__ros_msg_type * ros_message = static_cast<const _ArithmeticOperator_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: arithmetic_operator
  {
    cdr << ros_message->arithmetic_operator;
  }

  return true;
}

static bool _ArithmeticOperator_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _ArithmeticOperator_Request__ros_msg_type * ros_message = static_cast<_ArithmeticOperator_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: arithmetic_operator
  {
    cdr >> ros_message->arithmetic_operator;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_msg_srv_act_interface_ex
size_t get_serialized_size_msg_srv_act_interface_ex__srv__ArithmeticOperator_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _ArithmeticOperator_Request__ros_msg_type * ros_message = static_cast<const _ArithmeticOperator_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name arithmetic_operator
  {
    size_t item_size = sizeof(ros_message->arithmetic_operator);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _ArithmeticOperator_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_msg_srv_act_interface_ex__srv__ArithmeticOperator_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_msg_srv_act_interface_ex
size_t max_serialized_size_msg_srv_act_interface_ex__srv__ArithmeticOperator_Request(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // member: arithmetic_operator
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = msg_srv_act_interface_ex__srv__ArithmeticOperator_Request;
    is_plain =
      (
      offsetof(DataType, arithmetic_operator) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _ArithmeticOperator_Request__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_msg_srv_act_interface_ex__srv__ArithmeticOperator_Request(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_ArithmeticOperator_Request = {
  "msg_srv_act_interface_ex::srv",
  "ArithmeticOperator_Request",
  _ArithmeticOperator_Request__cdr_serialize,
  _ArithmeticOperator_Request__cdr_deserialize,
  _ArithmeticOperator_Request__get_serialized_size,
  _ArithmeticOperator_Request__max_serialized_size
};

static rosidl_message_type_support_t _ArithmeticOperator_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_ArithmeticOperator_Request,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, msg_srv_act_interface_ex, srv, ArithmeticOperator_Request)() {
  return &_ArithmeticOperator_Request__type_support;
}

#if defined(__cplusplus)
}
#endif

// already included above
// #include <cassert>
// already included above
// #include <limits>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "msg_srv_act_interface_ex/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
// already included above
// #include "msg_srv_act_interface_ex/srv/detail/arithmetic_operator__struct.h"
// already included above
// #include "msg_srv_act_interface_ex/srv/detail/arithmetic_operator__functions.h"
// already included above
// #include "fastcdr/Cdr.h"

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

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif


// forward declare type support functions


using _ArithmeticOperator_Response__ros_msg_type = msg_srv_act_interface_ex__srv__ArithmeticOperator_Response;

static bool _ArithmeticOperator_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _ArithmeticOperator_Response__ros_msg_type * ros_message = static_cast<const _ArithmeticOperator_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: arithmetic_result
  {
    cdr << ros_message->arithmetic_result;
  }

  return true;
}

static bool _ArithmeticOperator_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _ArithmeticOperator_Response__ros_msg_type * ros_message = static_cast<_ArithmeticOperator_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: arithmetic_result
  {
    cdr >> ros_message->arithmetic_result;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_msg_srv_act_interface_ex
size_t get_serialized_size_msg_srv_act_interface_ex__srv__ArithmeticOperator_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _ArithmeticOperator_Response__ros_msg_type * ros_message = static_cast<const _ArithmeticOperator_Response__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name arithmetic_result
  {
    size_t item_size = sizeof(ros_message->arithmetic_result);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _ArithmeticOperator_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_msg_srv_act_interface_ex__srv__ArithmeticOperator_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_msg_srv_act_interface_ex
size_t max_serialized_size_msg_srv_act_interface_ex__srv__ArithmeticOperator_Response(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // member: arithmetic_result
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = msg_srv_act_interface_ex__srv__ArithmeticOperator_Response;
    is_plain =
      (
      offsetof(DataType, arithmetic_result) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _ArithmeticOperator_Response__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_msg_srv_act_interface_ex__srv__ArithmeticOperator_Response(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_ArithmeticOperator_Response = {
  "msg_srv_act_interface_ex::srv",
  "ArithmeticOperator_Response",
  _ArithmeticOperator_Response__cdr_serialize,
  _ArithmeticOperator_Response__cdr_deserialize,
  _ArithmeticOperator_Response__get_serialized_size,
  _ArithmeticOperator_Response__max_serialized_size
};

static rosidl_message_type_support_t _ArithmeticOperator_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_ArithmeticOperator_Response,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, msg_srv_act_interface_ex, srv, ArithmeticOperator_Response)() {
  return &_ArithmeticOperator_Response__type_support;
}

#if defined(__cplusplus)
}
#endif

#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "msg_srv_act_interface_ex/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "msg_srv_act_interface_ex/srv/arithmetic_operator.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t ArithmeticOperator__callbacks = {
  "msg_srv_act_interface_ex::srv",
  "ArithmeticOperator",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, msg_srv_act_interface_ex, srv, ArithmeticOperator_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, msg_srv_act_interface_ex, srv, ArithmeticOperator_Response)(),
};

static rosidl_service_type_support_t ArithmeticOperator__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &ArithmeticOperator__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, msg_srv_act_interface_ex, srv, ArithmeticOperator)() {
  return &ArithmeticOperator__handle;
}

#if defined(__cplusplus)
}
#endif
