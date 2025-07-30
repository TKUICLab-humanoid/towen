// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from tku_msgs:srv/ReadMotion.idl
// generated code does not contain a copyright notice

#ifndef TKU_MSGS__SRV__DETAIL__READ_MOTION__TRAITS_HPP_
#define TKU_MSGS__SRV__DETAIL__READ_MOTION__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "tku_msgs/srv/detail/read_motion__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace tku_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const ReadMotion_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: read
  {
    out << "read: ";
    rosidl_generator_traits::value_to_yaml(msg.read, out);
    out << ", ";
  }

  // member: name
  {
    out << "name: ";
    rosidl_generator_traits::value_to_yaml(msg.name, out);
    out << ", ";
  }

  // member: readstate
  {
    out << "readstate: ";
    rosidl_generator_traits::value_to_yaml(msg.readstate, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ReadMotion_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: read
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "read: ";
    rosidl_generator_traits::value_to_yaml(msg.read, out);
    out << "\n";
  }

  // member: name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "name: ";
    rosidl_generator_traits::value_to_yaml(msg.name, out);
    out << "\n";
  }

  // member: readstate
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "readstate: ";
    rosidl_generator_traits::value_to_yaml(msg.readstate, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ReadMotion_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace tku_msgs

namespace rosidl_generator_traits
{

[[deprecated("use tku_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const tku_msgs::srv::ReadMotion_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  tku_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use tku_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const tku_msgs::srv::ReadMotion_Request & msg)
{
  return tku_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<tku_msgs::srv::ReadMotion_Request>()
{
  return "tku_msgs::srv::ReadMotion_Request";
}

template<>
inline const char * name<tku_msgs::srv::ReadMotion_Request>()
{
  return "tku_msgs/srv/ReadMotion_Request";
}

template<>
struct has_fixed_size<tku_msgs::srv::ReadMotion_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<tku_msgs::srv::ReadMotion_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<tku_msgs::srv::ReadMotion_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace tku_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const ReadMotion_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: readcheck
  {
    out << "readcheck: ";
    rosidl_generator_traits::value_to_yaml(msg.readcheck, out);
    out << ", ";
  }

  // member: vectorcnt
  {
    out << "vectorcnt: ";
    rosidl_generator_traits::value_to_yaml(msg.vectorcnt, out);
    out << ", ";
  }

  // member: motionstate
  {
    if (msg.motionstate.size() == 0) {
      out << "motionstate: []";
    } else {
      out << "motionstate: [";
      size_t pending_items = msg.motionstate.size();
      for (auto item : msg.motionstate) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: id
  {
    if (msg.id.size() == 0) {
      out << "id: []";
    } else {
      out << "id: [";
      size_t pending_items = msg.id.size();
      for (auto item : msg.id) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: motionlist
  {
    if (msg.motionlist.size() == 0) {
      out << "motionlist: []";
    } else {
      out << "motionlist: [";
      size_t pending_items = msg.motionlist.size();
      for (auto item : msg.motionlist) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: relativedata
  {
    if (msg.relativedata.size() == 0) {
      out << "relativedata: []";
    } else {
      out << "relativedata: [";
      size_t pending_items = msg.relativedata.size();
      for (auto item : msg.relativedata) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: absolutedata
  {
    if (msg.absolutedata.size() == 0) {
      out << "absolutedata: []";
    } else {
      out << "absolutedata: [";
      size_t pending_items = msg.absolutedata.size();
      for (auto item : msg.absolutedata) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ReadMotion_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: readcheck
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "readcheck: ";
    rosidl_generator_traits::value_to_yaml(msg.readcheck, out);
    out << "\n";
  }

  // member: vectorcnt
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "vectorcnt: ";
    rosidl_generator_traits::value_to_yaml(msg.vectorcnt, out);
    out << "\n";
  }

  // member: motionstate
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.motionstate.size() == 0) {
      out << "motionstate: []\n";
    } else {
      out << "motionstate:\n";
      for (auto item : msg.motionstate) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.id.size() == 0) {
      out << "id: []\n";
    } else {
      out << "id:\n";
      for (auto item : msg.id) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: motionlist
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.motionlist.size() == 0) {
      out << "motionlist: []\n";
    } else {
      out << "motionlist:\n";
      for (auto item : msg.motionlist) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: relativedata
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.relativedata.size() == 0) {
      out << "relativedata: []\n";
    } else {
      out << "relativedata:\n";
      for (auto item : msg.relativedata) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: absolutedata
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.absolutedata.size() == 0) {
      out << "absolutedata: []\n";
    } else {
      out << "absolutedata:\n";
      for (auto item : msg.absolutedata) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ReadMotion_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace tku_msgs

namespace rosidl_generator_traits
{

[[deprecated("use tku_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const tku_msgs::srv::ReadMotion_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  tku_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use tku_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const tku_msgs::srv::ReadMotion_Response & msg)
{
  return tku_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<tku_msgs::srv::ReadMotion_Response>()
{
  return "tku_msgs::srv::ReadMotion_Response";
}

template<>
inline const char * name<tku_msgs::srv::ReadMotion_Response>()
{
  return "tku_msgs/srv/ReadMotion_Response";
}

template<>
struct has_fixed_size<tku_msgs::srv::ReadMotion_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<tku_msgs::srv::ReadMotion_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<tku_msgs::srv::ReadMotion_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<tku_msgs::srv::ReadMotion>()
{
  return "tku_msgs::srv::ReadMotion";
}

template<>
inline const char * name<tku_msgs::srv::ReadMotion>()
{
  return "tku_msgs/srv/ReadMotion";
}

template<>
struct has_fixed_size<tku_msgs::srv::ReadMotion>
  : std::integral_constant<
    bool,
    has_fixed_size<tku_msgs::srv::ReadMotion_Request>::value &&
    has_fixed_size<tku_msgs::srv::ReadMotion_Response>::value
  >
{
};

template<>
struct has_bounded_size<tku_msgs::srv::ReadMotion>
  : std::integral_constant<
    bool,
    has_bounded_size<tku_msgs::srv::ReadMotion_Request>::value &&
    has_bounded_size<tku_msgs::srv::ReadMotion_Response>::value
  >
{
};

template<>
struct is_service<tku_msgs::srv::ReadMotion>
  : std::true_type
{
};

template<>
struct is_service_request<tku_msgs::srv::ReadMotion_Request>
  : std::true_type
{
};

template<>
struct is_service_response<tku_msgs::srv::ReadMotion_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // TKU_MSGS__SRV__DETAIL__READ_MOTION__TRAITS_HPP_
