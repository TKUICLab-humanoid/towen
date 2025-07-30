// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from tku_msgs:msg/Parameter.idl
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
#include "tku_msgs/msg/detail/parameter__struct.h"
#include "tku_msgs/msg/detail/parameter__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool tku_msgs__msg__parameter__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[34];
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
    assert(strncmp("tku_msgs.msg._parameter.Parameter", full_classname_dest, 33) == 0);
  }
  tku_msgs__msg__Parameter * ros_message = _ros_message;
  {  // mode
    PyObject * field = PyObject_GetAttrString(_pymsg, "mode");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->mode = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // x_swing_range
    PyObject * field = PyObject_GetAttrString(_pymsg, "x_swing_range");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->x_swing_range = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // y_swing_range
    PyObject * field = PyObject_GetAttrString(_pymsg, "y_swing_range");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->y_swing_range = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // z_swing_range
    PyObject * field = PyObject_GetAttrString(_pymsg, "z_swing_range");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->z_swing_range = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // period_t
    PyObject * field = PyObject_GetAttrString(_pymsg, "period_t");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->period_t = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // period_t2
    PyObject * field = PyObject_GetAttrString(_pymsg, "period_t2");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->period_t2 = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // sample_time
    PyObject * field = PyObject_GetAttrString(_pymsg, "sample_time");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->sample_time = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // osc_lockrange
    PyObject * field = PyObject_GetAttrString(_pymsg, "osc_lockrange");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->osc_lockrange = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // base_default_z
    PyObject * field = PyObject_GetAttrString(_pymsg, "base_default_z");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->base_default_z = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // y_swing_shift
    PyObject * field = PyObject_GetAttrString(_pymsg, "y_swing_shift");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->y_swing_shift = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // x_swing_com
    PyObject * field = PyObject_GetAttrString(_pymsg, "x_swing_com");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->x_swing_com = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // base_lift_z
    PyObject * field = PyObject_GetAttrString(_pymsg, "base_lift_z");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->base_lift_z = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // rightfoot_shift_z
    PyObject * field = PyObject_GetAttrString(_pymsg, "rightfoot_shift_z");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->rightfoot_shift_z = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // com_y_swing
    PyObject * field = PyObject_GetAttrString(_pymsg, "com_y_swing");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->com_y_swing = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // now_stand_height
    PyObject * field = PyObject_GetAttrString(_pymsg, "now_stand_height");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->now_stand_height = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // now_com_height
    PyObject * field = PyObject_GetAttrString(_pymsg, "now_com_height");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->now_com_height = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // stand_balance
    PyObject * field = PyObject_GetAttrString(_pymsg, "stand_balance");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->stand_balance = (Py_True == field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * tku_msgs__msg__parameter__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of Parameter */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("tku_msgs.msg._parameter");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "Parameter");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  tku_msgs__msg__Parameter * ros_message = (tku_msgs__msg__Parameter *)raw_ros_message;
  {  // mode
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->mode);
    {
      int rc = PyObject_SetAttrString(_pymessage, "mode", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // x_swing_range
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->x_swing_range);
    {
      int rc = PyObject_SetAttrString(_pymessage, "x_swing_range", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // y_swing_range
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->y_swing_range);
    {
      int rc = PyObject_SetAttrString(_pymessage, "y_swing_range", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // z_swing_range
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->z_swing_range);
    {
      int rc = PyObject_SetAttrString(_pymessage, "z_swing_range", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // period_t
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->period_t);
    {
      int rc = PyObject_SetAttrString(_pymessage, "period_t", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // period_t2
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->period_t2);
    {
      int rc = PyObject_SetAttrString(_pymessage, "period_t2", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // sample_time
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->sample_time);
    {
      int rc = PyObject_SetAttrString(_pymessage, "sample_time", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // osc_lockrange
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->osc_lockrange);
    {
      int rc = PyObject_SetAttrString(_pymessage, "osc_lockrange", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // base_default_z
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->base_default_z);
    {
      int rc = PyObject_SetAttrString(_pymessage, "base_default_z", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // y_swing_shift
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->y_swing_shift);
    {
      int rc = PyObject_SetAttrString(_pymessage, "y_swing_shift", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // x_swing_com
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->x_swing_com);
    {
      int rc = PyObject_SetAttrString(_pymessage, "x_swing_com", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // base_lift_z
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->base_lift_z);
    {
      int rc = PyObject_SetAttrString(_pymessage, "base_lift_z", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // rightfoot_shift_z
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->rightfoot_shift_z);
    {
      int rc = PyObject_SetAttrString(_pymessage, "rightfoot_shift_z", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // com_y_swing
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->com_y_swing);
    {
      int rc = PyObject_SetAttrString(_pymessage, "com_y_swing", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // now_stand_height
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->now_stand_height);
    {
      int rc = PyObject_SetAttrString(_pymessage, "now_stand_height", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // now_com_height
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->now_com_height);
    {
      int rc = PyObject_SetAttrString(_pymessage, "now_com_height", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // stand_balance
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->stand_balance ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "stand_balance", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
