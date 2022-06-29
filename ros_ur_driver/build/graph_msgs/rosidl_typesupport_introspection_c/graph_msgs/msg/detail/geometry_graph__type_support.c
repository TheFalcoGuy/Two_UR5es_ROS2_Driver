// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from graph_msgs:msg/GeometryGraph.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "graph_msgs/msg/detail/geometry_graph__rosidl_typesupport_introspection_c.h"
#include "graph_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "graph_msgs/msg/detail/geometry_graph__functions.h"
#include "graph_msgs/msg/detail/geometry_graph__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `nodes`
#include "geometry_msgs/msg/point.h"
// Member `nodes`
#include "geometry_msgs/msg/detail/point__rosidl_typesupport_introspection_c.h"
// Member `edges`
#include "graph_msgs/msg/edges.h"
// Member `edges`
#include "graph_msgs/msg/detail/edges__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void GeometryGraph__rosidl_typesupport_introspection_c__GeometryGraph_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  graph_msgs__msg__GeometryGraph__init(message_memory);
}

void GeometryGraph__rosidl_typesupport_introspection_c__GeometryGraph_fini_function(void * message_memory)
{
  graph_msgs__msg__GeometryGraph__fini(message_memory);
}

size_t GeometryGraph__rosidl_typesupport_introspection_c__size_function__Point__nodes(
  const void * untyped_member)
{
  const geometry_msgs__msg__Point__Sequence * member =
    (const geometry_msgs__msg__Point__Sequence *)(untyped_member);
  return member->size;
}

const void * GeometryGraph__rosidl_typesupport_introspection_c__get_const_function__Point__nodes(
  const void * untyped_member, size_t index)
{
  const geometry_msgs__msg__Point__Sequence * member =
    (const geometry_msgs__msg__Point__Sequence *)(untyped_member);
  return &member->data[index];
}

void * GeometryGraph__rosidl_typesupport_introspection_c__get_function__Point__nodes(
  void * untyped_member, size_t index)
{
  geometry_msgs__msg__Point__Sequence * member =
    (geometry_msgs__msg__Point__Sequence *)(untyped_member);
  return &member->data[index];
}

bool GeometryGraph__rosidl_typesupport_introspection_c__resize_function__Point__nodes(
  void * untyped_member, size_t size)
{
  geometry_msgs__msg__Point__Sequence * member =
    (geometry_msgs__msg__Point__Sequence *)(untyped_member);
  geometry_msgs__msg__Point__Sequence__fini(member);
  return geometry_msgs__msg__Point__Sequence__init(member, size);
}

size_t GeometryGraph__rosidl_typesupport_introspection_c__size_function__Edges__edges(
  const void * untyped_member)
{
  const graph_msgs__msg__Edges__Sequence * member =
    (const graph_msgs__msg__Edges__Sequence *)(untyped_member);
  return member->size;
}

const void * GeometryGraph__rosidl_typesupport_introspection_c__get_const_function__Edges__edges(
  const void * untyped_member, size_t index)
{
  const graph_msgs__msg__Edges__Sequence * member =
    (const graph_msgs__msg__Edges__Sequence *)(untyped_member);
  return &member->data[index];
}

void * GeometryGraph__rosidl_typesupport_introspection_c__get_function__Edges__edges(
  void * untyped_member, size_t index)
{
  graph_msgs__msg__Edges__Sequence * member =
    (graph_msgs__msg__Edges__Sequence *)(untyped_member);
  return &member->data[index];
}

bool GeometryGraph__rosidl_typesupport_introspection_c__resize_function__Edges__edges(
  void * untyped_member, size_t size)
{
  graph_msgs__msg__Edges__Sequence * member =
    (graph_msgs__msg__Edges__Sequence *)(untyped_member);
  graph_msgs__msg__Edges__Sequence__fini(member);
  return graph_msgs__msg__Edges__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember GeometryGraph__rosidl_typesupport_introspection_c__GeometryGraph_message_member_array[3] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(graph_msgs__msg__GeometryGraph, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "nodes",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(graph_msgs__msg__GeometryGraph, nodes),  // bytes offset in struct
    NULL,  // default value
    GeometryGraph__rosidl_typesupport_introspection_c__size_function__Point__nodes,  // size() function pointer
    GeometryGraph__rosidl_typesupport_introspection_c__get_const_function__Point__nodes,  // get_const(index) function pointer
    GeometryGraph__rosidl_typesupport_introspection_c__get_function__Point__nodes,  // get(index) function pointer
    GeometryGraph__rosidl_typesupport_introspection_c__resize_function__Point__nodes  // resize(index) function pointer
  },
  {
    "edges",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(graph_msgs__msg__GeometryGraph, edges),  // bytes offset in struct
    NULL,  // default value
    GeometryGraph__rosidl_typesupport_introspection_c__size_function__Edges__edges,  // size() function pointer
    GeometryGraph__rosidl_typesupport_introspection_c__get_const_function__Edges__edges,  // get_const(index) function pointer
    GeometryGraph__rosidl_typesupport_introspection_c__get_function__Edges__edges,  // get(index) function pointer
    GeometryGraph__rosidl_typesupport_introspection_c__resize_function__Edges__edges  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers GeometryGraph__rosidl_typesupport_introspection_c__GeometryGraph_message_members = {
  "graph_msgs__msg",  // message namespace
  "GeometryGraph",  // message name
  3,  // number of fields
  sizeof(graph_msgs__msg__GeometryGraph),
  GeometryGraph__rosidl_typesupport_introspection_c__GeometryGraph_message_member_array,  // message members
  GeometryGraph__rosidl_typesupport_introspection_c__GeometryGraph_init_function,  // function to initialize message memory (memory has to be allocated)
  GeometryGraph__rosidl_typesupport_introspection_c__GeometryGraph_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t GeometryGraph__rosidl_typesupport_introspection_c__GeometryGraph_message_type_support_handle = {
  0,
  &GeometryGraph__rosidl_typesupport_introspection_c__GeometryGraph_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_graph_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, graph_msgs, msg, GeometryGraph)() {
  GeometryGraph__rosidl_typesupport_introspection_c__GeometryGraph_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  GeometryGraph__rosidl_typesupport_introspection_c__GeometryGraph_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Point)();
  GeometryGraph__rosidl_typesupport_introspection_c__GeometryGraph_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, graph_msgs, msg, Edges)();
  if (!GeometryGraph__rosidl_typesupport_introspection_c__GeometryGraph_message_type_support_handle.typesupport_identifier) {
    GeometryGraph__rosidl_typesupport_introspection_c__GeometryGraph_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &GeometryGraph__rosidl_typesupport_introspection_c__GeometryGraph_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
