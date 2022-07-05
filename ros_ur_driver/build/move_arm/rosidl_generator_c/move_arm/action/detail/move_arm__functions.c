// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from move_arm:action/MoveArm.idl
// generated code does not contain a copyright notice
#include "move_arm/action/detail/move_arm__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `pose`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
move_arm__action__MoveArm_Goal__init(move_arm__action__MoveArm_Goal * msg)
{
  if (!msg) {
    return false;
  }
  // pose
  if (!rosidl_runtime_c__float__Sequence__init(&msg->pose, 0)) {
    move_arm__action__MoveArm_Goal__fini(msg);
    return false;
  }
  return true;
}

void
move_arm__action__MoveArm_Goal__fini(move_arm__action__MoveArm_Goal * msg)
{
  if (!msg) {
    return;
  }
  // pose
  rosidl_runtime_c__float__Sequence__fini(&msg->pose);
}

move_arm__action__MoveArm_Goal *
move_arm__action__MoveArm_Goal__create()
{
  move_arm__action__MoveArm_Goal * msg = (move_arm__action__MoveArm_Goal *)malloc(sizeof(move_arm__action__MoveArm_Goal));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(move_arm__action__MoveArm_Goal));
  bool success = move_arm__action__MoveArm_Goal__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
move_arm__action__MoveArm_Goal__destroy(move_arm__action__MoveArm_Goal * msg)
{
  if (msg) {
    move_arm__action__MoveArm_Goal__fini(msg);
  }
  free(msg);
}


