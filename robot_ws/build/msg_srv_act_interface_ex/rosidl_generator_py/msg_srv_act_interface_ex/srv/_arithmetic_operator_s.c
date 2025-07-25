// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from msg_srv_act_interface_ex:srv/ArithmeticOperator.idl
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
#include "msg_srv_act_interface_ex/srv/detail/arithmetic_operator__struct.h"
#include "msg_srv_act_interface_ex/srv/detail/arithmetic_operator__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool msg_srv_act_interface_ex__srv__arithmetic_operator__request__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[77];
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
    assert(strncmp("msg_srv_act_interface_ex.srv._arithmetic_operator.ArithmeticOperator_Request", full_classname_dest, 76) == 0);
  }
  msg_srv_act_interface_ex__srv__ArithmeticOperator_Request * ros_message = _ros_message;
  {  // arithmetic_operator
    PyObject * field = PyObject_GetAttrString(_pymsg, "arithmetic_operator");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->arithmetic_operator = (int8_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * msg_srv_act_interface_ex__srv__arithmetic_operator__request__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of ArithmeticOperator_Request */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("msg_srv_act_interface_ex.srv._arithmetic_operator");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "ArithmeticOperator_Request");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  msg_srv_act_interface_ex__srv__ArithmeticOperator_Request * ros_message = (msg_srv_act_interface_ex__srv__ArithmeticOperator_Request *)raw_ros_message;
  {  // arithmetic_operator
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->arithmetic_operator);
    {
      int rc = PyObject_SetAttrString(_pymessage, "arithmetic_operator", field);
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
// #include "msg_srv_act_interface_ex/srv/detail/arithmetic_operator__struct.h"
// already included above
// #include "msg_srv_act_interface_ex/srv/detail/arithmetic_operator__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool msg_srv_act_interface_ex__srv__arithmetic_operator__response__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[78];
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
    assert(strncmp("msg_srv_act_interface_ex.srv._arithmetic_operator.ArithmeticOperator_Response", full_classname_dest, 77) == 0);
  }
  msg_srv_act_interface_ex__srv__ArithmeticOperator_Response * ros_message = _ros_message;
  {  // arithmetic_result
    PyObject * field = PyObject_GetAttrString(_pymsg, "arithmetic_result");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->arithmetic_result = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * msg_srv_act_interface_ex__srv__arithmetic_operator__response__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of ArithmeticOperator_Response */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("msg_srv_act_interface_ex.srv._arithmetic_operator");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "ArithmeticOperator_Response");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  msg_srv_act_interface_ex__srv__ArithmeticOperator_Response * ros_message = (msg_srv_act_interface_ex__srv__ArithmeticOperator_Response *)raw_ros_message;
  {  // arithmetic_result
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->arithmetic_result);
    {
      int rc = PyObject_SetAttrString(_pymessage, "arithmetic_result", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
