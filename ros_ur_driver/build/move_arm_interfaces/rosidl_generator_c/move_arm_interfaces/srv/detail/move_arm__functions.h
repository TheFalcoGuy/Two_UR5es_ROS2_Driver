// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from move_arm_interfaces:srv/MoveArm.idl
// generated code does not contain a copyright notice

#ifndef MOVE_ARM_INTERFACES__SRV__DETAIL__MOVE_ARM__FUNCTIONS_H_
#define MOVE_ARM_INTERFACES__SRV__DETAIL__MOVE_ARM__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "move_arm_interfaces/msg/rosidl_generator_c__visibility_control.h"

#include "move_arm_interfaces/srv/detail/move_arm__struct.h"

/// Initialize srv/MoveArm message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * move_arm_interfaces__srv__MoveArm_Request
 * )) before or use
 * move_arm_interfaces__srv__MoveArm_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_move_arm_interfaces
bool
move_arm_interfaces__srv__MoveArm_Request__init(move_arm_interfaces__srv__MoveArm_Request * msg);

/// Finalize srv/MoveArm message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_move_arm_interfaces
void
move_arm_interfaces__srv__MoveArm_Request__fini(move_arm_interfaces__srv__MoveArm_Request * msg);

/// Create srv/MoveArm message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * move_arm_interfaces__srv__MoveArm_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_move_arm_interfaces
move_arm_interfaces__srv__MoveArm_Request *
move_arm_interfaces__srv__MoveArm_Request__create();

/// Destroy srv/MoveArm message.
/**
 * It calls
 * move_arm_interfaces__srv__MoveArm_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_move_arm_interfaces
void
move_arm_interfaces__srv__MoveArm_Request__destroy(move_arm_interfaces__srv__MoveArm_Request * msg);


/// Initialize array of srv/MoveArm messages.
/**
 * It allocates the memory for the number of elements and calls
 * move_arm_interfaces__srv__MoveArm_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_move_arm_interfaces
bool
move_arm_interfaces__srv__MoveArm_Request__Sequence__init(move_arm_interfaces__srv__MoveArm_Request__Sequence * array, size_t size);

/// Finalize array of srv/MoveArm messages.
/**
 * It calls
 * move_arm_interfaces__srv__MoveArm_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_move_arm_interfaces
void
move_arm_interfaces__srv__MoveArm_Request__Sequence__fini(move_arm_interfaces__srv__MoveArm_Request__Sequence * array);

/// Create array of srv/MoveArm messages.
/**
 * It allocates the memory for the array and calls
 * move_arm_interfaces__srv__MoveArm_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_move_arm_interfaces
move_arm_interfaces__srv__MoveArm_Request__Sequence *
move_arm_interfaces__srv__MoveArm_Request__Sequence__create(size_t size);

/// Destroy array of srv/MoveArm messages.
/**
 * It calls
 * move_arm_interfaces__srv__MoveArm_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_move_arm_interfaces
void
move_arm_interfaces__srv__MoveArm_Request__Sequence__destroy(move_arm_interfaces__srv__MoveArm_Request__Sequence * array);

/// Initialize srv/MoveArm message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * move_arm_interfaces__srv__MoveArm_Response
 * )) before or use
 * move_arm_interfaces__srv__MoveArm_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_move_arm_interfaces
bool
move_arm_interfaces__srv__MoveArm_Response__init(move_arm_interfaces__srv__MoveArm_Response * msg);

/// Finalize srv/MoveArm message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_move_arm_interfaces
void
move_arm_interfaces__srv__MoveArm_Response__fini(move_arm_interfaces__srv__MoveArm_Response * msg);

/// Create srv/MoveArm message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * move_arm_interfaces__srv__MoveArm_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_move_arm_interfaces
move_arm_interfaces__srv__MoveArm_Response *
move_arm_interfaces__srv__MoveArm_Response__create();

/// Destroy srv/MoveArm message.
/**
 * It calls
 * move_arm_interfaces__srv__MoveArm_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_move_arm_interfaces
void
move_arm_interfaces__srv__MoveArm_Response__destroy(move_arm_interfaces__srv__MoveArm_Response * msg);


/// Initialize array of srv/MoveArm messages.
/**
 * It allocates the memory for the number of elements and calls
 * move_arm_interfaces__srv__MoveArm_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_move_arm_interfaces
bool
move_arm_interfaces__srv__MoveArm_Response__Sequence__init(move_arm_interfaces__srv__MoveArm_Response__Sequence * array, size_t size);

/// Finalize array of srv/MoveArm messages.
/**
 * It calls
 * move_arm_interfaces__srv__MoveArm_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_move_arm_interfaces
void
move_arm_interfaces__srv__MoveArm_Response__Sequence__fini(move_arm_interfaces__srv__MoveArm_Response__Sequence * array);

/// Create array of srv/MoveArm messages.
/**
 * It allocates the memory for the array and calls
 * move_arm_interfaces__srv__MoveArm_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_move_arm_interfaces
move_arm_interfaces__srv__MoveArm_Response__Sequence *
move_arm_interfaces__srv__MoveArm_Response__Sequence__create(size_t size);

/// Destroy array of srv/MoveArm messages.
/**
 * It calls
 * move_arm_interfaces__srv__MoveArm_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_move_arm_interfaces
void
move_arm_interfaces__srv__MoveArm_Response__Sequence__destroy(move_arm_interfaces__srv__MoveArm_Response__Sequence * array);

#ifdef __cplusplus
}
#endif

#endif  // MOVE_ARM_INTERFACES__SRV__DETAIL__MOVE_ARM__FUNCTIONS_H_
