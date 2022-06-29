// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from graph_msgs:msg/Edges.idl
// generated code does not contain a copyright notice

#ifndef GRAPH_MSGS__MSG__DETAIL__EDGES__TRAITS_HPP_
#define GRAPH_MSGS__MSG__DETAIL__EDGES__TRAITS_HPP_

#include "graph_msgs/msg/detail/edges__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<graph_msgs::msg::Edges>()
{
  return "graph_msgs::msg::Edges";
}

template<>
inline const char * name<graph_msgs::msg::Edges>()
{
  return "graph_msgs/msg/Edges";
}

template<>
struct has_fixed_size<graph_msgs::msg::Edges>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<graph_msgs::msg::Edges>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<graph_msgs::msg::Edges>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // GRAPH_MSGS__MSG__DETAIL__EDGES__TRAITS_HPP_
