// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from move_arm:action/MoveArm.idl
// generated code does not contain a copyright notice

#ifndef MOVE_ARM__ACTION__DETAIL__MOVE_ARM__TRAITS_HPP_
#define MOVE_ARM__ACTION__DETAIL__MOVE_ARM__TRAITS_HPP_

#include "move_arm/action/detail/move_arm__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<move_arm::action::MoveArm_Goal>()
{
  return "move_arm::action::MoveArm_Goal";
}

template<>
inline const char * name<move_arm::action::MoveArm_Goal>()
{
  return "move_arm/action/MoveArm_Goal";
}

template<>
struct has_fixed_size<move_arm::action::MoveArm_Goal>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<move_arm::action::MoveArm_Goal>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<move_arm::action::MoveArm_Goal>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<move_arm::action::MoveArm_Result>()
{
  return "move_arm::action::MoveArm_Result";
}

template<>
inline const char * name<move_arm::action::MoveArm_Result>()
{
  return "move_arm/action/MoveArm_Result";
}

template<>
struct has_fixed_size<move_arm::action::MoveArm_Result>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<move_arm::action::MoveArm_Result>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<move_arm::action::MoveArm_Result>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<move_arm::action::MoveArm_Feedback>()
{
  return "move_arm::action::MoveArm_Feedback";
}

template<>
inline const char * name<move_arm::action::MoveArm_Feedback>()
{
  return "move_arm/action/MoveArm_Feedback";
}

template<>
struct has_fixed_size<move_arm::action::MoveArm_Feedback>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<move_arm::action::MoveArm_Feedback>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<move_arm::action::MoveArm_Feedback>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"
// Member 'goal'
#include "move_arm/action/detail/move_arm__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<move_arm::action::MoveArm_SendGoal_Request>()
{
  return "move_arm::action::MoveArm_SendGoal_Request";
}

template<>
inline const char * name<move_arm::action::MoveArm_SendGoal_Request>()
{
  return "move_arm/action/MoveArm_SendGoal_Request";
}

template<>
struct has_fixed_size<move_arm::action::MoveArm_SendGoal_Request>
  : std::integral_constant<bool, has_fixed_size<move_arm::action::MoveArm_Goal>::value && has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<move_arm::action::MoveArm_SendGoal_Request>
  : std::integral_constant<bool, has_bounded_size<move_arm::action::MoveArm_Goal>::value && has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<move_arm::action::MoveArm_SendGoal_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<move_arm::action::MoveArm_SendGoal_Response>()
{
  return "move_arm::action::MoveArm_SendGoal_Response";
}

template<>
inline const char * name<move_arm::action::MoveArm_SendGoal_Response>()
{
  return "move_arm/action/MoveArm_SendGoal_Response";
}

template<>
struct has_fixed_size<move_arm::action::MoveArm_SendGoal_Response>
  : std::integral_constant<bool, has_fixed_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct has_bounded_size<move_arm::action::MoveArm_SendGoal_Response>
  : std::integral_constant<bool, has_bounded_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct is_message<move_arm::action::MoveArm_SendGoal_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<move_arm::action::MoveArm_SendGoal>()
{
  return "move_arm::action::MoveArm_SendGoal";
}

template<>
inline const char * name<move_arm::action::MoveArm_SendGoal>()
{
  return "move_arm/action/MoveArm_SendGoal";
}

template<>
struct has_fixed_size<move_arm::action::MoveArm_SendGoal>
  : std::integral_constant<
    bool,
    has_fixed_size<move_arm::action::MoveArm_SendGoal_Request>::value &&
    has_fixed_size<move_arm::action::MoveArm_SendGoal_Response>::value
  >
{
};

template<>
struct has_bounded_size<move_arm::action::MoveArm_SendGoal>
  : std::integral_constant<
    bool,
    has_bounded_size<move_arm::action::MoveArm_SendGoal_Request>::value &&
    has_bounded_size<move_arm::action::MoveArm_SendGoal_Response>::value
  >
{
};

template<>
struct is_service<move_arm::action::MoveArm_SendGoal>
  : std::true_type
{
};

template<>
struct is_service_request<move_arm::action::MoveArm_SendGoal_Request>
  : std::true_type
{
};

