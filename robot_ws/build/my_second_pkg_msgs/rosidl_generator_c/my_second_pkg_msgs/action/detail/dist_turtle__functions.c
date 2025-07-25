// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from my_second_pkg_msgs:action/DistTurtle.idl
// generated code does not contain a copyright notice
#include "my_second_pkg_msgs/action/detail/dist_turtle__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
my_second_pkg_msgs__action__DistTurtle_Goal__init(my_second_pkg_msgs__action__DistTurtle_Goal * msg)
{
  if (!msg) {
    return false;
  }
  // linear_x
  // angular_z
  // dist
  return true;
}

void
my_second_pkg_msgs__action__DistTurtle_Goal__fini(my_second_pkg_msgs__action__DistTurtle_Goal * msg)
{
  if (!msg) {
    return;
  }
  // linear_x
  // angular_z
  // dist
}

bool
my_second_pkg_msgs__action__DistTurtle_Goal__are_equal(const my_second_pkg_msgs__action__DistTurtle_Goal * lhs, const my_second_pkg_msgs__action__DistTurtle_Goal * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // linear_x
  if (lhs->linear_x != rhs->linear_x) {
    return false;
  }
  // angular_z
  if (lhs->angular_z != rhs->angular_z) {
    return false;
  }
  // dist
  if (lhs->dist != rhs->dist) {
    return false;
  }
  return true;
}

bool
my_second_pkg_msgs__action__DistTurtle_Goal__copy(
  const my_second_pkg_msgs__action__DistTurtle_Goal * input,
  my_second_pkg_msgs__action__DistTurtle_Goal * output)
{
  if (!input || !output) {
    return false;
  }
  // linear_x
  output->linear_x = input->linear_x;
  // angular_z
  output->angular_z = input->angular_z;
  // dist
  output->dist = input->dist;
  return true;
}

my_second_pkg_msgs__action__DistTurtle_Goal *
my_second_pkg_msgs__action__DistTurtle_Goal__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  my_second_pkg_msgs__action__DistTurtle_Goal * msg = (my_second_pkg_msgs__action__DistTurtle_Goal *)allocator.allocate(sizeof(my_second_pkg_msgs__action__DistTurtle_Goal), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(my_second_pkg_msgs__action__DistTurtle_Goal));
  bool success = my_second_pkg_msgs__action__DistTurtle_Goal__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
