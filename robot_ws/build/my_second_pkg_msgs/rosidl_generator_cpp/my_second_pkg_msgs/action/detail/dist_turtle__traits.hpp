// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from my_second_pkg_msgs:action/DistTurtle.idl
// generated code does not contain a copyright notice

#ifndef MY_SECOND_PKG_MSGS__ACTION__DETAIL__DIST_TURTLE__TRAITS_HPP_
#define MY_SECOND_PKG_MSGS__ACTION__DETAIL__DIST_TURTLE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "my_second_pkg_msgs/action/detail/dist_turtle__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace my_second_pkg_msgs
{

namespace action
{

inline void to_flow_style_yaml(
  const DistTurtle_Goal & msg,
  std::ostream & out)
{
  out << "{";
  // member: linear_x
  {
    out << "linear_x: ";
    rosidl_generator_traits::value_to_yaml(msg.linear_x, out);
    out << ", ";
  }

  // member: angular_z
  {
    out << "angular_z: ";
    rosidl_generator_traits::value_to_yaml(msg.angular_z, out);
    out << ", ";
  }

  // member: dist
  {
    out << "dist: ";
    rosidl_generator_traits::value_to_yaml(msg.dist, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const DistTurtle_Goal & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: linear_x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "linear_x: ";
    rosidl_generator_traits::value_to_yaml(msg.linear_x, out);
    out << "\n";
  }

  // member: angular_z
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "angular_z: ";
    rosidl_generator_traits::value_to_yaml(msg.angular_z, out);
    out << "\n";
  }

  // member: dist
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "dist: ";
    rosidl_generator_traits::value_to_yaml(msg.dist, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const DistTurtle_Goal & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace my_second_pkg_msgs

namespace rosidl_generator_traits
{

[[deprecated("use my_second_pkg_msgs::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const my_second_pkg_msgs::action::DistTurtle_Goal & msg,
  std::ostream & out, size_t indentation = 0)
{
  my_second_pkg_msgs::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use my_second_pkg_msgs::action::to_yaml() instead")]]
inline std::string to_yaml(const my_second_pkg_msgs::action::DistTurtle_Goal & msg)
{
  return my_second_pkg_msgs::action::to_yaml(msg);
}

template<>
inline const char * data_type<my_second_pkg_msgs::action::DistTurtle_Goal>()
{
  return "my_second_pkg_msgs::action::DistTurtle_Goal";
}

template<>
inline const char * name<my_second_pkg_msgs::action::DistTurtle_Goal>()
{
  return "my_second_pkg_msgs/action/DistTurtle_Goal";
}

template<>
struct has_fixed_size<my_second_pkg_msgs::action::DistTurtle_Goal>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<my_second_pkg_msgs::action::DistTurtle_Goal>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<my_second_pkg_msgs::action::DistTurtle_Goal>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace my_second_pkg_msgs
{

namespace action
{

inline void to_flow_style_yaml(
  const DistTurtle_Result & msg,
  std::ostream & out)
{
  out << "{";
  // member: pos_x
  {
    out << "pos_x: ";
    rosidl_generator_traits::value_to_yaml(msg.pos_x, out);
    out << ", ";
  }

  // member: pos_y
  {
    out << "pos_y: ";
    rosidl_generator_traits::value_to_yaml(msg.pos_y, out);
    out << ", ";
  }

  // member: pos_theta
  {
    out << "pos_theta: ";
    rosidl_generator_traits::value_to_yaml(msg.pos_theta, out);
    out << ", ";
  }

  // member: result_dist
  {
    out << "result_dist: ";
    rosidl_generator_traits::value_to_yaml(msg.result_dist, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const DistTurtle_Result & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: pos_x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pos_x: ";
    rosidl_generator_traits::value_to_yaml(msg.pos_x, out);
    out << "\n";
  }

  // member: pos_y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pos_y: ";
    rosidl_generator_traits::value_to_yaml(msg.pos_y, out);
    out << "\n";
  }

  // member: pos_theta
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pos_theta: ";
    rosidl_generator_traits::value_to_yaml(msg.pos_theta, out);
    out << "\n";
  }

  // member: result_dist
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "result_dist: ";
    rosidl_generator_traits::value_to_yaml(msg.result_dist, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const DistTurtle_Result & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace my_second_pkg_msgs

namespace rosidl_generator_traits
{

[[deprecated("use my_second_pkg_msgs::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const my_second_pkg_msgs::action::DistTurtle_Result & msg,
  std::ostream & out, size_t indentation = 0)
{
  my_second_pkg_msgs::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use my_second_pkg_msgs::action::to_yaml() instead")]]
inline std::string to_yaml(const my_second_pkg_msgs::action::DistTurtle_Result & msg)
{
  return my_second_pkg_msgs::action::to_yaml(msg);
}

template<>
inline const char * data_type<my_second_pkg_msgs::action::DistTurtle_Result>()
{
  return "my_second_pkg_msgs::action::DistTurtle_Result";
}

template<>
inline const char * name<my_second_pkg_msgs::action::DistTurtle_Result>()
{
  return "my_second_pkg_msgs/action/DistTurtle_Result";
}

template<>
struct has_fixed_size<my_second_pkg_msgs::action::DistTurtle_Result>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<my_second_pkg_msgs::action::DistTurtle_Result>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<my_second_pkg_msgs::action::DistTurtle_Result>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace my_second_pkg_msgs
{

namespace action
{

inline void to_flow_style_yaml(
  const DistTurtle_Feedback & msg,
  std::ostream & out)
{
  out << "{";
  // member: remained_dist
  {
    out << "remained_dist: ";
    rosidl_generator_traits::value_to_yaml(msg.remained_dist, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const DistTurtle_Feedback & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: remained_dist
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "remained_dist: ";
    rosidl_generator_traits::value_to_yaml(msg.remained_dist, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const DistTurtle_Feedback & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace my_second_pkg_msgs

namespace rosidl_generator_traits
{

[[deprecated("use my_second_pkg_msgs::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const my_second_pkg_msgs::action::DistTurtle_Feedback & msg,
  std::ostream & out, size_t indentation = 0)
{
  my_second_pkg_msgs::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use my_second_pkg_msgs::action::to_yaml() instead")]]
inline std::string to_yaml(const my_second_pkg_msgs::action::DistTurtle_Feedback & msg)
{
  return my_second_pkg_msgs::action::to_yaml(msg);
}

template<>
inline const char * data_type<my_second_pkg_msgs::action::DistTurtle_Feedback>()
{
  return "my_second_pkg_msgs::action::DistTurtle_Feedback";
}

template<>
inline const char * name<my_second_pkg_msgs::action::DistTurtle_Feedback>()
{
  return "my_second_pkg_msgs/action/DistTurtle_Feedback";
}

template<>
struct has_fixed_size<my_second_pkg_msgs::action::DistTurtle_Feedback>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<my_second_pkg_msgs::action::DistTurtle_Feedback>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<my_second_pkg_msgs::action::DistTurtle_Feedback>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"
// Member 'goal'
#include "my_second_pkg_msgs/action/detail/dist_turtle__traits.hpp"

namespace my_second_pkg_msgs
{

namespace action
{

inline void to_flow_style_yaml(
  const DistTurtle_SendGoal_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: goal_id
  {
    out << "goal_id: ";
    to_flow_style_yaml(msg.goal_id, out);
    out << ", ";
  }

  // member: goal
  {
    out << "goal: ";
    to_flow_style_yaml(msg.goal, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const DistTurtle_SendGoal_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: goal_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal_id:\n";
    to_block_style_yaml(msg.goal_id, out, indentation + 2);
  }

  // member: goal
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal:\n";
    to_block_style_yaml(msg.goal, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const DistTurtle_SendGoal_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace my_second_pkg_msgs

namespace rosidl_generator_traits
{

[[deprecated("use my_second_pkg_msgs::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const my_second_pkg_msgs::action::DistTurtle_SendGoal_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  my_second_pkg_msgs::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use my_second_pkg_msgs::action::to_yaml() instead")]]
inline std::string to_yaml(const my_second_pkg_msgs::action::DistTurtle_SendGoal_Request & msg)
{
  return my_second_pkg_msgs::action::to_yaml(msg);
}

template<>
inline const char * data_type<my_second_pkg_msgs::action::DistTurtle_SendGoal_Request>()
{
  return "my_second_pkg_msgs::action::DistTurtle_SendGoal_Request";
}

template<>
inline const char * name<my_second_pkg_msgs::action::DistTurtle_SendGoal_Request>()
{
  return "my_second_pkg_msgs/action/DistTurtle_SendGoal_Request";
}

template<>
struct has_fixed_size<my_second_pkg_msgs::action::DistTurtle_SendGoal_Request>
  : std::integral_constant<bool, has_fixed_size<my_second_pkg_msgs::action::DistTurtle_Goal>::value && has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<my_second_pkg_msgs::action::DistTurtle_SendGoal_Request>
  : std::integral_constant<bool, has_bounded_size<my_second_pkg_msgs::action::DistTurtle_Goal>::value && has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<my_second_pkg_msgs::action::DistTurtle_SendGoal_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__traits.hpp"

namespace my_second_pkg_msgs
{

namespace action
{

inline void to_flow_style_yaml(
  const DistTurtle_SendGoal_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: accepted
  {
    out << "accepted: ";
    rosidl_generator_traits::value_to_yaml(msg.accepted, out);
    out << ", ";
  }

  // member: stamp
  {
    out << "stamp: ";
    to_flow_style_yaml(msg.stamp, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const DistTurtle_SendGoal_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: accepted
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "accepted: ";
    rosidl_generator_traits::value_to_yaml(msg.accepted, out);
    out << "\n";
  }

  // member: stamp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "stamp:\n";
    to_block_style_yaml(msg.stamp, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const DistTurtle_SendGoal_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace my_second_pkg_msgs

namespace rosidl_generator_traits
{

[[deprecated("use my_second_pkg_msgs::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const my_second_pkg_msgs::action::DistTurtle_SendGoal_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  my_second_pkg_msgs::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use my_second_pkg_msgs::action::to_yaml() instead")]]
inline std::string to_yaml(const my_second_pkg_msgs::action::DistTurtle_SendGoal_Response & msg)
{
  return my_second_pkg_msgs::action::to_yaml(msg);
}

template<>
inline const char * data_type<my_second_pkg_msgs::action::DistTurtle_SendGoal_Response>()
{
  return "my_second_pkg_msgs::action::DistTurtle_SendGoal_Response";
}

template<>
inline const char * name<my_second_pkg_msgs::action::DistTurtle_SendGoal_Response>()
{
  return "my_second_pkg_msgs/action/DistTurtle_SendGoal_Response";
}

template<>
struct has_fixed_size<my_second_pkg_msgs::action::DistTurtle_SendGoal_Response>
  : std::integral_constant<bool, has_fixed_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct has_bounded_size<my_second_pkg_msgs::action::DistTurtle_SendGoal_Response>
  : std::integral_constant<bool, has_bounded_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct is_message<my_second_pkg_msgs::action::DistTurtle_SendGoal_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<my_second_pkg_msgs::action::DistTurtle_SendGoal>()
{
  return "my_second_pkg_msgs::action::DistTurtle_SendGoal";
}

template<>
inline const char * name<my_second_pkg_msgs::action::DistTurtle_SendGoal>()
{
  return "my_second_pkg_msgs/action/DistTurtle_SendGoal";
}

template<>
struct has_fixed_size<my_second_pkg_msgs::action::DistTurtle_SendGoal>
  : std::integral_constant<
    bool,
    has_fixed_size<my_second_pkg_msgs::action::DistTurtle_SendGoal_Request>::value &&
    has_fixed_size<my_second_pkg_msgs::action::DistTurtle_SendGoal_Response>::value
  >
{
};

template<>
struct has_bounded_size<my_second_pkg_msgs::action::DistTurtle_SendGoal>
  : std::integral_constant<
    bool,
    has_bounded_size<my_second_pkg_msgs::action::DistTurtle_SendGoal_Request>::value &&
    has_bounded_size<my_second_pkg_msgs::action::DistTurtle_SendGoal_Response>::value
  >
{
};

template<>
struct is_service<my_second_pkg_msgs::action::DistTurtle_SendGoal>
  : std::true_type
{
};

template<>
struct is_service_request<my_second_pkg_msgs::action::DistTurtle_SendGoal_Request>
  : std::true_type
{
};

template<>
struct is_service_response<my_second_pkg_msgs::action::DistTurtle_SendGoal_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"

namespace my_second_pkg_msgs
{

namespace action
{

inline void to_flow_style_yaml(
  const DistTurtle_GetResult_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: goal_id
  {
    out << "goal_id: ";
    to_flow_style_yaml(msg.goal_id, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const DistTurtle_GetResult_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: goal_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal_id:\n";
    to_block_style_yaml(msg.goal_id, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const DistTurtle_GetResult_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace my_second_pkg_msgs

namespace rosidl_generator_traits
{

[[deprecated("use my_second_pkg_msgs::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const my_second_pkg_msgs::action::DistTurtle_GetResult_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  my_second_pkg_msgs::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use my_second_pkg_msgs::action::to_yaml() instead")]]
inline std::string to_yaml(const my_second_pkg_msgs::action::DistTurtle_GetResult_Request & msg)
{
  return my_second_pkg_msgs::action::to_yaml(msg);
}

template<>
inline const char * data_type<my_second_pkg_msgs::action::DistTurtle_GetResult_Request>()
{
  return "my_second_pkg_msgs::action::DistTurtle_GetResult_Request";
}

template<>
inline const char * name<my_second_pkg_msgs::action::DistTurtle_GetResult_Request>()
{
  return "my_second_pkg_msgs/action/DistTurtle_GetResult_Request";
}

template<>
struct has_fixed_size<my_second_pkg_msgs::action::DistTurtle_GetResult_Request>
  : std::integral_constant<bool, has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<my_second_pkg_msgs::action::DistTurtle_GetResult_Request>
  : std::integral_constant<bool, has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<my_second_pkg_msgs::action::DistTurtle_GetResult_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'result'
// already included above
// #include "my_second_pkg_msgs/action/detail/dist_turtle__traits.hpp"

namespace my_second_pkg_msgs
{

namespace action
{

inline void to_flow_style_yaml(
  const DistTurtle_GetResult_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: status
  {
    out << "status: ";
    rosidl_generator_traits::value_to_yaml(msg.status, out);
    out << ", ";
  }

  // member: result
  {
    out << "result: ";
    to_flow_style_yaml(msg.result, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const DistTurtle_GetResult_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "status: ";
    rosidl_generator_traits::value_to_yaml(msg.status, out);
    out << "\n";
  }

  // member: result
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "result:\n";
    to_block_style_yaml(msg.result, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const DistTurtle_GetResult_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace my_second_pkg_msgs

namespace rosidl_generator_traits
{

[[deprecated("use my_second_pkg_msgs::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const my_second_pkg_msgs::action::DistTurtle_GetResult_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  my_second_pkg_msgs::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use my_second_pkg_msgs::action::to_yaml() instead")]]
inline std::string to_yaml(const my_second_pkg_msgs::action::DistTurtle_GetResult_Response & msg)
{
  return my_second_pkg_msgs::action::to_yaml(msg);
}

template<>
inline const char * data_type<my_second_pkg_msgs::action::DistTurtle_GetResult_Response>()
{
  return "my_second_pkg_msgs::action::DistTurtle_GetResult_Response";
}

template<>
inline const char * name<my_second_pkg_msgs::action::DistTurtle_GetResult_Response>()
{
  return "my_second_pkg_msgs/action/DistTurtle_GetResult_Response";
}

template<>
struct has_fixed_size<my_second_pkg_msgs::action::DistTurtle_GetResult_Response>
  : std::integral_constant<bool, has_fixed_size<my_second_pkg_msgs::action::DistTurtle_Result>::value> {};

template<>
struct has_bounded_size<my_second_pkg_msgs::action::DistTurtle_GetResult_Response>
  : std::integral_constant<bool, has_bounded_size<my_second_pkg_msgs::action::DistTurtle_Result>::value> {};

template<>
struct is_message<my_second_pkg_msgs::action::DistTurtle_GetResult_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<my_second_pkg_msgs::action::DistTurtle_GetResult>()
{
  return "my_second_pkg_msgs::action::DistTurtle_GetResult";
}

template<>
inline const char * name<my_second_pkg_msgs::action::DistTurtle_GetResult>()
{
  return "my_second_pkg_msgs/action/DistTurtle_GetResult";
}

template<>
struct has_fixed_size<my_second_pkg_msgs::action::DistTurtle_GetResult>
  : std::integral_constant<
    bool,
    has_fixed_size<my_second_pkg_msgs::action::DistTurtle_GetResult_Request>::value &&
    has_fixed_size<my_second_pkg_msgs::action::DistTurtle_GetResult_Response>::value
  >
{
};

template<>
struct has_bounded_size<my_second_pkg_msgs::action::DistTurtle_GetResult>
  : std::integral_constant<
    bool,
    has_bounded_size<my_second_pkg_msgs::action::DistTurtle_GetResult_Request>::value &&
    has_bounded_size<my_second_pkg_msgs::action::DistTurtle_GetResult_Response>::value
  >
{
};

template<>
struct is_service<my_second_pkg_msgs::action::DistTurtle_GetResult>
  : std::true_type
{
};

template<>
struct is_service_request<my_second_pkg_msgs::action::DistTurtle_GetResult_Request>
  : std::true_type
{
};

template<>
struct is_service_response<my_second_pkg_msgs::action::DistTurtle_GetResult_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"
// Member 'feedback'
// already included above
// #include "my_second_pkg_msgs/action/detail/dist_turtle__traits.hpp"

namespace my_second_pkg_msgs
{

namespace action
{

inline void to_flow_style_yaml(
  const DistTurtle_FeedbackMessage & msg,
  std::ostream & out)
{
  out << "{";
  // member: goal_id
  {
    out << "goal_id: ";
    to_flow_style_yaml(msg.goal_id, out);
    out << ", ";
  }

  // member: feedback
  {
    out << "feedback: ";
    to_flow_style_yaml(msg.feedback, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const DistTurtle_FeedbackMessage & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: goal_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal_id:\n";
    to_block_style_yaml(msg.goal_id, out, indentation + 2);
  }

  // member: feedback
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "feedback:\n";
    to_block_style_yaml(msg.feedback, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const DistTurtle_FeedbackMessage & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace my_second_pkg_msgs

namespace rosidl_generator_traits
{

[[deprecated("use my_second_pkg_msgs::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const my_second_pkg_msgs::action::DistTurtle_FeedbackMessage & msg,
  std::ostream & out, size_t indentation = 0)
{
  my_second_pkg_msgs::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use my_second_pkg_msgs::action::to_yaml() instead")]]
inline std::string to_yaml(const my_second_pkg_msgs::action::DistTurtle_FeedbackMessage & msg)
{
  return my_second_pkg_msgs::action::to_yaml(msg);
}

template<>
inline const char * data_type<my_second_pkg_msgs::action::DistTurtle_FeedbackMessage>()
{
  return "my_second_pkg_msgs::action::DistTurtle_FeedbackMessage";
}

template<>
inline const char * name<my_second_pkg_msgs::action::DistTurtle_FeedbackMessage>()
{
  return "my_second_pkg_msgs/action/DistTurtle_FeedbackMessage";
}

template<>
struct has_fixed_size<my_second_pkg_msgs::action::DistTurtle_FeedbackMessage>
  : std::integral_constant<bool, has_fixed_size<my_second_pkg_msgs::action::DistTurtle_Feedback>::value && has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<my_second_pkg_msgs::action::DistTurtle_FeedbackMessage>
  : std::integral_constant<bool, has_bounded_size<my_second_pkg_msgs::action::DistTurtle_Feedback>::value && has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<my_second_pkg_msgs::action::DistTurtle_FeedbackMessage>
  : std::true_type {};

}  // namespace rosidl_generator_traits


namespace rosidl_generator_traits
{

template<>
struct is_action<my_second_pkg_msgs::action::DistTurtle>
  : std::true_type
{
};

template<>
struct is_action_goal<my_second_pkg_msgs::action::DistTurtle_Goal>
  : std::true_type
{
};

template<>
struct is_action_result<my_second_pkg_msgs::action::DistTurtle_Result>
  : std::true_type
{
};

template<>
struct is_action_feedback<my_second_pkg_msgs::action::DistTurtle_Feedback>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits


#endif  // MY_SECOND_PKG_MSGS__ACTION__DETAIL__DIST_TURTLE__TRAITS_HPP_
