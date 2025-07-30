// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from webrtc_ros_msgs:msg/IceServer.idl
// generated code does not contain a copyright notice

#ifndef WEBRTC_ROS_MSGS__MSG__DETAIL__ICE_SERVER__STRUCT_HPP_
#define WEBRTC_ROS_MSGS__MSG__DETAIL__ICE_SERVER__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__webrtc_ros_msgs__msg__IceServer __attribute__((deprecated))
#else
# define DEPRECATED__webrtc_ros_msgs__msg__IceServer __declspec(deprecated)
#endif

namespace webrtc_ros_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct IceServer_
{
  using Type = IceServer_<ContainerAllocator>;

  explicit IceServer_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->uri = "";
      this->username = "";
      this->password = "";
    }
  }

  explicit IceServer_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : uri(_alloc),
    username(_alloc),
    password(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->uri = "";
      this->username = "";
      this->password = "";
    }
  }

  // field types and members
  using _uri_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _uri_type uri;
  using _username_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _username_type username;
  using _password_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _password_type password;

  // setters for named parameter idiom
  Type & set__uri(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->uri = _arg;
    return *this;
  }
  Type & set__username(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->username = _arg;
    return *this;
  }
  Type & set__password(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->password = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    webrtc_ros_msgs::msg::IceServer_<ContainerAllocator> *;
  using ConstRawPtr =
    const webrtc_ros_msgs::msg::IceServer_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<webrtc_ros_msgs::msg::IceServer_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<webrtc_ros_msgs::msg::IceServer_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      webrtc_ros_msgs::msg::IceServer_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<webrtc_ros_msgs::msg::IceServer_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      webrtc_ros_msgs::msg::IceServer_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<webrtc_ros_msgs::msg::IceServer_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<webrtc_ros_msgs::msg::IceServer_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<webrtc_ros_msgs::msg::IceServer_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__webrtc_ros_msgs__msg__IceServer
    std::shared_ptr<webrtc_ros_msgs::msg::IceServer_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__webrtc_ros_msgs__msg__IceServer
    std::shared_ptr<webrtc_ros_msgs::msg::IceServer_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const IceServer_ & other) const
  {
    if (this->uri != other.uri) {
      return false;
    }
    if (this->username != other.username) {
      return false;
    }
    if (this->password != other.password) {
      return false;
    }
    return true;
  }
  bool operator!=(const IceServer_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct IceServer_

// alias to use template instance with default allocator
using IceServer =
  webrtc_ros_msgs::msg::IceServer_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace webrtc_ros_msgs

#endif  // WEBRTC_ROS_MSGS__MSG__DETAIL__ICE_SERVER__STRUCT_HPP_
