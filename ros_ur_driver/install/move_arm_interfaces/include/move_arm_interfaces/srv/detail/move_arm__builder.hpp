// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from move_arm_interfaces:srv/MoveArm.idl
// generated code does not contain a copyright notice

#ifndef MOVE_ARM_INTERFACES__SRV__DETAIL__MOVE_ARM__BUILDER_HPP_
#define MOVE_ARM_INTERFACES__SRV__DETAIL__MOVE_ARM__BUILDER_HPP_

#include "move_arm_interfaces/srv/detail/move_arm__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace move_arm_interfaces
{

namespace srv
{

namespace builder
{

class Init_MoveArm_Request_pose
{
public:
  Init_MoveArm_Request_pose()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::move_arm_interfaces::srv::MoveArm_Request pose(::move_arm_interfaces::srv::MoveArm_Request::_pose_type arg)
  {
    msg_.pose = std::move(arg);
    return std::move(msg_);
  }

private:
  ::move_arm_interfaces::srv::MoveArm_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::move_arm_interfaces::srv::MoveArm_Request>()
{
  return move_arm_interfaces::srv::builder::Init_MoveArm_Request_pose();
}

}  // namespace move_arm_interfaces


namespace move_arm_interfaces
{

namespace srv
{

namespace builder
{

class Init_MoveArm_Response_success
{
public:
  Init_MoveArm_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::move_arm_interfaces::srv::MoveArm_Response success(::move_arm_interfaces::srv::MoveArm_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return std::move(msg_);
  }

private:
  ::move_arm_interfaces::srv::MoveArm_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::move_arm_interfaces::srv::MoveArm_Response>()
{
  return move_arm_interfaces::srv::builder::Init_MoveArm_Response_success();
}

}  // namespace move_arm_interfaces

#endif  // MOVE_ARM_INTERFACES__SRV__DETAIL__MOVE_ARM__BUILDER_HPP_
