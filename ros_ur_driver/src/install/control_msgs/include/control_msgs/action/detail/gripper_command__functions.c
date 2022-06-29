// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from control_msgs:action/GripperCommand.idl
// generated code does not contain a copyright notice
#include "control_msgs/action/detail/gripper_command__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `command`
#include "control_msgs/msg/detail/gripper_command__functions.h"

bool
control_msgs__action__GripperCommand_Goal__init(control_msgs__action__GripperCommand_Goal * msg)
{
  if (!msg) {
    return false;
  }
  // command
  if (!control_msgs__msg__GripperCommand__init(&msg->command)) {
    control_msgs__action__GripperCommand_Goal__fini(msg);
    return false;
  }
  return true;
}

void
control_msgs__action__GripperCommand_Goal__fini(control_msgs__action__GripperCommand_Goal * msg)
{
  if (!msg) {
    return;
  }
  // command
  control_msgs__msg__GripperCommand__fini(&msg->command);
}

control_msgs__action__GripperCommand_Goal *
control_msgs__action__GripperCommand_Goal__create()
{
  control_msgs__action__GripperCommand_Goal * msg = (control_msgs__action__GripperCommand_Goal *)malloc(sizeof(control_msgs__action__GripperCommand_Goal));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(control_msgs__action__GripperCommand_Goal));
  bool success = control_msgs__action__GripperCommand_Goal__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
control_msgs__action__GripperCommand_Goal__destroy(control_msgs__action__GripperCommand_Goal * msg)
{
  if (msg) {
    control_msgs__action__GripperCommand_Goal__fini(msg);
  }
  free(msg);
}


