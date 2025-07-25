// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from msg_srv_act_interface_ex:msg/ArithmeticArgument.idl
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
#include "msg_srv_act_interface_ex/msg/detail/arithmetic_argument__struct.h"
#include "msg_srv_act_interface_ex/msg/detail/arithmetic_argument__functions.h"

ROSIDL_GENERATOR_C_IMPORT
bool builtin_interfaces__msg__time__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * builtin_interfaces__msg__time__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool msg_srv_act_interface_ex__msg__arithmetic_argument__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[69];
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
    assert(strncmp("msg_srv_act_interface_ex.msg._arithmetic_argument.ArithmeticArgument", full_classname_dest, 68) == 0);
  }
  msg_srv_act_interface_ex__msg__ArithmeticArgument * ros_message = _ros_message;
  {  // stamp
    PyObject * field = PyObject_GetAttrString(_pymsg, "stamp");
    if (!field) {
      return false;
    }
    if (!builtin_interfaces__msg__time__convert_from_py(field, &ros_message->stamp)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // argument_a
    PyObject * field = PyObject_GetAttrString(_pymsg, "argument_a");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->argument_a = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // argument_b
    PyObject * field = PyObject_GetAttrString(_pymsg, "argument_b");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->argument_b = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * msg_srv_act_interface_ex__msg__arithmetic_argument__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of ArithmeticArgument */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("msg_srv_act_interface_ex.msg._arithmetic_argument");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "ArithmeticArgument");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  msg_srv_act_interface_ex__msg__ArithmeticArgument * ros_message = (msg_srv_act_interface_ex__msg__ArithmeticArgument *)raw_ros_message;
  {  // stamp
    PyObject * field = NULL;
    field = builtin_interfaces__msg__time__convert_to_py(&ros_message->stamp);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "stamp", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // argument_a
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->argument_a);
    {
      int rc = PyObject_SetAttrString(_pymessage, "argument_a", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // argument_b
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->argument_b);
    {
      int rc = PyObject_SetAttrString(_pymessage, "argument_b", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
