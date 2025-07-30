// generated from rosidl_generator_c/resource/rosidl_generator_c__visibility_control.h.in
// generated code does not contain a copyright notice

#ifndef ROSIDL_TYPESUPPORT_INTROSPECTION_TESTS__MSG__ROSIDL_GENERATOR_C__VISIBILITY_CONTROL_H_
#define ROSIDL_TYPESUPPORT_INTROSPECTION_TESTS__MSG__ROSIDL_GENERATOR_C__VISIBILITY_CONTROL_H_

#ifdef __cplusplus
extern "C"
{
#endif

// This logic was borrowed (then namespaced) from the examples on the gcc wiki:
//     https://gcc.gnu.org/wiki/Visibility

#if defined _WIN32 || defined __CYGWIN__
  #ifdef __GNUC__
    #define ROSIDL_GENERATOR_C_EXPORT_rosidl_typesupport_introspection_tests __attribute__ ((dllexport))
    #define ROSIDL_GENERATOR_C_IMPORT_rosidl_typesupport_introspection_tests __attribute__ ((dllimport))
  #else
    #define ROSIDL_GENERATOR_C_EXPORT_rosidl_typesupport_introspection_tests __declspec(dllexport)
    #define ROSIDL_GENERATOR_C_IMPORT_rosidl_typesupport_introspection_tests __declspec(dllimport)
  #endif
  #ifdef ROSIDL_GENERATOR_C_BUILDING_DLL_rosidl_typesupport_introspection_tests
    #define ROSIDL_GENERATOR_C_PUBLIC_rosidl_typesupport_introspection_tests ROSIDL_GENERATOR_C_EXPORT_rosidl_typesupport_introspection_tests
  #else
    #define ROSIDL_GENERATOR_C_PUBLIC_rosidl_typesupport_introspection_tests ROSIDL_GENERATOR_C_IMPORT_rosidl_typesupport_introspection_tests
  #endif
#else
  #define ROSIDL_GENERATOR_C_EXPORT_rosidl_typesupport_introspection_tests __attribute__ ((visibility("default")))
  #define ROSIDL_GENERATOR_C_IMPORT_rosidl_typesupport_introspection_tests
  #if __GNUC__ >= 4
    #define ROSIDL_GENERATOR_C_PUBLIC_rosidl_typesupport_introspection_tests __attribute__ ((visibility("default")))
  #else
    #define ROSIDL_GENERATOR_C_PUBLIC_rosidl_typesupport_introspection_tests
  #endif
#endif

#ifdef __cplusplus
}
#endif

#endif  // ROSIDL_TYPESUPPORT_INTROSPECTION_TESTS__MSG__ROSIDL_GENERATOR_C__VISIBILITY_CONTROL_H_
