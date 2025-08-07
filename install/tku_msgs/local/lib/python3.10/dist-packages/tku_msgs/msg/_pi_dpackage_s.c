// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from tku_msgs:msg/PIDpackage.idl
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
#include "tku_msgs/msg/detail/pi_dpackage__struct.h"
#include "tku_msgs/msg/detail/pi_dpackage__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool tku_msgs__msg__pi_dpackage__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[37];
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
    assert(strncmp("tku_msgs.msg._pi_dpackage.PIDpackage", full_classname_dest, 36) == 0);
  }
  tku_msgs__msg__PIDpackage * ros_message = _ros_message;
  {  // motor_p
    PyObject * field = PyObject_GetAttrString(_pymsg, "motor_p");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->motor_p = (int16_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // motor_i
    PyObject * field = PyObject_GetAttrString(_pymsg, "motor_i");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->motor_i = (int16_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // motor_d
    PyObject * field = PyObject_GetAttrString(_pymsg, "motor_d");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->motor_d = (int16_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // pflag
    PyObject * field = PyObject_GetAttrString(_pymsg, "pflag");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->pflag = (Py_True == field);
    Py_DECREF(field);
  }
  {  // iflag
    PyObject * field = PyObject_GetAttrString(_pymsg, "iflag");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->iflag = (Py_True == field);
    Py_DECREF(field);
  }
  {  // dflag
    PyObject * field = PyObject_GetAttrString(_pymsg, "dflag");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->dflag = (Py_True == field);
    Py_DECREF(field);
  }
  {  // motorid
    PyObject * field = PyObject_GetAttrString(_pymsg, "motorid");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->motorid = (int16_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * tku_msgs__msg__pi_dpackage__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of PIDpackage */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("tku_msgs.msg._pi_dpackage");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "PIDpackage");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  tku_msgs__msg__PIDpackage * ros_message = (tku_msgs__msg__PIDpackage *)raw_ros_message;
  {  // motor_p
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->motor_p);
    {
      int rc = PyObject_SetAttrString(_pymessage, "motor_p", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // motor_i
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->motor_i);
    {
      int rc = PyObject_SetAttrString(_pymessage, "motor_i", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // motor_d
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->motor_d);
    {
      int rc = PyObject_SetAttrString(_pymessage, "motor_d", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // pflag
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->pflag ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "pflag", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // iflag
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->iflag ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "iflag", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // dflag
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->dflag ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "dflag", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // motorid
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->motorid);
    {
      int rc = PyObject_SetAttrString(_pymessage, "motorid", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
