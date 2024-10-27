#pragma once

#include <vector>
#include <string>


#ifdef _WIN32
  #define SIMPLEST_CONAN_EXPORT __declspec(dllexport)
#else
  #define SIMPLEST_CONAN_EXPORT
#endif


SIMPLEST_CONAN_EXPORT void hello_world_helper(const char* str);
