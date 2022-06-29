// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from graph_msgs:msg/GeometryGraph.idl
// generated code does not contain a copyright notice

#ifndef GRAPH_MSGS__MSG__DETAIL__GEOMETRY_GRAPH__FUNCTIONS_H_
#define GRAPH_MSGS__MSG__DETAIL__GEOMETRY_GRAPH__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "graph_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "graph_msgs/msg/detail/geometry_graph__struct.h"

/// Initialize msg/GeometryGraph message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * graph_msgs__msg__GeometryGraph
 * )) before or use
 * graph_msgs__msg__GeometryGraph__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_graph_msgs
bool
graph_msgs__msg__GeometryGraph__init(graph_msgs__msg__GeometryGraph * msg);

/// Finalize msg/GeometryGraph message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_graph_msgs
void
graph_msgs__msg__GeometryGraph__fini(graph_msgs__msg__GeometryGraph * msg);

/// Create msg/GeometryGraph message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * graph_msgs__msg__GeometryGraph__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_graph_msgs
graph_msgs__msg__GeometryGraph *
graph_msgs__msg__GeometryGraph__create();

/// Destroy msg/GeometryGraph message.
/**
 * It calls
 * graph_msgs__msg__GeometryGraph__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_graph_msgs
void
graph_msgs__msg__GeometryGraph__destroy(graph_msgs__msg__GeometryGraph * msg);


/// Initialize array of msg/GeometryGraph messages.
/**
 * It allocates the memory for the number of elements and calls
 * graph_msgs__msg__GeometryGraph__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_graph_msgs
bool
graph_msgs__msg__GeometryGraph__Sequence__init(graph_msgs__msg__GeometryGraph__Sequence * array, size_t size);

/// Finalize array of msg/GeometryGraph messages.
/**
 * It calls
 * graph_msgs__msg__GeometryGraph__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_graph_msgs
void
graph_msgs__msg__GeometryGraph__Sequence__fini(graph_msgs__msg__GeometryGraph__Sequence * array);

/// Create array of msg/GeometryGraph messages.
/**
 * It allocates the memory for the array and calls
 * graph_msgs__msg__GeometryGraph__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_graph_msgs
graph_msgs__msg__GeometryGraph__Sequence *
graph_msgs__msg__GeometryGraph__Sequence__create(size_t size);

/// Destroy array of msg/GeometryGraph messages.
/**
 * It calls
 * graph_msgs__msg__GeometryGraph__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_graph_msgs
void
graph_msgs__msg__GeometryGraph__Sequence__destroy(graph_msgs__msg__GeometryGraph__Sequence * array);

#ifdef __cplusplus
}
#endif

#endif  // GRAPH_MSGS__MSG__DETAIL__GEOMETRY_GRAPH__FUNCTIONS_H_
