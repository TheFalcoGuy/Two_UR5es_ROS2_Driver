// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from graph_msgs:msg/GeometryGraph.idl
// generated code does not contain a copyright notice

#ifndef GRAPH_MSGS__MSG__DETAIL__GEOMETRY_GRAPH__TRAITS_HPP_
#define GRAPH_MSGS__MSG__DETAIL__GEOMETRY_GRAPH__TRAITS_HPP_

#include "graph_msgs/msg/detail/geometry_graph__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<graph_msgs::msg::GeometryGraph>()
{
  return "graph_msgs::msg::GeometryGraph";
}

template<>
inline const char * name<graph_msgs::msg::GeometryGraph>()
{
  return "graph_msgs/msg/GeometryGraph";
}

template<>
struct has_fixed_size<graph_msgs::msg::GeometryGraph>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<graph_msgs::msg::GeometryGraph>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<graph_msgs::msg::GeometryGraph>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // GRAPH_MSGS__MSG__DETAIL__GEOMETRY_GRAPH__TRAITS_HPP_