bool
move_arm__action__MoveArm_Goal__Sequence__init(move_arm__action__MoveArm_Goal__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  move_arm__action__MoveArm_Goal * data = NULL;
  if (size) {
    data = (move_arm__action__MoveArm_Goal *)calloc(size, sizeof(move_arm__action__MoveArm_Goal));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = move_arm__action__MoveArm_Goal__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        move_arm__action__MoveArm_Goal__fini(&data[i - 1]);
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
move_arm__action__MoveArm_Goal__Sequence__fini(move_arm__action__MoveArm_Goal__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      move_arm__action__MoveArm_Goal__fini(&array->data[i]);
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

move_arm__action__MoveArm_Goal__Sequence *
move_arm__action__MoveArm_Goal__Sequence__create(size_t size)
{
  move_arm__action__MoveArm_Goal__Sequence * array = (move_arm__action__MoveArm_Goal__Sequence *)malloc(sizeof(move_arm__action__MoveArm_Goal__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = move_arm__action__MoveArm_Goal__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
move_arm__action__MoveArm_Goal__Sequence__destroy(move_arm__action__MoveArm_Goal__Sequence * array)
{
  if (array) {
    move_arm__action__MoveArm_Goal__Sequence__fini(array);
  }
  free(array);
}


bool
move_arm__action__MoveArm_Result__init(move_arm__action__MoveArm_Result * msg)
{
  if (!msg) {
    return false;
  }
  // success
  return true;
}

void
move_arm__action__MoveArm_Result__fini(move_arm__action__MoveArm_Result * msg)
{
  if (!msg) {
    return;
  }
  // success
}

move_arm__action__MoveArm_Result *
move_arm__action__MoveArm_Result__create()
{
  move_arm__action__MoveArm_Result * msg = (move_arm__action__MoveArm_Result *)malloc(sizeof(move_arm__action__MoveArm_Result));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(move_arm__action__MoveArm_Result));
  bool success = move_arm__action__MoveArm_Result__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
move_arm__action__MoveArm_Result__destroy(move_arm__action__MoveArm_Result * msg)
{
  if (msg) {
    move_arm__action__MoveArm_Result__fini(msg);
  }
  free(msg);
}


bool
move_arm__action__MoveArm_Result__Sequence__init(move_arm__action__MoveArm_Result__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  move_arm__action__MoveArm_Result * data = NULL;
  if (size) {
    data = (move_arm__action__MoveArm_Result *)calloc(size, sizeof(move_arm__action__MoveArm_Result));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = move_arm__action__MoveArm_Result__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        move_arm__action__MoveArm_Result__fini(&data[i - 1]);
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
move_arm__action__MoveArm_Result__Sequence__fini(move_arm__action__MoveArm_Result__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      move_arm__action__MoveArm_Result__fini(&array->data[i]);
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

move_arm__action__MoveArm_Result__Sequence *
move_arm__action__MoveArm_Result__Sequence__create(size_t size)
{
  move_arm__action__MoveArm_Result__Sequence * array = (move_arm__action__MoveArm_Result__Sequence *)malloc(sizeof(move_arm__action__MoveArm_Result__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = move_arm__action__MoveArm_Result__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
move_arm__action__MoveArm_Result__Sequence__destroy(move_arm__action__MoveArm_Result__Sequence * array)
{
  if (array) {
    move_arm__action__MoveArm_Result__Sequence__fini(array);
  }
  free(array);
}


// Include directives for member types
// Member `joint_angles`
// already included above
// #include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
move_arm__action__MoveArm_Feedback__init(move_arm__action__MoveArm_Feedback * msg)
{
  if (!msg) {
    return false;
  }
  // joint_angles
  if (!rosidl_runtime_c__float__Sequence__init(&msg->joint_angles, 0)) {
    move_arm__action__MoveArm_Feedback__fini(msg);
    return false;
  }
  return true;
}

void
move_arm__action__MoveArm_Feedback__fini(move_arm__action__MoveArm_Feedback * msg)
{
  if (!msg) {
    return;
  }
  // joint_angles
  rosidl_runtime_c__float__Sequence__fini(&msg->joint_angles);
}

move_arm__action__MoveArm_Feedback *
move_arm__action__MoveArm_Feedback__create()
{
  move_arm__action__MoveArm_Feedback * msg = (move_arm__action__MoveArm_Feedback *)malloc(sizeof(move_arm__action__MoveArm_Feedback));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(move_arm__action__MoveArm_Feedback));
  bool success = move_arm__action__MoveArm_Feedback__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
move_arm__action__MoveArm_Feedback__destroy(move_arm__action__MoveArm_Feedback * msg)
{
  if (msg) {
    move_arm__action__MoveArm_Feedback__fini(msg);
  }
  free(msg);
}


bool
move_arm__action__MoveArm_Feedback__Sequence__init(move_arm__action__MoveArm_Feedback__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  move_arm__action__MoveArm_Feedback * data = NULL;
  if (size) {
    data = (move_arm__action__MoveArm_Feedback *)calloc(size, sizeof(move_arm__action__MoveArm_Feedback));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = move_arm__action__MoveArm_Feedback__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        move_arm__action__MoveArm_Feedback__fini(&data[i - 1]);
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
move_arm__action__MoveArm_Feedback__Sequence__fini(move_arm__action__MoveArm_Feedback__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      move_arm__action__MoveArm_Feedback__fini(&array->data[i]);
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

move_arm__action__MoveArm_Feedback__Sequence *
move_arm__action__MoveArm_Feedback__Sequence__create(size_t size)
{
  move_arm__action__MoveArm_Feedback__Sequence * array = (move_arm__action__MoveArm_Feedback__Sequence *)malloc(sizeof(move_arm__action__MoveArm_Feedback__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = move_arm__action__MoveArm_Feedback__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
move_arm__action__MoveArm_Feedback__Sequence__destroy(move_arm__action__MoveArm_Feedback__Sequence * array)
{
  if (array) {
    move_arm__action__MoveArm_Feedback__Sequence__fini(array);
  }
  free(array);
}


// Include directives for member types
// Member `goal_id`
#include "unique_identifier_msgs/msg/detail/uuid__functions.h"
// Member `goal`
// already included above
// #include "move_arm/action/detail/move_arm__functions.h"

bool
move_arm__action__MoveArm_SendGoal_Request__init(move_arm__action__MoveArm_SendGoal_Request * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    move_arm__action__MoveArm_SendGoal_Request__fini(msg);
    return false;
  }
  // goal
  if (!move_arm__action__MoveArm_Goal__init(&msg->goal)) {
    move_arm__action__MoveArm_SendGoal_Request__fini(msg);
    return false;
  }
  return true;
}

void
move_arm__action__MoveArm_SendGoal_Request__fini(move_arm__action__MoveArm_SendGoal_Request * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
  // goal
  move_arm__action__MoveArm_Goal__fini(&msg->goal);
}

move_arm__action__MoveArm_SendGoal_Request *
move_arm__action__MoveArm_SendGoal_Request__create()
{
  move_arm__action__MoveArm_SendGoal_Request * msg = (move_arm__action__MoveArm_SendGoal_Request *)malloc(sizeof(move_arm__action__MoveArm_SendGoal_Request));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(move_arm__action__MoveArm_SendGoal_Request));
  bool success = move_arm__action__MoveArm_SendGoal_Request__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
move_arm__action__MoveArm_SendGoal_Request__destroy(move_arm__action__MoveArm_SendGoal_Request * msg)
{
  if (msg) {
    move_arm__action__MoveArm_SendGoal_Request__fini(msg);
  }
  free(msg);
}


bool
move_arm__action__MoveArm_SendGoal_Request__Sequence__init(move_arm__action__MoveArm_SendGoal_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  move_arm__action__MoveArm_SendGoal_Request * data = NULL;
  if (size) {
    data = (move_arm__action__MoveArm_SendGoal_Request *)calloc(size, sizeof(move_arm__action__MoveArm_SendGoal_Request));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = move_arm__action__MoveArm_SendGoal_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        move_arm__action__MoveArm_SendGoal_Request__fini(&data[i - 1]);
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
move_arm__action__MoveArm_SendGoal_Request__Sequence__fini(move_arm__action__MoveArm_SendGoal_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      move_arm__action__MoveArm_SendGoal_Request__fini(&array->data[i]);
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

move_arm__action__MoveArm_SendGoal_Request__Sequence *
move_arm__action__MoveArm_SendGoal_Request__Sequence__create(size_t size)
{
  move_arm__action__MoveArm_SendGoal_Request__Sequence * array = (move_arm__action__MoveArm_SendGoal_Request__Sequence *)malloc(sizeof(move_arm__action__MoveArm_SendGoal_Request__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = move_arm__action__MoveArm_SendGoal_Request__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
move_arm__action__MoveArm_SendGoal_Request__Sequence__destroy(move_arm__action__MoveArm_SendGoal_Request__Sequence * array)
{
  if (array) {
    move_arm__action__MoveArm_SendGoal_Request__Sequence__fini(array);
  }
  free(array);
}


// Include directives for member types
// Member `stamp`
#include "builtin_interfaces/msg/detail/time__functions.h"

bool
move_arm__action__MoveArm_SendGoal_Response__init(move_arm__action__MoveArm_SendGoal_Response * msg)
{
  if (!msg) {
    return false;
  }
  // accepted
  // stamp
  if (!builtin_interfaces__msg__Time__init(&msg->stamp)) {
    move_arm__action__MoveArm_SendGoal_Response__fini(msg);
    return false;
  }
  return true;
}

void
move_arm__action__MoveArm_SendGoal_Response__fini(move_arm__action__MoveArm_SendGoal_Response * msg)
{
  if (!msg) {
    return;
  }
  // accepted
  // stamp
  builtin_interfaces__msg__Time__fini(&msg->stamp);
}

move_arm__action__MoveArm_SendGoal_Response *
move_arm__action__MoveArm_SendGoal_Response__create()
{
  move_arm__action__MoveArm_SendGoal_Response * msg = (move_arm__action__MoveArm_SendGoal_Response *)malloc(sizeof(move_arm__action__MoveArm_SendGoal_Response));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(move_arm__action__MoveArm_SendGoal_Response));
  bool success = move_arm__action__MoveArm_SendGoal_Response__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
move_arm__action__MoveArm_SendGoal_Response__destroy(move_arm__action__MoveArm_SendGoal_Response * msg)
{
  if (msg) {
    move_arm__action__MoveArm_SendGoal_Response__fini(msg);
  }
  free(msg);
}


bool
move_arm__action__MoveArm_SendGoal_Response__Sequence__init(move_arm__action__MoveArm_SendGoal_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  move_arm__action__MoveArm_SendGoal_Response * data = NULL;
  if (size) {
    data = (move_arm__action__MoveArm_SendGoal_Response *)calloc(size, sizeof(move_arm__action__MoveArm_SendGoal_Response));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = move_arm__action__MoveArm_SendGoal_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        move_arm__action__MoveArm_SendGoal_Response__fini(&data[i - 1]);
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
move_arm__action__MoveArm_SendGoal_Response__Sequence__fini(move_arm__action__MoveArm_SendGoal_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      move_arm__action__MoveArm_SendGoal_Response__fini(&array->data[i]);
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

move_arm__action__MoveArm_SendGoal_Response__Sequence *
move_arm__action__MoveArm_SendGoal_Response__Sequence__create(size_t size)
{
  move_arm__action__MoveArm_SendGoal_Response__Sequence * array = (move_arm__action__MoveArm_SendGoal_Response__Sequence *)malloc(sizeof(move_arm__action__MoveArm_SendGoal_Response__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = move_arm__action__MoveArm_SendGoal_Response__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
move_arm__action__MoveArm_SendGoal_Response__Sequence__destroy(move_arm__action__MoveArm_SendGoal_Response__Sequence * array)
{
  if (array) {
    move_arm__action__MoveArm_SendGoal_Response__Sequence__fini(array);
  }
  free(array);
}


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__functions.h"

bool
move_arm__action__MoveArm_GetResult_Request__init(move_arm__action__MoveArm_GetResult_Request * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    move_arm__action__MoveArm_GetResult_Request__fini(msg);
    return false;
  }
  return true;
}

void
move_arm__action__MoveArm_GetResult_Request__fini(move_arm__action__MoveArm_GetResult_Request * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
}

move_arm__action__MoveArm_GetResult_Request *
move_arm__action__MoveArm_GetResult_Request__create()
{
  move_arm__action__MoveArm_GetResult_Request * msg = (move_arm__action__MoveArm_GetResult_Request *)malloc(sizeof(move_arm__action__MoveArm_GetResult_Request));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(move_arm__action__MoveArm_GetResult_Request));
  bool success = move_arm__action__MoveArm_GetResult_Request__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
move_arm__action__MoveArm_GetResult_Request__destroy(move_arm__action__MoveArm_GetResult_Request * msg)
{
  if (msg) {
    move_arm__action__MoveArm_GetResult_Request__fini(msg);
  }
  free(msg);
}


bool
move_arm__action__MoveArm_GetResult_Request__Sequence__init(move_arm__action__MoveArm_GetResult_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  move_arm__action__MoveArm_GetResult_Request * data = NULL;
  if (size) {
    data = (move_arm__action__MoveArm_GetResult_Request *)calloc(size, sizeof(move_arm__action__MoveArm_GetResult_Request));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = move_arm__action__MoveArm_GetResult_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        move_arm__action__MoveArm_GetResult_Request__fini(&data[i - 1]);
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
move_arm__action__MoveArm_GetResult_Request__Sequence__fini(move_arm__action__MoveArm_GetResult_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      move_arm__action__MoveArm_GetResult_Request__fini(&array->data[i]);
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

move_arm__action__MoveArm_GetResult_Request__Sequence *
move_arm__action__MoveArm_GetResult_Request__Sequence__create(size_t size)
{
  move_arm__action__MoveArm_GetResult_Request__Sequence * array = (move_arm__action__MoveArm_GetResult_Request__Sequence *)malloc(sizeof(move_arm__action__MoveArm_GetResult_Request__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = move_arm__action__MoveArm_GetResult_Request__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
move_arm__action__MoveArm_GetResult_Request__Sequence__destroy(move_arm__action__MoveArm_GetResult_Request__Sequence * array)
{
  if (array) {
    move_arm__action__MoveArm_GetResult_Request__Sequence__fini(array);
  }
  free(array);
}


// Include directives for member types
// Member `result`
// already included above
// #include "move_arm/action/detail/move_arm__functions.h"

bool
move_arm__action__MoveArm_GetResult_Response__init(move_arm__action__MoveArm_GetResult_Response * msg)
{
  if (!msg) {
    return false;
  }
  // status
  // result
  if (!move_arm__action__MoveArm_Result__init(&msg->result)) {
    move_arm__action__MoveArm_GetResult_Response__fini(msg);
    return false;
  }
  return true;
}

void
move_arm__action__MoveArm_GetResult_Response__fini(move_arm__action__MoveArm_GetResult_Response * msg)
{
  if (!msg) {
    return;
  }
  // status
  // result
  move_arm__action__MoveArm_Result__fini(&msg->result);
}

move_arm__action__MoveArm_GetResult_Response *
move_arm__action__MoveArm_GetResult_Response__create()
{
  move_arm__action__MoveArm_GetResult_Response * msg = (move_arm__action__MoveArm_GetResult_Response *)malloc(sizeof(move_arm__action__MoveArm_GetResult_Response));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(move_arm__action__MoveArm_GetResult_Response));
  bool success = move_arm__action__MoveArm_GetResult_Response__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
move_arm__action__MoveArm_GetResult_Response__destroy(move_arm__action__MoveArm_GetResult_Response * msg)
{
  if (msg) {
    move_arm__action__MoveArm_GetResult_Response__fini(msg);
  }
  free(msg);
}


bool
move_arm__action__MoveArm_GetResult_Response__Sequence__init(move_arm__action__MoveArm_GetResult_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  move_arm__action__MoveArm_GetResult_Response * data = NULL;
  if (size) {
    data = (move_arm__action__MoveArm_GetResult_Response *)calloc(size, sizeof(move_arm__action__MoveArm_GetResult_Response));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = move_arm__action__MoveArm_GetResult_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        move_arm__action__MoveArm_GetResult_Response__fini(&data[i - 1]);
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
move_arm__action__MoveArm_GetResult_Response__Sequence__fini(move_arm__action__MoveArm_GetResult_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      move_arm__action__MoveArm_GetResult_Response__fini(&array->data[i]);
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

move_arm__action__MoveArm_GetResult_Response__Sequence *
move_arm__action__MoveArm_GetResult_Response__Sequence__create(size_t size)
{
  move_arm__action__MoveArm_GetResult_Response__Sequence * array = (move_arm__action__MoveArm_GetResult_Response__Sequence *)malloc(sizeof(move_arm__action__MoveArm_GetResult_Response__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = move_arm__action__MoveArm_GetResult_Response__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
move_arm__action__MoveArm_GetResult_Response__Sequence__destroy(move_arm__action__MoveArm_GetResult_Response__Sequence * array)
{
  if (array) {
    move_arm__action__MoveArm_GetResult_Response__Sequence__fini(array);
  }
  free(array);
}


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__functions.h"
// Member `feedback`
// already included above
// #include "move_arm/action/detail/move_arm__functions.h"

bool
move_arm__action__MoveArm_FeedbackMessage__init(move_arm__action__MoveArm_FeedbackMessage * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    move_arm__action__MoveArm_FeedbackMessage__fini(msg);
    return false;
  }
  // feedback
  if (!move_arm__action__MoveArm_Feedback__init(&msg->feedback)) {
    move_arm__action__MoveArm_FeedbackMessage__fini(msg);
    return false;
  }
  return true;
}

void
move_arm__action__MoveArm_FeedbackMessage__fini(move_arm__action__MoveArm_FeedbackMessage * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
  // feedback
  move_arm__action__MoveArm_Feedback__fini(&msg->feedback);
}

move_arm__action__MoveArm_FeedbackMessage *
move_arm__action__MoveArm_FeedbackMessage__create()
{
  move_arm__action__MoveArm_FeedbackMessage * msg = (move_arm__action__MoveArm_FeedbackMessage *)malloc(sizeof(move_arm__action__MoveArm_FeedbackMessage));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(move_arm__action__MoveArm_FeedbackMessage));
  bool success = move_arm__action__MoveArm_FeedbackMessage__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
move_arm__action__MoveArm_FeedbackMessage__destroy(move_arm__action__MoveArm_FeedbackMessage * msg)
{
  if (msg) {
    move_arm__action__MoveArm_FeedbackMessage__fini(msg);
  }
  free(msg);
}


bool
move_arm__action__MoveArm_FeedbackMessage__Sequence__init(move_arm__action__MoveArm_FeedbackMessage__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  move_arm__action__MoveArm_FeedbackMessage * data = NULL;
  if (size) {
    data = (move_arm__action__MoveArm_FeedbackMessage *)calloc(size, sizeof(move_arm__action__MoveArm_FeedbackMessage));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = move_arm__action__MoveArm_FeedbackMessage__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        move_arm__action__MoveArm_FeedbackMessage__fini(&data[i - 1]);
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
move_arm__action__MoveArm_FeedbackMessage__Sequence__fini(move_arm__action__MoveArm_FeedbackMessage__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      move_arm__action__MoveArm_FeedbackMessage__fini(&array->data[i]);
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

move_arm__action__MoveArm_FeedbackMessage__Sequence *
move_arm__action__MoveArm_FeedbackMessage__Sequence__create(size_t size)
{
  move_arm__action__MoveArm_FeedbackMessage__Sequence * array = (move_arm__action__MoveArm_FeedbackMessage__Sequence *)malloc(sizeof(move_arm__action__MoveArm_FeedbackMessage__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = move_arm__action__MoveArm_FeedbackMessage__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
move_arm__action__MoveArm_FeedbackMessage__Sequence__destroy(move_arm__action__MoveArm_FeedbackMessage__Sequence * array)
{
  if (array) {
    move_arm__action__MoveArm_FeedbackMessage__Sequence__fini(array);
  }
  free(array);
}
