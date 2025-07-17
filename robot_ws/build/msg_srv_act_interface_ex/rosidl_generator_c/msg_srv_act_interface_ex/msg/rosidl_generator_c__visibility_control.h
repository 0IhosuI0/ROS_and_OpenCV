// generated from rosidl_generator_c/resource/rosidl_generator_c__visibility_control.h.in
// generated code does not contain a copyright notice

#ifndef MSG_SRV_ACT_INTERFACE_EX__MSG__ROSIDL_GENERATOR_C__VISIBILITY_CONTROL_H_
#define MSG_SRV_ACT_INTERFACE_EX__MSG__ROSIDL_GENERATOR_C__VISIBILITY_CONTROL_H_

#ifdef __cplusplus
extern "C"
{
#endif

// This logic was borrowed (then namespaced) from the examples on the gcc wiki:
//     https://gcc.gnu.org/wiki/Visibility

#if defined _WIN32 || defined __CYGWIN__
  #ifdef __GNUC__
    #define ROSIDL_GENERATOR_C_EXPORT_msg_srv_act_interface_ex __attribute__ ((dllexport))
    #define ROSIDL_GENERATOR_C_IMPORT_msg_srv_act_interface_ex __attribute__ ((dllimport))
  #else
    #define ROSIDL_GENERATOR_C_EXPORT_msg_srv_act_interface_ex __declspec(dllexport)
    #define ROSIDL_GENERATOR_C_IMPORT_msg_srv_act_interface_ex __declspec(dllimport)
  #endif
  #ifdef ROSIDL_GENERATOR_C_BUILDING_DLL_msg_srv_act_interface_ex
    #define ROSIDL_GENERATOR_C_PUBLIC_msg_srv_act_interface_ex ROSIDL_GENERATOR_C_EXPORT_msg_srv_act_interface_ex
  #else
    #define ROSIDL_GENERATOR_C_PUBLIC_msg_srv_act_interface_ex ROSIDL_GENERATOR_C_IMPORT_msg_srv_act_interface_ex
  #endif
#else
  #define ROSIDL_GENERATOR_C_EXPORT_msg_srv_act_interface_ex __attribute__ ((visibility("default")))
  #define ROSIDL_GENERATOR_C_IMPORT_msg_srv_act_interface_ex
  #if __GNUC__ >= 4
    #define ROSIDL_GENERATOR_C_PUBLIC_msg_srv_act_interface_ex __attribute__ ((visibility("default")))
  #else
    #define ROSIDL_GENERATOR_C_PUBLIC_msg_srv_act_interface_ex
  #endif
#endif

#ifdef __cplusplus
}
#endif

#endif  // MSG_SRV_ACT_INTERFACE_EX__MSG__ROSIDL_GENERATOR_C__VISIBILITY_CONTROL_H_
