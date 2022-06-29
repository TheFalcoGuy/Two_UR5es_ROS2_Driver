// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from graph_msgs:msg/GeometryGraph.idl
// generated code does not contain a copyright notice
#include "graph_msgs/msg/detail/geometry_graph__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `nodes`
#include "geometry_msgs/msg/detail/point__functions.h"
// Member `edges`
#include "graph_msgs/msg/detail/edges__functions.h"

bool
graph_msgs__msg__GeometryGraph__init(graph_msgs__msg__GeometryGraph * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    graph_msgs__msg__GeometryGraph__fini(msg);
    return false;
  }
  // nodes
  if (!geometry_msgs__msg__Point__Sequence__init(&msg->nodes, 0)) {
    graph_msgs__msg__GeometryGraph__fini(msg);
    return false;
  }
  // edges
  if (!graph_msgs__msg__Edges__Sequence__init(&msg->edges, 0)) {
    graph_msgs__msg__GeometryGraph__fini(msg);
    return false;
  }
  return true;
}

void
graph_msgs__msg__GeometryGraph__fini(graph_msgs__msg__GeometryGraph * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // nodes
  geometry_msgs__msg__Point__Sequence__fini(&msg->nodes);
  // edges
  graph_msgs__msg__Edges__Sequence__fini(&msg->edges);
}

graph_msgs__msg__GeometryGraph *
graph_msgs__msg__GeometryGraph__create()
{
  graph_msgs__msg__GeometryGraph * msg = (graph_msgs__msg__GeometryGraph *)malloc(sizeof(graph_msgs__msg__GeometryGraph));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(graph_msgs__msg__GeometryGraph));
  bool success = graph_msgs__msg__GeometryGraph__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
graph_msgs__msg__GeometryGraph__destroy(graph_msgs__msg__GeometryGraph * msg)
{
  if (msg) {
    graph_msgs__msg__GeometryGraph__fini(msg);
  }
  free(msg);
}


bool
graph_msgs__msg__GeometryGraph__Sequence__init(graph_msgs__msg__GeometryGraph__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  graph_msgs__msg__GeometryGraph * data = NULL;
  if (size) {
    data = (graph_msgs__msg__GeometryGraph *)calloc(size, sizeof(graph_msgs__msg__GeometryGraph));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = graph_msgs__msg__GeometryGraph__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        graph_msgs__msg__GeometryGraph__fini(&data[i - 1]);
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
graph_msgs__msg__GeometryGraph__Sequence__fini(graph_msgs__msg__GeometryGraph__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      graph_msgs__msg__GeometryGraph__fini(&array->data[i]);
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

graph_msgs__msg__GeometryGraph__Sequence *
graph_msgs__msg__GeometryGraph__Sequence__create(size_t size)
{
  graph_msgs__msg__GeometryGraph__Sequence * array = (graph_msgs__msg__GeometryGraph__Sequence *)malloc(sizeof(graph_msgs__msg__GeometryGraph__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = graph_msgs__msg__GeometryGraph__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
graph_msgs__msg__GeometryGraph__Sequence__destroy(graph_msgs__msg__GeometryGraph__Sequence * array)
{
  if (array) {
    graph_msgs__msg__GeometryGraph__Sequence__fini(array);
  }
  free(array);
}
