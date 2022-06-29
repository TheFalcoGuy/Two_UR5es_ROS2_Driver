// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from graph_msgs:msg/Edges.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "graph_msgs/msg/detail/edges__rosidl_typesupport_introspection_c.h"
#include "graph_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "graph_msgs/msg/detail/edges__functions.h"
#include "graph_msgs/msg/detail/edges__struct.h"


// Include directives for member types
// Member `node_ids`
// Member `weights`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void Edges__rosidl_typesupport_introspection_c__Edges_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  graph_msgs__msg__Edges__init(message_memory);
}

void Edges__rosidl_typesupport_introspection_c__Edges_fini_function(void * message_memory)
{
  graph_msgs__msg__Edges__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember Edges__rosidl_typesupport_introspection_c__Edges_message_member_array[2] = {
  {
    "node_ids",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(graph_msgs__msg__Edges, node_ids),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "weights",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(graph_msgs__msg__Edges, weights),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers Edges__rosidl_typesupport_introspection_c__Edges_message_members = {
  "graph_msgs__msg",  // message namespace
  "Edges",  // message name
  2,  // number of fields
  sizeof(graph_msgs__msg__Edges),
  Edges__rosidl_typesupport_introspection_c__Edges_message_member_array,  // message members
  Edges__rosidl_typesupport_introspection_c__Edges_init_function,  // function to initialize message memory (memory has to be allocated)
  Edges__rosidl_typesupport_introspection_c__Edges_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t Edges__rosidl_typesupport_introspection_c__Edges_message_type_support_handle = {
  0,
  &Edges__rosidl_typesupport_introspection_c__Edges_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_graph_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, graph_msgs, msg, Edges)() {
  if (!Edges__rosidl_typesupport_introspection_c__Edges_message_type_support_handle.typesupport_identifier) {
    Edges__rosidl_typesupport_introspection_c__Edges_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &Edges__rosidl_typesupport_introspection_c__Edges_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
