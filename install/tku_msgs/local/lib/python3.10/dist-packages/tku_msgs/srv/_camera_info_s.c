// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from tku_msgs:srv/CameraInfo.idl
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
#include "tku_msgs/srv/detail/camera_info__struct.h"
#include "tku_msgs/srv/detail/camera_info__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool tku_msgs__srv__camera_info__request__convert_from_py(PyObject * _pymsg, void * _ros_message)
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
    assert(strncmp("tku_msgs.srv._camera_info.CameraInfo_Request", full_classname_dest, 44) == 0);
  }
  tku_msgs__srv__CameraInfo_Request * ros_message = _ros_message;
  {  // load
    PyObject * field = PyObject_GetAttrString(_pymsg, "load");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->load = (Py_True == field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * tku_msgs__srv__camera_info__request__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of CameraInfo_Request */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("tku_msgs.srv._camera_info");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "CameraInfo_Request");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  tku_msgs__srv__CameraInfo_Request * ros_message = (tku_msgs__srv__CameraInfo_Request *)raw_ros_message;
  {  // load
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->load ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "load", field);
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
// #include "tku_msgs/srv/detail/camera_info__struct.h"
// already included above
// #include "tku_msgs/srv/detail/camera_info__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool tku_msgs__srv__camera_info__response__convert_from_py(PyObject * _pymsg, void * _ros_message)
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
    assert(strncmp("tku_msgs.srv._camera_info.CameraInfo_Response", full_classname_dest, 45) == 0);
  }
  tku_msgs__srv__CameraInfo_Response * ros_message = _ros_message;
  {  // brightness
    PyObject * field = PyObject_GetAttrString(_pymsg, "brightness");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->brightness = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // contrast
    PyObject * field = PyObject_GetAttrString(_pymsg, "contrast");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->contrast = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // saturation
    PyObject * field = PyObject_GetAttrString(_pymsg, "saturation");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->saturation = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // white_balance
    PyObject * field = PyObject_GetAttrString(_pymsg, "white_balance");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->white_balance = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // auto_white_balance
    PyObject * field = PyObject_GetAttrString(_pymsg, "auto_white_balance");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->auto_white_balance = (Py_True == field);
    Py_DECREF(field);
  }
  {  // auto_exposure
    PyObject * field = PyObject_GetAttrString(_pymsg, "auto_exposure");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->auto_exposure = (Py_True == field);
    Py_DECREF(field);
  }
  {  // auto_backlight_compensation
    PyObject * field = PyObject_GetAttrString(_pymsg, "auto_backlight_compensation");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->auto_backlight_compensation = (Py_True == field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * tku_msgs__srv__camera_info__response__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of CameraInfo_Response */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("tku_msgs.srv._camera_info");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "CameraInfo_Response");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  tku_msgs__srv__CameraInfo_Response * ros_message = (tku_msgs__srv__CameraInfo_Response *)raw_ros_message;
  {  // brightness
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->brightness);
    {
      int rc = PyObject_SetAttrString(_pymessage, "brightness", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // contrast
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->contrast);
    {
      int rc = PyObject_SetAttrString(_pymessage, "contrast", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // saturation
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->saturation);
    {
      int rc = PyObject_SetAttrString(_pymessage, "saturation", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // white_balance
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->white_balance);
    {
      int rc = PyObject_SetAttrString(_pymessage, "white_balance", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // auto_white_balance
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->auto_white_balance ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "auto_white_balance", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // auto_exposure
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->auto_exposure ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "auto_exposure", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // auto_backlight_compensation
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->auto_backlight_compensation ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "auto_backlight_compensation", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
