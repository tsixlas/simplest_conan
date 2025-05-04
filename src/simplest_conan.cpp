#include <iostream>
#include "simplest_conan.h"

void hello_world_helper(const char* str){    
    std::cout << str << std::endl;
}

SimpleClass::SimpleClass() {
    std::cout << "SimpleClass constructor" << std::endl;
}
SimpleClass::~SimpleClass() {
    std::cout << "SimpleClass destructor" << std::endl;
}
void SimpleClass::hello_world(const char* str) {
    std::cout << "Hello world from SimpleClass: " << str << std::endl;
}
void SimpleClass::hello_world(const std::string& str) {
    std::cout << "Hello world from SimpleClass: " << str << std::endl;
}
void SimpleClass::hello_world(const std::vector<std::string>& str) {
    std::cout << "Hello world from SimpleClass: ";
    for (const auto& s : str) {
        std::cout << s << " ";
    }
    std::cout << std::endl;
}