bool
control_msgs__action__GripperCommand_Goal__Sequence__init(control_msgs__action__GripperCommand_Goal__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  control_msgs__action__GripperCommand_Goal * data = NULL;
  if (size) {
    data = (control_msgs__action__GripperCommand_Goal *)calloc(size, sizeof(control_msgs__action__GripperCommand_Goal));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = control_msgs__action__GripperCommand_Goal__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        control_msgs__action__GripperCommand_Goal__fini(&data[i - 1]);
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
control_msgs__action__GripperCommand_Goal__Sequence__fini(control_msgs__action__GripperCommand_Goal__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      control_msgs__action__GripperCommand_Goal__fini(&array->data[i]);
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

control_msgs__action__GripperCommand_Goal__Sequence *
control_msgs__action__GripperCommand_Goal__Sequence__create(size_t size)
{
  control_msgs__action__GripperCommand_Goal__Sequence * array = (control_msgs__action__GripperCommand_Goal__Sequence *)malloc(sizeof(control_msgs__action__GripperCommand_Goal__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = control_msgs__action__GripperCommand_Goal__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
control_msgs__action__GripperCommand_Goal__Sequence__destroy(control_msgs__action__GripperCommand_Goal__Sequence * array)
{
  if (array) {
    control_msgs__action__GripperCommand_Goal__Sequence__fini(array);
  }
  free(array);
}


bool
control_msgs__action__GripperCommand_Result__init(control_msgs__action__GripperCommand_Result * msg)
{
  if (!msg) {
    return false;
  }
  // position
  // effort
  // stalled
  // reached_goal
  return true;
}

void
control_msgs__action__GripperCommand_Result__fini(control_msgs__action__GripperCommand_Result * msg)
{
  if (!msg) {
    return;
  }
  // position
  // effort
  // stalled
  // reached_goal
}

control_msgs__action__GripperCommand_Result *
control_msgs__action__GripperCommand_Result__create()
{
  control_msgs__action__GripperCommand_Result * msg = (control_msgs__action__GripperCommand_Result *)malloc(sizeof(control_msgs__action__GripperCommand_Result));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(control_msgs__action__GripperCommand_Result));
  bool success = control_msgs__action__GripperCommand_Result__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
control_msgs__action__GripperCommand_Result__destroy(control_msgs__action__GripperCommand_Result * msg)
{
  if (msg) {
    control_msgs__action__GripperCommand_Result__fini(msg);
  }
  free(msg);
}


bool
control_msgs__action__GripperCommand_Result__Sequence__init(control_msgs__action__GripperCommand_Result__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  control_msgs__action__GripperCommand_Result * data = NULL;
  if (size) {
    data = (control_msgs__action__GripperCommand_Result *)calloc(size, sizeof(control_msgs__action__GripperCommand_Result));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = control_msgs__action__GripperCommand_Result__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        control_msgs__action__GripperCommand_Result__fini(&data[i - 1]);
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
control_msgs__action__GripperCommand_Result__Sequence__fini(control_msgs__action__GripperCommand_Result__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      control_msgs__action__GripperCommand_Result__fini(&array->data[i]);
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

control_msgs__action__GripperCommand_Result__Sequence *
control_msgs__action__GripperCommand_Result__Sequence__create(size_t size)
{
  control_msgs__action__GripperCommand_Result__Sequence * array = (control_msgs__action__GripperCommand_Result__Sequence *)malloc(sizeof(control_msgs__action__GripperCommand_Result__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = control_msgs__action__GripperCommand_Result__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
control_msgs__action__GripperCommand_Result__Sequence__destroy(control_msgs__action__GripperCommand_Result__Sequence * array)
{
  if (array) {
    control_msgs__action__GripperCommand_Result__Sequence__fini(array);
  }
  free(array);
}


bool
control_msgs__action__GripperCommand_Feedback__init(control_msgs__action__GripperCommand_Feedback * msg)
{
  if (!msg) {
    return false;
  }
  // position
  // effort
  // stalled
  // reached_goal
  return true;
}

void
control_msgs__action__GripperCommand_Feedback__fini(control_msgs__action__GripperCommand_Feedback * msg)
{
  if (!msg) {
    return;
  }
  // position
  // effort
  // stalled
  // reached_goal
}

control_msgs__action__GripperCommand_Feedback *
control_msgs__action__GripperCommand_Feedback__create()
{
  control_msgs__action__GripperCommand_Feedback * msg = (control_msgs__action__GripperCommand_Feedback *)malloc(sizeof(control_msgs__action__GripperCommand_Feedback));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(control_msgs__action__GripperCommand_Feedback));
  bool success = control_msgs__action__GripperCommand_Feedback__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
control_msgs__action__GripperCommand_Feedback__destroy(control_msgs__action__GripperCommand_Feedback * msg)
{
  if (msg) {
    control_msgs__action__GripperCommand_Feedback__fini(msg);
  }
  free(msg);
}


bool
control_msgs__action__GripperCommand_Feedback__Sequence__init(control_msgs__action__GripperCommand_Feedback__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  control_msgs__action__GripperCommand_Feedback * data = NULL;
  if (size) {
    data = (control_msgs__action__GripperCommand_Feedback *)calloc(size, sizeof(control_msgs__action__GripperCommand_Feedback));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = control_msgs__action__GripperCommand_Feedback__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        control_msgs__action__GripperCommand_Feedback__fini(&data[i - 1]);
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
control_msgs__action__GripperCommand_Feedback__Sequence__fini(control_msgs__action__GripperCommand_Feedback__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      control_msgs__action__GripperCommand_Feedback__fini(&array->data[i]);
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

control_msgs__action__GripperCommand_Feedback__Sequence *
control_msgs__action__GripperCommand_Feedback__Sequence__create(size_t size)
{
  control_msgs__action__GripperCommand_Feedback__Sequence * array = (control_msgs__action__GripperCommand_Feedback__Sequence *)malloc(sizeof(control_msgs__action__GripperCommand_Feedback__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = control_msgs__action__GripperCommand_Feedback__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
control_msgs__action__GripperCommand_Feedback__Sequence__destroy(control_msgs__action__GripperCommand_Feedback__Sequence * array)
{
  if (array) {
    control_msgs__action__GripperCommand_Feedback__Sequence__fini(array);
  }
  free(array);
}


// Include directives for member types
// Member `goal_id`
#include "unique_identifier_msgs/msg/detail/uuid__functions.h"
// Member `goal`
// already included above
// #include "control_msgs/action/detail/gripper_command__functions.h"

bool
control_msgs__action__GripperCommand_SendGoal_Request__init(control_msgs__action__GripperCommand_SendGoal_Request * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    control_msgs__action__GripperCommand_SendGoal_Request__fini(msg);
    return false;
  }
  // goal
  if (!control_msgs__action__GripperCommand_Goal__init(&msg->goal)) {
    control_msgs__action__GripperCommand_SendGoal_Request__fini(msg);
    return false;
  }
  return true;
}

void
control_msgs__action__GripperCommand_SendGoal_Request__fini(control_msgs__action__GripperCommand_SendGoal_Request * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
  // goal
  control_msgs__action__GripperCommand_Goal__fini(&msg->goal);
}

control_msgs__action__GripperCommand_SendGoal_Request *
control_msgs__action__GripperCommand_SendGoal_Request__create()
{
  control_msgs__action__GripperCommand_SendGoal_Request * msg = (control_msgs__action__GripperCommand_SendGoal_Request *)malloc(sizeof(control_msgs__action__GripperCommand_SendGoal_Request));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(control_msgs__action__GripperCommand_SendGoal_Request));
  bool success = control_msgs__action__GripperCommand_SendGoal_Request__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
control_msgs__action__GripperCommand_SendGoal_Request__destroy(control_msgs__action__GripperCommand_SendGoal_Request * msg)
{
  if (msg) {
    control_msgs__action__GripperCommand_SendGoal_Request__fini(msg);
  }
  free(msg);
}


bool
control_msgs__action__GripperCommand_SendGoal_Request__Sequence__init(control_msgs__action__GripperCommand_SendGoal_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  control_msgs__action__GripperCommand_SendGoal_Request * data = NULL;
  if (size) {
    data = (control_msgs__action__GripperCommand_SendGoal_Request *)calloc(size, sizeof(control_msgs__action__GripperCommand_SendGoal_Request));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = control_msgs__action__GripperCommand_SendGoal_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        control_msgs__action__GripperCommand_SendGoal_Request__fini(&data[i - 1]);
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
control_msgs__action__GripperCommand_SendGoal_Request__Sequence__fini(control_msgs__action__GripperCommand_SendGoal_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      control_msgs__action__GripperCommand_SendGoal_Request__fini(&array->data[i]);
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

control_msgs__action__GripperCommand_SendGoal_Request__Sequence *
control_msgs__action__GripperCommand_SendGoal_Request__Sequence__create(size_t size)
{
  control_msgs__action__GripperCommand_SendGoal_Request__Sequence * array = (control_msgs__action__GripperCommand_SendGoal_Request__Sequence *)malloc(sizeof(control_msgs__action__GripperCommand_SendGoal_Request__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = control_msgs__action__GripperCommand_SendGoal_Request__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
control_msgs__action__GripperCommand_SendGoal_Request__Sequence__destroy(control_msgs__action__GripperCommand_SendGoal_Request__Sequence * array)
{
  if (array) {
    control_msgs__action__GripperCommand_SendGoal_Request__Sequence__fini(array);
  }
  free(array);
}


// Include directives for member types
// Member `stamp`
#include "builtin_interfaces/msg/detail/time__functions.h"

bool
control_msgs__action__GripperCommand_SendGoal_Response__init(control_msgs__action__GripperCommand_SendGoal_Response * msg)
{
  if (!msg) {
    return false;
  }
  // accepted
  // stamp
  if (!builtin_interfaces__msg__Time__init(&msg->stamp)) {
    control_msgs__action__GripperCommand_SendGoal_Response__fini(msg);
    return false;
  }
  return true;
}

void
control_msgs__action__GripperCommand_SendGoal_Response__fini(control_msgs__action__GripperCommand_SendGoal_Response * msg)
{
  if (!msg) {
    return;
  }
  // accepted
  // stamp
  builtin_interfaces__msg__Time__fini(&msg->stamp);
}

control_msgs__action__GripperCommand_SendGoal_Response *
control_msgs__action__GripperCommand_SendGoal_Response__create()
{
  control_msgs__action__GripperCommand_SendGoal_Response * msg = (control_msgs__action__GripperCommand_SendGoal_Response *)malloc(sizeof(control_msgs__action__GripperCommand_SendGoal_Response));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(control_msgs__action__GripperCommand_SendGoal_Response));
  bool success = control_msgs__action__GripperCommand_SendGoal_Response__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
control_msgs__action__GripperCommand_SendGoal_Response__destroy(control_msgs__action__GripperCommand_SendGoal_Response * msg)
{
  if (msg) {
    control_msgs__action__GripperCommand_SendGoal_Response__fini(msg);
  }
  free(msg);
}


bool
control_msgs__action__GripperCommand_SendGoal_Response__Sequence__init(control_msgs__action__GripperCommand_SendGoal_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  control_msgs__action__GripperCommand_SendGoal_Response * data = NULL;
  if (size) {
    data = (control_msgs__action__GripperCommand_SendGoal_Response *)calloc(size, sizeof(control_msgs__action__GripperCommand_SendGoal_Response));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = control_msgs__action__GripperCommand_SendGoal_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        control_msgs__action__GripperCommand_SendGoal_Response__fini(&data[i - 1]);
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
control_msgs__action__GripperCommand_SendGoal_Response__Sequence__fini(control_msgs__action__GripperCommand_SendGoal_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      control_msgs__action__GripperCommand_SendGoal_Response__fini(&array->data[i]);
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

control_msgs__action__GripperCommand_SendGoal_Response__Sequence *
control_msgs__action__GripperCommand_SendGoal_Response__Sequence__create(size_t size)
{
  control_msgs__action__GripperCommand_SendGoal_Response__Sequence * array = (control_msgs__action__GripperCommand_SendGoal_Response__Sequence *)malloc(sizeof(control_msgs__action__GripperCommand_SendGoal_Response__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = control_msgs__action__GripperCommand_SendGoal_Response__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
control_msgs__action__GripperCommand_SendGoal_Response__Sequence__destroy(control_msgs__action__GripperCommand_SendGoal_Response__Sequence * array)
{
  if (array) {
    control_msgs__action__GripperCommand_SendGoal_Response__Sequence__fini(array);
  }
  free(array);
}


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__functions.h"

bool
control_msgs__action__GripperCommand_GetResult_Request__init(control_msgs__action__GripperCommand_GetResult_Request * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    control_msgs__action__GripperCommand_GetResult_Request__fini(msg);
    return false;
  }
  return true;
}

void
control_msgs__action__GripperCommand_GetResult_Request__fini(control_msgs__action__GripperCommand_GetResult_Request * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
}

control_msgs__action__GripperCommand_GetResult_Request *
control_msgs__action__GripperCommand_GetResult_Request__create()
{
  control_msgs__action__GripperCommand_GetResult_Request * msg = (control_msgs__action__GripperCommand_GetResult_Request *)malloc(sizeof(control_msgs__action__GripperCommand_GetResult_Request));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(control_msgs__action__GripperCommand_GetResult_Request));
  bool success = control_msgs__action__GripperCommand_GetResult_Request__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
control_msgs__action__GripperCommand_GetResult_Request__destroy(control_msgs__action__GripperCommand_GetResult_Request * msg)
{
  if (msg) {
    control_msgs__action__GripperCommand_GetResult_Request__fini(msg);
  }
  free(msg);
}


bool
control_msgs__action__GripperCommand_GetResult_Request__Sequence__init(control_msgs__action__GripperCommand_GetResult_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  control_msgs__action__GripperCommand_GetResult_Request * data = NULL;
  if (size) {
    data = (control_msgs__action__GripperCommand_GetResult_Request *)calloc(size, sizeof(control_msgs__action__GripperCommand_GetResult_Request));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = control_msgs__action__GripperCommand_GetResult_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        control_msgs__action__GripperCommand_GetResult_Request__fini(&data[i - 1]);
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
control_msgs__action__GripperCommand_GetResult_Request__Sequence__fini(control_msgs__action__GripperCommand_GetResult_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      control_msgs__action__GripperCommand_GetResult_Request__fini(&array->data[i]);
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

control_msgs__action__GripperCommand_GetResult_Request__Sequence *
control_msgs__action__GripperCommand_GetResult_Request__Sequence__create(size_t size)
{
  control_msgs__action__GripperCommand_GetResult_Request__Sequence * array = (control_msgs__action__GripperCommand_GetResult_Request__Sequence *)malloc(sizeof(control_msgs__action__GripperCommand_GetResult_Request__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = control_msgs__action__GripperCommand_GetResult_Request__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
control_msgs__action__GripperCommand_GetResult_Request__Sequence__destroy(control_msgs__action__GripperCommand_GetResult_Request__Sequence * array)
{
  if (array) {
    control_msgs__action__GripperCommand_GetResult_Request__Sequence__fini(array);
  }
  free(array);
}


// Include directives for member types
// Member `result`
// already included above
// #include "control_msgs/action/detail/gripper_command__functions.h"

bool
control_msgs__action__GripperCommand_GetResult_Response__init(control_msgs__action__GripperCommand_GetResult_Response * msg)
{
  if (!msg) {
    return false;
  }
  // status
  // result
  if (!control_msgs__action__GripperCommand_Result__init(&msg->result)) {
    control_msgs__action__GripperCommand_GetResult_Response__fini(msg);
    return false;
  }
  return true;
}

void
control_msgs__action__GripperCommand_GetResult_Response__fini(control_msgs__action__GripperCommand_GetResult_Response * msg)
{
  if (!msg) {
    return;
  }
  // status
  // result
  control_msgs__action__GripperCommand_Result__fini(&msg->result);
}

control_msgs__action__GripperCommand_GetResult_Response *
control_msgs__action__GripperCommand_GetResult_Response__create()
{
  control_msgs__action__GripperCommand_GetResult_Response * msg = (control_msgs__action__GripperCommand_GetResult_Response *)malloc(sizeof(control_msgs__action__GripperCommand_GetResult_Response));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(control_msgs__action__GripperCommand_GetResult_Response));
  bool success = control_msgs__action__GripperCommand_GetResult_Response__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
control_msgs__action__GripperCommand_GetResult_Response__destroy(control_msgs__action__GripperCommand_GetResult_Response * msg)
{
  if (msg) {
    control_msgs__action__GripperCommand_GetResult_Response__fini(msg);
  }
  free(msg);
}


bool
control_msgs__action__GripperCommand_GetResult_Response__Sequence__init(control_msgs__action__GripperCommand_GetResult_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  control_msgs__action__GripperCommand_GetResult_Response * data = NULL;
  if (size) {
    data = (control_msgs__action__GripperCommand_GetResult_Response *)calloc(size, sizeof(control_msgs__action__GripperCommand_GetResult_Response));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = control_msgs__action__GripperCommand_GetResult_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        control_msgs__action__GripperCommand_GetResult_Response__fini(&data[i - 1]);
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
control_msgs__action__GripperCommand_GetResult_Response__Sequence__fini(control_msgs__action__GripperCommand_GetResult_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      control_msgs__action__GripperCommand_GetResult_Response__fini(&array->data[i]);
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

control_msgs__action__GripperCommand_GetResult_Response__Sequence *
control_msgs__action__GripperCommand_GetResult_Response__Sequence__create(size_t size)
{
  control_msgs__action__GripperCommand_GetResult_Response__Sequence * array = (control_msgs__action__GripperCommand_GetResult_Response__Sequence *)malloc(sizeof(control_msgs__action__GripperCommand_GetResult_Response__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = control_msgs__action__GripperCommand_GetResult_Response__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
control_msgs__action__GripperCommand_GetResult_Response__Sequence__destroy(control_msgs__action__GripperCommand_GetResult_Response__Sequence * array)
{
  if (array) {
    control_msgs__action__GripperCommand_GetResult_Response__Sequence__fini(array);
  }
  free(array);
}


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__functions.h"
// Member `feedback`
// already included above
// #include "control_msgs/action/detail/gripper_command__functions.h"

bool
control_msgs__action__GripperCommand_FeedbackMessage__init(control_msgs__action__GripperCommand_FeedbackMessage * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    control_msgs__action__GripperCommand_FeedbackMessage__fini(msg);
    return false;
  }
  // feedback
  if (!control_msgs__action__GripperCommand_Feedback__init(&msg->feedback)) {
    control_msgs__action__GripperCommand_FeedbackMessage__fini(msg);
    return false;
  }
  return true;
}

void
control_msgs__action__GripperCommand_FeedbackMessage__fini(control_msgs__action__GripperCommand_FeedbackMessage * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
  // feedback
  control_msgs__action__GripperCommand_Feedback__fini(&msg->feedback);
}

control_msgs__action__GripperCommand_FeedbackMessage *
control_msgs__action__GripperCommand_FeedbackMessage__create()
{
  control_msgs__action__GripperCommand_FeedbackMessage * msg = (control_msgs__action__GripperCommand_FeedbackMessage *)malloc(sizeof(control_msgs__action__GripperCommand_FeedbackMessage));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(control_msgs__action__GripperCommand_FeedbackMessage));
  bool success = control_msgs__action__GripperCommand_FeedbackMessage__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
control_msgs__action__GripperCommand_FeedbackMessage__destroy(control_msgs__action__GripperCommand_FeedbackMessage * msg)
{
  if (msg) {
    control_msgs__action__GripperCommand_FeedbackMessage__fini(msg);
  }
  free(msg);
}


bool
control_msgs__action__GripperCommand_FeedbackMessage__Sequence__init(control_msgs__action__GripperCommand_FeedbackMessage__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  control_msgs__action__GripperCommand_FeedbackMessage * data = NULL;
  if (size) {
    data = (control_msgs__action__GripperCommand_FeedbackMessage *)calloc(size, sizeof(control_msgs__action__GripperCommand_FeedbackMessage));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = control_msgs__action__GripperCommand_FeedbackMessage__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        control_msgs__action__GripperCommand_FeedbackMessage__fini(&data[i - 1]);
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
control_msgs__action__GripperCommand_FeedbackMessage__Sequence__fini(control_msgs__action__GripperCommand_FeedbackMessage__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      control_msgs__action__GripperCommand_FeedbackMessage__fini(&array->data[i]);
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

control_msgs__action__GripperCommand_FeedbackMessage__Sequence *
control_msgs__action__GripperCommand_FeedbackMessage__Sequence__create(size_t size)
{
  control_msgs__action__GripperCommand_FeedbackMessage__Sequence * array = (control_msgs__action__GripperCommand_FeedbackMessage__Sequence *)malloc(sizeof(control_msgs__action__GripperCommand_FeedbackMessage__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = control_msgs__action__GripperCommand_FeedbackMessage__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
control_msgs__action__GripperCommand_FeedbackMessage__Sequence__destroy(control_msgs__action__GripperCommand_FeedbackMessage__Sequence * array)
{
  if (array) {
    control_msgs__action__GripperCommand_FeedbackMessage__Sequence__fini(array);
  }
  free(array);
}
