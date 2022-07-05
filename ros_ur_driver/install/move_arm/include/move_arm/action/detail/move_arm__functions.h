// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from move_arm:action/MoveArm.idl
// generated code does not contain a copyright notice

#ifndef MOVE_ARM__ACTION__DETAIL__MOVE_ARM__FUNCTIONS_H_
#define MOVE_ARM__ACTION__DETAIL__MOVE_ARM__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "move_arm/msg/rosidl_generator_c__visibility_control.h"

#include "move_arm/action/detail/move_arm__struct.h"

/// Initialize action/MoveArm message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * move_arm__action__MoveArm_Goal
 * )) before or use
 * move_arm__action__MoveArm_Goal__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_move_arm
bool
move_arm__action__MoveArm_Goal__init(move_arm__action__MoveArm_Goal * msg);

/// Finalize action/MoveArm message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_move_arm
void
move_arm__action__MoveArm_Goal__fini(move_arm__action__MoveArm_Goal * msg);

/// Create action/MoveArm message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * move_arm__action__MoveArm_Goal__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_move_arm
move_arm__action__MoveArm_Goal *
move_arm__action__MoveArm_Goal__create();

/// Destroy action/MoveArm message.
/**
 * It calls
 * move_arm__action__MoveArm_Goal__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_move_arm
void
move_arm__action__MoveArm_Goal__destroy(move_arm__action__MoveArm_Goal * msg);


/// Initialize array of action/MoveArm messages.
/**
 * It allocates the memory for the number of elements and calls
 * move_arm__action__MoveArm_Goal__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_move_arm
bool
move_arm__action__MoveArm_Goal__Sequence__init(move_arm__action__MoveArm_Goal__Sequence * array, size_t size);

/// Finalize array of action/MoveArm messages.
/**
 * It calls
 * move_arm__action__MoveArm_Goal__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_move_arm
void
move_arm__action__MoveArm_Goal__Sequence__fini(move_arm__action__MoveArm_Goal__Sequence * array);

/// Create array of action/MoveArm messages.
/**
 * It allocates the memory for the array and calls
 * move_arm__action__MoveArm_Goal__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_move_arm
move_arm__action__MoveArm_Goal__Sequence *
move_arm__action__MoveArm_Goal__Sequence__create(size_t size);

/// Destroy array of action/MoveArm messages.
/**
 * It calls
 * move_arm__action__MoveArm_Goal__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_move_arm
void
move_arm__action__MoveArm_Goal__Sequence__destroy(move_arm__action__MoveArm_Goal__Sequence * array);

/// Initialize action/MoveArm message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * move_arm__action__MoveArm_Result
 * )) before or use
 * move_arm__action__MoveArm_Result__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_move_arm
bool
move_arm__action__MoveArm_Result__init(move_arm__action__MoveArm_Result * msg);

/// Finalize action/MoveArm message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_move_arm
void
move_arm__action__MoveArm_Result__fini(move_arm__action__MoveArm_Result * msg);

/// Create action/MoveArm message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * move_arm__action__MoveArm_Result__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_move_arm
move_arm__action__MoveArm_Result *
move_arm__action__MoveArm_Result__create();

/// Destroy action/MoveArm message.
/**
 * It calls
 * move_arm__action__MoveArm_Result__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_move_arm
void
move_arm__action__MoveArm_Result__destroy(move_arm__action__MoveArm_Result * msg);


/// Initialize array of action/MoveArm messages.
/**
 * It allocates the memory for the number of elements and calls
 * move_arm__action__MoveArm_Result__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_move_arm
bool
move_arm__action__MoveArm_Result__Sequence__init(move_arm__action__MoveArm_Result__Sequence * array, size_t size);

/// Finalize array of action/MoveArm messages.
/**
 * It calls
 * move_arm__action__MoveArm_Result__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_move_arm
void
move_arm__action__MoveArm_Result__Sequence__fini(move_arm__action__MoveArm_Result__Sequence * array);

/// Create array of action/MoveArm messages.
/**
 * It allocates the memory for the array and calls
 * move_arm__action__MoveArm_Result__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_move_arm
move_arm__action__MoveArm_Result__Sequence *
move_arm__action__MoveArm_Result__Sequence__create(size_t size);

/// Destroy array of action/MoveArm messages.
/**
 * It calls
 * move_arm__action__MoveArm_Result__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_move_arm
void
move_arm__action__MoveArm_Result__Sequence__destroy(move_arm__action__MoveArm_Result__Sequence * array);

/// Initialize action/MoveArm message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * move_arm__action__MoveArm_Feedback
 * )) before or use
 * move_arm__action__MoveArm_Feedback__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_move_arm
bool
move_arm__action__MoveArm_Feedback__init(move_arm__action__MoveArm_Feedback * msg);

/// Finalize action/MoveArm message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_move_arm
void
move_arm__action__MoveArm_Feedback__fini(move_arm__action__MoveArm_Feedback * msg);

/// Create action/MoveArm message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * move_arm__action__MoveArm_Feedback__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_move_arm
move_arm__action__MoveArm_Feedback *
move_arm__action__MoveArm_Feedback__create();

/// Destroy action/MoveArm message.
/**
 * It calls
 * move_arm__action__MoveArm_Feedback__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_move_arm
void
move_arm__action__MoveArm_Feedback__destroy(move_arm__action__MoveArm_Feedback * msg);


/// Initialize array of action/MoveArm messages.
/**
 * It allocates the memory for the number of elements and calls
 * move_arm__action__MoveArm_Feedback__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_move_arm
bool
move_arm__action__MoveArm_Feedback__Sequence__init(move_arm__action__MoveArm_Feedback__Sequence * array, size_t size);

/// Finalize array of action/MoveArm messages.
/**
 * It calls
 * move_arm__action__MoveArm_Feedback__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_move_arm
void
move_arm__action__MoveArm_Feedback__Sequence__fini(move_arm__action__MoveArm_Feedback__Sequence * array);

/// Create array of action/MoveArm messages.
/**
 * It allocates the memory for the array and calls
 * move_arm__action__MoveArm_Feedback__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_move_arm
move_arm__action__MoveArm_Feedback__Sequence *
move_arm__action__MoveArm_Feedback__Sequence__create(size_t size);

/// Destroy array of action/MoveArm messages.
/**
 * It calls
 * move_arm__action__MoveArm_Feedback__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_move_arm
void
move_arm__action__MoveArm_Feedback__Sequence__destroy(move_arm__action__MoveArm_Feedback__Sequence * array);

/// Initialize action/MoveArm message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * move_arm__action__MoveArm_SendGoal_Request
 * )) before or use
 * move_arm__action__MoveArm_SendGoal_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_move_arm
bool
move_arm__action__MoveArm_SendGoal_Request__init(move_arm__action__MoveArm_SendGoal_Request * msg);

/// Finalize action/MoveArm message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_move_arm
void
move_arm__action__MoveArm_SendGoal_Request__fini(move_arm__action__MoveArm_SendGoal_Request * msg);

/// Create action/MoveArm message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * move_arm__action__MoveArm_SendGoal_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_move_arm
move_arm__action__MoveArm_SendGoal_Request *
move_arm__action__MoveArm_SendGoal_Request__create();

/// Destroy action/MoveArm message.
/**
 * It calls
 * move_arm__action__MoveArm_SendGoal_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_move_arm
void
move_arm__action__MoveArm_SendGoal_Request__destroy(move_arm__action__MoveArm_SendGoal_Request * msg);


/// Initialize array of action/MoveArm messages.
/**
 * It allocates the memory for the number of elements and calls
 * move_arm__action__MoveArm_SendGoal_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_move_arm
bool
move_arm__action__MoveArm_SendGoal_Request__Sequence__init(move_arm__action__MoveArm_SendGoal_Request__Sequence * array, size_t size);

/// Finalize array of action/MoveArm messages.
/**
 * It calls
 * move_arm__action__MoveArm_SendGoal_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_move_arm
void
move_arm__action__MoveArm_SendGoal_Request__Sequence__fini(move_arm__action__MoveArm_SendGoal_Request__Sequence * array);

/// Create array of action/MoveArm messages.
/**
 * It allocates the memory for the array and calls
 * move_arm__action__MoveArm_SendGoal_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_move_arm
move_arm__action__MoveArm_SendGoal_Request__Sequence *
move_arm__action__MoveArm_SendGoal_Request__Sequence__create(size_t size);

/// Destroy array of action/MoveArm messages.
/**
 * It calls
 * move_arm__action__MoveArm_SendGoal_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_move_arm
void
move_arm__action__MoveArm_SendGoal_Request__Sequence__destroy(move_arm__action__MoveArm_SendGoal_Request__Sequence * array);

/// Initialize action/MoveArm message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * move_arm__action__MoveArm_SendGoal_Response
 * )) before or use
 * move_arm__action__MoveArm_SendGoal_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_move_arm
bool
move_arm__action__MoveArm_SendGoal_Response__init(move_arm__action__MoveArm_SendGoal_Response * msg);

/// Finalize action/MoveArm message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_move_arm
void
move_arm__action__MoveArm_SendGoal_Response__fini(move_arm__action__MoveArm_SendGoal_Response * msg);

/// Create action/MoveArm message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * move_arm__action__MoveArm_SendGoal_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_move_arm
move_arm__action__MoveArm_SendGoal_Response *
move_arm__action__MoveArm_SendGoal_Response__create();

/// Destroy action/MoveArm message.
/**
 * It calls
 * move_arm__action__MoveArm_SendGoal_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_move_arm
void
move_arm__action__MoveArm_SendGoal_Response__destroy(move_arm__action__MoveArm_SendGoal_Response * msg);


/// Initialize array of action/MoveArm messages.
/**
 * It allocates the memory for the number of elements and calls
 * move_arm__action__MoveArm_SendGoal_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_move_arm
bool
move_arm__action__MoveArm_SendGoal_Response__Sequence__init(move_arm__action__MoveArm_SendGoal_Response__Sequence * array, size_t size);

/// Finalize array of action/MoveArm messages.
/**
 * It calls
 * move_arm__action__MoveArm_SendGoal_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_move_arm
void
move_arm__action__MoveArm_SendGoal_Response__Sequence__fini(move_arm__action__MoveArm_SendGoal_Response__Sequence * array);

/// Create array of action/MoveArm messages.
/**
 * It allocates the memory for the array and calls
 * move_arm__action__MoveArm_SendGoal_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_move_arm
move_arm__action__MoveArm_SendGoal_Response__Sequence *
move_arm__action__MoveArm_SendGoal_Response__Sequence__create(size_t size);

/// Destroy array of action/MoveArm messages.
/**
 * It calls
 * move_arm__action__MoveArm_SendGoal_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_move_arm
void
move_arm__action__MoveArm_SendGoal_Response__Sequence__destroy(move_arm__action__MoveArm_SendGoal_Response__Sequence * array);

/// Initialize action/MoveArm message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * move_arm__action__MoveArm_GetResult_Request
 * )) before or use
 * move_arm__action__MoveArm_GetResult_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_move_arm
bool
move_arm__action__MoveArm_GetResult_Request__init(move_arm__action__MoveArm_GetResult_Request * msg);

/// Finalize action/MoveArm message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_move_arm
void
move_arm__action__MoveArm_GetResult_Request__fini(move_arm__action__MoveArm_GetResult_Request * msg);

/// Create action/MoveArm message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * move_arm__action__MoveArm_GetResult_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_move_arm
move_arm__action__MoveArm_GetResult_Request *
move_arm__action__MoveArm_GetResult_Request__create();

/// Destroy action/MoveArm message.
/**
 * It calls
 * move_arm__action__MoveArm_GetResult_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_move_arm
void
move_arm__action__MoveArm_GetResult_Request__destroy(move_arm__action__MoveArm_GetResult_Request * msg);


/// Initialize array of action/MoveArm messages.
/**
 * It allocates the memory for the number of elements and calls
 * move_arm__action__MoveArm_GetResult_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_move_arm
bool
move_arm__action__MoveArm_GetResult_Request__Sequence__init(move_arm__action__MoveArm_GetResult_Request__Sequence * array, size_t size);

/// Finalize array of action/MoveArm messages.
/**
 * It calls
 * move_arm__action__MoveArm_GetResult_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_move_arm
void
move_arm__action__MoveArm_GetResult_Request__Sequence__fini(move_arm__action__MoveArm_GetResult_Request__Sequence * array);

/// Create array of action/MoveArm messages.
/**
 * It allocates the memory for the array and calls
 * move_arm__action__MoveArm_GetResult_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_move_arm
move_arm__action__MoveArm_GetResult_Request__Sequence *
move_arm__action__MoveArm_GetResult_Request__Sequence__create(size_t size);

/// Destroy array of action/MoveArm messages.
/**
 * It calls
 * move_arm__action__MoveArm_GetResult_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_move_arm
void
move_arm__action__MoveArm_GetResult_Request__Sequence__destroy(move_arm__action__MoveArm_GetResult_Request__Sequence * array);

/// Initialize action/MoveArm message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * move_arm__action__MoveArm_GetResult_Response
 * )) before or use
 * move_arm__action__MoveArm_GetResult_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_move_arm
bool
move_arm__action__MoveArm_GetResult_Response__init(move_arm__action__MoveArm_GetResult_Response * msg);

/// Finalize action/MoveArm message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_move_arm
void
move_arm__action__MoveArm_GetResult_Response__fini(move_arm__action__MoveArm_GetResult_Response * msg);

/// Create action/MoveArm message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * move_arm__action__MoveArm_GetResult_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_move_arm
move_arm__action__MoveArm_GetResult_Response *
move_arm__action__MoveArm_GetResult_Response__create();

/// Destroy action/MoveArm message.
/**
 * It calls
 * move_arm__action__MoveArm_GetResult_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_move_arm
void
move_arm__action__MoveArm_GetResult_Response__destroy(move_arm__action__MoveArm_GetResult_Response * msg);


/// Initialize array of action/MoveArm messages.
/**
 * It allocates the memory for the number of elements and calls
 * move_arm__action__MoveArm_GetResult_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_move_arm
bool
move_arm__action__MoveArm_GetResult_Response__Sequence__init(move_arm__action__MoveArm_GetResult_Response__Sequence * array, size_t size);

/// Finalize array of action/MoveArm messages.
/**
 * It calls
 * move_arm__action__MoveArm_GetResult_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_move_arm
void
move_arm__action__MoveArm_GetResult_Response__Sequence__fini(move_arm__action__MoveArm_GetResult_Response__Sequence * array);

/// Create array of action/MoveArm messages.
/**
 * It allocates the memory for the array and calls
 * move_arm__action__MoveArm_GetResult_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_move_arm
move_arm__action__MoveArm_GetResult_Response__Sequence *
move_arm__action__MoveArm_GetResult_Response__Sequence__create(size_t size);

/// Destroy array of action/MoveArm messages.
/**
 * It calls
 * move_arm__action__MoveArm_GetResult_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_move_arm
void
move_arm__action__MoveArm_GetResult_Response__Sequence__destroy(move_arm__action__MoveArm_GetResult_Response__Sequence * array);

/// Initialize action/MoveArm message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * move_arm__action__MoveArm_FeedbackMessage
 * )) before or use
 * move_arm__action__MoveArm_FeedbackMessage__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_move_arm
bool
move_arm__action__MoveArm_FeedbackMessage__init(move_arm__action__MoveArm_FeedbackMessage * msg);

/// Finalize action/MoveArm message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_move_arm
void
move_arm__action__MoveArm_FeedbackMessage__fini(move_arm__action__MoveArm_FeedbackMessage * msg);

/// Create action/MoveArm message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * move_arm__action__MoveArm_FeedbackMessage__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_move_arm
move_arm__action__MoveArm_FeedbackMessage *
move_arm__action__MoveArm_FeedbackMessage__create();

/// Destroy action/MoveArm message.
/**
 * It calls
 * move_arm__action__MoveArm_FeedbackMessage__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_move_arm
void
move_arm__action__MoveArm_FeedbackMessage__destroy(move_arm__action__MoveArm_FeedbackMessage * msg);


/// Initialize array of action/MoveArm messages.
/**
 * It allocates the memory for the number of elements and calls
 * move_arm__action__MoveArm_FeedbackMessage__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_move_arm
bool
move_arm__action__MoveArm_FeedbackMessage__Sequence__init(move_arm__action__MoveArm_FeedbackMessage__Sequence * array, size_t size);

/// Finalize array of action/MoveArm messages.
/**
 * It calls
 * move_arm__action__MoveArm_FeedbackMessage__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_move_arm
void
move_arm__action__MoveArm_FeedbackMessage__Sequence__fini(move_arm__action__MoveArm_FeedbackMessage__Sequence * array);

/// Create array of action/MoveArm messages.
/**
 * It allocates the memory for the array and calls
 * move_arm__action__MoveArm_FeedbackMessage__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_move_arm
move_arm__action__MoveArm_FeedbackMessage__Sequence *
move_arm__action__MoveArm_FeedbackMessage__Sequence__create(size_t size);

/// Destroy array of action/MoveArm messages.
/**
 * It calls
 * move_arm__action__MoveArm_FeedbackMessage__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_move_arm
void
move_arm__action__MoveArm_FeedbackMessage__Sequence__destroy(move_arm__action__MoveArm_FeedbackMessage__Sequence * array);

#ifdef __cplusplus
}
#endif

#endif  // MOVE_ARM__ACTION__DETAIL__MOVE_ARM__FUNCTIONS_H_
