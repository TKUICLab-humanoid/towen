// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from tku_msgs:srv/ReadMotion.idl
// generated code does not contain a copyright notice

#ifndef TKU_MSGS__SRV__DETAIL__READ_MOTION__STRUCT_HPP_
#define TKU_MSGS__SRV__DETAIL__READ_MOTION__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__tku_msgs__srv__ReadMotion_Request __attribute__((deprecated))
#else
# define DEPRECATED__tku_msgs__srv__ReadMotion_Request __declspec(deprecated)
#endif

namespace tku_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct ReadMotion_Request_
{
  using Type = ReadMotion_Request_<ContainerAllocator>;

  explicit ReadMotion_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->read = false;
      this->name = "";
      this->readstate = 0l;
    }
  }

  explicit ReadMotion_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : name(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->read = false;
      this->name = "";
      this->readstate = 0l;
    }
  }

  // field types and members
  using _read_type =
    bool;
  _read_type read;
  using _name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _name_type name;
  using _readstate_type =
    int32_t;
  _readstate_type readstate;

  // setters for named parameter idiom
  Type & set__read(
    const bool & _arg)
  {
    this->read = _arg;
    return *this;
  }
  Type & set__name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->name = _arg;
    return *this;
  }
  Type & set__readstate(
    const int32_t & _arg)
  {
    this->readstate = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    tku_msgs::srv::ReadMotion_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const tku_msgs::srv::ReadMotion_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<tku_msgs::srv::ReadMotion_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<tku_msgs::srv::ReadMotion_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      tku_msgs::srv::ReadMotion_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<tku_msgs::srv::ReadMotion_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      tku_msgs::srv::ReadMotion_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<tku_msgs::srv::ReadMotion_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<tku_msgs::srv::ReadMotion_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<tku_msgs::srv::ReadMotion_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__tku_msgs__srv__ReadMotion_Request
    std::shared_ptr<tku_msgs::srv::ReadMotion_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__tku_msgs__srv__ReadMotion_Request
    std::shared_ptr<tku_msgs::srv::ReadMotion_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ReadMotion_Request_ & other) const
  {
    if (this->read != other.read) {
      return false;
    }
    if (this->name != other.name) {
      return false;
    }
    if (this->readstate != other.readstate) {
      return false;
    }
    return true;
  }
  bool operator!=(const ReadMotion_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ReadMotion_Request_

// alias to use template instance with default allocator
using ReadMotion_Request =
  tku_msgs::srv::ReadMotion_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace tku_msgs


#ifndef _WIN32
# define DEPRECATED__tku_msgs__srv__ReadMotion_Response __attribute__((deprecated))
#else
# define DEPRECATED__tku_msgs__srv__ReadMotion_Response __declspec(deprecated)
#endif

namespace tku_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct ReadMotion_Response_
{
  using Type = ReadMotion_Response_<ContainerAllocator>;

  explicit ReadMotion_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->readcheck = false;
      this->vectorcnt = 0l;
    }
  }

  explicit ReadMotion_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->readcheck = false;
      this->vectorcnt = 0l;
    }
  }

  // field types and members
  using _readcheck_type =
    bool;
  _readcheck_type readcheck;
  using _vectorcnt_type =
    int32_t;
  _vectorcnt_type vectorcnt;
  using _motionstate_type =
    std::vector<int32_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<int32_t>>;
  _motionstate_type motionstate;
  using _id_type =
    std::vector<int32_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<int32_t>>;
  _id_type id;
  using _motionlist_type =
    std::vector<int32_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<int32_t>>;
  _motionlist_type motionlist;
  using _relativedata_type =
    std::vector<int32_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<int32_t>>;
  _relativedata_type relativedata;
  using _absolutedata_type =
    std::vector<int32_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<int32_t>>;
  _absolutedata_type absolutedata;

  // setters for named parameter idiom
  Type & set__readcheck(
    const bool & _arg)
  {
    this->readcheck = _arg;
    return *this;
  }
  Type & set__vectorcnt(
    const int32_t & _arg)
  {
    this->vectorcnt = _arg;
    return *this;
  }
  Type & set__motionstate(
    const std::vector<int32_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<int32_t>> & _arg)
  {
    this->motionstate = _arg;
    return *this;
  }
  Type & set__id(
    const std::vector<int32_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<int32_t>> & _arg)
  {
    this->id = _arg;
    return *this;
  }
  Type & set__motionlist(
    const std::vector<int32_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<int32_t>> & _arg)
  {
    this->motionlist = _arg;
    return *this;
  }
  Type & set__relativedata(
    const std::vector<int32_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<int32_t>> & _arg)
  {
    this->relativedata = _arg;
    return *this;
  }
  Type & set__absolutedata(
    const std::vector<int32_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<int32_t>> & _arg)
  {
    this->absolutedata = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    tku_msgs::srv::ReadMotion_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const tku_msgs::srv::ReadMotion_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<tku_msgs::srv::ReadMotion_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<tku_msgs::srv::ReadMotion_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      tku_msgs::srv::ReadMotion_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<tku_msgs::srv::ReadMotion_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      tku_msgs::srv::ReadMotion_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<tku_msgs::srv::ReadMotion_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<tku_msgs::srv::ReadMotion_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<tku_msgs::srv::ReadMotion_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__tku_msgs__srv__ReadMotion_Response
    std::shared_ptr<tku_msgs::srv::ReadMotion_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__tku_msgs__srv__ReadMotion_Response
    std::shared_ptr<tku_msgs::srv::ReadMotion_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ReadMotion_Response_ & other) const
  {
    if (this->readcheck != other.readcheck) {
      return false;
    }
    if (this->vectorcnt != other.vectorcnt) {
      return false;
    }
    if (this->motionstate != other.motionstate) {
      return false;
    }
    if (this->id != other.id) {
      return false;
    }
    if (this->motionlist != other.motionlist) {
      return false;
    }
    if (this->relativedata != other.relativedata) {
      return false;
    }
    if (this->absolutedata != other.absolutedata) {
      return false;
    }
    return true;
  }
  bool operator!=(const ReadMotion_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ReadMotion_Response_

// alias to use template instance with default allocator
using ReadMotion_Response =
  tku_msgs::srv::ReadMotion_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace tku_msgs

namespace tku_msgs
{

namespace srv
{

struct ReadMotion
{
  using Request = tku_msgs::srv::ReadMotion_Request;
  using Response = tku_msgs::srv::ReadMotion_Response;
};

}  // namespace srv

}  // namespace tku_msgs

#endif  // TKU_MSGS__SRV__DETAIL__READ_MOTION__STRUCT_HPP_
