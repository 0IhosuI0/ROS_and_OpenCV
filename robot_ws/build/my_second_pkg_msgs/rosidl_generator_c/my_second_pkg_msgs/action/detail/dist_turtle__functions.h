// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from my_second_pkg_msgs:action/DistTurtle.idl
// generated code does not contain a copyright notice

#ifndef MY_SECOND_PKG_MSGS__ACTION__DETAIL__DIST_TURTLE__FUNCTIONS_H_
#define MY_SECOND_PKG_MSGS__ACTION__DETAIL__DIST_TURTLE__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "my_second_pkg_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "my_second_pkg_msgs/action/detail/dist_turtle__struct.h"

/// Initialize action/DistTurtle message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * my_second_pkg_msgs__action__DistTurtle_Goal
 * )) before or use
 * my_second_pkg_msgs__action__DistTurtle_Goal__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_my_second_pkg_msgs
bool
my_second_pkg_msgs__action__DistTurtle_Goal__init(my_second_pkg_msgs__action__DistTurtle_Goal * msg);

/// Finalize action/DistTurtle message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_my_second_pkg_msgs
void
my_second_pkg_msgs__action__DistTurtle_Goal__fini(my_second_pkg_msgs__action__DistTurtle_Goal * msg);

/// Create action/DistTurtle message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * my_second_pkg_msgs__action__DistTurtle_Goal__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_my_second_pkg_msgs
my_second_pkg_msgs__action__DistTurtle_Goal *
my_second_pkg_msgs__action__DistTurtle_Goal__create();

