// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from tku_msgs:srv/BuildModel.idl
// generated code does not contain a copyright notice

#ifndef TKU_MSGS__SRV__DETAIL__BUILD_MODEL__STRUCT_HPP_
#define TKU_MSGS__SRV__DETAIL__BUILD_MODEL__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__tku_msgs__srv__BuildModel_Request __attribute__((deprecated))
#else
# define DEPRECATED__tku_msgs__srv__BuildModel_Request __declspec(deprecated)
#endif

namespace tku_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct BuildModel_Request_
{
  using Type = BuildModel_Request_<ContainerAllocator>;

  explicit BuildModel_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->build = false;
    }
  }

  explicit BuildModel_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->build = false;
    }
  }

  // field types and members
  using _build_type =
    bool;
  _build_type build;

  // setters for named parameter idiom
  Type & set__build(
    const bool & _arg)
  {
    this->build = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    tku_msgs::srv::BuildModel_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const tku_msgs::srv::BuildModel_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<tku_msgs::srv::BuildModel_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<tku_msgs::srv::BuildModel_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      tku_msgs::srv::BuildModel_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<tku_msgs::srv::BuildModel_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      tku_msgs::srv::BuildModel_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<tku_msgs::srv::BuildModel_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<tku_msgs::srv::BuildModel_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<tku_msgs::srv::BuildModel_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__tku_msgs__srv__BuildModel_Request
    std::shared_ptr<tku_msgs::srv::BuildModel_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__tku_msgs__srv__BuildModel_Request
    std::shared_ptr<tku_msgs::srv::BuildModel_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const BuildModel_Request_ & other) const
  {
    if (this->build != other.build) {
      return false;
    }
    return true;
  }
  bool operator!=(const BuildModel_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct BuildModel_Request_

// alias to use template instance with default allocator
using BuildModel_Request =
  tku_msgs::srv::BuildModel_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace tku_msgs


#ifndef _WIN32
# define DEPRECATED__tku_msgs__srv__BuildModel_Response __attribute__((deprecated))
#else
# define DEPRECATED__tku_msgs__srv__BuildModel_Response __declspec(deprecated)
#endif

namespace tku_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct BuildModel_Response_
{
  using Type = BuildModel_Response_<ContainerAllocator>;

  explicit BuildModel_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->already = false;
    }
  }

  explicit BuildModel_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->already = false;
    }
  }

  // field types and members
  using _already_type =
    bool;
  _already_type already;

  // setters for named parameter idiom
  Type & set__already(
    const bool & _arg)
  {
    this->already = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    tku_msgs::srv::BuildModel_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const tku_msgs::srv::BuildModel_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<tku_msgs::srv::BuildModel_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<tku_msgs::srv::BuildModel_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      tku_msgs::srv::BuildModel_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<tku_msgs::srv::BuildModel_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      tku_msgs::srv::BuildModel_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<tku_msgs::srv::BuildModel_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<tku_msgs::srv::BuildModel_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<tku_msgs::srv::BuildModel_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__tku_msgs__srv__BuildModel_Response
    std::shared_ptr<tku_msgs::srv::BuildModel_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__tku_msgs__srv__BuildModel_Response
    std::shared_ptr<tku_msgs::srv::BuildModel_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const BuildModel_Response_ & other) const
  {
    if (this->already != other.already) {
      return false;
    }
    return true;
  }
  bool operator!=(const BuildModel_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct BuildModel_Response_

// alias to use template instance with default allocator
using BuildModel_Response =
  tku_msgs::srv::BuildModel_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace tku_msgs

namespace tku_msgs
{

namespace srv
{

struct BuildModel
{
  using Request = tku_msgs::srv::BuildModel_Request;
  using Response = tku_msgs::srv::BuildModel_Response;
};

}  // namespace srv

}  // namespace tku_msgs

#endif  // TKU_MSGS__SRV__DETAIL__BUILD_MODEL__STRUCT_HPP_
