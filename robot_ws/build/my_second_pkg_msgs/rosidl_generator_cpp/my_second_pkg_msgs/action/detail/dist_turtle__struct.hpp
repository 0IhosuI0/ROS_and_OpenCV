// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from my_second_pkg_msgs:action/DistTurtle.idl
// generated code does not contain a copyright notice

#ifndef MY_SECOND_PKG_MSGS__ACTION__DETAIL__DIST_TURTLE__STRUCT_HPP_
#define MY_SECOND_PKG_MSGS__ACTION__DETAIL__DIST_TURTLE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__my_second_pkg_msgs__action__DistTurtle_Goal __attribute__((deprecated))
#else
# define DEPRECATED__my_second_pkg_msgs__action__DistTurtle_Goal __declspec(deprecated)
#endif

namespace my_second_pkg_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct DistTurtle_Goal_
{
  using Type = DistTurtle_Goal_<ContainerAllocator>;

  explicit DistTurtle_Goal_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->linear_x = 0.0f;
      this->angular_z = 0.0f;
      this->dist = 0.0f;
    }
  }

  explicit DistTurtle_Goal_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->linear_x = 0.0f;
      this->angular_z = 0.0f;
      this->dist = 0.0f;
    }
  }

  // field types and members
  using _linear_x_type =
    float;
  _linear_x_type linear_x;
  using _angular_z_type =
    float;
  _angular_z_type angular_z;
  using _dist_type =
    float;
  _dist_type dist;

  // setters for named parameter idiom
  Type & set__linear_x(
    const float & _arg)
  {
    this->linear_x = _arg;
    return *this;
  }
  Type & set__angular_z(
    const float & _arg)
  {
    this->angular_z = _arg;
    return *this;
  }
  Type & set__dist(
    const float & _arg)
  {
    this->dist = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    my_second_pkg_msgs::action::DistTurtle_Goal_<ContainerAllocator> *;
  using ConstRawPtr =
    const my_second_pkg_msgs::action::DistTurtle_Goal_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<my_second_pkg_msgs::action::DistTurtle_Goal_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<my_second_pkg_msgs::action::DistTurtle_Goal_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      my_second_pkg_msgs::action::DistTurtle_Goal_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<my_second_pkg_msgs::action::DistTurtle_Goal_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      my_second_pkg_msgs::action::DistTurtle_Goal_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<my_second_pkg_msgs::action::DistTurtle_Goal_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<my_second_pkg_msgs::action::DistTurtle_Goal_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<my_second_pkg_msgs::action::DistTurtle_Goal_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__my_second_pkg_msgs__action__DistTurtle_Goal
    std::shared_ptr<my_second_pkg_msgs::action::DistTurtle_Goal_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__my_second_pkg_msgs__action__DistTurtle_Goal
    std::shared_ptr<my_second_pkg_msgs::action::DistTurtle_Goal_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const DistTurtle_Goal_ & other) const
  {
    if (this->linear_x != other.linear_x) {
      return false;
    }
    if (this->angular_z != other.angular_z) {
      return false;
    }
    if (this->dist != other.dist) {
      return false;
    }
    return true;
  }
  bool operator!=(const DistTurtle_Goal_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct DistTurtle_Goal_

// alias to use template instance with default allocator
using DistTurtle_Goal =
  my_second_pkg_msgs::action::DistTurtle_Goal_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace my_second_pkg_msgs


#ifndef _WIN32
# define DEPRECATED__my_second_pkg_msgs__action__DistTurtle_Result __attribute__((deprecated))
#else
# define DEPRECATED__my_second_pkg_msgs__action__DistTurtle_Result __declspec(deprecated)
#endif

namespace my_second_pkg_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct DistTurtle_Result_
{
  using Type = DistTurtle_Result_<ContainerAllocator>;

  explicit DistTurtle_Result_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->pos_x = 0.0f;
      this->pos_y = 0.0f;
      this->pos_theta = 0.0f;
      this->result_dist = 0.0f;
    }
  }

  explicit DistTurtle_Result_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->pos_x = 0.0f;
      this->pos_y = 0.0f;
      this->pos_theta = 0.0f;
      this->result_dist = 0.0f;
    }
  }

  // field types and members
  using _pos_x_type =
    float;
  _pos_x_type pos_x;
  using _pos_y_type =
    float;
  _pos_y_type pos_y;
  using _pos_theta_type =
    float;
  _pos_theta_type pos_theta;
  using _result_dist_type =
    float;
  _result_dist_type result_dist;

  // setters for named parameter idiom
  Type & set__pos_x(
    const float & _arg)
  {
    this->pos_x = _arg;
    return *this;
  }
  Type & set__pos_y(
    const float & _arg)
  {
    this->pos_y = _arg;
    return *this;
  }
  Type & set__pos_theta(
    const float & _arg)
  {
    this->pos_theta = _arg;
    return *this;
  }
  Type & set__result_dist(
    const float & _arg)
  {
    this->result_dist = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    my_second_pkg_msgs::action::DistTurtle_Result_<ContainerAllocator> *;
  using ConstRawPtr =
    const my_second_pkg_msgs::action::DistTurtle_Result_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<my_second_pkg_msgs::action::DistTurtle_Result_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<my_second_pkg_msgs::action::DistTurtle_Result_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      my_second_pkg_msgs::action::DistTurtle_Result_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<my_second_pkg_msgs::action::DistTurtle_Result_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      my_second_pkg_msgs::action::DistTurtle_Result_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<my_second_pkg_msgs::action::DistTurtle_Result_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<my_second_pkg_msgs::action::DistTurtle_Result_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<my_second_pkg_msgs::action::DistTurtle_Result_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__my_second_pkg_msgs__action__DistTurtle_Result
    std::shared_ptr<my_second_pkg_msgs::action::DistTurtle_Result_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__my_second_pkg_msgs__action__DistTurtle_Result
    std::shared_ptr<my_second_pkg_msgs::action::DistTurtle_Result_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const DistTurtle_Result_ & other) const
  {
    if (this->pos_x != other.pos_x) {
      return false;
    }
    if (this->pos_y != other.pos_y) {
      return false;
    }
    if (this->pos_theta != other.pos_theta) {
      return false;
    }
    if (this->result_dist != other.result_dist) {
      return false;
    }
    return true;
  }
  bool operator!=(const DistTurtle_Result_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct DistTurtle_Result_

// alias to use template instance with default allocator
using DistTurtle_Result =
  my_second_pkg_msgs::action::DistTurtle_Result_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace my_second_pkg_msgs


#ifndef _WIN32
# define DEPRECATED__my_second_pkg_msgs__action__DistTurtle_Feedback __attribute__((deprecated))
#else
# define DEPRECATED__my_second_pkg_msgs__action__DistTurtle_Feedback __declspec(deprecated)
#endif

namespace my_second_pkg_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct DistTurtle_Feedback_
{
  using Type = DistTurtle_Feedback_<ContainerAllocator>;

  explicit DistTurtle_Feedback_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->remained_dist = 0.0f;
    }
  }

  explicit DistTurtle_Feedback_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->remained_dist = 0.0f;
    }
  }

  // field types and members
  using _remained_dist_type =
    float;
  _remained_dist_type remained_dist;

  // setters for named parameter idiom
  Type & set__remained_dist(
    const float & _arg)
  {
    this->remained_dist = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    my_second_pkg_msgs::action::DistTurtle_Feedback_<ContainerAllocator> *;
  using ConstRawPtr =
    const my_second_pkg_msgs::action::DistTurtle_Feedback_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<my_second_pkg_msgs::action::DistTurtle_Feedback_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<my_second_pkg_msgs::action::DistTurtle_Feedback_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      my_second_pkg_msgs::action::DistTurtle_Feedback_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<my_second_pkg_msgs::action::DistTurtle_Feedback_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      my_second_pkg_msgs::action::DistTurtle_Feedback_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<my_second_pkg_msgs::action::DistTurtle_Feedback_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<my_second_pkg_msgs::action::DistTurtle_Feedback_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<my_second_pkg_msgs::action::DistTurtle_Feedback_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__my_second_pkg_msgs__action__DistTurtle_Feedback
    std::shared_ptr<my_second_pkg_msgs::action::DistTurtle_Feedback_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__my_second_pkg_msgs__action__DistTurtle_Feedback
    std::shared_ptr<my_second_pkg_msgs::action::DistTurtle_Feedback_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const DistTurtle_Feedback_ & other) const
  {
    if (this->remained_dist != other.remained_dist) {
      return false;
    }
    return true;
  }
  bool operator!=(const DistTurtle_Feedback_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct DistTurtle_Feedback_

// alias to use template instance with default allocator
using DistTurtle_Feedback =
  my_second_pkg_msgs::action::DistTurtle_Feedback_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace my_second_pkg_msgs


// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"
// Member 'goal'
#include "my_second_pkg_msgs/action/detail/dist_turtle__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__my_second_pkg_msgs__action__DistTurtle_SendGoal_Request __attribute__((deprecated))
#else
# define DEPRECATED__my_second_pkg_msgs__action__DistTurtle_SendGoal_Request __declspec(deprecated)
#endif

namespace my_second_pkg_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct DistTurtle_SendGoal_Request_
{
  using Type = DistTurtle_SendGoal_Request_<ContainerAllocator>;

  explicit DistTurtle_SendGoal_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init),
    goal(_init)
  {
    (void)_init;
  }

  explicit DistTurtle_SendGoal_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_alloc, _init),
    goal(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _goal_id_type =
    unique_identifier_msgs::msg::UUID_<ContainerAllocator>;
  _goal_id_type goal_id;
  using _goal_type =
    my_second_pkg_msgs::action::DistTurtle_Goal_<ContainerAllocator>;
  _goal_type goal;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }
  Type & set__goal(
    const my_second_pkg_msgs::action::DistTurtle_Goal_<ContainerAllocator> & _arg)
  {
    this->goal = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    my_second_pkg_msgs::action::DistTurtle_SendGoal_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const my_second_pkg_msgs::action::DistTurtle_SendGoal_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<my_second_pkg_msgs::action::DistTurtle_SendGoal_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<my_second_pkg_msgs::action::DistTurtle_SendGoal_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      my_second_pkg_msgs::action::DistTurtle_SendGoal_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<my_second_pkg_msgs::action::DistTurtle_SendGoal_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      my_second_pkg_msgs::action::DistTurtle_SendGoal_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<my_second_pkg_msgs::action::DistTurtle_SendGoal_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<my_second_pkg_msgs::action::DistTurtle_SendGoal_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<my_second_pkg_msgs::action::DistTurtle_SendGoal_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__my_second_pkg_msgs__action__DistTurtle_SendGoal_Request
    std::shared_ptr<my_second_pkg_msgs::action::DistTurtle_SendGoal_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__my_second_pkg_msgs__action__DistTurtle_SendGoal_Request
    std::shared_ptr<my_second_pkg_msgs::action::DistTurtle_SendGoal_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const DistTurtle_SendGoal_Request_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    if (this->goal != other.goal) {
      return false;
    }
    return true;
  }
  bool operator!=(const DistTurtle_SendGoal_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct DistTurtle_SendGoal_Request_

// alias to use template instance with default allocator
using DistTurtle_SendGoal_Request =
  my_second_pkg_msgs::action::DistTurtle_SendGoal_Request_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace my_second_pkg_msgs


// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__my_second_pkg_msgs__action__DistTurtle_SendGoal_Response __attribute__((deprecated))
#else
# define DEPRECATED__my_second_pkg_msgs__action__DistTurtle_SendGoal_Response __declspec(deprecated)
#endif

namespace my_second_pkg_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct DistTurtle_SendGoal_Response_
{
  using Type = DistTurtle_SendGoal_Response_<ContainerAllocator>;

  explicit DistTurtle_SendGoal_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->accepted = false;
    }
  }

  explicit DistTurtle_SendGoal_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->accepted = false;
    }
  }

  // field types and members
  using _accepted_type =
    bool;
  _accepted_type accepted;
  using _stamp_type =
    builtin_interfaces::msg::Time_<ContainerAllocator>;
  _stamp_type stamp;

  // setters for named parameter idiom
  Type & set__accepted(
    const bool & _arg)
  {
    this->accepted = _arg;
    return *this;
  }
  Type & set__stamp(
    const builtin_interfaces::msg::Time_<ContainerAllocator> & _arg)
  {
    this->stamp = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    my_second_pkg_msgs::action::DistTurtle_SendGoal_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const my_second_pkg_msgs::action::DistTurtle_SendGoal_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<my_second_pkg_msgs::action::DistTurtle_SendGoal_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<my_second_pkg_msgs::action::DistTurtle_SendGoal_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      my_second_pkg_msgs::action::DistTurtle_SendGoal_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<my_second_pkg_msgs::action::DistTurtle_SendGoal_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      my_second_pkg_msgs::action::DistTurtle_SendGoal_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<my_second_pkg_msgs::action::DistTurtle_SendGoal_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<my_second_pkg_msgs::action::DistTurtle_SendGoal_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<my_second_pkg_msgs::action::DistTurtle_SendGoal_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__my_second_pkg_msgs__action__DistTurtle_SendGoal_Response
    std::shared_ptr<my_second_pkg_msgs::action::DistTurtle_SendGoal_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__my_second_pkg_msgs__action__DistTurtle_SendGoal_Response
    std::shared_ptr<my_second_pkg_msgs::action::DistTurtle_SendGoal_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const DistTurtle_SendGoal_Response_ & other) const
  {
    if (this->accepted != other.accepted) {
      return false;
    }
    if (this->stamp != other.stamp) {
      return false;
    }
    return true;
  }
  bool operator!=(const DistTurtle_SendGoal_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct DistTurtle_SendGoal_Response_

// alias to use template instance with default allocator
using DistTurtle_SendGoal_Response =
  my_second_pkg_msgs::action::DistTurtle_SendGoal_Response_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace my_second_pkg_msgs

namespace my_second_pkg_msgs
{

namespace action
{

struct DistTurtle_SendGoal
{
  using Request = my_second_pkg_msgs::action::DistTurtle_SendGoal_Request;
  using Response = my_second_pkg_msgs::action::DistTurtle_SendGoal_Response;
};

}  // namespace action

}  // namespace my_second_pkg_msgs


// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__my_second_pkg_msgs__action__DistTurtle_GetResult_Request __attribute__((deprecated))
#else
# define DEPRECATED__my_second_pkg_msgs__action__DistTurtle_GetResult_Request __declspec(deprecated)
#endif

namespace my_second_pkg_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct DistTurtle_GetResult_Request_
{
  using Type = DistTurtle_GetResult_Request_<ContainerAllocator>;

  explicit DistTurtle_GetResult_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init)
  {
    (void)_init;
  }

  explicit DistTurtle_GetResult_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _goal_id_type =
    unique_identifier_msgs::msg::UUID_<ContainerAllocator>;
  _goal_id_type goal_id;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    my_second_pkg_msgs::action::DistTurtle_GetResult_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const my_second_pkg_msgs::action::DistTurtle_GetResult_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<my_second_pkg_msgs::action::DistTurtle_GetResult_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<my_second_pkg_msgs::action::DistTurtle_GetResult_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      my_second_pkg_msgs::action::DistTurtle_GetResult_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<my_second_pkg_msgs::action::DistTurtle_GetResult_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      my_second_pkg_msgs::action::DistTurtle_GetResult_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<my_second_pkg_msgs::action::DistTurtle_GetResult_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<my_second_pkg_msgs::action::DistTurtle_GetResult_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<my_second_pkg_msgs::action::DistTurtle_GetResult_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__my_second_pkg_msgs__action__DistTurtle_GetResult_Request
    std::shared_ptr<my_second_pkg_msgs::action::DistTurtle_GetResult_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__my_second_pkg_msgs__action__DistTurtle_GetResult_Request
    std::shared_ptr<my_second_pkg_msgs::action::DistTurtle_GetResult_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const DistTurtle_GetResult_Request_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    return true;
  }
  bool operator!=(const DistTurtle_GetResult_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct DistTurtle_GetResult_Request_

// alias to use template instance with default allocator
using DistTurtle_GetResult_Request =
  my_second_pkg_msgs::action::DistTurtle_GetResult_Request_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace my_second_pkg_msgs


// Include directives for member types
// Member 'result'
// already included above
// #include "my_second_pkg_msgs/action/detail/dist_turtle__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__my_second_pkg_msgs__action__DistTurtle_GetResult_Response __attribute__((deprecated))
#else
# define DEPRECATED__my_second_pkg_msgs__action__DistTurtle_GetResult_Response __declspec(deprecated)
#endif

namespace my_second_pkg_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct DistTurtle_GetResult_Response_
{
  using Type = DistTurtle_GetResult_Response_<ContainerAllocator>;

  explicit DistTurtle_GetResult_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : result(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->status = 0;
    }
  }

  explicit DistTurtle_GetResult_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : result(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->status = 0;
    }
  }

  // field types and members
  using _status_type =
    int8_t;
  _status_type status;
  using _result_type =
    my_second_pkg_msgs::action::DistTurtle_Result_<ContainerAllocator>;
  _result_type result;

  // setters for named parameter idiom
  Type & set__status(
    const int8_t & _arg)
  {
    this->status = _arg;
    return *this;
  }
  Type & set__result(
    const my_second_pkg_msgs::action::DistTurtle_Result_<ContainerAllocator> & _arg)
  {
    this->result = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    my_second_pkg_msgs::action::DistTurtle_GetResult_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const my_second_pkg_msgs::action::DistTurtle_GetResult_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<my_second_pkg_msgs::action::DistTurtle_GetResult_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<my_second_pkg_msgs::action::DistTurtle_GetResult_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      my_second_pkg_msgs::action::DistTurtle_GetResult_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<my_second_pkg_msgs::action::DistTurtle_GetResult_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      my_second_pkg_msgs::action::DistTurtle_GetResult_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<my_second_pkg_msgs::action::DistTurtle_GetResult_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<my_second_pkg_msgs::action::DistTurtle_GetResult_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<my_second_pkg_msgs::action::DistTurtle_GetResult_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__my_second_pkg_msgs__action__DistTurtle_GetResult_Response
    std::shared_ptr<my_second_pkg_msgs::action::DistTurtle_GetResult_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__my_second_pkg_msgs__action__DistTurtle_GetResult_Response
    std::shared_ptr<my_second_pkg_msgs::action::DistTurtle_GetResult_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const DistTurtle_GetResult_Response_ & other) const
  {
    if (this->status != other.status) {
      return false;
    }
    if (this->result != other.result) {
      return false;
    }
    return true;
  }
  bool operator!=(const DistTurtle_GetResult_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct DistTurtle_GetResult_Response_

// alias to use template instance with default allocator
using DistTurtle_GetResult_Response =
  my_second_pkg_msgs::action::DistTurtle_GetResult_Response_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace my_second_pkg_msgs

namespace my_second_pkg_msgs
{

namespace action
{

struct DistTurtle_GetResult
{
  using Request = my_second_pkg_msgs::action::DistTurtle_GetResult_Request;
  using Response = my_second_pkg_msgs::action::DistTurtle_GetResult_Response;
};

}  // namespace action

}  // namespace my_second_pkg_msgs


// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"
// Member 'feedback'
// already included above
// #include "my_second_pkg_msgs/action/detail/dist_turtle__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__my_second_pkg_msgs__action__DistTurtle_FeedbackMessage __attribute__((deprecated))
#else
# define DEPRECATED__my_second_pkg_msgs__action__DistTurtle_FeedbackMessage __declspec(deprecated)
#endif

namespace my_second_pkg_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct DistTurtle_FeedbackMessage_
{
  using Type = DistTurtle_FeedbackMessage_<ContainerAllocator>;

  explicit DistTurtle_FeedbackMessage_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init),
    feedback(_init)
  {
    (void)_init;
  }

  explicit DistTurtle_FeedbackMessage_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_alloc, _init),
    feedback(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _goal_id_type =
    unique_identifier_msgs::msg::UUID_<ContainerAllocator>;
  _goal_id_type goal_id;
  using _feedback_type =
    my_second_pkg_msgs::action::DistTurtle_Feedback_<ContainerAllocator>;
  _feedback_type feedback;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }
  Type & set__feedback(
    const my_second_pkg_msgs::action::DistTurtle_Feedback_<ContainerAllocator> & _arg)
  {
    this->feedback = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    my_second_pkg_msgs::action::DistTurtle_FeedbackMessage_<ContainerAllocator> *;
  using ConstRawPtr =
    const my_second_pkg_msgs::action::DistTurtle_FeedbackMessage_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<my_second_pkg_msgs::action::DistTurtle_FeedbackMessage_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<my_second_pkg_msgs::action::DistTurtle_FeedbackMessage_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      my_second_pkg_msgs::action::DistTurtle_FeedbackMessage_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<my_second_pkg_msgs::action::DistTurtle_FeedbackMessage_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      my_second_pkg_msgs::action::DistTurtle_FeedbackMessage_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<my_second_pkg_msgs::action::DistTurtle_FeedbackMessage_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<my_second_pkg_msgs::action::DistTurtle_FeedbackMessage_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<my_second_pkg_msgs::action::DistTurtle_FeedbackMessage_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__my_second_pkg_msgs__action__DistTurtle_FeedbackMessage
    std::shared_ptr<my_second_pkg_msgs::action::DistTurtle_FeedbackMessage_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__my_second_pkg_msgs__action__DistTurtle_FeedbackMessage
    std::shared_ptr<my_second_pkg_msgs::action::DistTurtle_FeedbackMessage_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const DistTurtle_FeedbackMessage_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    if (this->feedback != other.feedback) {
      return false;
    }
    return true;
  }
  bool operator!=(const DistTurtle_FeedbackMessage_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct DistTurtle_FeedbackMessage_

// alias to use template instance with default allocator
using DistTurtle_FeedbackMessage =
  my_second_pkg_msgs::action::DistTurtle_FeedbackMessage_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace my_second_pkg_msgs

#include "action_msgs/srv/cancel_goal.hpp"
#include "action_msgs/msg/goal_info.hpp"
#include "action_msgs/msg/goal_status_array.hpp"

namespace my_second_pkg_msgs
{

namespace action
{

struct DistTurtle
{
  /// The goal message defined in the action definition.
  using Goal = my_second_pkg_msgs::action::DistTurtle_Goal;
  /// The result message defined in the action definition.
  using Result = my_second_pkg_msgs::action::DistTurtle_Result;
  /// The feedback message defined in the action definition.
  using Feedback = my_second_pkg_msgs::action::DistTurtle_Feedback;

  struct Impl
  {
    /// The send_goal service using a wrapped version of the goal message as a request.
    using SendGoalService = my_second_pkg_msgs::action::DistTurtle_SendGoal;
    /// The get_result service using a wrapped version of the result message as a response.
    using GetResultService = my_second_pkg_msgs::action::DistTurtle_GetResult;
    /// The feedback message with generic fields which wraps the feedback message.
    using FeedbackMessage = my_second_pkg_msgs::action::DistTurtle_FeedbackMessage;

    /// The generic service to cancel a goal.
    using CancelGoalService = action_msgs::srv::CancelGoal;
    /// The generic message for the status of a goal.
    using GoalStatusMessage = action_msgs::msg::GoalStatusArray;
  };
};

typedef struct DistTurtle DistTurtle;

}  // namespace action

}  // namespace my_second_pkg_msgs

#endif  // MY_SECOND_PKG_MSGS__ACTION__DETAIL__DIST_TURTLE__STRUCT_HPP_
