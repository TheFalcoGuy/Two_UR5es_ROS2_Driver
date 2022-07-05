// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from move_arm_interfaces:srv/MoveArm.idl
// generated code does not contain a copyright notice
#include "move_arm_interfaces/srv/detail/move_arm__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

// Include directives for member types
// Member `pose`
#include "geometry_msgs/msg/detail/pose__functions.h"

bool
move_arm_interfaces__srv__MoveArm_Request__init(move_arm_interfaces__srv__MoveArm_Request * msg)
{
  if (!msg) {
    return false;
  }
  // pose
  if (!geometry_msgs__msg__Pose__init(&msg->pose)) {
    move_arm_interfaces__srv__MoveArm_Request__fini(msg);
    return false;
  }
  return true;
}

void
move_arm_interfaces__srv__MoveArm_Request__fini(move_arm_interfaces__srv__MoveArm_Request * msg)
{
  if (!msg) {
    return;
  }
  // pose
  geometry_msgs__msg__Pose__fini(&msg->pose);
}

move_arm_interfaces__srv__MoveArm_Request *
move_arm_interfaces__srv__MoveArm_Request__create()
{
  move_arm_interfaces__srv__MoveArm_Request * msg = (move_arm_interfaces__srv__MoveArm_Request *)malloc(sizeof(move_arm_interfaces__srv__MoveArm_Request));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(move_arm_interfaces__srv__MoveArm_Request));
  bool success = move_arm_interfaces__srv__MoveArm_Request__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
move_arm_interfaces__srv__MoveArm_Request__destroy(move_arm_interfaces__srv__MoveArm_Request * msg)
{
  if (msg) {
    move_arm_interfaces__srv__MoveArm_Request__fini(msg);
  }
  free(msg);
}


bool
move_arm_interfaces__srv__MoveArm_Request__Sequence__init(move_arm_interfaces__srv__MoveArm_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  move_arm_interfaces__srv__MoveArm_Request * data = NULL;
  if (size) {
    data = (move_arm_interfaces__srv__MoveArm_Request *)calloc(size, sizeof(move_arm_interfaces__srv__MoveArm_Request));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = move_arm_interfaces__srv__MoveArm_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        move_arm_interfaces__srv__MoveArm_Request__fini(&data[i - 1]);
      }
      free(data);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
move_arm_interfaces__srv__MoveArm_Request__Sequence__fini(move_arm_interfaces__srv__MoveArm_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      move_arm_interfaces__srv__MoveArm_Request__fini(&array->data[i]);
    }
    free(array->data);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

move_arm_interfaces__srv__MoveArm_Request__Sequence *
move_arm_interfaces__srv__MoveArm_Request__Sequence__create(size_t size)
{
  move_arm_interfaces__srv__MoveArm_Request__Sequence * array = (move_arm_interfaces__srv__MoveArm_Request__Sequence *)malloc(sizeof(move_arm_interfaces__srv__MoveArm_Request__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = move_arm_interfaces__srv__MoveArm_Request__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
move_arm_interfaces__srv__MoveArm_Request__Sequence__destroy(move_arm_interfaces__srv__MoveArm_Request__Sequence * array)
{
  if (array) {
    move_arm_interfaces__srv__MoveArm_Request__Sequence__fini(array);
  }
  free(array);
}


bool
move_arm_interfaces__srv__MoveArm_Response__init(move_arm_interfaces__srv__MoveArm_Response * msg)
{
  if (!msg) {
    return false;
  }
  // success
  return true;
}

void
move_arm_interfaces__srv__MoveArm_Response__fini(move_arm_interfaces__srv__MoveArm_Response * msg)
{
  if (!msg) {
    return;
  }
  // success
}

move_arm_interfaces__srv__MoveArm_Response *
move_arm_interfaces__srv__MoveArm_Response__create()
{
  move_arm_interfaces__srv__MoveArm_Response * msg = (move_arm_interfaces__srv__MoveArm_Response *)malloc(sizeof(move_arm_interfaces__srv__MoveArm_Response));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(move_arm_interfaces__srv__MoveArm_Response));
  bool success = move_arm_interfaces__srv__MoveArm_Response__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
move_arm_interfaces__srv__MoveArm_Response__destroy(move_arm_interfaces__srv__MoveArm_Response * msg)
{
  if (msg) {
    move_arm_interfaces__srv__MoveArm_Response__fini(msg);
  }
  free(msg);
}


bool
move_arm_interfaces__srv__MoveArm_Response__Sequence__init(move_arm_interfaces__srv__MoveArm_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  move_arm_interfaces__srv__MoveArm_Response * data = NULL;
  if (size) {
    data = (move_arm_interfaces__srv__MoveArm_Response *)calloc(size, sizeof(move_arm_interfaces__srv__MoveArm_Response));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = move_arm_interfaces__srv__MoveArm_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        move_arm_interfaces__srv__MoveArm_Response__fini(&data[i - 1]);
      }
      free(data);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
move_arm_interfaces__srv__MoveArm_Response__Sequence__fini(move_arm_interfaces__srv__MoveArm_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      move_arm_interfaces__srv__MoveArm_Response__fini(&array->data[i]);
    }
    free(array->data);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

move_arm_interfaces__srv__MoveArm_Response__Sequence *
move_arm_interfaces__srv__MoveArm_Response__Sequence__create(size_t size)
{
  move_arm_interfaces__srv__MoveArm_Response__Sequence * array = (move_arm_interfaces__srv__MoveArm_Response__Sequence *)malloc(sizeof(move_arm_interfaces__srv__MoveArm_Response__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = move_arm_interfaces__srv__MoveArm_Response__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
move_arm_interfaces__srv__MoveArm_Response__Sequence__destroy(move_arm_interfaces__srv__MoveArm_Response__Sequence * array)
{
  if (array) {
    move_arm_interfaces__srv__MoveArm_Response__Sequence__fini(array);
  }
  free(array);
}