/// Destroy action/DistTurtle message.
/**
 * It calls
 * my_second_pkg_msgs__action__DistTurtle_Goal__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_my_second_pkg_msgs
void
my_second_pkg_msgs__action__DistTurtle_Goal__destroy(my_second_pkg_msgs__action__DistTurtle_Goal * msg);

/// Check for action/DistTurtle message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_my_second_pkg_msgs
bool
my_second_pkg_msgs__action__DistTurtle_Goal__are_equal(const my_second_pkg_msgs__action__DistTurtle_Goal * lhs, const my_second_pkg_msgs__action__DistTurtle_Goal * rhs);

/// Copy a action/DistTurtle message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_my_second_pkg_msgs
bool
my_second_pkg_msgs__action__DistTurtle_Goal__copy(
  const my_second_pkg_msgs__action__DistTurtle_Goal * input,
  my_second_pkg_msgs__action__DistTurtle_Goal * output);

/// Initialize array of action/DistTurtle messages.
/**
 * It allocates the memory for the number of elements and calls
 * my_second_pkg_msgs__action__DistTurtle_Goal__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_my_second_pkg_msgs
bool
my_second_pkg_msgs__action__DistTurtle_Goal__Sequence__init(my_second_pkg_msgs__action__DistTurtle_Goal__Sequence * array, size_t size);

/// Finalize array of action/DistTurtle messages.
/**
 * It calls
 * my_second_pkg_msgs__action__DistTurtle_Goal__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_my_second_pkg_msgs
void
my_second_pkg_msgs__action__DistTurtle_Goal__Sequence__fini(my_second_pkg_msgs__action__DistTurtle_Goal__Sequence * array);

/// Create array of action/DistTurtle messages.
/**
 * It allocates the memory for the array and calls
 * my_second_pkg_msgs__action__DistTurtle_Goal__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_my_second_pkg_msgs
my_second_pkg_msgs__action__DistTurtle_Goal__Sequence *
my_second_pkg_msgs__action__DistTurtle_Goal__Sequence__create(size_t size);

/// Destroy array of action/DistTurtle messages.
/**
 * It calls
 * my_second_pkg_msgs__action__DistTurtle_Goal__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_my_second_pkg_msgs
void
my_second_pkg_msgs__action__DistTurtle_Goal__Sequence__destroy(my_second_pkg_msgs__action__DistTurtle_Goal__Sequence * array);

/// Check for action/DistTurtle message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_my_second_pkg_msgs
bool
my_second_pkg_msgs__action__DistTurtle_Goal__Sequence__are_equal(const my_second_pkg_msgs__action__DistTurtle_Goal__Sequence * lhs, const my_second_pkg_msgs__action__DistTurtle_Goal__Sequence * rhs);

/// Copy an array of action/DistTurtle messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_my_second_pkg_msgs
bool
my_second_pkg_msgs__action__DistTurtle_Goal__Sequence__copy(
  const my_second_pkg_msgs__action__DistTurtle_Goal__Sequence * input,
  my_second_pkg_msgs__action__DistTurtle_Goal__Sequence * output);

/// Initialize action/DistTurtle message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * my_second_pkg_msgs__action__DistTurtle_Result
 * )) before or use
 * my_second_pkg_msgs__action__DistTurtle_Result__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_my_second_pkg_msgs
bool
my_second_pkg_msgs__action__DistTurtle_Result__init(my_second_pkg_msgs__action__DistTurtle_Result * msg);

/// Finalize action/DistTurtle message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_my_second_pkg_msgs
void
my_second_pkg_msgs__action__DistTurtle_Result__fini(my_second_pkg_msgs__action__DistTurtle_Result * msg);

/// Create action/DistTurtle message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * my_second_pkg_msgs__action__DistTurtle_Result__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_my_second_pkg_msgs
my_second_pkg_msgs__action__DistTurtle_Result *
my_second_pkg_msgs__action__DistTurtle_Result__create();

/// Destroy action/DistTurtle message.
/**
 * It calls
 * my_second_pkg_msgs__action__DistTurtle_Result__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_my_second_pkg_msgs
void
my_second_pkg_msgs__action__DistTurtle_Result__destroy(my_second_pkg_msgs__action__DistTurtle_Result * msg);

/// Check for action/DistTurtle message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_my_second_pkg_msgs
bool
my_second_pkg_msgs__action__DistTurtle_Result__are_equal(const my_second_pkg_msgs__action__DistTurtle_Result * lhs, const my_second_pkg_msgs__action__DistTurtle_Result * rhs);

/// Copy a action/DistTurtle message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_my_second_pkg_msgs
bool
my_second_pkg_msgs__action__DistTurtle_Result__copy(
  const my_second_pkg_msgs__action__DistTurtle_Result * input,
  my_second_pkg_msgs__action__DistTurtle_Result * output);

/// Initialize array of action/DistTurtle messages.
/**
 * It allocates the memory for the number of elements and calls
 * my_second_pkg_msgs__action__DistTurtle_Result__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_my_second_pkg_msgs
bool
my_second_pkg_msgs__action__DistTurtle_Result__Sequence__init(my_second_pkg_msgs__action__DistTurtle_Result__Sequence * array, size_t size);

/// Finalize array of action/DistTurtle messages.
/**
 * It calls
 * my_second_pkg_msgs__action__DistTurtle_Result__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_my_second_pkg_msgs
void
my_second_pkg_msgs__action__DistTurtle_Result__Sequence__fini(my_second_pkg_msgs__action__DistTurtle_Result__Sequence * array);

/// Create array of action/DistTurtle messages.
/**
 * It allocates the memory for the array and calls
 * my_second_pkg_msgs__action__DistTurtle_Result__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_my_second_pkg_msgs
my_second_pkg_msgs__action__DistTurtle_Result__Sequence *
my_second_pkg_msgs__action__DistTurtle_Result__Sequence__create(size_t size);

/// Destroy array of action/DistTurtle messages.
/**
 * It calls
 * my_second_pkg_msgs__action__DistTurtle_Result__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_my_second_pkg_msgs
void
my_second_pkg_msgs__action__DistTurtle_Result__Sequence__destroy(my_second_pkg_msgs__action__DistTurtle_Result__Sequence * array);

/// Check for action/DistTurtle message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_my_second_pkg_msgs
bool
my_second_pkg_msgs__action__DistTurtle_Result__Sequence__are_equal(const my_second_pkg_msgs__action__DistTurtle_Result__Sequence * lhs, const my_second_pkg_msgs__action__DistTurtle_Result__Sequence * rhs);

/// Copy an array of action/DistTurtle messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_my_second_pkg_msgs
bool
my_second_pkg_msgs__action__DistTurtle_Result__Sequence__copy(
  const my_second_pkg_msgs__action__DistTurtle_Result__Sequence * input,
  my_second_pkg_msgs__action__DistTurtle_Result__Sequence * output);

/// Initialize action/DistTurtle message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * my_second_pkg_msgs__action__DistTurtle_Feedback
 * )) before or use
 * my_second_pkg_msgs__action__DistTurtle_Feedback__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_my_second_pkg_msgs
bool
my_second_pkg_msgs__action__DistTurtle_Feedback__init(my_second_pkg_msgs__action__DistTurtle_Feedback * msg);

/// Finalize action/DistTurtle message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_my_second_pkg_msgs
void
my_second_pkg_msgs__action__DistTurtle_Feedback__fini(my_second_pkg_msgs__action__DistTurtle_Feedback * msg);

/// Create action/DistTurtle message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * my_second_pkg_msgs__action__DistTurtle_Feedback__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_my_second_pkg_msgs
my_second_pkg_msgs__action__DistTurtle_Feedback *
my_second_pkg_msgs__action__DistTurtle_Feedback__create();

/// Destroy action/DistTurtle message.
/**
 * It calls
 * my_second_pkg_msgs__action__DistTurtle_Feedback__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_my_second_pkg_msgs
void
my_second_pkg_msgs__action__DistTurtle_Feedback__destroy(my_second_pkg_msgs__action__DistTurtle_Feedback * msg);

/// Check for action/DistTurtle message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_my_second_pkg_msgs
bool
my_second_pkg_msgs__action__DistTurtle_Feedback__are_equal(const my_second_pkg_msgs__action__DistTurtle_Feedback * lhs, const my_second_pkg_msgs__action__DistTurtle_Feedback * rhs);

/// Copy a action/DistTurtle message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_my_second_pkg_msgs
bool
my_second_pkg_msgs__action__DistTurtle_Feedback__copy(
  const my_second_pkg_msgs__action__DistTurtle_Feedback * input,
  my_second_pkg_msgs__action__DistTurtle_Feedback * output);

/// Initialize array of action/DistTurtle messages.
/**
 * It allocates the memory for the number of elements and calls
 * my_second_pkg_msgs__action__DistTurtle_Feedback__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_my_second_pkg_msgs
bool
my_second_pkg_msgs__action__DistTurtle_Feedback__Sequence__init(my_second_pkg_msgs__action__DistTurtle_Feedback__Sequence * array, size_t size);

/// Finalize array of action/DistTurtle messages.
/**
 * It calls
 * my_second_pkg_msgs__action__DistTurtle_Feedback__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_my_second_pkg_msgs
void
my_second_pkg_msgs__action__DistTurtle_Feedback__Sequence__fini(my_second_pkg_msgs__action__DistTurtle_Feedback__Sequence * array);

/// Create array of action/DistTurtle messages.
/**
 * It allocates the memory for the array and calls
 * my_second_pkg_msgs__action__DistTurtle_Feedback__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_my_second_pkg_msgs
my_second_pkg_msgs__action__DistTurtle_Feedback__Sequence *
my_second_pkg_msgs__action__DistTurtle_Feedback__Sequence__create(size_t size);

/// Destroy array of action/DistTurtle messages.
/**
 * It calls
 * my_second_pkg_msgs__action__DistTurtle_Feedback__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_my_second_pkg_msgs
void
my_second_pkg_msgs__action__DistTurtle_Feedback__Sequence__destroy(my_second_pkg_msgs__action__DistTurtle_Feedback__Sequence * array);

/// Check for action/DistTurtle message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_my_second_pkg_msgs
bool
my_second_pkg_msgs__action__DistTurtle_Feedback__Sequence__are_equal(const my_second_pkg_msgs__action__DistTurtle_Feedback__Sequence * lhs, const my_second_pkg_msgs__action__DistTurtle_Feedback__Sequence * rhs);

/// Copy an array of action/DistTurtle messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_my_second_pkg_msgs
bool
my_second_pkg_msgs__action__DistTurtle_Feedback__Sequence__copy(
  const my_second_pkg_msgs__action__DistTurtle_Feedback__Sequence * input,
  my_second_pkg_msgs__action__DistTurtle_Feedback__Sequence * output);

/// Initialize action/DistTurtle message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * my_second_pkg_msgs__action__DistTurtle_SendGoal_Request
 * )) before or use
 * my_second_pkg_msgs__action__DistTurtle_SendGoal_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_my_second_pkg_msgs
bool
my_second_pkg_msgs__action__DistTurtle_SendGoal_Request__init(my_second_pkg_msgs__action__DistTurtle_SendGoal_Request * msg);

/// Finalize action/DistTurtle message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_my_second_pkg_msgs
void
my_second_pkg_msgs__action__DistTurtle_SendGoal_Request__fini(my_second_pkg_msgs__action__DistTurtle_SendGoal_Request * msg);

/// Create action/DistTurtle message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * my_second_pkg_msgs__action__DistTurtle_SendGoal_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_my_second_pkg_msgs
my_second_pkg_msgs__action__DistTurtle_SendGoal_Request *
my_second_pkg_msgs__action__DistTurtle_SendGoal_Request__create();

/// Destroy action/DistTurtle message.
/**
 * It calls
 * my_second_pkg_msgs__action__DistTurtle_SendGoal_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_my_second_pkg_msgs
void
my_second_pkg_msgs__action__DistTurtle_SendGoal_Request__destroy(my_second_pkg_msgs__action__DistTurtle_SendGoal_Request * msg);

/// Check for action/DistTurtle message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_my_second_pkg_msgs
bool
my_second_pkg_msgs__action__DistTurtle_SendGoal_Request__are_equal(const my_second_pkg_msgs__action__DistTurtle_SendGoal_Request * lhs, const my_second_pkg_msgs__action__DistTurtle_SendGoal_Request * rhs);

/// Copy a action/DistTurtle message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_my_second_pkg_msgs
bool
my_second_pkg_msgs__action__DistTurtle_SendGoal_Request__copy(
  const my_second_pkg_msgs__action__DistTurtle_SendGoal_Request * input,
  my_second_pkg_msgs__action__DistTurtle_SendGoal_Request * output);

/// Initialize array of action/DistTurtle messages.
/**
 * It allocates the memory for the number of elements and calls
 * my_second_pkg_msgs__action__DistTurtle_SendGoal_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_my_second_pkg_msgs
bool
my_second_pkg_msgs__action__DistTurtle_SendGoal_Request__Sequence__init(my_second_pkg_msgs__action__DistTurtle_SendGoal_Request__Sequence * array, size_t size);

/// Finalize array of action/DistTurtle messages.
/**
 * It calls
 * my_second_pkg_msgs__action__DistTurtle_SendGoal_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_my_second_pkg_msgs
void
my_second_pkg_msgs__action__DistTurtle_SendGoal_Request__Sequence__fini(my_second_pkg_msgs__action__DistTurtle_SendGoal_Request__Sequence * array);

/// Create array of action/DistTurtle messages.
/**
 * It allocates the memory for the array and calls
 * my_second_pkg_msgs__action__DistTurtle_SendGoal_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_my_second_pkg_msgs
my_second_pkg_msgs__action__DistTurtle_SendGoal_Request__Sequence *
my_second_pkg_msgs__action__DistTurtle_SendGoal_Request__Sequence__create(size_t size);

/// Destroy array of action/DistTurtle messages.
/**
 * It calls
 * my_second_pkg_msgs__action__DistTurtle_SendGoal_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_my_second_pkg_msgs
void
my_second_pkg_msgs__action__DistTurtle_SendGoal_Request__Sequence__destroy(my_second_pkg_msgs__action__DistTurtle_SendGoal_Request__Sequence * array);

/// Check for action/DistTurtle message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_my_second_pkg_msgs
bool
my_second_pkg_msgs__action__DistTurtle_SendGoal_Request__Sequence__are_equal(const my_second_pkg_msgs__action__DistTurtle_SendGoal_Request__Sequence * lhs, const my_second_pkg_msgs__action__DistTurtle_SendGoal_Request__Sequence * rhs);

/// Copy an array of action/DistTurtle messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_my_second_pkg_msgs
bool
my_second_pkg_msgs__action__DistTurtle_SendGoal_Request__Sequence__copy(
  const my_second_pkg_msgs__action__DistTurtle_SendGoal_Request__Sequence * input,
  my_second_pkg_msgs__action__DistTurtle_SendGoal_Request__Sequence * output);

/// Initialize action/DistTurtle message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * my_second_pkg_msgs__action__DistTurtle_SendGoal_Response
 * )) before or use
 * my_second_pkg_msgs__action__DistTurtle_SendGoal_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_my_second_pkg_msgs
bool
my_second_pkg_msgs__action__DistTurtle_SendGoal_Response__init(my_second_pkg_msgs__action__DistTurtle_SendGoal_Response * msg);

/// Finalize action/DistTurtle message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_my_second_pkg_msgs
void
my_second_pkg_msgs__action__DistTurtle_SendGoal_Response__fini(my_second_pkg_msgs__action__DistTurtle_SendGoal_Response * msg);

/// Create action/DistTurtle message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * my_second_pkg_msgs__action__DistTurtle_SendGoal_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_my_second_pkg_msgs
my_second_pkg_msgs__action__DistTurtle_SendGoal_Response *
my_second_pkg_msgs__action__DistTurtle_SendGoal_Response__create();

/// Destroy action/DistTurtle message.
/**
 * It calls
 * my_second_pkg_msgs__action__DistTurtle_SendGoal_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_my_second_pkg_msgs
void
my_second_pkg_msgs__action__DistTurtle_SendGoal_Response__destroy(my_second_pkg_msgs__action__DistTurtle_SendGoal_Response * msg);

/// Check for action/DistTurtle message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_my_second_pkg_msgs
bool
my_second_pkg_msgs__action__DistTurtle_SendGoal_Response__are_equal(const my_second_pkg_msgs__action__DistTurtle_SendGoal_Response * lhs, const my_second_pkg_msgs__action__DistTurtle_SendGoal_Response * rhs);

/// Copy a action/DistTurtle message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_my_second_pkg_msgs
bool
my_second_pkg_msgs__action__DistTurtle_SendGoal_Response__copy(
  const my_second_pkg_msgs__action__DistTurtle_SendGoal_Response * input,
  my_second_pkg_msgs__action__DistTurtle_SendGoal_Response * output);

/// Initialize array of action/DistTurtle messages.
/**
 * It allocates the memory for the number of elements and calls
 * my_second_pkg_msgs__action__DistTurtle_SendGoal_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_my_second_pkg_msgs
bool
my_second_pkg_msgs__action__DistTurtle_SendGoal_Response__Sequence__init(my_second_pkg_msgs__action__DistTurtle_SendGoal_Response__Sequence * array, size_t size);

/// Finalize array of action/DistTurtle messages.
/**
 * It calls
 * my_second_pkg_msgs__action__DistTurtle_SendGoal_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_my_second_pkg_msgs
void
my_second_pkg_msgs__action__DistTurtle_SendGoal_Response__Sequence__fini(my_second_pkg_msgs__action__DistTurtle_SendGoal_Response__Sequence * array);

/// Create array of action/DistTurtle messages.
/**
 * It allocates the memory for the array and calls
 * my_second_pkg_msgs__action__DistTurtle_SendGoal_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_my_second_pkg_msgs
my_second_pkg_msgs__action__DistTurtle_SendGoal_Response__Sequence *
my_second_pkg_msgs__action__DistTurtle_SendGoal_Response__Sequence__create(size_t size);

/// Destroy array of action/DistTurtle messages.
/**
 * It calls
 * my_second_pkg_msgs__action__DistTurtle_SendGoal_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_my_second_pkg_msgs
void
my_second_pkg_msgs__action__DistTurtle_SendGoal_Response__Sequence__destroy(my_second_pkg_msgs__action__DistTurtle_SendGoal_Response__Sequence * array);

/// Check for action/DistTurtle message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_my_second_pkg_msgs
bool
my_second_pkg_msgs__action__DistTurtle_SendGoal_Response__Sequence__are_equal(const my_second_pkg_msgs__action__DistTurtle_SendGoal_Response__Sequence * lhs, const my_second_pkg_msgs__action__DistTurtle_SendGoal_Response__Sequence * rhs);

/// Copy an array of action/DistTurtle messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_my_second_pkg_msgs
bool
my_second_pkg_msgs__action__DistTurtle_SendGoal_Response__Sequence__copy(
  const my_second_pkg_msgs__action__DistTurtle_SendGoal_Response__Sequence * input,
  my_second_pkg_msgs__action__DistTurtle_SendGoal_Response__Sequence * output);

/// Initialize action/DistTurtle message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * my_second_pkg_msgs__action__DistTurtle_GetResult_Request
 * )) before or use
 * my_second_pkg_msgs__action__DistTurtle_GetResult_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_my_second_pkg_msgs
bool
my_second_pkg_msgs__action__DistTurtle_GetResult_Request__init(my_second_pkg_msgs__action__DistTurtle_GetResult_Request * msg);

/// Finalize action/DistTurtle message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_my_second_pkg_msgs
void
my_second_pkg_msgs__action__DistTurtle_GetResult_Request__fini(my_second_pkg_msgs__action__DistTurtle_GetResult_Request * msg);

/// Create action/DistTurtle message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * my_second_pkg_msgs__action__DistTurtle_GetResult_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_my_second_pkg_msgs
my_second_pkg_msgs__action__DistTurtle_GetResult_Request *
my_second_pkg_msgs__action__DistTurtle_GetResult_Request__create();

/// Destroy action/DistTurtle message.
/**
 * It calls
 * my_second_pkg_msgs__action__DistTurtle_GetResult_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_my_second_pkg_msgs
void
my_second_pkg_msgs__action__DistTurtle_GetResult_Request__destroy(my_second_pkg_msgs__action__DistTurtle_GetResult_Request * msg);

/// Check for action/DistTurtle message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_my_second_pkg_msgs
bool
my_second_pkg_msgs__action__DistTurtle_GetResult_Request__are_equal(const my_second_pkg_msgs__action__DistTurtle_GetResult_Request * lhs, const my_second_pkg_msgs__action__DistTurtle_GetResult_Request * rhs);

/// Copy a action/DistTurtle message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_my_second_pkg_msgs
bool
my_second_pkg_msgs__action__DistTurtle_GetResult_Request__copy(
  const my_second_pkg_msgs__action__DistTurtle_GetResult_Request * input,
  my_second_pkg_msgs__action__DistTurtle_GetResult_Request * output);

/// Initialize array of action/DistTurtle messages.
/**
 * It allocates the memory for the number of elements and calls
 * my_second_pkg_msgs__action__DistTurtle_GetResult_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_my_second_pkg_msgs
bool
my_second_pkg_msgs__action__DistTurtle_GetResult_Request__Sequence__init(my_second_pkg_msgs__action__DistTurtle_GetResult_Request__Sequence * array, size_t size);

/// Finalize array of action/DistTurtle messages.
/**
 * It calls
 * my_second_pkg_msgs__action__DistTurtle_GetResult_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_my_second_pkg_msgs
void
my_second_pkg_msgs__action__DistTurtle_GetResult_Request__Sequence__fini(my_second_pkg_msgs__action__DistTurtle_GetResult_Request__Sequence * array);

/// Create array of action/DistTurtle messages.
/**
 * It allocates the memory for the array and calls
 * my_second_pkg_msgs__action__DistTurtle_GetResult_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_my_second_pkg_msgs
my_second_pkg_msgs__action__DistTurtle_GetResult_Request__Sequence *
my_second_pkg_msgs__action__DistTurtle_GetResult_Request__Sequence__create(size_t size);

/// Destroy array of action/DistTurtle messages.
/**
 * It calls
 * my_second_pkg_msgs__action__DistTurtle_GetResult_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_my_second_pkg_msgs
void
my_second_pkg_msgs__action__DistTurtle_GetResult_Request__Sequence__destroy(my_second_pkg_msgs__action__DistTurtle_GetResult_Request__Sequence * array);

/// Check for action/DistTurtle message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_my_second_pkg_msgs
bool
my_second_pkg_msgs__action__DistTurtle_GetResult_Request__Sequence__are_equal(const my_second_pkg_msgs__action__DistTurtle_GetResult_Request__Sequence * lhs, const my_second_pkg_msgs__action__DistTurtle_GetResult_Request__Sequence * rhs);

/// Copy an array of action/DistTurtle messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_my_second_pkg_msgs
bool
my_second_pkg_msgs__action__DistTurtle_GetResult_Request__Sequence__copy(
  const my_second_pkg_msgs__action__DistTurtle_GetResult_Request__Sequence * input,
  my_second_pkg_msgs__action__DistTurtle_GetResult_Request__Sequence * output);

/// Initialize action/DistTurtle message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * my_second_pkg_msgs__action__DistTurtle_GetResult_Response
 * )) before or use
 * my_second_pkg_msgs__action__DistTurtle_GetResult_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_my_second_pkg_msgs
bool
my_second_pkg_msgs__action__DistTurtle_GetResult_Response__init(my_second_pkg_msgs__action__DistTurtle_GetResult_Response * msg);

/// Finalize action/DistTurtle message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_my_second_pkg_msgs
void
my_second_pkg_msgs__action__DistTurtle_GetResult_Response__fini(my_second_pkg_msgs__action__DistTurtle_GetResult_Response * msg);

/// Create action/DistTurtle message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * my_second_pkg_msgs__action__DistTurtle_GetResult_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_my_second_pkg_msgs
my_second_pkg_msgs__action__DistTurtle_GetResult_Response *
my_second_pkg_msgs__action__DistTurtle_GetResult_Response__create();

/// Destroy action/DistTurtle message.
/**
 * It calls
 * my_second_pkg_msgs__action__DistTurtle_GetResult_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_my_second_pkg_msgs
void
my_second_pkg_msgs__action__DistTurtle_GetResult_Response__destroy(my_second_pkg_msgs__action__DistTurtle_GetResult_Response * msg);

/// Check for action/DistTurtle message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_my_second_pkg_msgs
bool
my_second_pkg_msgs__action__DistTurtle_GetResult_Response__are_equal(const my_second_pkg_msgs__action__DistTurtle_GetResult_Response * lhs, const my_second_pkg_msgs__action__DistTurtle_GetResult_Response * rhs);

/// Copy a action/DistTurtle message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_my_second_pkg_msgs
bool
my_second_pkg_msgs__action__DistTurtle_GetResult_Response__copy(
  const my_second_pkg_msgs__action__DistTurtle_GetResult_Response * input,
  my_second_pkg_msgs__action__DistTurtle_GetResult_Response * output);

/// Initialize array of action/DistTurtle messages.
/**
 * It allocates the memory for the number of elements and calls
 * my_second_pkg_msgs__action__DistTurtle_GetResult_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_my_second_pkg_msgs
bool
my_second_pkg_msgs__action__DistTurtle_GetResult_Response__Sequence__init(my_second_pkg_msgs__action__DistTurtle_GetResult_Response__Sequence * array, size_t size);

/// Finalize array of action/DistTurtle messages.
/**
 * It calls
 * my_second_pkg_msgs__action__DistTurtle_GetResult_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_my_second_pkg_msgs
void
my_second_pkg_msgs__action__DistTurtle_GetResult_Response__Sequence__fini(my_second_pkg_msgs__action__DistTurtle_GetResult_Response__Sequence * array);

/// Create array of action/DistTurtle messages.
/**
 * It allocates the memory for the array and calls
 * my_second_pkg_msgs__action__DistTurtle_GetResult_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_my_second_pkg_msgs
my_second_pkg_msgs__action__DistTurtle_GetResult_Response__Sequence *
my_second_pkg_msgs__action__DistTurtle_GetResult_Response__Sequence__create(size_t size);

/// Destroy array of action/DistTurtle messages.
/**
 * It calls
 * my_second_pkg_msgs__action__DistTurtle_GetResult_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_my_second_pkg_msgs
void
my_second_pkg_msgs__action__DistTurtle_GetResult_Response__Sequence__destroy(my_second_pkg_msgs__action__DistTurtle_GetResult_Response__Sequence * array);

/// Check for action/DistTurtle message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_my_second_pkg_msgs
bool
my_second_pkg_msgs__action__DistTurtle_GetResult_Response__Sequence__are_equal(const my_second_pkg_msgs__action__DistTurtle_GetResult_Response__Sequence * lhs, const my_second_pkg_msgs__action__DistTurtle_GetResult_Response__Sequence * rhs);

/// Copy an array of action/DistTurtle messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_my_second_pkg_msgs
bool
my_second_pkg_msgs__action__DistTurtle_GetResult_Response__Sequence__copy(
  const my_second_pkg_msgs__action__DistTurtle_GetResult_Response__Sequence * input,
  my_second_pkg_msgs__action__DistTurtle_GetResult_Response__Sequence * output);

/// Initialize action/DistTurtle message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * my_second_pkg_msgs__action__DistTurtle_FeedbackMessage
 * )) before or use
 * my_second_pkg_msgs__action__DistTurtle_FeedbackMessage__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_my_second_pkg_msgs
bool
my_second_pkg_msgs__action__DistTurtle_FeedbackMessage__init(my_second_pkg_msgs__action__DistTurtle_FeedbackMessage * msg);

/// Finalize action/DistTurtle message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_my_second_pkg_msgs
void
my_second_pkg_msgs__action__DistTurtle_FeedbackMessage__fini(my_second_pkg_msgs__action__DistTurtle_FeedbackMessage * msg);

/// Create action/DistTurtle message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * my_second_pkg_msgs__action__DistTurtle_FeedbackMessage__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_my_second_pkg_msgs
my_second_pkg_msgs__action__DistTurtle_FeedbackMessage *
my_second_pkg_msgs__action__DistTurtle_FeedbackMessage__create();

/// Destroy action/DistTurtle message.
/**
 * It calls
 * my_second_pkg_msgs__action__DistTurtle_FeedbackMessage__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_my_second_pkg_msgs
void
my_second_pkg_msgs__action__DistTurtle_FeedbackMessage__destroy(my_second_pkg_msgs__action__DistTurtle_FeedbackMessage * msg);

/// Check for action/DistTurtle message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_my_second_pkg_msgs
bool
my_second_pkg_msgs__action__DistTurtle_FeedbackMessage__are_equal(const my_second_pkg_msgs__action__DistTurtle_FeedbackMessage * lhs, const my_second_pkg_msgs__action__DistTurtle_FeedbackMessage * rhs);

/// Copy a action/DistTurtle message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_my_second_pkg_msgs
bool
my_second_pkg_msgs__action__DistTurtle_FeedbackMessage__copy(
  const my_second_pkg_msgs__action__DistTurtle_FeedbackMessage * input,
  my_second_pkg_msgs__action__DistTurtle_FeedbackMessage * output);

/// Initialize array of action/DistTurtle messages.
/**
 * It allocates the memory for the number of elements and calls
 * my_second_pkg_msgs__action__DistTurtle_FeedbackMessage__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_my_second_pkg_msgs
bool
my_second_pkg_msgs__action__DistTurtle_FeedbackMessage__Sequence__init(my_second_pkg_msgs__action__DistTurtle_FeedbackMessage__Sequence * array, size_t size);

/// Finalize array of action/DistTurtle messages.
/**
 * It calls
 * my_second_pkg_msgs__action__DistTurtle_FeedbackMessage__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_my_second_pkg_msgs
void
my_second_pkg_msgs__action__DistTurtle_FeedbackMessage__Sequence__fini(my_second_pkg_msgs__action__DistTurtle_FeedbackMessage__Sequence * array);

/// Create array of action/DistTurtle messages.
/**
 * It allocates the memory for the array and calls
 * my_second_pkg_msgs__action__DistTurtle_FeedbackMessage__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_my_second_pkg_msgs
my_second_pkg_msgs__action__DistTurtle_FeedbackMessage__Sequence *
my_second_pkg_msgs__action__DistTurtle_FeedbackMessage__Sequence__create(size_t size);

/// Destroy array of action/DistTurtle messages.
/**
 * It calls
 * my_second_pkg_msgs__action__DistTurtle_FeedbackMessage__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_my_second_pkg_msgs
void
my_second_pkg_msgs__action__DistTurtle_FeedbackMessage__Sequence__destroy(my_second_pkg_msgs__action__DistTurtle_FeedbackMessage__Sequence * array);

/// Check for action/DistTurtle message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_my_second_pkg_msgs
bool
my_second_pkg_msgs__action__DistTurtle_FeedbackMessage__Sequence__are_equal(const my_second_pkg_msgs__action__DistTurtle_FeedbackMessage__Sequence * lhs, const my_second_pkg_msgs__action__DistTurtle_FeedbackMessage__Sequence * rhs);

/// Copy an array of action/DistTurtle messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_my_second_pkg_msgs
bool
my_second_pkg_msgs__action__DistTurtle_FeedbackMessage__Sequence__copy(
  const my_second_pkg_msgs__action__DistTurtle_FeedbackMessage__Sequence * input,
  my_second_pkg_msgs__action__DistTurtle_FeedbackMessage__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // MY_SECOND_PKG_MSGS__ACTION__DETAIL__DIST_TURTLE__FUNCTIONS_H_
