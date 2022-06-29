// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from graph_msgs:msg/Edges.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "graph_msgs/msg/detail/edges__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace graph_msgs
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void Edges_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) graph_msgs::msg::Edges(_init);
}

void Edges_fini_function(void * message_memory)
{
  auto typed_message = static_cast<graph_msgs::msg::Edges *>(message_memory);
  typed_message->~Edges();
}

size_t size_function__Edges__node_ids(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<uint32_t> *>(untyped_member);
  return member->size();
}

const void * get_const_function__Edges__node_ids(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<uint32_t> *>(untyped_member);
  return &member[index];
}

void * get_function__Edges__node_ids(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<uint32_t> *>(untyped_member);
  return &member[index];
}

void resize_function__Edges__node_ids(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<uint32_t> *>(untyped_member);
  member->resize(size);
}

size_t size_function__Edges__weights(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<double> *>(untyped_member);
  return member->size();
}

const void * get_const_function__Edges__weights(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<double> *>(untyped_member);
  return &member[index];
}

void * get_function__Edges__weights(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<double> *>(untyped_member);
  return &member[index];
}

void resize_function__Edges__weights(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<double> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember Edges_message_member_array[2] = {
  {
    "node_ids",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(graph_msgs::msg::Edges, node_ids),  // bytes offset in struct
    nullptr,  // default value
    size_function__Edges__node_ids,  // size() function pointer
    get_const_function__Edges__node_ids,  // get_const(index) function pointer
    get_function__Edges__node_ids,  // get(index) function pointer
    resize_function__Edges__node_ids  // resize(index) function pointer
  },
  {
    "weights",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(graph_msgs::msg::Edges, weights),  // bytes offset in struct
    nullptr,  // default value
    size_function__Edges__weights,  // size() function pointer
    get_const_function__Edges__weights,  // get_const(index) function pointer
    get_function__Edges__weights,  // get(index) function pointer
    resize_function__Edges__weights  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers Edges_message_members = {
  "graph_msgs::msg",  // message namespace
  "Edges",  // message name
  2,  // number of fields
  sizeof(graph_msgs::msg::Edges),
  Edges_message_member_array,  // message members
  Edges_init_function,  // function to initialize message memory (memory has to be allocated)
  Edges_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t Edges_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &Edges_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace graph_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<graph_msgs::msg::Edges>()
{
  return &::graph_msgs::msg::rosidl_typesupport_introspection_cpp::Edges_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, graph_msgs, msg, Edges)() {
  return &::graph_msgs::msg::rosidl_typesupport_introspection_cpp::Edges_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
