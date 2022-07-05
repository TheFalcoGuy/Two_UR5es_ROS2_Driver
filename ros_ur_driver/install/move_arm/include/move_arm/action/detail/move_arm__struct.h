// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from move_arm:action/MoveArm.idl
// generated code does not contain a copyright notice

#ifndef MOVE_ARM__ACTION__DETAIL__MOVE_ARM__STRUCT_H_
#define MOVE_ARM__ACTION__DETAIL__MOVE_ARM__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'pose'
#include "rosidl_runtime_c/primitives_sequence.h"

// Struct defined in action/MoveArm in the package move_arm.
typedef struct move_arm__action__MoveArm_Goal
{
  rosidl_runtime_c__float__Sequence pose;
} move_arm__action__MoveArm_Goal;

// Struct for a sequence of move_arm__action__MoveArm_Goal.
typedef struct move_arm__action__MoveArm_Goal__Sequence
{
  move_arm__action__MoveArm_Goal * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} move_arm__action__MoveArm_Goal__Sequence;


// Constants defined in the message

// Struct defined in action/MoveArm in the package move_arm.
typedef struct move_arm__action__MoveArm_Result
{
  bool success;
} move_arm__action__MoveArm_Result;

// Struct for a sequence of move_arm__action__MoveArm_Result.
typedef struct move_arm__action__MoveArm_Result__Sequence
{
  move_arm__action__MoveArm_Result * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} move_arm__action__MoveArm_Result__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'joint_angles'
// already included above
// #include "rosidl_runtime_c/primitives_sequence.h"

// Struct defined in action/MoveArm in the package move_arm.
typedef struct move_arm__action__MoveArm_Feedback
{
  rosidl_runtime_c__float__Sequence joint_angles;
} move_arm__action__MoveArm_Feedback;

// Struct for a sequence of move_arm__action__MoveArm_Feedback.
typedef struct move_arm__action__MoveArm_Feedback__Sequence
{
  move_arm__action__MoveArm_Feedback * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} move_arm__action__MoveArm_Feedback__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'goal'
#include "move_arm/action/detail/move_arm__struct.h"

// Struct defined in action/MoveArm in the package move_arm.
typedef struct move_arm__action__MoveArm_SendGoal_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
  move_arm__action__MoveArm_Goal goal;
} move_arm__action__MoveArm_SendGoal_Request;

// Struct for a sequence of move_arm__action__MoveArm_SendGoal_Request.
typedef struct move_arm__action__MoveArm_SendGoal_Request__Sequence
{
  move_arm__action__MoveArm_SendGoal_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} move_arm__action__MoveArm_SendGoal_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"

// Struct defined in action/MoveArm in the package move_arm.
typedef struct move_arm__action__MoveArm_SendGoal_Response
{
  bool accepted;
  builtin_interfaces__msg__Time stamp;
} move_arm__action__MoveArm_SendGoal_Response;

// Struct for a sequence of move_arm__action__MoveArm_SendGoal_Response.
typedef struct move_arm__action__MoveArm_SendGoal_Response__Sequence
{
  move_arm__action__MoveArm_SendGoal_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} move_arm__action__MoveArm_SendGoal_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"

// Struct defined in action/MoveArm in the package move_arm.
typedef struct move_arm__action__MoveArm_GetResult_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
} move_arm__action__MoveArm_GetResult_Request;

// Struct for a sequence of move_arm__action__MoveArm_GetResult_Request.
typedef struct move_arm__action__MoveArm_GetResult_Request__Sequence
{
  move_arm__action__MoveArm_GetResult_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} move_arm__action__MoveArm_GetResult_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'result'
// already included above
// #include "move_arm/action/detail/move_arm__struct.h"

// Struct defined in action/MoveArm in the package move_arm.
typedef struct move_arm__action__MoveArm_GetResult_Response
{
  int8_t status;
  move_arm__action__MoveArm_Result result;
} move_arm__action__MoveArm_GetResult_Response;

// Struct for a sequence of move_arm__action__MoveArm_GetResult_Response.
typedef struct move_arm__action__MoveArm_GetResult_Response__Sequence
{
  move_arm__action__MoveArm_GetResult_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} move_arm__action__MoveArm_GetResult_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'feedback'
// already included above
// #include "move_arm/action/detail/move_arm__struct.h"

// Struct defined in action/MoveArm in the package move_arm.
typedef struct move_arm__action__MoveArm_FeedbackMessage
{
  unique_identifier_msgs__msg__UUID goal_id;
  move_arm__action__MoveArm_Feedback feedback;
} move_arm__action__MoveArm_FeedbackMessage;

// Struct for a sequence of move_arm__action__MoveArm_FeedbackMessage.
typedef struct move_arm__action__MoveArm_FeedbackMessage__Sequence
{
  move_arm__action__MoveArm_FeedbackMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} move_arm__action__MoveArm_FeedbackMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MOVE_ARM__ACTION__DETAIL__MOVE_ARM__STRUCT_H_
