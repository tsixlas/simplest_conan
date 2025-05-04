cmake_minimum_required(VERSION 3.18)
project(simplest_conan LANGUAGES CXX)

# Add the include directory to the search path
include_directories(include PUBLIC)

# Collect sources
file(GLOB SRC_FILES src/simplest_conan.cpp)

# Collect headers
file(GLOB HEADER_FILES include/simplest_conan.h)

# Build the library
add_library(${PROJECT_NAME} SHARED ${SRC_FILES})

install(TARGETS ${PROJECT_NAME} DESTINATION lib)
install(FILES ${HEADER_FILES} DESTINATION ${CMAKE_INSTALL_PREFIX}/include/${PROJECT_NAME})