my_second_pkg_msgs__action__DistTurtle_Goal__destroy(my_second_pkg_msgs__action__DistTurtle_Goal * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    my_second_pkg_msgs__action__DistTurtle_Goal__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
my_second_pkg_msgs__action__DistTurtle_Goal__Sequence__init(my_second_pkg_msgs__action__DistTurtle_Goal__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  my_second_pkg_msgs__action__DistTurtle_Goal * data = NULL;

  if (size) {
    data = (my_second_pkg_msgs__action__DistTurtle_Goal *)allocator.zero_allocate(size, sizeof(my_second_pkg_msgs__action__DistTurtle_Goal), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = my_second_pkg_msgs__action__DistTurtle_Goal__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        my_second_pkg_msgs__action__DistTurtle_Goal__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
my_second_pkg_msgs__action__DistTurtle_Goal__Sequence__fini(my_second_pkg_msgs__action__DistTurtle_Goal__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      my_second_pkg_msgs__action__DistTurtle_Goal__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

my_second_pkg_msgs__action__DistTurtle_Goal__Sequence *
my_second_pkg_msgs__action__DistTurtle_Goal__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  my_second_pkg_msgs__action__DistTurtle_Goal__Sequence * array = (my_second_pkg_msgs__action__DistTurtle_Goal__Sequence *)allocator.allocate(sizeof(my_second_pkg_msgs__action__DistTurtle_Goal__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = my_second_pkg_msgs__action__DistTurtle_Goal__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
my_second_pkg_msgs__action__DistTurtle_Goal__Sequence__destroy(my_second_pkg_msgs__action__DistTurtle_Goal__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    my_second_pkg_msgs__action__DistTurtle_Goal__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
my_second_pkg_msgs__action__DistTurtle_Goal__Sequence__are_equal(const my_second_pkg_msgs__action__DistTurtle_Goal__Sequence * lhs, const my_second_pkg_msgs__action__DistTurtle_Goal__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!my_second_pkg_msgs__action__DistTurtle_Goal__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
my_second_pkg_msgs__action__DistTurtle_Goal__Sequence__copy(
  const my_second_pkg_msgs__action__DistTurtle_Goal__Sequence * input,
  my_second_pkg_msgs__action__DistTurtle_Goal__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(my_second_pkg_msgs__action__DistTurtle_Goal);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    my_second_pkg_msgs__action__DistTurtle_Goal * data =
      (my_second_pkg_msgs__action__DistTurtle_Goal *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!my_second_pkg_msgs__action__DistTurtle_Goal__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          my_second_pkg_msgs__action__DistTurtle_Goal__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!my_second_pkg_msgs__action__DistTurtle_Goal__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


bool
my_second_pkg_msgs__action__DistTurtle_Result__init(my_second_pkg_msgs__action__DistTurtle_Result * msg)
{
  if (!msg) {
    return false;
  }
  // pos_x
  // pos_y
  // pos_theta
  // result_dist
  return true;
}

void
my_second_pkg_msgs__action__DistTurtle_Result__fini(my_second_pkg_msgs__action__DistTurtle_Result * msg)
{
  if (!msg) {
    return;
  }
  // pos_x
  // pos_y
  // pos_theta
  // result_dist
}

bool
my_second_pkg_msgs__action__DistTurtle_Result__are_equal(const my_second_pkg_msgs__action__DistTurtle_Result * lhs, const my_second_pkg_msgs__action__DistTurtle_Result * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // pos_x
  if (lhs->pos_x != rhs->pos_x) {
    return false;
  }
  // pos_y
  if (lhs->pos_y != rhs->pos_y) {
    return false;
  }
  // pos_theta
  if (lhs->pos_theta != rhs->pos_theta) {
    return false;
  }
  // result_dist
  if (lhs->result_dist != rhs->result_dist) {
    return false;
  }
  return true;
}

bool
my_second_pkg_msgs__action__DistTurtle_Result__copy(
  const my_second_pkg_msgs__action__DistTurtle_Result * input,
  my_second_pkg_msgs__action__DistTurtle_Result * output)
{
  if (!input || !output) {
    return false;
  }
  // pos_x
  output->pos_x = input->pos_x;
  // pos_y
  output->pos_y = input->pos_y;
  // pos_theta
  output->pos_theta = input->pos_theta;
  // result_dist
  output->result_dist = input->result_dist;
  return true;
}

my_second_pkg_msgs__action__DistTurtle_Result *
my_second_pkg_msgs__action__DistTurtle_Result__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  my_second_pkg_msgs__action__DistTurtle_Result * msg = (my_second_pkg_msgs__action__DistTurtle_Result *)allocator.allocate(sizeof(my_second_pkg_msgs__action__DistTurtle_Result), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(my_second_pkg_msgs__action__DistTurtle_Result));
  bool success = my_second_pkg_msgs__action__DistTurtle_Result__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
my_second_pkg_msgs__action__DistTurtle_Result__destroy(my_second_pkg_msgs__action__DistTurtle_Result * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    my_second_pkg_msgs__action__DistTurtle_Result__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
my_second_pkg_msgs__action__DistTurtle_Result__Sequence__init(my_second_pkg_msgs__action__DistTurtle_Result__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  my_second_pkg_msgs__action__DistTurtle_Result * data = NULL;

  if (size) {
    data = (my_second_pkg_msgs__action__DistTurtle_Result *)allocator.zero_allocate(size, sizeof(my_second_pkg_msgs__action__DistTurtle_Result), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = my_second_pkg_msgs__action__DistTurtle_Result__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        my_second_pkg_msgs__action__DistTurtle_Result__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
my_second_pkg_msgs__action__DistTurtle_Result__Sequence__fini(my_second_pkg_msgs__action__DistTurtle_Result__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      my_second_pkg_msgs__action__DistTurtle_Result__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

my_second_pkg_msgs__action__DistTurtle_Result__Sequence *
my_second_pkg_msgs__action__DistTurtle_Result__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  my_second_pkg_msgs__action__DistTurtle_Result__Sequence * array = (my_second_pkg_msgs__action__DistTurtle_Result__Sequence *)allocator.allocate(sizeof(my_second_pkg_msgs__action__DistTurtle_Result__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = my_second_pkg_msgs__action__DistTurtle_Result__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
my_second_pkg_msgs__action__DistTurtle_Result__Sequence__destroy(my_second_pkg_msgs__action__DistTurtle_Result__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    my_second_pkg_msgs__action__DistTurtle_Result__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
my_second_pkg_msgs__action__DistTurtle_Result__Sequence__are_equal(const my_second_pkg_msgs__action__DistTurtle_Result__Sequence * lhs, const my_second_pkg_msgs__action__DistTurtle_Result__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!my_second_pkg_msgs__action__DistTurtle_Result__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
my_second_pkg_msgs__action__DistTurtle_Result__Sequence__copy(
  const my_second_pkg_msgs__action__DistTurtle_Result__Sequence * input,
  my_second_pkg_msgs__action__DistTurtle_Result__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(my_second_pkg_msgs__action__DistTurtle_Result);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    my_second_pkg_msgs__action__DistTurtle_Result * data =
      (my_second_pkg_msgs__action__DistTurtle_Result *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!my_second_pkg_msgs__action__DistTurtle_Result__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          my_second_pkg_msgs__action__DistTurtle_Result__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!my_second_pkg_msgs__action__DistTurtle_Result__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


bool
my_second_pkg_msgs__action__DistTurtle_Feedback__init(my_second_pkg_msgs__action__DistTurtle_Feedback * msg)
{
  if (!msg) {
    return false;
  }
  // remained_dist
  return true;
}

void
my_second_pkg_msgs__action__DistTurtle_Feedback__fini(my_second_pkg_msgs__action__DistTurtle_Feedback * msg)
{
  if (!msg) {
    return;
  }
  // remained_dist
}

bool
my_second_pkg_msgs__action__DistTurtle_Feedback__are_equal(const my_second_pkg_msgs__action__DistTurtle_Feedback * lhs, const my_second_pkg_msgs__action__DistTurtle_Feedback * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // remained_dist
  if (lhs->remained_dist != rhs->remained_dist) {
    return false;
  }
  return true;
}

bool
my_second_pkg_msgs__action__DistTurtle_Feedback__copy(
  const my_second_pkg_msgs__action__DistTurtle_Feedback * input,
  my_second_pkg_msgs__action__DistTurtle_Feedback * output)
{
  if (!input || !output) {
    return false;
  }
  // remained_dist
  output->remained_dist = input->remained_dist;
  return true;
}

my_second_pkg_msgs__action__DistTurtle_Feedback *
my_second_pkg_msgs__action__DistTurtle_Feedback__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  my_second_pkg_msgs__action__DistTurtle_Feedback * msg = (my_second_pkg_msgs__action__DistTurtle_Feedback *)allocator.allocate(sizeof(my_second_pkg_msgs__action__DistTurtle_Feedback), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(my_second_pkg_msgs__action__DistTurtle_Feedback));
  bool success = my_second_pkg_msgs__action__DistTurtle_Feedback__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
my_second_pkg_msgs__action__DistTurtle_Feedback__destroy(my_second_pkg_msgs__action__DistTurtle_Feedback * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    my_second_pkg_msgs__action__DistTurtle_Feedback__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
my_second_pkg_msgs__action__DistTurtle_Feedback__Sequence__init(my_second_pkg_msgs__action__DistTurtle_Feedback__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  my_second_pkg_msgs__action__DistTurtle_Feedback * data = NULL;

  if (size) {
    data = (my_second_pkg_msgs__action__DistTurtle_Feedback *)allocator.zero_allocate(size, sizeof(my_second_pkg_msgs__action__DistTurtle_Feedback), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = my_second_pkg_msgs__action__DistTurtle_Feedback__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        my_second_pkg_msgs__action__DistTurtle_Feedback__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
my_second_pkg_msgs__action__DistTurtle_Feedback__Sequence__fini(my_second_pkg_msgs__action__DistTurtle_Feedback__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      my_second_pkg_msgs__action__DistTurtle_Feedback__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

my_second_pkg_msgs__action__DistTurtle_Feedback__Sequence *
my_second_pkg_msgs__action__DistTurtle_Feedback__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  my_second_pkg_msgs__action__DistTurtle_Feedback__Sequence * array = (my_second_pkg_msgs__action__DistTurtle_Feedback__Sequence *)allocator.allocate(sizeof(my_second_pkg_msgs__action__DistTurtle_Feedback__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = my_second_pkg_msgs__action__DistTurtle_Feedback__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
my_second_pkg_msgs__action__DistTurtle_Feedback__Sequence__destroy(my_second_pkg_msgs__action__DistTurtle_Feedback__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    my_second_pkg_msgs__action__DistTurtle_Feedback__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
my_second_pkg_msgs__action__DistTurtle_Feedback__Sequence__are_equal(const my_second_pkg_msgs__action__DistTurtle_Feedback__Sequence * lhs, const my_second_pkg_msgs__action__DistTurtle_Feedback__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!my_second_pkg_msgs__action__DistTurtle_Feedback__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
my_second_pkg_msgs__action__DistTurtle_Feedback__Sequence__copy(
  const my_second_pkg_msgs__action__DistTurtle_Feedback__Sequence * input,
  my_second_pkg_msgs__action__DistTurtle_Feedback__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(my_second_pkg_msgs__action__DistTurtle_Feedback);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    my_second_pkg_msgs__action__DistTurtle_Feedback * data =
      (my_second_pkg_msgs__action__DistTurtle_Feedback *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!my_second_pkg_msgs__action__DistTurtle_Feedback__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          my_second_pkg_msgs__action__DistTurtle_Feedback__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!my_second_pkg_msgs__action__DistTurtle_Feedback__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `goal_id`
#include "unique_identifier_msgs/msg/detail/uuid__functions.h"
// Member `goal`
// already included above
// #include "my_second_pkg_msgs/action/detail/dist_turtle__functions.h"

bool
my_second_pkg_msgs__action__DistTurtle_SendGoal_Request__init(my_second_pkg_msgs__action__DistTurtle_SendGoal_Request * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    my_second_pkg_msgs__action__DistTurtle_SendGoal_Request__fini(msg);
    return false;
  }
  // goal
  if (!my_second_pkg_msgs__action__DistTurtle_Goal__init(&msg->goal)) {
    my_second_pkg_msgs__action__DistTurtle_SendGoal_Request__fini(msg);
    return false;
  }
  return true;
}

void
my_second_pkg_msgs__action__DistTurtle_SendGoal_Request__fini(my_second_pkg_msgs__action__DistTurtle_SendGoal_Request * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
  // goal
  my_second_pkg_msgs__action__DistTurtle_Goal__fini(&msg->goal);
}

bool
my_second_pkg_msgs__action__DistTurtle_SendGoal_Request__are_equal(const my_second_pkg_msgs__action__DistTurtle_SendGoal_Request * lhs, const my_second_pkg_msgs__action__DistTurtle_SendGoal_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__are_equal(
      &(lhs->goal_id), &(rhs->goal_id)))
  {
    return false;
  }
  // goal
  if (!my_second_pkg_msgs__action__DistTurtle_Goal__are_equal(
      &(lhs->goal), &(rhs->goal)))
  {
    return false;
  }
  return true;
}

bool
my_second_pkg_msgs__action__DistTurtle_SendGoal_Request__copy(
  const my_second_pkg_msgs__action__DistTurtle_SendGoal_Request * input,
  my_second_pkg_msgs__action__DistTurtle_SendGoal_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__copy(
      &(input->goal_id), &(output->goal_id)))
  {
    return false;
  }
  // goal
  if (!my_second_pkg_msgs__action__DistTurtle_Goal__copy(
      &(input->goal), &(output->goal)))
  {
    return false;
  }
  return true;
}

my_second_pkg_msgs__action__DistTurtle_SendGoal_Request *
my_second_pkg_msgs__action__DistTurtle_SendGoal_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  my_second_pkg_msgs__action__DistTurtle_SendGoal_Request * msg = (my_second_pkg_msgs__action__DistTurtle_SendGoal_Request *)allocator.allocate(sizeof(my_second_pkg_msgs__action__DistTurtle_SendGoal_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(my_second_pkg_msgs__action__DistTurtle_SendGoal_Request));
  bool success = my_second_pkg_msgs__action__DistTurtle_SendGoal_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
my_second_pkg_msgs__action__DistTurtle_SendGoal_Request__destroy(my_second_pkg_msgs__action__DistTurtle_SendGoal_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    my_second_pkg_msgs__action__DistTurtle_SendGoal_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
my_second_pkg_msgs__action__DistTurtle_SendGoal_Request__Sequence__init(my_second_pkg_msgs__action__DistTurtle_SendGoal_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  my_second_pkg_msgs__action__DistTurtle_SendGoal_Request * data = NULL;

  if (size) {
    data = (my_second_pkg_msgs__action__DistTurtle_SendGoal_Request *)allocator.zero_allocate(size, sizeof(my_second_pkg_msgs__action__DistTurtle_SendGoal_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = my_second_pkg_msgs__action__DistTurtle_SendGoal_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        my_second_pkg_msgs__action__DistTurtle_SendGoal_Request__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
my_second_pkg_msgs__action__DistTurtle_SendGoal_Request__Sequence__fini(my_second_pkg_msgs__action__DistTurtle_SendGoal_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      my_second_pkg_msgs__action__DistTurtle_SendGoal_Request__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

my_second_pkg_msgs__action__DistTurtle_SendGoal_Request__Sequence *
my_second_pkg_msgs__action__DistTurtle_SendGoal_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  my_second_pkg_msgs__action__DistTurtle_SendGoal_Request__Sequence * array = (my_second_pkg_msgs__action__DistTurtle_SendGoal_Request__Sequence *)allocator.allocate(sizeof(my_second_pkg_msgs__action__DistTurtle_SendGoal_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = my_second_pkg_msgs__action__DistTurtle_SendGoal_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
my_second_pkg_msgs__action__DistTurtle_SendGoal_Request__Sequence__destroy(my_second_pkg_msgs__action__DistTurtle_SendGoal_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    my_second_pkg_msgs__action__DistTurtle_SendGoal_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
my_second_pkg_msgs__action__DistTurtle_SendGoal_Request__Sequence__are_equal(const my_second_pkg_msgs__action__DistTurtle_SendGoal_Request__Sequence * lhs, const my_second_pkg_msgs__action__DistTurtle_SendGoal_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!my_second_pkg_msgs__action__DistTurtle_SendGoal_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
my_second_pkg_msgs__action__DistTurtle_SendGoal_Request__Sequence__copy(
  const my_second_pkg_msgs__action__DistTurtle_SendGoal_Request__Sequence * input,
  my_second_pkg_msgs__action__DistTurtle_SendGoal_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(my_second_pkg_msgs__action__DistTurtle_SendGoal_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    my_second_pkg_msgs__action__DistTurtle_SendGoal_Request * data =
      (my_second_pkg_msgs__action__DistTurtle_SendGoal_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!my_second_pkg_msgs__action__DistTurtle_SendGoal_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          my_second_pkg_msgs__action__DistTurtle_SendGoal_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!my_second_pkg_msgs__action__DistTurtle_SendGoal_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `stamp`
#include "builtin_interfaces/msg/detail/time__functions.h"

bool
my_second_pkg_msgs__action__DistTurtle_SendGoal_Response__init(my_second_pkg_msgs__action__DistTurtle_SendGoal_Response * msg)
{
  if (!msg) {
    return false;
  }
  // accepted
  // stamp
  if (!builtin_interfaces__msg__Time__init(&msg->stamp)) {
    my_second_pkg_msgs__action__DistTurtle_SendGoal_Response__fini(msg);
    return false;
  }
  return true;
}

void
my_second_pkg_msgs__action__DistTurtle_SendGoal_Response__fini(my_second_pkg_msgs__action__DistTurtle_SendGoal_Response * msg)
{
  if (!msg) {
    return;
  }
  // accepted
  // stamp
  builtin_interfaces__msg__Time__fini(&msg->stamp);
}

bool
my_second_pkg_msgs__action__DistTurtle_SendGoal_Response__are_equal(const my_second_pkg_msgs__action__DistTurtle_SendGoal_Response * lhs, const my_second_pkg_msgs__action__DistTurtle_SendGoal_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // accepted
  if (lhs->accepted != rhs->accepted) {
    return false;
  }
  // stamp
  if (!builtin_interfaces__msg__Time__are_equal(
      &(lhs->stamp), &(rhs->stamp)))
  {
    return false;
  }
  return true;
}

bool
my_second_pkg_msgs__action__DistTurtle_SendGoal_Response__copy(
  const my_second_pkg_msgs__action__DistTurtle_SendGoal_Response * input,
  my_second_pkg_msgs__action__DistTurtle_SendGoal_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // accepted
  output->accepted = input->accepted;
  // stamp
  if (!builtin_interfaces__msg__Time__copy(
      &(input->stamp), &(output->stamp)))
  {
    return false;
  }
  return true;
}

my_second_pkg_msgs__action__DistTurtle_SendGoal_Response *
my_second_pkg_msgs__action__DistTurtle_SendGoal_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  my_second_pkg_msgs__action__DistTurtle_SendGoal_Response * msg = (my_second_pkg_msgs__action__DistTurtle_SendGoal_Response *)allocator.allocate(sizeof(my_second_pkg_msgs__action__DistTurtle_SendGoal_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(my_second_pkg_msgs__action__DistTurtle_SendGoal_Response));
  bool success = my_second_pkg_msgs__action__DistTurtle_SendGoal_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
my_second_pkg_msgs__action__DistTurtle_SendGoal_Response__destroy(my_second_pkg_msgs__action__DistTurtle_SendGoal_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    my_second_pkg_msgs__action__DistTurtle_SendGoal_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
my_second_pkg_msgs__action__DistTurtle_SendGoal_Response__Sequence__init(my_second_pkg_msgs__action__DistTurtle_SendGoal_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  my_second_pkg_msgs__action__DistTurtle_SendGoal_Response * data = NULL;

  if (size) {
    data = (my_second_pkg_msgs__action__DistTurtle_SendGoal_Response *)allocator.zero_allocate(size, sizeof(my_second_pkg_msgs__action__DistTurtle_SendGoal_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = my_second_pkg_msgs__action__DistTurtle_SendGoal_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        my_second_pkg_msgs__action__DistTurtle_SendGoal_Response__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
my_second_pkg_msgs__action__DistTurtle_SendGoal_Response__Sequence__fini(my_second_pkg_msgs__action__DistTurtle_SendGoal_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      my_second_pkg_msgs__action__DistTurtle_SendGoal_Response__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

my_second_pkg_msgs__action__DistTurtle_SendGoal_Response__Sequence *
my_second_pkg_msgs__action__DistTurtle_SendGoal_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  my_second_pkg_msgs__action__DistTurtle_SendGoal_Response__Sequence * array = (my_second_pkg_msgs__action__DistTurtle_SendGoal_Response__Sequence *)allocator.allocate(sizeof(my_second_pkg_msgs__action__DistTurtle_SendGoal_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = my_second_pkg_msgs__action__DistTurtle_SendGoal_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
my_second_pkg_msgs__action__DistTurtle_SendGoal_Response__Sequence__destroy(my_second_pkg_msgs__action__DistTurtle_SendGoal_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    my_second_pkg_msgs__action__DistTurtle_SendGoal_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
my_second_pkg_msgs__action__DistTurtle_SendGoal_Response__Sequence__are_equal(const my_second_pkg_msgs__action__DistTurtle_SendGoal_Response__Sequence * lhs, const my_second_pkg_msgs__action__DistTurtle_SendGoal_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!my_second_pkg_msgs__action__DistTurtle_SendGoal_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
my_second_pkg_msgs__action__DistTurtle_SendGoal_Response__Sequence__copy(
  const my_second_pkg_msgs__action__DistTurtle_SendGoal_Response__Sequence * input,
  my_second_pkg_msgs__action__DistTurtle_SendGoal_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(my_second_pkg_msgs__action__DistTurtle_SendGoal_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    my_second_pkg_msgs__action__DistTurtle_SendGoal_Response * data =
      (my_second_pkg_msgs__action__DistTurtle_SendGoal_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!my_second_pkg_msgs__action__DistTurtle_SendGoal_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          my_second_pkg_msgs__action__DistTurtle_SendGoal_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!my_second_pkg_msgs__action__DistTurtle_SendGoal_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__functions.h"

bool
my_second_pkg_msgs__action__DistTurtle_GetResult_Request__init(my_second_pkg_msgs__action__DistTurtle_GetResult_Request * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    my_second_pkg_msgs__action__DistTurtle_GetResult_Request__fini(msg);
    return false;
  }
  return true;
}

void
my_second_pkg_msgs__action__DistTurtle_GetResult_Request__fini(my_second_pkg_msgs__action__DistTurtle_GetResult_Request * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
}

bool
my_second_pkg_msgs__action__DistTurtle_GetResult_Request__are_equal(const my_second_pkg_msgs__action__DistTurtle_GetResult_Request * lhs, const my_second_pkg_msgs__action__DistTurtle_GetResult_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__are_equal(
      &(lhs->goal_id), &(rhs->goal_id)))
  {
    return false;
  }
  return true;
}

bool
my_second_pkg_msgs__action__DistTurtle_GetResult_Request__copy(
  const my_second_pkg_msgs__action__DistTurtle_GetResult_Request * input,
  my_second_pkg_msgs__action__DistTurtle_GetResult_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__copy(
      &(input->goal_id), &(output->goal_id)))
  {
    return false;
  }
  return true;
}

my_second_pkg_msgs__action__DistTurtle_GetResult_Request *
my_second_pkg_msgs__action__DistTurtle_GetResult_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  my_second_pkg_msgs__action__DistTurtle_GetResult_Request * msg = (my_second_pkg_msgs__action__DistTurtle_GetResult_Request *)allocator.allocate(sizeof(my_second_pkg_msgs__action__DistTurtle_GetResult_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(my_second_pkg_msgs__action__DistTurtle_GetResult_Request));
  bool success = my_second_pkg_msgs__action__DistTurtle_GetResult_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
my_second_pkg_msgs__action__DistTurtle_GetResult_Request__destroy(my_second_pkg_msgs__action__DistTurtle_GetResult_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    my_second_pkg_msgs__action__DistTurtle_GetResult_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
my_second_pkg_msgs__action__DistTurtle_GetResult_Request__Sequence__init(my_second_pkg_msgs__action__DistTurtle_GetResult_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  my_second_pkg_msgs__action__DistTurtle_GetResult_Request * data = NULL;

  if (size) {
    data = (my_second_pkg_msgs__action__DistTurtle_GetResult_Request *)allocator.zero_allocate(size, sizeof(my_second_pkg_msgs__action__DistTurtle_GetResult_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = my_second_pkg_msgs__action__DistTurtle_GetResult_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        my_second_pkg_msgs__action__DistTurtle_GetResult_Request__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
my_second_pkg_msgs__action__DistTurtle_GetResult_Request__Sequence__fini(my_second_pkg_msgs__action__DistTurtle_GetResult_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      my_second_pkg_msgs__action__DistTurtle_GetResult_Request__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

my_second_pkg_msgs__action__DistTurtle_GetResult_Request__Sequence *
my_second_pkg_msgs__action__DistTurtle_GetResult_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  my_second_pkg_msgs__action__DistTurtle_GetResult_Request__Sequence * array = (my_second_pkg_msgs__action__DistTurtle_GetResult_Request__Sequence *)allocator.allocate(sizeof(my_second_pkg_msgs__action__DistTurtle_GetResult_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = my_second_pkg_msgs__action__DistTurtle_GetResult_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
my_second_pkg_msgs__action__DistTurtle_GetResult_Request__Sequence__destroy(my_second_pkg_msgs__action__DistTurtle_GetResult_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    my_second_pkg_msgs__action__DistTurtle_GetResult_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
my_second_pkg_msgs__action__DistTurtle_GetResult_Request__Sequence__are_equal(const my_second_pkg_msgs__action__DistTurtle_GetResult_Request__Sequence * lhs, const my_second_pkg_msgs__action__DistTurtle_GetResult_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!my_second_pkg_msgs__action__DistTurtle_GetResult_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
my_second_pkg_msgs__action__DistTurtle_GetResult_Request__Sequence__copy(
  const my_second_pkg_msgs__action__DistTurtle_GetResult_Request__Sequence * input,
  my_second_pkg_msgs__action__DistTurtle_GetResult_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(my_second_pkg_msgs__action__DistTurtle_GetResult_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    my_second_pkg_msgs__action__DistTurtle_GetResult_Request * data =
      (my_second_pkg_msgs__action__DistTurtle_GetResult_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!my_second_pkg_msgs__action__DistTurtle_GetResult_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          my_second_pkg_msgs__action__DistTurtle_GetResult_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!my_second_pkg_msgs__action__DistTurtle_GetResult_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `result`
// already included above
// #include "my_second_pkg_msgs/action/detail/dist_turtle__functions.h"

bool
my_second_pkg_msgs__action__DistTurtle_GetResult_Response__init(my_second_pkg_msgs__action__DistTurtle_GetResult_Response * msg)
{
  if (!msg) {
    return false;
  }
  // status
  // result
  if (!my_second_pkg_msgs__action__DistTurtle_Result__init(&msg->result)) {
    my_second_pkg_msgs__action__DistTurtle_GetResult_Response__fini(msg);
    return false;
  }
  return true;
}

void
my_second_pkg_msgs__action__DistTurtle_GetResult_Response__fini(my_second_pkg_msgs__action__DistTurtle_GetResult_Response * msg)
{
  if (!msg) {
    return;
  }
  // status
  // result
  my_second_pkg_msgs__action__DistTurtle_Result__fini(&msg->result);
}

bool
my_second_pkg_msgs__action__DistTurtle_GetResult_Response__are_equal(const my_second_pkg_msgs__action__DistTurtle_GetResult_Response * lhs, const my_second_pkg_msgs__action__DistTurtle_GetResult_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // status
  if (lhs->status != rhs->status) {
    return false;
  }
  // result
  if (!my_second_pkg_msgs__action__DistTurtle_Result__are_equal(
      &(lhs->result), &(rhs->result)))
  {
    return false;
  }
  return true;
}

bool
my_second_pkg_msgs__action__DistTurtle_GetResult_Response__copy(
  const my_second_pkg_msgs__action__DistTurtle_GetResult_Response * input,
  my_second_pkg_msgs__action__DistTurtle_GetResult_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // status
  output->status = input->status;
  // result
  if (!my_second_pkg_msgs__action__DistTurtle_Result__copy(
      &(input->result), &(output->result)))
  {
    return false;
  }
  return true;
}

my_second_pkg_msgs__action__DistTurtle_GetResult_Response *
my_second_pkg_msgs__action__DistTurtle_GetResult_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  my_second_pkg_msgs__action__DistTurtle_GetResult_Response * msg = (my_second_pkg_msgs__action__DistTurtle_GetResult_Response *)allocator.allocate(sizeof(my_second_pkg_msgs__action__DistTurtle_GetResult_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(my_second_pkg_msgs__action__DistTurtle_GetResult_Response));
  bool success = my_second_pkg_msgs__action__DistTurtle_GetResult_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
my_second_pkg_msgs__action__DistTurtle_GetResult_Response__destroy(my_second_pkg_msgs__action__DistTurtle_GetResult_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    my_second_pkg_msgs__action__DistTurtle_GetResult_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
my_second_pkg_msgs__action__DistTurtle_GetResult_Response__Sequence__init(my_second_pkg_msgs__action__DistTurtle_GetResult_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  my_second_pkg_msgs__action__DistTurtle_GetResult_Response * data = NULL;

  if (size) {
    data = (my_second_pkg_msgs__action__DistTurtle_GetResult_Response *)allocator.zero_allocate(size, sizeof(my_second_pkg_msgs__action__DistTurtle_GetResult_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = my_second_pkg_msgs__action__DistTurtle_GetResult_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        my_second_pkg_msgs__action__DistTurtle_GetResult_Response__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
my_second_pkg_msgs__action__DistTurtle_GetResult_Response__Sequence__fini(my_second_pkg_msgs__action__DistTurtle_GetResult_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      my_second_pkg_msgs__action__DistTurtle_GetResult_Response__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

my_second_pkg_msgs__action__DistTurtle_GetResult_Response__Sequence *
my_second_pkg_msgs__action__DistTurtle_GetResult_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  my_second_pkg_msgs__action__DistTurtle_GetResult_Response__Sequence * array = (my_second_pkg_msgs__action__DistTurtle_GetResult_Response__Sequence *)allocator.allocate(sizeof(my_second_pkg_msgs__action__DistTurtle_GetResult_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = my_second_pkg_msgs__action__DistTurtle_GetResult_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
my_second_pkg_msgs__action__DistTurtle_GetResult_Response__Sequence__destroy(my_second_pkg_msgs__action__DistTurtle_GetResult_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    my_second_pkg_msgs__action__DistTurtle_GetResult_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
my_second_pkg_msgs__action__DistTurtle_GetResult_Response__Sequence__are_equal(const my_second_pkg_msgs__action__DistTurtle_GetResult_Response__Sequence * lhs, const my_second_pkg_msgs__action__DistTurtle_GetResult_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!my_second_pkg_msgs__action__DistTurtle_GetResult_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
my_second_pkg_msgs__action__DistTurtle_GetResult_Response__Sequence__copy(
  const my_second_pkg_msgs__action__DistTurtle_GetResult_Response__Sequence * input,
  my_second_pkg_msgs__action__DistTurtle_GetResult_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(my_second_pkg_msgs__action__DistTurtle_GetResult_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    my_second_pkg_msgs__action__DistTurtle_GetResult_Response * data =
      (my_second_pkg_msgs__action__DistTurtle_GetResult_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!my_second_pkg_msgs__action__DistTurtle_GetResult_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          my_second_pkg_msgs__action__DistTurtle_GetResult_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!my_second_pkg_msgs__action__DistTurtle_GetResult_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__functions.h"
// Member `feedback`
// already included above
// #include "my_second_pkg_msgs/action/detail/dist_turtle__functions.h"

bool
my_second_pkg_msgs__action__DistTurtle_FeedbackMessage__init(my_second_pkg_msgs__action__DistTurtle_FeedbackMessage * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    my_second_pkg_msgs__action__DistTurtle_FeedbackMessage__fini(msg);
    return false;
  }
  // feedback
  if (!my_second_pkg_msgs__action__DistTurtle_Feedback__init(&msg->feedback)) {
    my_second_pkg_msgs__action__DistTurtle_FeedbackMessage__fini(msg);
    return false;
  }
  return true;
}

void
my_second_pkg_msgs__action__DistTurtle_FeedbackMessage__fini(my_second_pkg_msgs__action__DistTurtle_FeedbackMessage * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
  // feedback
  my_second_pkg_msgs__action__DistTurtle_Feedback__fini(&msg->feedback);
}

bool
my_second_pkg_msgs__action__DistTurtle_FeedbackMessage__are_equal(const my_second_pkg_msgs__action__DistTurtle_FeedbackMessage * lhs, const my_second_pkg_msgs__action__DistTurtle_FeedbackMessage * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__are_equal(
      &(lhs->goal_id), &(rhs->goal_id)))
  {
    return false;
  }
  // feedback
  if (!my_second_pkg_msgs__action__DistTurtle_Feedback__are_equal(
      &(lhs->feedback), &(rhs->feedback)))
  {
    return false;
  }
  return true;
}

bool
my_second_pkg_msgs__action__DistTurtle_FeedbackMessage__copy(
  const my_second_pkg_msgs__action__DistTurtle_FeedbackMessage * input,
  my_second_pkg_msgs__action__DistTurtle_FeedbackMessage * output)
{
  if (!input || !output) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__copy(
      &(input->goal_id), &(output->goal_id)))
  {
    return false;
  }
  // feedback
  if (!my_second_pkg_msgs__action__DistTurtle_Feedback__copy(
      &(input->feedback), &(output->feedback)))
  {
    return false;
  }
  return true;
}

my_second_pkg_msgs__action__DistTurtle_FeedbackMessage *
my_second_pkg_msgs__action__DistTurtle_FeedbackMessage__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  my_second_pkg_msgs__action__DistTurtle_FeedbackMessage * msg = (my_second_pkg_msgs__action__DistTurtle_FeedbackMessage *)allocator.allocate(sizeof(my_second_pkg_msgs__action__DistTurtle_FeedbackMessage), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(my_second_pkg_msgs__action__DistTurtle_FeedbackMessage));
  bool success = my_second_pkg_msgs__action__DistTurtle_FeedbackMessage__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
my_second_pkg_msgs__action__DistTurtle_FeedbackMessage__destroy(my_second_pkg_msgs__action__DistTurtle_FeedbackMessage * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    my_second_pkg_msgs__action__DistTurtle_FeedbackMessage__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
my_second_pkg_msgs__action__DistTurtle_FeedbackMessage__Sequence__init(my_second_pkg_msgs__action__DistTurtle_FeedbackMessage__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  my_second_pkg_msgs__action__DistTurtle_FeedbackMessage * data = NULL;

  if (size) {
    data = (my_second_pkg_msgs__action__DistTurtle_FeedbackMessage *)allocator.zero_allocate(size, sizeof(my_second_pkg_msgs__action__DistTurtle_FeedbackMessage), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = my_second_pkg_msgs__action__DistTurtle_FeedbackMessage__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        my_second_pkg_msgs__action__DistTurtle_FeedbackMessage__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
my_second_pkg_msgs__action__DistTurtle_FeedbackMessage__Sequence__fini(my_second_pkg_msgs__action__DistTurtle_FeedbackMessage__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      my_second_pkg_msgs__action__DistTurtle_FeedbackMessage__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

my_second_pkg_msgs__action__DistTurtle_FeedbackMessage__Sequence *
my_second_pkg_msgs__action__DistTurtle_FeedbackMessage__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  my_second_pkg_msgs__action__DistTurtle_FeedbackMessage__Sequence * array = (my_second_pkg_msgs__action__DistTurtle_FeedbackMessage__Sequence *)allocator.allocate(sizeof(my_second_pkg_msgs__action__DistTurtle_FeedbackMessage__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = my_second_pkg_msgs__action__DistTurtle_FeedbackMessage__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
my_second_pkg_msgs__action__DistTurtle_FeedbackMessage__Sequence__destroy(my_second_pkg_msgs__action__DistTurtle_FeedbackMessage__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    my_second_pkg_msgs__action__DistTurtle_FeedbackMessage__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
my_second_pkg_msgs__action__DistTurtle_FeedbackMessage__Sequence__are_equal(const my_second_pkg_msgs__action__DistTurtle_FeedbackMessage__Sequence * lhs, const my_second_pkg_msgs__action__DistTurtle_FeedbackMessage__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!my_second_pkg_msgs__action__DistTurtle_FeedbackMessage__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
my_second_pkg_msgs__action__DistTurtle_FeedbackMessage__Sequence__copy(
  const my_second_pkg_msgs__action__DistTurtle_FeedbackMessage__Sequence * input,
  my_second_pkg_msgs__action__DistTurtle_FeedbackMessage__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(my_second_pkg_msgs__action__DistTurtle_FeedbackMessage);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    my_second_pkg_msgs__action__DistTurtle_FeedbackMessage * data =
      (my_second_pkg_msgs__action__DistTurtle_FeedbackMessage *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!my_second_pkg_msgs__action__DistTurtle_FeedbackMessage__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          my_second_pkg_msgs__action__DistTurtle_FeedbackMessage__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!my_second_pkg_msgs__action__DistTurtle_FeedbackMessage__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
