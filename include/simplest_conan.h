#pragma once

#include <vector>
#include <string>

void hello_world_helper(const char* str);

class SimpleClass {
public:
    SimpleClass();
    ~SimpleClass();

    void hello_world(const char* str);
    void hello_world(const std::string& str);
    void hello_world(const std::vector<std::string>& str);
};