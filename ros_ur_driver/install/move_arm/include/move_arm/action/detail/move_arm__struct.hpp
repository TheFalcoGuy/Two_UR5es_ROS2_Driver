// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from move_arm:action/MoveArm.idl
// generated code does not contain a copyright notice

#ifndef MOVE_ARM__ACTION__DETAIL__MOVE_ARM__STRUCT_HPP_
#define MOVE_ARM__ACTION__DETAIL__MOVE_ARM__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__move_arm__action__MoveArm_Goal __attribute__((deprecated))
#else
# define DEPRECATED__move_arm__action__MoveArm_Goal __declspec(deprecated)
#endif

namespace move_arm
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct MoveArm_Goal_
{
  using Type = MoveArm_Goal_<ContainerAllocator>;

  explicit MoveArm_Goal_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit MoveArm_Goal_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
    (void)_alloc;
  }

  // field types and members
  using _pose_type =
    std::vector<float, typename ContainerAllocator::template rebind<float>::other>;
  _pose_type pose;

  // setters for named parameter idiom
  Type & set__pose(
    const std::vector<float, typename ContainerAllocator::template rebind<float>::other> & _arg)
  {
    this->pose = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    move_arm::action::MoveArm_Goal_<ContainerAllocator> *;
  using ConstRawPtr =
    const move_arm::action::MoveArm_Goal_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<move_arm::action::MoveArm_Goal_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<move_arm::action::MoveArm_Goal_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      move_arm::action::MoveArm_Goal_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<move_arm::action::MoveArm_Goal_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      move_arm::action::MoveArm_Goal_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<move_arm::action::MoveArm_Goal_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<move_arm::action::MoveArm_Goal_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<move_arm::action::MoveArm_Goal_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__move_arm__action__MoveArm_Goal
    std::shared_ptr<move_arm::action::MoveArm_Goal_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__move_arm__action__MoveArm_Goal
    std::shared_ptr<move_arm::action::MoveArm_Goal_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MoveArm_Goal_ & other) const
  {
    if (this->pose != other.pose) {
      return false;
    }
    return true;
  }
  bool operator!=(const MoveArm_Goal_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MoveArm_Goal_

// alias to use template instance with default allocator
using MoveArm_Goal =
  move_arm::action::MoveArm_Goal_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace move_arm


#ifndef _WIN32
# define DEPRECATED__move_arm__action__MoveArm_Result __attribute__((deprecated))
#else
# define DEPRECATED__move_arm__action__MoveArm_Result __declspec(deprecated)
#endif

namespace move_arm
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct MoveArm_Result_
{
  using Type = MoveArm_Result_<ContainerAllocator>;

  explicit MoveArm_Result_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
    }
  }

  explicit MoveArm_Result_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
    }
  }

  // field types and members
  using _success_type =
    bool;
  _success_type success;

  // setters for named parameter idiom
  Type & set__success(
    const bool & _arg)
  {
    this->success = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    move_arm::action::MoveArm_Result_<ContainerAllocator> *;
  using ConstRawPtr =
    const move_arm::action::MoveArm_Result_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<move_arm::action::MoveArm_Result_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<move_arm::action::MoveArm_Result_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      move_arm::action::MoveArm_Result_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<move_arm::action::MoveArm_Result_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      move_arm::action::MoveArm_Result_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<move_arm::action::MoveArm_Result_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<move_arm::action::MoveArm_Result_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<move_arm::action::MoveArm_Result_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__move_arm__action__MoveArm_Result
    std::shared_ptr<move_arm::action::MoveArm_Result_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__move_arm__action__MoveArm_Result
    std::shared_ptr<move_arm::action::MoveArm_Result_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MoveArm_Result_ & other) const
  {
    if (this->success != other.success) {
      return false;
    }
    return true;
  }
  bool operator!=(const MoveArm_Result_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MoveArm_Result_

// alias to use template instance with default allocator
using MoveArm_Result =
  move_arm::action::MoveArm_Result_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace move_arm


#ifndef _WIN32
# define DEPRECATED__move_arm__action__MoveArm_Feedback __attribute__((deprecated))
#else
# define DEPRECATED__move_arm__action__MoveArm_Feedback __declspec(deprecated)
#endif

namespace move_arm
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct MoveArm_Feedback_
{
  using Type = MoveArm_Feedback_<ContainerAllocator>;

  explicit MoveArm_Feedback_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit MoveArm_Feedback_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
    (void)_alloc;
  }

  // field types and members
  using _joint_angles_type =
    std::vector<float, typename ContainerAllocator::template rebind<float>::other>;
  _joint_angles_type joint_angles;

  // setters for named parameter idiom
  Type & set__joint_angles(
    const std::vector<float, typename ContainerAllocator::template rebind<float>::other> & _arg)
  {
    this->joint_angles = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    move_arm::action::MoveArm_Feedback_<ContainerAllocator> *;
  using ConstRawPtr =
    const move_arm::action::MoveArm_Feedback_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<move_arm::action::MoveArm_Feedback_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<move_arm::action::MoveArm_Feedback_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      move_arm::action::MoveArm_Feedback_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<move_arm::action::MoveArm_Feedback_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      move_arm::action::MoveArm_Feedback_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<move_arm::action::MoveArm_Feedback_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<move_arm::action::MoveArm_Feedback_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<move_arm::action::MoveArm_Feedback_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__move_arm__action__MoveArm_Feedback
    std::shared_ptr<move_arm::action::MoveArm_Feedback_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__move_arm__action__MoveArm_Feedback
    std::shared_ptr<move_arm::action::MoveArm_Feedback_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MoveArm_Feedback_ & other) const
  {
    if (this->joint_angles != other.joint_angles) {
      return false;
    }
    return true;
  }
  bool operator!=(const MoveArm_Feedback_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MoveArm_Feedback_

// alias to use template instance with default allocator
using MoveArm_Feedback =
  move_arm::action::MoveArm_Feedback_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace move_arm


// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"
// Member 'goal'
#include "move_arm/action/detail/move_arm__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__move_arm__action__MoveArm_SendGoal_Request __attribute__((deprecated))
#else
# define DEPRECATED__move_arm__action__MoveArm_SendGoal_Request __declspec(deprecated)
#endif

namespace move_arm
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct MoveArm_SendGoal_Request_
{
  using Type = MoveArm_SendGoal_Request_<ContainerAllocator>;

  explicit MoveArm_SendGoal_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init),
    goal(_init)
  {
    (void)_init;
  }

  explicit MoveArm_SendGoal_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_alloc, _init),
    goal(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _goal_id_type =
    unique_identifier_msgs::msg::UUID_<ContainerAllocator>;
  _goal_id_type goal_id;
  using _goal_type =
    move_arm::action::MoveArm_Goal_<ContainerAllocator>;
  _goal_type goal;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }
  Type & set__goal(
    const move_arm::action::MoveArm_Goal_<ContainerAllocator> & _arg)
  {
    this->goal = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    move_arm::action::MoveArm_SendGoal_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const move_arm::action::MoveArm_SendGoal_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<move_arm::action::MoveArm_SendGoal_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<move_arm::action::MoveArm_SendGoal_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      move_arm::action::MoveArm_SendGoal_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<move_arm::action::MoveArm_SendGoal_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      move_arm::action::MoveArm_SendGoal_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<move_arm::action::MoveArm_SendGoal_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<move_arm::action::MoveArm_SendGoal_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<move_arm::action::MoveArm_SendGoal_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__move_arm__action__MoveArm_SendGoal_Request
    std::shared_ptr<move_arm::action::MoveArm_SendGoal_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__move_arm__action__MoveArm_SendGoal_Request
    std::shared_ptr<move_arm::action::MoveArm_SendGoal_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MoveArm_SendGoal_Request_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    if (this->goal != other.goal) {
      return false;
    }
    return true;
  }
  bool operator!=(const MoveArm_SendGoal_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MoveArm_SendGoal_Request_

// alias to use template instance with default allocator
using MoveArm_SendGoal_Request =
  move_arm::action::MoveArm_SendGoal_Request_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace move_arm


// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__move_arm__action__MoveArm_SendGoal_Response __attribute__((deprecated))
#else
# define DEPRECATED__move_arm__action__MoveArm_SendGoal_Response __declspec(deprecated)
#endif

namespace move_arm
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct MoveArm_SendGoal_Response_
{
  using Type = MoveArm_SendGoal_Response_<ContainerAllocator>;

  explicit MoveArm_SendGoal_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->accepted = false;
    }
  }

  explicit MoveArm_SendGoal_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->accepted = false;
    }
  }

  // field types and members
  using _accepted_type =
    bool;
  _accepted_type accepted;
  using _stamp_type =
    builtin_interfaces::msg::Time_<ContainerAllocator>;
  _stamp_type stamp;

  // setters for named parameter idiom
  Type & set__accepted(
    const bool & _arg)
  {
    this->accepted = _arg;
    return *this;
  }
  Type & set__stamp(
    const builtin_interfaces::msg::Time_<ContainerAllocator> & _arg)
  {
    this->stamp = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    move_arm::action::MoveArm_SendGoal_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const move_arm::action::MoveArm_SendGoal_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<move_arm::action::MoveArm_SendGoal_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<move_arm::action::MoveArm_SendGoal_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      move_arm::action::MoveArm_SendGoal_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<move_arm::action::MoveArm_SendGoal_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      move_arm::action::MoveArm_SendGoal_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<move_arm::action::MoveArm_SendGoal_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<move_arm::action::MoveArm_SendGoal_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<move_arm::action::MoveArm_SendGoal_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__move_arm__action__MoveArm_SendGoal_Response
    std::shared_ptr<move_arm::action::MoveArm_SendGoal_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__move_arm__action__MoveArm_SendGoal_Response
    std::shared_ptr<move_arm::action::MoveArm_SendGoal_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MoveArm_SendGoal_Response_ & other) const
  {
    if (this->accepted != other.accepted) {
      return false;
    }
    if (this->stamp != other.stamp) {
      return false;
    }
    return true;
  }
  bool operator!=(const MoveArm_SendGoal_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MoveArm_SendGoal_Response_

// alias to use template instance with default allocator
using MoveArm_SendGoal_Response =
  move_arm::action::MoveArm_SendGoal_Response_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace move_arm

namespace move_arm
{

namespace action
{

struct MoveArm_SendGoal
{
  using Request = move_arm::action::MoveArm_SendGoal_Request;
  using Response = move_arm::action::MoveArm_SendGoal_Response;
};

}  // namespace action

}  // namespace move_arm


// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__move_arm__action__MoveArm_GetResult_Request __attribute__((deprecated))
#else
# define DEPRECATED__move_arm__action__MoveArm_GetResult_Request __declspec(deprecated)
#endif

namespace move_arm
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct MoveArm_GetResult_Request_
{
  using Type = MoveArm_GetResult_Request_<ContainerAllocator>;

  explicit MoveArm_GetResult_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init)
  {
    (void)_init;
  }

  explicit MoveArm_GetResult_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _goal_id_type =
    unique_identifier_msgs::msg::UUID_<ContainerAllocator>;
  _goal_id_type goal_id;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    move_arm::action::MoveArm_GetResult_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const move_arm::action::MoveArm_GetResult_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<move_arm::action::MoveArm_GetResult_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<move_arm::action::MoveArm_GetResult_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      move_arm::action::MoveArm_GetResult_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<move_arm::action::MoveArm_GetResult_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      move_arm::action::MoveArm_GetResult_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<move_arm::action::MoveArm_GetResult_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<move_arm::action::MoveArm_GetResult_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<move_arm::action::MoveArm_GetResult_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__move_arm__action__MoveArm_GetResult_Request
    std::shared_ptr<move_arm::action::MoveArm_GetResult_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__move_arm__action__MoveArm_GetResult_Request
    std::shared_ptr<move_arm::action::MoveArm_GetResult_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MoveArm_GetResult_Request_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    return true;
  }
  bool operator!=(const MoveArm_GetResult_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MoveArm_GetResult_Request_

// alias to use template instance with default allocator
using MoveArm_GetResult_Request =
  move_arm::action::MoveArm_GetResult_Request_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace move_arm


// Include directives for member types
// Member 'result'
// already included above
// #include "move_arm/action/detail/move_arm__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__move_arm__action__MoveArm_GetResult_Response __attribute__((deprecated))
#else
# define DEPRECATED__move_arm__action__MoveArm_GetResult_Response __declspec(deprecated)
#endif

namespace move_arm
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct MoveArm_GetResult_Response_
{
  using Type = MoveArm_GetResult_Response_<ContainerAllocator>;

  explicit MoveArm_GetResult_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : result(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->status = 0;
    }
  }

  explicit MoveArm_GetResult_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : result(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->status = 0;
    }
  }

  // field types and members
  using _status_type =
    int8_t;
  _status_type status;
  using _result_type =
    move_arm::action::MoveArm_Result_<ContainerAllocator>;
  _result_type result;

  // setters for named parameter idiom
  Type & set__status(
    const int8_t & _arg)
  {
    this->status = _arg;
    return *this;
  }
  Type & set__result(
    const move_arm::action::MoveArm_Result_<ContainerAllocator> & _arg)
  {
    this->result = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    move_arm::action::MoveArm_GetResult_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const move_arm::action::MoveArm_GetResult_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<move_arm::action::MoveArm_GetResult_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<move_arm::action::MoveArm_GetResult_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      move_arm::action::MoveArm_GetResult_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<move_arm::action::MoveArm_GetResult_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      move_arm::action::MoveArm_GetResult_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<move_arm::action::MoveArm_GetResult_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<move_arm::action::MoveArm_GetResult_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<move_arm::action::MoveArm_GetResult_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__move_arm__action__MoveArm_GetResult_Response
    std::shared_ptr<move_arm::action::MoveArm_GetResult_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__move_arm__action__MoveArm_GetResult_Response
    std::shared_ptr<move_arm::action::MoveArm_GetResult_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MoveArm_GetResult_Response_ & other) const
  {
    if (this->status != other.status) {
      return false;
    }
    if (this->result != other.result) {
      return false;
    }
    return true;
  }
  bool operator!=(const MoveArm_GetResult_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MoveArm_GetResult_Response_

// alias to use template instance with default allocator
using MoveArm_GetResult_Response =
  move_arm::action::MoveArm_GetResult_Response_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace move_arm

namespace move_arm
{

namespace action
{

struct MoveArm_GetResult
{
  using Request = move_arm::action::MoveArm_GetResult_Request;
  using Response = move_arm::action::MoveArm_GetResult_Response;
};

}  // namespace action

}  // namespace move_arm


// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"
// Member 'feedback'
// already included above
// #include "move_arm/action/detail/move_arm__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__move_arm__action__MoveArm_FeedbackMessage __attribute__((deprecated))
#else
# define DEPRECATED__move_arm__action__MoveArm_FeedbackMessage __declspec(deprecated)
#endif

namespace move_arm
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct MoveArm_FeedbackMessage_
{
  using Type = MoveArm_FeedbackMessage_<ContainerAllocator>;

  explicit MoveArm_FeedbackMessage_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init),
    feedback(_init)
  {
    (void)_init;
  }

  explicit MoveArm_FeedbackMessage_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_alloc, _init),
    feedback(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _goal_id_type =
    unique_identifier_msgs::msg::UUID_<ContainerAllocator>;
  _goal_id_type goal_id;
  using _feedback_type =
    move_arm::action::MoveArm_Feedback_<ContainerAllocator>;
  _feedback_type feedback;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }
  Type & set__feedback(
    const move_arm::action::MoveArm_Feedback_<ContainerAllocator> & _arg)
  {
    this->feedback = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    move_arm::action::MoveArm_FeedbackMessage_<ContainerAllocator> *;
  using ConstRawPtr =
    const move_arm::action::MoveArm_FeedbackMessage_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<move_arm::action::MoveArm_FeedbackMessage_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<move_arm::action::MoveArm_FeedbackMessage_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      move_arm::action::MoveArm_FeedbackMessage_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<move_arm::action::MoveArm_FeedbackMessage_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      move_arm::action::MoveArm_FeedbackMessage_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<move_arm::action::MoveArm_FeedbackMessage_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<move_arm::action::MoveArm_FeedbackMessage_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<move_arm::action::MoveArm_FeedbackMessage_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__move_arm__action__MoveArm_FeedbackMessage
    std::shared_ptr<move_arm::action::MoveArm_FeedbackMessage_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__move_arm__action__MoveArm_FeedbackMessage
    std::shared_ptr<move_arm::action::MoveArm_FeedbackMessage_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MoveArm_FeedbackMessage_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    if (this->feedback != other.feedback) {
      return false;
    }
    return true;
  }
  bool operator!=(const MoveArm_FeedbackMessage_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MoveArm_FeedbackMessage_

// alias to use template instance with default allocator
using MoveArm_FeedbackMessage =
  move_arm::action::MoveArm_FeedbackMessage_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace move_arm

#include "action_msgs/srv/cancel_goal.hpp"
#include "action_msgs/msg/goal_info.hpp"
#include "action_msgs/msg/goal_status_array.hpp"

namespace move_arm
{

namespace action
{

struct MoveArm
{
  /// The goal message defined in the action definition.
  using Goal = move_arm::action::MoveArm_Goal;
  /// The result message defined in the action definition.
  using Result = move_arm::action::MoveArm_Result;
  /// The feedback message defined in the action definition.
  using Feedback = move_arm::action::MoveArm_Feedback;

  struct Impl
  {
    /// The send_goal service using a wrapped version of the goal message as a request.
    using SendGoalService = move_arm::action::MoveArm_SendGoal;
    /// The get_result service using a wrapped version of the result message as a response.
    using GetResultService = move_arm::action::MoveArm_GetResult;
    /// The feedback message with generic fields which wraps the feedback message.
    using FeedbackMessage = move_arm::action::MoveArm_FeedbackMessage;

    /// The generic service to cancel a goal.
    using CancelGoalService = action_msgs::srv::CancelGoal;
    /// The generic message for the status of a goal.
    using GoalStatusMessage = action_msgs::msg::GoalStatusArray;
  };
};

typedef struct MoveArm MoveArm;

}  // namespace action

}  // namespace move_arm

#endif  // MOVE_ARM__ACTION__DETAIL__MOVE_ARM__STRUCT_HPP_
