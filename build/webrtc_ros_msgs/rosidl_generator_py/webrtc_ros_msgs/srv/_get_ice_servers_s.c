// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from webrtc_ros_msgs:srv/GetIceServers.idl
// generated code does not contain a copyright notice
#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
#include <Python.h>
#include <stdbool.h>
#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-function"
#endif
#include "numpy/ndarrayobject.h"
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif
#include "rosidl_runtime_c/visibility_control.h"
#include "webrtc_ros_msgs/srv/detail/get_ice_servers__struct.h"
#include "webrtc_ros_msgs/srv/detail/get_ice_servers__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool webrtc_ros_msgs__srv__get_ice_servers__request__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[59];
    {
      char * class_name = NULL;
      char * module_name = NULL;
      {
        PyObject * class_attr = PyObject_GetAttrString(_pymsg, "__class__");
        if (class_attr) {
          PyObject * name_attr = PyObject_GetAttrString(class_attr, "__name__");
          if (name_attr) {
            class_name = (char *)PyUnicode_1BYTE_DATA(name_attr);
            Py_DECREF(name_attr);
          }
          PyObject * module_attr = PyObject_GetAttrString(class_attr, "__module__");
          if (module_attr) {
            module_name = (char *)PyUnicode_1BYTE_DATA(module_attr);
            Py_DECREF(module_attr);
          }
          Py_DECREF(class_attr);
        }
      }
      if (!class_name || !module_name) {
        return false;
      }
      snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);
    }
    assert(strncmp("webrtc_ros_msgs.srv._get_ice_servers.GetIceServers_Request", full_classname_dest, 58) == 0);
  }
  webrtc_ros_msgs__srv__GetIceServers_Request * ros_message = _ros_message;
  ros_message->structure_needs_at_least_one_member = 0;

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * webrtc_ros_msgs__srv__get_ice_servers__request__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of GetIceServers_Request */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("webrtc_ros_msgs.srv._get_ice_servers");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "GetIceServers_Request");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  (void)raw_ros_message;

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}

#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
// already included above
// #include <Python.h>
// already included above
// #include <stdbool.h>
// already included above
// #include "numpy/ndarrayobject.h"
// already included above
// #include "rosidl_runtime_c/visibility_control.h"
// already included above
// #include "webrtc_ros_msgs/srv/detail/get_ice_servers__struct.h"
// already included above
// #include "webrtc_ros_msgs/srv/detail/get_ice_servers__functions.h"

#include "rosidl_runtime_c/primitives_sequence.h"
#include "rosidl_runtime_c/primitives_sequence_functions.h"

// Nested array functions includes
#include "webrtc_ros_msgs/msg/detail/ice_server__functions.h"
// end nested array functions include
bool webrtc_ros_msgs__msg__ice_server__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * webrtc_ros_msgs__msg__ice_server__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool webrtc_ros_msgs__srv__get_ice_servers__response__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[60];
    {
      char * class_name = NULL;
      char * module_name = NULL;
      {
        PyObject * class_attr = PyObject_GetAttrString(_pymsg, "__class__");
        if (class_attr) {
          PyObject * name_attr = PyObject_GetAttrString(class_attr, "__name__");
          if (name_attr) {
            class_name = (char *)PyUnicode_1BYTE_DATA(name_attr);
            Py_DECREF(name_attr);
          }
          PyObject * module_attr = PyObject_GetAttrString(class_attr, "__module__");
          if (module_attr) {
            module_name = (char *)PyUnicode_1BYTE_DATA(module_attr);
            Py_DECREF(module_attr);
          }
          Py_DECREF(class_attr);
        }
      }
      if (!class_name || !module_name) {
        return false;
      }
      snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);
    }
    assert(strncmp("webrtc_ros_msgs.srv._get_ice_servers.GetIceServers_Response", full_classname_dest, 59) == 0);
  }
  webrtc_ros_msgs__srv__GetIceServers_Response * ros_message = _ros_message;
  {  // servers
    PyObject * field = PyObject_GetAttrString(_pymsg, "servers");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'servers'");
    if (!seq_field) {
      Py_DECREF(field);
      return false;
    }
    Py_ssize_t size = PySequence_Size(field);
    if (-1 == size) {
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    if (!webrtc_ros_msgs__msg__IceServer__Sequence__init(&(ros_message->servers), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create webrtc_ros_msgs__msg__IceServer__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    webrtc_ros_msgs__msg__IceServer * dest = ros_message->servers.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!webrtc_ros_msgs__msg__ice_server__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * webrtc_ros_msgs__srv__get_ice_servers__response__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of GetIceServers_Response */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("webrtc_ros_msgs.srv._get_ice_servers");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "GetIceServers_Response");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  webrtc_ros_msgs__srv__GetIceServers_Response * ros_message = (webrtc_ros_msgs__srv__GetIceServers_Response *)raw_ros_message;
  {  // servers
    PyObject * field = NULL;
    size_t size = ros_message->servers.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    webrtc_ros_msgs__msg__IceServer * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->servers.data[i]);
      PyObject * pyitem = webrtc_ros_msgs__msg__ice_server__convert_to_py(item);
      if (!pyitem) {
        Py_DECREF(field);
        return NULL;
      }
      int rc = PyList_SetItem(field, i, pyitem);
      (void)rc;
      assert(rc == 0);
    }
    assert(PySequence_Check(field));
    {
      int rc = PyObject_SetAttrString(_pymessage, "servers", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