template<>
struct is_service_response<move_arm::action::MoveArm_SendGoal_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<move_arm::action::MoveArm_GetResult_Request>()
{
  return "move_arm::action::MoveArm_GetResult_Request";
}

template<>
inline const char * name<move_arm::action::MoveArm_GetResult_Request>()
{
  return "move_arm/action/MoveArm_GetResult_Request";
}

template<>
struct has_fixed_size<move_arm::action::MoveArm_GetResult_Request>
  : std::integral_constant<bool, has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<move_arm::action::MoveArm_GetResult_Request>
  : std::integral_constant<bool, has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<move_arm::action::MoveArm_GetResult_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'result'
// already included above
// #include "move_arm/action/detail/move_arm__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<move_arm::action::MoveArm_GetResult_Response>()
{
  return "move_arm::action::MoveArm_GetResult_Response";
}

template<>
inline const char * name<move_arm::action::MoveArm_GetResult_Response>()
{
  return "move_arm/action/MoveArm_GetResult_Response";
}

template<>
struct has_fixed_size<move_arm::action::MoveArm_GetResult_Response>
  : std::integral_constant<bool, has_fixed_size<move_arm::action::MoveArm_Result>::value> {};

template<>
struct has_bounded_size<move_arm::action::MoveArm_GetResult_Response>
  : std::integral_constant<bool, has_bounded_size<move_arm::action::MoveArm_Result>::value> {};

template<>
struct is_message<move_arm::action::MoveArm_GetResult_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<move_arm::action::MoveArm_GetResult>()
{
  return "move_arm::action::MoveArm_GetResult";
}

template<>
inline const char * name<move_arm::action::MoveArm_GetResult>()
{
  return "move_arm/action/MoveArm_GetResult";
}

template<>
struct has_fixed_size<move_arm::action::MoveArm_GetResult>
  : std::integral_constant<
    bool,
    has_fixed_size<move_arm::action::MoveArm_GetResult_Request>::value &&
    has_fixed_size<move_arm::action::MoveArm_GetResult_Response>::value
  >
{
};

template<>
struct has_bounded_size<move_arm::action::MoveArm_GetResult>
  : std::integral_constant<
    bool,
    has_bounded_size<move_arm::action::MoveArm_GetResult_Request>::value &&
    has_bounded_size<move_arm::action::MoveArm_GetResult_Response>::value
  >
{
};

template<>
struct is_service<move_arm::action::MoveArm_GetResult>
  : std::true_type
{
};

template<>
struct is_service_request<move_arm::action::MoveArm_GetResult_Request>
  : std::true_type
{
};

template<>
struct is_service_response<move_arm::action::MoveArm_GetResult_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"
// Member 'feedback'
// already included above
// #include "move_arm/action/detail/move_arm__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<move_arm::action::MoveArm_FeedbackMessage>()
{
  return "move_arm::action::MoveArm_FeedbackMessage";
}

template<>
inline const char * name<move_arm::action::MoveArm_FeedbackMessage>()
{
  return "move_arm/action/MoveArm_FeedbackMessage";
}

template<>
struct has_fixed_size<move_arm::action::MoveArm_FeedbackMessage>
  : std::integral_constant<bool, has_fixed_size<move_arm::action::MoveArm_Feedback>::value && has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<move_arm::action::MoveArm_FeedbackMessage>
  : std::integral_constant<bool, has_bounded_size<move_arm::action::MoveArm_Feedback>::value && has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<move_arm::action::MoveArm_FeedbackMessage>
  : std::true_type {};

}  // namespace rosidl_generator_traits


namespace rosidl_generator_traits
{

template<>
struct is_action<move_arm::action::MoveArm>
  : std::true_type
{
};

template<>
struct is_action_goal<move_arm::action::MoveArm_Goal>
  : std::true_type
{
};

template<>
struct is_action_result<move_arm::action::MoveArm_Result>
  : std::true_type
{
};

template<>
struct is_action_feedback<move_arm::action::MoveArm_Feedback>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits


#endif  // MOVE_ARM__ACTION__DETAIL__MOVE_ARM__TRAITS_HPP_
