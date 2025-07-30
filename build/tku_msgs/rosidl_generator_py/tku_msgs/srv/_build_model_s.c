// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from tku_msgs:srv/BuildModel.idl
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
#include "tku_msgs/srv/detail/build_model__struct.h"
#include "tku_msgs/srv/detail/build_model__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool tku_msgs__srv__build_model__request__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[45];
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
    assert(strncmp("tku_msgs.srv._build_model.BuildModel_Request", full_classname_dest, 44) == 0);
  }
  tku_msgs__srv__BuildModel_Request * ros_message = _ros_message;
  {  // build
    PyObject * field = PyObject_GetAttrString(_pymsg, "build");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->build = (Py_True == field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * tku_msgs__srv__build_model__request__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of BuildModel_Request */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("tku_msgs.srv._build_model");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "BuildModel_Request");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  tku_msgs__srv__BuildModel_Request * ros_message = (tku_msgs__srv__BuildModel_Request *)raw_ros_message;
  {  // build
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->build ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "build", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

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
// #include "tku_msgs/srv/detail/build_model__struct.h"
// already included above
// #include "tku_msgs/srv/detail/build_model__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool tku_msgs__srv__build_model__response__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[46];
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
    assert(strncmp("tku_msgs.srv._build_model.BuildModel_Response", full_classname_dest, 45) == 0);
  }
  tku_msgs__srv__BuildModel_Response * ros_message = _ros_message;
  {  // already
    PyObject * field = PyObject_GetAttrString(_pymsg, "already");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->already = (Py_True == field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * tku_msgs__srv__build_model__response__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of BuildModel_Response */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("tku_msgs.srv._build_model");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "BuildModel_Response");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  tku_msgs__srv__BuildModel_Response * ros_message = (tku_msgs__srv__BuildModel_Response *)raw_ros_message;
  {  // already
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->already ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "already", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
