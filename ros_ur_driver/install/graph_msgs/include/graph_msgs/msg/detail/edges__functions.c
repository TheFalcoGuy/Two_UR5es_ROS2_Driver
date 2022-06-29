// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from graph_msgs:msg/Edges.idl
// generated code does not contain a copyright notice
#include "graph_msgs/msg/detail/edges__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `node_ids`
// Member `weights`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
graph_msgs__msg__Edges__init(graph_msgs__msg__Edges * msg)
{
  if (!msg) {
    return false;
  }
  // node_ids
  if (!rosidl_runtime_c__uint32__Sequence__init(&msg->node_ids, 0)) {
    graph_msgs__msg__Edges__fini(msg);
    return false;
  }
  // weights
  if (!rosidl_runtime_c__double__Sequence__init(&msg->weights, 0)) {
    graph_msgs__msg__Edges__fini(msg);
    return false;
  }
  return true;
}

void
graph_msgs__msg__Edges__fini(graph_msgs__msg__Edges * msg)
{
  if (!msg) {
    return;
  }
  // node_ids
  rosidl_runtime_c__uint32__Sequence__fini(&msg->node_ids);
  // weights
  rosidl_runtime_c__double__Sequence__fini(&msg->weights);
}

graph_msgs__msg__Edges *
graph_msgs__msg__Edges__create()
{
  graph_msgs__msg__Edges * msg = (graph_msgs__msg__Edges *)malloc(sizeof(graph_msgs__msg__Edges));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(graph_msgs__msg__Edges));
  bool success = graph_msgs__msg__Edges__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
graph_msgs__msg__Edges__destroy(graph_msgs__msg__Edges * msg)
{
  if (msg) {
    graph_msgs__msg__Edges__fini(msg);
  }
  free(msg);
}


bool
graph_msgs__msg__Edges__Sequence__init(graph_msgs__msg__Edges__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  graph_msgs__msg__Edges * data = NULL;
  if (size) {
    data = (graph_msgs__msg__Edges *)calloc(size, sizeof(graph_msgs__msg__Edges));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = graph_msgs__msg__Edges__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        graph_msgs__msg__Edges__fini(&data[i - 1]);
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
graph_msgs__msg__Edges__Sequence__fini(graph_msgs__msg__Edges__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      graph_msgs__msg__Edges__fini(&array->data[i]);
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

graph_msgs__msg__Edges__Sequence *
graph_msgs__msg__Edges__Sequence__create(size_t size)
{
  graph_msgs__msg__Edges__Sequence * array = (graph_msgs__msg__Edges__Sequence *)malloc(sizeof(graph_msgs__msg__Edges__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = graph_msgs__msg__Edges__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
graph_msgs__msg__Edges__Sequence__destroy(graph_msgs__msg__Edges__Sequence * array)
{
  if (array) {
    graph_msgs__msg__Edges__Sequence__fini(array);
  }
  free(array);
}
