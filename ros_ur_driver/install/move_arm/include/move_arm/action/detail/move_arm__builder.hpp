// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from move_arm:action/MoveArm.idl
// generated code does not contain a copyright notice

#ifndef MOVE_ARM__ACTION__DETAIL__MOVE_ARM__BUILDER_HPP_
#define MOVE_ARM__ACTION__DETAIL__MOVE_ARM__BUILDER_HPP_

#include "move_arm/action/detail/move_arm__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace move_arm
{

namespace action
{

namespace builder
{

class Init_MoveArm_Goal_pose
{
public:
  Init_MoveArm_Goal_pose()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::move_arm::action::MoveArm_Goal pose(::move_arm::action::MoveArm_Goal::_pose_type arg)
  {
    msg_.pose = std::move(arg);
    return std::move(msg_);
  }

private:
  ::move_arm::action::MoveArm_Goal msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::move_arm::action::MoveArm_Goal>()
{
  return move_arm::action::builder::Init_MoveArm_Goal_pose();
}

}  // namespace move_arm


namespace move_arm
{

namespace action
{

namespace builder
{

class Init_MoveArm_Result_success
{
public:
  Init_MoveArm_Result_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::move_arm::action::MoveArm_Result success(::move_arm::action::MoveArm_Result::_success_type arg)
  {
    msg_.success = std::move(arg);
    return std::move(msg_);
  }

private:
  ::move_arm::action::MoveArm_Result msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::move_arm::action::MoveArm_Result>()
{
  return move_arm::action::builder::Init_MoveArm_Result_success();
}

}  // namespace move_arm


namespace move_arm
{

namespace action
{

namespace builder
{

class Init_MoveArm_Feedback_joint_angles
{
public:
  Init_MoveArm_Feedback_joint_angles()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::move_arm::action::MoveArm_Feedback joint_angles(::move_arm::action::MoveArm_Feedback::_joint_angles_type arg)
  {
    msg_.joint_angles = std::move(arg);
    return std::move(msg_);
  }

private:
  ::move_arm::action::MoveArm_Feedback msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::move_arm::action::MoveArm_Feedback>()
{
  return move_arm::action::builder::Init_MoveArm_Feedback_joint_angles();
}

}  // namespace move_arm


namespace move_arm
{

namespace action
{

namespace builder
{

class Init_MoveArm_SendGoal_Request_goal
{
public:
  explicit Init_MoveArm_SendGoal_Request_goal(::move_arm::action::MoveArm_SendGoal_Request & msg)
  : msg_(msg)
  {}
  ::move_arm::action::MoveArm_SendGoal_Request goal(::move_arm::action::MoveArm_SendGoal_Request::_goal_type arg)
  {
    msg_.goal = std::move(arg);
    return std::move(msg_);
  }

private:
  ::move_arm::action::MoveArm_SendGoal_Request msg_;
};

class Init_MoveArm_SendGoal_Request_goal_id
{
public:
  Init_MoveArm_SendGoal_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MoveArm_SendGoal_Request_goal goal_id(::move_arm::action::MoveArm_SendGoal_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_MoveArm_SendGoal_Request_goal(msg_);
  }

private:
  ::move_arm::action::MoveArm_SendGoal_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::move_arm::action::MoveArm_SendGoal_Request>()
{
  return move_arm::action::builder::Init_MoveArm_SendGoal_Request_goal_id();
}

}  // namespace move_arm


namespace move_arm
{

namespace action
{

namespace builder
{

class Init_MoveArm_SendGoal_Response_stamp
{
public:
  explicit Init_MoveArm_SendGoal_Response_stamp(::move_arm::action::MoveArm_SendGoal_Response & msg)
  : msg_(msg)
  {}
  ::move_arm::action::MoveArm_SendGoal_Response stamp(::move_arm::action::MoveArm_SendGoal_Response::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::move_arm::action::MoveArm_SendGoal_Response msg_;
};

class Init_MoveArm_SendGoal_Response_accepted
{
public:
  Init_MoveArm_SendGoal_Response_accepted()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MoveArm_SendGoal_Response_stamp accepted(::move_arm::action::MoveArm_SendGoal_Response::_accepted_type arg)
  {
    msg_.accepted = std::move(arg);
    return Init_MoveArm_SendGoal_Response_stamp(msg_);
  }

private:
  ::move_arm::action::MoveArm_SendGoal_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::move_arm::action::MoveArm_SendGoal_Response>()
{
  return move_arm::action::builder::Init_MoveArm_SendGoal_Response_accepted();
}

}  // namespace move_arm


namespace move_arm
{

namespace action
{

namespace builder
{

class Init_MoveArm_GetResult_Request_goal_id
{
public:
  Init_MoveArm_GetResult_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::move_arm::action::MoveArm_GetResult_Request goal_id(::move_arm::action::MoveArm_GetResult_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::move_arm::action::MoveArm_GetResult_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::move_arm::action::MoveArm_GetResult_Request>()
{
  return move_arm::action::builder::Init_MoveArm_GetResult_Request_goal_id();
}

}  // namespace move_arm


namespace move_arm
{

namespace action
{

namespace builder
{

class Init_MoveArm_GetResult_Response_result
{
public:
  explicit Init_MoveArm_GetResult_Response_result(::move_arm::action::MoveArm_GetResult_Response & msg)
  : msg_(msg)
  {}
  ::move_arm::action::MoveArm_GetResult_Response result(::move_arm::action::MoveArm_GetResult_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::move_arm::action::MoveArm_GetResult_Response msg_;
};

class Init_MoveArm_GetResult_Response_status
{
public:
  Init_MoveArm_GetResult_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MoveArm_GetResult_Response_result status(::move_arm::action::MoveArm_GetResult_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_MoveArm_GetResult_Response_result(msg_);
  }

private:
  ::move_arm::action::MoveArm_GetResult_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::move_arm::action::MoveArm_GetResult_Response>()
{
  return move_arm::action::builder::Init_MoveArm_GetResult_Response_status();
}

}  // namespace move_arm


namespace move_arm
{

namespace action
{

namespace builder
{

class Init_MoveArm_FeedbackMessage_feedback
{
public:
  explicit Init_MoveArm_FeedbackMessage_feedback(::move_arm::action::MoveArm_FeedbackMessage & msg)
  : msg_(msg)
  {}
  ::move_arm::action::MoveArm_FeedbackMessage feedback(::move_arm::action::MoveArm_FeedbackMessage::_feedback_type arg)
  {
    msg_.feedback = std::move(arg);
    return std::move(msg_);
  }

private:
  ::move_arm::action::MoveArm_FeedbackMessage msg_;
};

class Init_MoveArm_FeedbackMessage_goal_id
{
public:
  Init_MoveArm_FeedbackMessage_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MoveArm_FeedbackMessage_feedback goal_id(::move_arm::action::MoveArm_FeedbackMessage::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_MoveArm_FeedbackMessage_feedback(msg_);
  }

private:
  ::move_arm::action::MoveArm_FeedbackMessage msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::move_arm::action::MoveArm_FeedbackMessage>()
{
  return move_arm::action::builder::Init_MoveArm_FeedbackMessage_goal_id();
}

}  // namespace move_arm

#endif  // MOVE_ARM__ACTION__DETAIL__MOVE_ARM__BUILDER_HPP_
