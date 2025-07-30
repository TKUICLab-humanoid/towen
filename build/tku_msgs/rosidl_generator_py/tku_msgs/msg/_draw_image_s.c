// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from tku_msgs:msg/DrawImage.idl
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
#include "tku_msgs/msg/detail/draw_image__struct.h"
#include "tku_msgs/msg/detail/draw_image__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool tku_msgs__msg__draw_image__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[35];
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
    assert(strncmp("tku_msgs.msg._draw_image.DrawImage", full_classname_dest, 34) == 0);
  }
  tku_msgs__msg__DrawImage * ros_message = _ros_message;
  {  // cnt
    PyObject * field = PyObject_GetAttrString(_pymsg, "cnt");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->cnt = (int16_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // mode
    PyObject * field = PyObject_GetAttrString(_pymsg, "mode");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->mode = (int16_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // xmin
    PyObject * field = PyObject_GetAttrString(_pymsg, "xmin");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->xmin = (int16_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // xmax
    PyObject * field = PyObject_GetAttrString(_pymsg, "xmax");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->xmax = (int16_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // ymin
    PyObject * field = PyObject_GetAttrString(_pymsg, "ymin");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->ymin = (int16_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // ymax
    PyObject * field = PyObject_GetAttrString(_pymsg, "ymax");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->ymax = (int16_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // rvalue
    PyObject * field = PyObject_GetAttrString(_pymsg, "rvalue");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->rvalue = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // gvalue
    PyObject * field = PyObject_GetAttrString(_pymsg, "gvalue");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->gvalue = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // bvalue
    PyObject * field = PyObject_GetAttrString(_pymsg, "bvalue");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->bvalue = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * tku_msgs__msg__draw_image__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of DrawImage */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("tku_msgs.msg._draw_image");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "DrawImage");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  tku_msgs__msg__DrawImage * ros_message = (tku_msgs__msg__DrawImage *)raw_ros_message;
  {  // cnt
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->cnt);
    {
      int rc = PyObject_SetAttrString(_pymessage, "cnt", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
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
  {  // xmin
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->xmin);
    {
      int rc = PyObject_SetAttrString(_pymessage, "xmin", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // xmax
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->xmax);
    {
      int rc = PyObject_SetAttrString(_pymessage, "xmax", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // ymin
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->ymin);
    {
      int rc = PyObject_SetAttrString(_pymessage, "ymin", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // ymax
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->ymax);
    {
      int rc = PyObject_SetAttrString(_pymessage, "ymax", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // rvalue
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->rvalue);
    {
      int rc = PyObject_SetAttrString(_pymessage, "rvalue", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // gvalue
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->gvalue);
    {
      int rc = PyObject_SetAttrString(_pymessage, "gvalue", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // bvalue
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->bvalue);
    {
      int rc = PyObject_SetAttrString(_pymessage, "bvalue", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
