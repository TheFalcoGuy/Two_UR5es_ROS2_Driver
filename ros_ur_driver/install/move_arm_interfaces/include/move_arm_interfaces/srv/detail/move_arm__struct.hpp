// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from move_arm_interfaces:srv/MoveArm.idl
// generated code does not contain a copyright notice

#ifndef MOVE_ARM_INTERFACES__SRV__DETAIL__MOVE_ARM__STRUCT_HPP_
#define MOVE_ARM_INTERFACES__SRV__DETAIL__MOVE_ARM__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


// Include directives for member types
// Member 'pose'
#include "geometry_msgs/msg/detail/pose__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__move_arm_interfaces__srv__MoveArm_Request __attribute__((deprecated))
#else
# define DEPRECATED__move_arm_interfaces__srv__MoveArm_Request __declspec(deprecated)
#endif

namespace move_arm_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct MoveArm_Request_
{
  using Type = MoveArm_Request_<ContainerAllocator>;

  explicit MoveArm_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : pose(_init)
  {
    (void)_init;
  }

  explicit MoveArm_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : pose(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _pose_type =
    geometry_msgs::msg::Pose_<ContainerAllocator>;
  _pose_type pose;

  // setters for named parameter idiom
  Type & set__pose(
    const geometry_msgs::msg::Pose_<ContainerAllocator> & _arg)
  {
    this->pose = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    move_arm_interfaces::srv::MoveArm_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const move_arm_interfaces::srv::MoveArm_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<move_arm_interfaces::srv::MoveArm_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<move_arm_interfaces::srv::MoveArm_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      move_arm_interfaces::srv::MoveArm_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<move_arm_interfaces::srv::MoveArm_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      move_arm_interfaces::srv::MoveArm_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<move_arm_interfaces::srv::MoveArm_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<move_arm_interfaces::srv::MoveArm_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<move_arm_interfaces::srv::MoveArm_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__move_arm_interfaces__srv__MoveArm_Request
    std::shared_ptr<move_arm_interfaces::srv::MoveArm_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__move_arm_interfaces__srv__MoveArm_Request
    std::shared_ptr<move_arm_interfaces::srv::MoveArm_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MoveArm_Request_ & other) const
  {
    if (this->pose != other.pose) {
      return false;
    }
    return true;
  }
  bool operator!=(const MoveArm_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MoveArm_Request_

// alias to use template instance with default allocator
using MoveArm_Request =
  move_arm_interfaces::srv::MoveArm_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace move_arm_interfaces


#ifndef _WIN32
# define DEPRECATED__move_arm_interfaces__srv__MoveArm_Response __attribute__((deprecated))
#else
# define DEPRECATED__move_arm_interfaces__srv__MoveArm_Response __declspec(deprecated)
#endif

namespace move_arm_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct MoveArm_Response_
{
  using Type = MoveArm_Response_<ContainerAllocator>;

  explicit MoveArm_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
    }
  }

  explicit MoveArm_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
    move_arm_interfaces::srv::MoveArm_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const move_arm_interfaces::srv::MoveArm_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<move_arm_interfaces::srv::MoveArm_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<move_arm_interfaces::srv::MoveArm_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      move_arm_interfaces::srv::MoveArm_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<move_arm_interfaces::srv::MoveArm_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      move_arm_interfaces::srv::MoveArm_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<move_arm_interfaces::srv::MoveArm_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<move_arm_interfaces::srv::MoveArm_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<move_arm_interfaces::srv::MoveArm_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__move_arm_interfaces__srv__MoveArm_Response
    std::shared_ptr<move_arm_interfaces::srv::MoveArm_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__move_arm_interfaces__srv__MoveArm_Response
    std::shared_ptr<move_arm_interfaces::srv::MoveArm_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MoveArm_Response_ & other) const
  {
    if (this->success != other.success) {
      return false;
    }
    return true;
  }
  bool operator!=(const MoveArm_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MoveArm_Response_

// alias to use template instance with default allocator
using MoveArm_Response =
  move_arm_interfaces::srv::MoveArm_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace move_arm_interfaces

namespace move_arm_interfaces
{

namespace srv
{

struct MoveArm
{
  using Request = move_arm_interfaces::srv::MoveArm_Request;
  using Response = move_arm_interfaces::srv::MoveArm_Response;
};

}  // namespace srv

}  // namespace move_arm_interfaces

#endif  // MOVE_ARM_INTERFACES__SRV__DETAIL__MOVE_ARM__STRUCT_HPP_
