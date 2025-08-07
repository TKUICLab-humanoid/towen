// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from tku_msgs:srv/HSVInfo.idl
// generated code does not contain a copyright notice

#ifndef TKU_MSGS__SRV__DETAIL__HSV_INFO__STRUCT_HPP_
#define TKU_MSGS__SRV__DETAIL__HSV_INFO__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__tku_msgs__srv__HSVInfo_Request __attribute__((deprecated))
#else
# define DEPRECATED__tku_msgs__srv__HSVInfo_Request __declspec(deprecated)
#endif

namespace tku_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct HSVInfo_Request_
{
  using Type = HSVInfo_Request_<ContainerAllocator>;

  explicit HSVInfo_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->colorlabel = "";
    }
  }

  explicit HSVInfo_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : colorlabel(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->colorlabel = "";
    }
  }

  // field types and members
  using _colorlabel_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _colorlabel_type colorlabel;

  // setters for named parameter idiom
  Type & set__colorlabel(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->colorlabel = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    tku_msgs::srv::HSVInfo_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const tku_msgs::srv::HSVInfo_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<tku_msgs::srv::HSVInfo_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<tku_msgs::srv::HSVInfo_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      tku_msgs::srv::HSVInfo_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<tku_msgs::srv::HSVInfo_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      tku_msgs::srv::HSVInfo_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<tku_msgs::srv::HSVInfo_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<tku_msgs::srv::HSVInfo_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<tku_msgs::srv::HSVInfo_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__tku_msgs__srv__HSVInfo_Request
    std::shared_ptr<tku_msgs::srv::HSVInfo_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__tku_msgs__srv__HSVInfo_Request
    std::shared_ptr<tku_msgs::srv::HSVInfo_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const HSVInfo_Request_ & other) const
  {
    if (this->colorlabel != other.colorlabel) {
      return false;
    }
    return true;
  }
  bool operator!=(const HSVInfo_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct HSVInfo_Request_

// alias to use template instance with default allocator
using HSVInfo_Request =
  tku_msgs::srv::HSVInfo_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace tku_msgs


#ifndef _WIN32
# define DEPRECATED__tku_msgs__srv__HSVInfo_Response __attribute__((deprecated))
#else
# define DEPRECATED__tku_msgs__srv__HSVInfo_Response __declspec(deprecated)
#endif

namespace tku_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct HSVInfo_Response_
{
  using Type = HSVInfo_Response_<ContainerAllocator>;

  explicit HSVInfo_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->hmin = 0l;
      this->hmax = 0l;
      this->smin = 0l;
      this->smax = 0l;
      this->vmin = 0l;
      this->vmax = 0l;
    }
  }

  explicit HSVInfo_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->hmin = 0l;
      this->hmax = 0l;
      this->smin = 0l;
      this->smax = 0l;
      this->vmin = 0l;
      this->vmax = 0l;
    }
  }

  // field types and members
  using _hmin_type =
    int32_t;
  _hmin_type hmin;
  using _hmax_type =
    int32_t;
  _hmax_type hmax;
  using _smin_type =
    int32_t;
  _smin_type smin;
  using _smax_type =
    int32_t;
  _smax_type smax;
  using _vmin_type =
    int32_t;
  _vmin_type vmin;
  using _vmax_type =
    int32_t;
  _vmax_type vmax;

  // setters for named parameter idiom
  Type & set__hmin(
    const int32_t & _arg)
  {
    this->hmin = _arg;
    return *this;
  }
  Type & set__hmax(
    const int32_t & _arg)
  {
    this->hmax = _arg;
    return *this;
  }
  Type & set__smin(
    const int32_t & _arg)
  {
    this->smin = _arg;
    return *this;
  }
  Type & set__smax(
    const int32_t & _arg)
  {
    this->smax = _arg;
    return *this;
  }
  Type & set__vmin(
    const int32_t & _arg)
  {
    this->vmin = _arg;
    return *this;
  }
  Type & set__vmax(
    const int32_t & _arg)
  {
    this->vmax = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    tku_msgs::srv::HSVInfo_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const tku_msgs::srv::HSVInfo_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<tku_msgs::srv::HSVInfo_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<tku_msgs::srv::HSVInfo_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      tku_msgs::srv::HSVInfo_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<tku_msgs::srv::HSVInfo_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      tku_msgs::srv::HSVInfo_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<tku_msgs::srv::HSVInfo_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<tku_msgs::srv::HSVInfo_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<tku_msgs::srv::HSVInfo_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__tku_msgs__srv__HSVInfo_Response
    std::shared_ptr<tku_msgs::srv::HSVInfo_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__tku_msgs__srv__HSVInfo_Response
    std::shared_ptr<tku_msgs::srv::HSVInfo_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const HSVInfo_Response_ & other) const
  {
    if (this->hmin != other.hmin) {
      return false;
    }
    if (this->hmax != other.hmax) {
      return false;
    }
    if (this->smin != other.smin) {
      return false;
    }
    if (this->smax != other.smax) {
      return false;
    }
    if (this->vmin != other.vmin) {
      return false;
    }
    if (this->vmax != other.vmax) {
      return false;
    }
    return true;
  }
  bool operator!=(const HSVInfo_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct HSVInfo_Response_

// alias to use template instance with default allocator
using HSVInfo_Response =
  tku_msgs::srv::HSVInfo_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace tku_msgs

namespace tku_msgs
{

namespace srv
{

struct HSVInfo
{
  using Request = tku_msgs::srv::HSVInfo_Request;
  using Response = tku_msgs::srv::HSVInfo_Response;
};

}  // namespace srv

}  // namespace tku_msgs

#endif  // TKU_MSGS__SRV__DETAIL__HSV_INFO__STRUCT_HPP_
