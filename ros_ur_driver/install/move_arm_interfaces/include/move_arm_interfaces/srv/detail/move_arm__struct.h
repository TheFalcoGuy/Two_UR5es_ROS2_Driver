// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from move_arm_interfaces:srv/MoveArm.idl
// generated code does not contain a copyright notice

#ifndef MOVE_ARM_INTERFACES__SRV__DETAIL__MOVE_ARM__STRUCT_H_
#define MOVE_ARM_INTERFACES__SRV__DETAIL__MOVE_ARM__STRUCT_H_

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
#include "geometry_msgs/msg/detail/pose__struct.h"

// Struct defined in srv/MoveArm in the package move_arm_interfaces.
typedef struct move_arm_interfaces__srv__MoveArm_Request
{
  geometry_msgs__msg__Pose pose;
} move_arm_interfaces__srv__MoveArm_Request;

// Struct for a sequence of move_arm_interfaces__srv__MoveArm_Request.
typedef struct move_arm_interfaces__srv__MoveArm_Request__Sequence
{
  move_arm_interfaces__srv__MoveArm_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} move_arm_interfaces__srv__MoveArm_Request__Sequence;


// Constants defined in the message

// Struct defined in srv/MoveArm in the package move_arm_interfaces.
typedef struct move_arm_interfaces__srv__MoveArm_Response
{
  bool success;
} move_arm_interfaces__srv__MoveArm_Response;

// Struct for a sequence of move_arm_interfaces__srv__MoveArm_Response.
typedef struct move_arm_interfaces__srv__MoveArm_Response__Sequence
{
  move_arm_interfaces__srv__MoveArm_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} move_arm_interfaces__srv__MoveArm_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MOVE_ARM_INTERFACES__SRV__DETAIL__MOVE_ARM__STRUCT_H_
