// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from tku_msgs:srv/CameraInfo.idl
// generated code does not contain a copyright notice

#ifndef TKU_MSGS__SRV__DETAIL__CAMERA_INFO__STRUCT_HPP_
#define TKU_MSGS__SRV__DETAIL__CAMERA_INFO__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__tku_msgs__srv__CameraInfo_Request __attribute__((deprecated))
#else
# define DEPRECATED__tku_msgs__srv__CameraInfo_Request __declspec(deprecated)
#endif

namespace tku_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct CameraInfo_Request_
{
  using Type = CameraInfo_Request_<ContainerAllocator>;

  explicit CameraInfo_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->load = false;
    }
  }

  explicit CameraInfo_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->load = false;
    }
  }

  // field types and members
  using _load_type =
    bool;
  _load_type load;

  // setters for named parameter idiom
  Type & set__load(
    const bool & _arg)
  {
    this->load = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    tku_msgs::srv::CameraInfo_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const tku_msgs::srv::CameraInfo_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<tku_msgs::srv::CameraInfo_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<tku_msgs::srv::CameraInfo_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      tku_msgs::srv::CameraInfo_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<tku_msgs::srv::CameraInfo_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      tku_msgs::srv::CameraInfo_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<tku_msgs::srv::CameraInfo_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<tku_msgs::srv::CameraInfo_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<tku_msgs::srv::CameraInfo_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__tku_msgs__srv__CameraInfo_Request
    std::shared_ptr<tku_msgs::srv::CameraInfo_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__tku_msgs__srv__CameraInfo_Request
    std::shared_ptr<tku_msgs::srv::CameraInfo_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const CameraInfo_Request_ & other) const
  {
    if (this->load != other.load) {
      return false;
    }
    return true;
  }
  bool operator!=(const CameraInfo_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct CameraInfo_Request_

// alias to use template instance with default allocator
using CameraInfo_Request =
  tku_msgs::srv::CameraInfo_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace tku_msgs


#ifndef _WIN32
# define DEPRECATED__tku_msgs__srv__CameraInfo_Response __attribute__((deprecated))
#else
# define DEPRECATED__tku_msgs__srv__CameraInfo_Response __declspec(deprecated)
#endif

namespace tku_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct CameraInfo_Response_
{
  using Type = CameraInfo_Response_<ContainerAllocator>;

  explicit CameraInfo_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->brightness = 0l;
      this->contrast = 0l;
      this->saturation = 0l;
      this->white_balance = 0l;
      this->auto_white_balance = false;
      this->auto_exposure = false;
      this->auto_backlight_compensation = false;
    }
  }

  explicit CameraInfo_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->brightness = 0l;
      this->contrast = 0l;
      this->saturation = 0l;
      this->white_balance = 0l;
      this->auto_white_balance = false;
      this->auto_exposure = false;
      this->auto_backlight_compensation = false;
    }
  }

  // field types and members
  using _brightness_type =
    int32_t;
  _brightness_type brightness;
  using _contrast_type =
    int32_t;
  _contrast_type contrast;
  using _saturation_type =
    int32_t;
  _saturation_type saturation;
  using _white_balance_type =
    int32_t;
  _white_balance_type white_balance;
  using _auto_white_balance_type =
    bool;
  _auto_white_balance_type auto_white_balance;
  using _auto_exposure_type =
    bool;
  _auto_exposure_type auto_exposure;
  using _auto_backlight_compensation_type =
    bool;
  _auto_backlight_compensation_type auto_backlight_compensation;

  // setters for named parameter idiom
  Type & set__brightness(
    const int32_t & _arg)
  {
    this->brightness = _arg;
    return *this;
  }
  Type & set__contrast(
    const int32_t & _arg)
  {
    this->contrast = _arg;
    return *this;
  }
  Type & set__saturation(
    const int32_t & _arg)
  {
    this->saturation = _arg;
    return *this;
  }
  Type & set__white_balance(
    const int32_t & _arg)
  {
    this->white_balance = _arg;
    return *this;
  }
  Type & set__auto_white_balance(
    const bool & _arg)
  {
    this->auto_white_balance = _arg;
    return *this;
  }
  Type & set__auto_exposure(
    const bool & _arg)
  {
    this->auto_exposure = _arg;
    return *this;
  }
  Type & set__auto_backlight_compensation(
    const bool & _arg)
  {
    this->auto_backlight_compensation = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    tku_msgs::srv::CameraInfo_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const tku_msgs::srv::CameraInfo_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<tku_msgs::srv::CameraInfo_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<tku_msgs::srv::CameraInfo_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      tku_msgs::srv::CameraInfo_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<tku_msgs::srv::CameraInfo_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      tku_msgs::srv::CameraInfo_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<tku_msgs::srv::CameraInfo_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<tku_msgs::srv::CameraInfo_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<tku_msgs::srv::CameraInfo_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__tku_msgs__srv__CameraInfo_Response
    std::shared_ptr<tku_msgs::srv::CameraInfo_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__tku_msgs__srv__CameraInfo_Response
    std::shared_ptr<tku_msgs::srv::CameraInfo_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const CameraInfo_Response_ & other) const
  {
    if (this->brightness != other.brightness) {
      return false;
    }
    if (this->contrast != other.contrast) {
      return false;
    }
    if (this->saturation != other.saturation) {
      return false;
    }
    if (this->white_balance != other.white_balance) {
      return false;
    }
    if (this->auto_white_balance != other.auto_white_balance) {
      return false;
    }
    if (this->auto_exposure != other.auto_exposure) {
      return false;
    }
    if (this->auto_backlight_compensation != other.auto_backlight_compensation) {
      return false;
    }
    return true;
  }
  bool operator!=(const CameraInfo_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct CameraInfo_Response_

// alias to use template instance with default allocator
using CameraInfo_Response =
  tku_msgs::srv::CameraInfo_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace tku_msgs

namespace tku_msgs
{

namespace srv
{

struct CameraInfo
{
  using Request = tku_msgs::srv::CameraInfo_Request;
  using Response = tku_msgs::srv::CameraInfo_Response;
};

}  // namespace srv

}  // namespace tku_msgs

#endif  // TKU_MSGS__SRV__DETAIL__CAMERA_INFO__STRUCT_HPP_
