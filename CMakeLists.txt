cmake_minimum_required(VERSION 3.15)
project(simplest_conan CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

# Collect header files
file(GLOB HEADER_FILES include/*.h)

# Add the include directory to the search path
include_directories(include)

# Collect sources
file(GLOB SRC_FILES src/*.cpp)

# Remove main.cpp from the source files in case of a library
list(REMOVE_ITEM SRC_FILES main.cpp)

# Build the executable
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)
add_executable(${PROJECT_NAME} ${HEADER_FILES} ${SRC_FILES} src/main.cpp)

add_library(${PROJECT_NAME}_lib ${SRC_FILES} ${HEADER_FILES})

# install(TARGETS simplest_conan DESTINATION bin)
install(TARGETS ${PROJECT_NAME}_lib DESTINATION lib)
install(FILES ${HEADER_FILES} DESTINATION include)
install(FILES ${SRC_FILES} DESTINATION src)




        