// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from tku_msgs:srv/CheckSector.idl
// generated code does not contain a copyright notice

#ifndef TKU_MSGS__SRV__DETAIL__CHECK_SECTOR__STRUCT_HPP_
#define TKU_MSGS__SRV__DETAIL__CHECK_SECTOR__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__tku_msgs__srv__CheckSector_Request __attribute__((deprecated))
#else
# define DEPRECATED__tku_msgs__srv__CheckSector_Request __declspec(deprecated)
#endif

namespace tku_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct CheckSector_Request_
{
  using Type = CheckSector_Request_<ContainerAllocator>;

  explicit CheckSector_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->data = 0l;
    }
  }

  explicit CheckSector_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->data = 0l;
    }
  }

  // field types and members
  using _data_type =
    int32_t;
  _data_type data;

  // setters for named parameter idiom
  Type & set__data(
    const int32_t & _arg)
  {
    this->data = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    tku_msgs::srv::CheckSector_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const tku_msgs::srv::CheckSector_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<tku_msgs::srv::CheckSector_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<tku_msgs::srv::CheckSector_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      tku_msgs::srv::CheckSector_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<tku_msgs::srv::CheckSector_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      tku_msgs::srv::CheckSector_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<tku_msgs::srv::CheckSector_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<tku_msgs::srv::CheckSector_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<tku_msgs::srv::CheckSector_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__tku_msgs__srv__CheckSector_Request
    std::shared_ptr<tku_msgs::srv::CheckSector_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__tku_msgs__srv__CheckSector_Request
    std::shared_ptr<tku_msgs::srv::CheckSector_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const CheckSector_Request_ & other) const
  {
    if (this->data != other.data) {
      return false;
    }
    return true;
  }
  bool operator!=(const CheckSector_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct CheckSector_Request_

// alias to use template instance with default allocator
using CheckSector_Request =
  tku_msgs::srv::CheckSector_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace tku_msgs


#ifndef _WIN32
# define DEPRECATED__tku_msgs__srv__CheckSector_Response __attribute__((deprecated))
#else
# define DEPRECATED__tku_msgs__srv__CheckSector_Response __declspec(deprecated)
#endif

namespace tku_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct CheckSector_Response_
{
  using Type = CheckSector_Response_<ContainerAllocator>;

  explicit CheckSector_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->checkflag = false;
    }
  }

  explicit CheckSector_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->checkflag = false;
    }
  }

  // field types and members
  using _checkflag_type =
    bool;
  _checkflag_type checkflag;

  // setters for named parameter idiom
  Type & set__checkflag(
    const bool & _arg)
  {
    this->checkflag = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    tku_msgs::srv::CheckSector_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const tku_msgs::srv::CheckSector_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<tku_msgs::srv::CheckSector_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<tku_msgs::srv::CheckSector_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      tku_msgs::srv::CheckSector_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<tku_msgs::srv::CheckSector_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      tku_msgs::srv::CheckSector_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<tku_msgs::srv::CheckSector_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<tku_msgs::srv::CheckSector_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<tku_msgs::srv::CheckSector_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__tku_msgs__srv__CheckSector_Response
    std::shared_ptr<tku_msgs::srv::CheckSector_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__tku_msgs__srv__CheckSector_Response
    std::shared_ptr<tku_msgs::srv::CheckSector_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const CheckSector_Response_ & other) const
  {
    if (this->checkflag != other.checkflag) {
      return false;
    }
    return true;
  }
  bool operator!=(const CheckSector_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct CheckSector_Response_

// alias to use template instance with default allocator
using CheckSector_Response =
  tku_msgs::srv::CheckSector_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace tku_msgs

namespace tku_msgs
{

namespace srv
{

struct CheckSector
{
  using Request = tku_msgs::srv::CheckSector_Request;
  using Response = tku_msgs::srv::CheckSector_Response;
};

}  // namespace srv

}  // namespace tku_msgs

#endif  // TKU_MSGS__SRV__DETAIL__CHECK_SECTOR__STRUCT_HPP_
