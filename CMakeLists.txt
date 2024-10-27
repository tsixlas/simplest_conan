cmake_minimum_required(VERSION 3.15)
project(simplest_conan CXX)



add_executable(simplest_conan src/simplest_conan.cpp src/main.cpp)

install(TARGETS simplest_conan DESTINATION "."
        RUNTIME DESTINATION bin
        ARCHIVE DESTINATION lib
        LIBRARY DESTINATION lib
        )
