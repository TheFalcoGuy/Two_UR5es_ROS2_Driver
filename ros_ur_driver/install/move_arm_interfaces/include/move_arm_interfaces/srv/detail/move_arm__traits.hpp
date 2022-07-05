// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from move_arm_interfaces:srv/MoveArm.idl
// generated code does not contain a copyright notice

#ifndef MOVE_ARM_INTERFACES__SRV__DETAIL__MOVE_ARM__TRAITS_HPP_
#define MOVE_ARM_INTERFACES__SRV__DETAIL__MOVE_ARM__TRAITS_HPP_

#include "move_arm_interfaces/srv/detail/move_arm__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'pose'
#include "geometry_msgs/msg/detail/pose__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<move_arm_interfaces::srv::MoveArm_Request>()
{
  return "move_arm_interfaces::srv::MoveArm_Request";
}

template<>
inline const char * name<move_arm_interfaces::srv::MoveArm_Request>()
{
  return "move_arm_interfaces/srv/MoveArm_Request";
}

template<>
struct has_fixed_size<move_arm_interfaces::srv::MoveArm_Request>
  : std::integral_constant<bool, has_fixed_size<geometry_msgs::msg::Pose>::value> {};

template<>
struct has_bounded_size<move_arm_interfaces::srv::MoveArm_Request>
  : std::integral_constant<bool, has_bounded_size<geometry_msgs::msg::Pose>::value> {};

template<>
struct is_message<move_arm_interfaces::srv::MoveArm_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<move_arm_interfaces::srv::MoveArm_Response>()
{
  return "move_arm_interfaces::srv::MoveArm_Response";
}

template<>
inline const char * name<move_arm_interfaces::srv::MoveArm_Response>()
{
  return "move_arm_interfaces/srv/MoveArm_Response";
}

template<>
struct has_fixed_size<move_arm_interfaces::srv::MoveArm_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<move_arm_interfaces::srv::MoveArm_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<move_arm_interfaces::srv::MoveArm_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<move_arm_interfaces::srv::MoveArm>()
{
  return "move_arm_interfaces::srv::MoveArm";
}

template<>
inline const char * name<move_arm_interfaces::srv::MoveArm>()
{
  return "move_arm_interfaces/srv/MoveArm";
}

template<>
struct has_fixed_size<move_arm_interfaces::srv::MoveArm>
  : std::integral_constant<
    bool,
    has_fixed_size<move_arm_interfaces::srv::MoveArm_Request>::value &&
    has_fixed_size<move_arm_interfaces::srv::MoveArm_Response>::value
  >
{
};

template<>
struct has_bounded_size<move_arm_interfaces::srv::MoveArm>
  : std::integral_constant<
    bool,
    has_bounded_size<move_arm_interfaces::srv::MoveArm_Request>::value &&
    has_bounded_size<move_arm_interfaces::srv::MoveArm_Response>::value
  >
{
};

template<>
struct is_service<move_arm_interfaces::srv::MoveArm>
  : std::true_type
{
};

template<>
struct is_service_request<move_arm_interfaces::srv::MoveArm_Request>
  : std::true_type
{
};

template<>
struct is_service_response<move_arm_interfaces::srv::MoveArm_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // MOVE_ARM_INTERFACES__SRV__DETAIL__MOVE_ARM__TRAITS_HPP_
