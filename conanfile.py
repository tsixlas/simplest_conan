from os import path
from conan import ConanFile
from conan.tools.cmake import CMakeToolchain, CMake, cmake_layout, CMakeDeps
from conan.tools.files import copy


class simplest_conanRecipe(ConanFile):
    name = "simplest_conan"
    version = "0.3"
    generators = "CMakeDeps", "CMakeToolchain"
    settings = "os", "compiler", "build_type", "arch"
    exports_sources = "CMakeLists.txt", "*.cpp", "*.h"

    requires = [
    ]

    def layout(self):
        build_path = path.join("build_" + str(self.settings.arch), str(self.settings.build_type))
        self.folders.generators = build_path
        self.folders.build = build_path
        self.folders.install = build_path

    def build(self):
        self.cmake = CMake(self)
        self.cmake.configure()
        self.cmake.build()

    def package(self):
        self.cmake.install()

    def package_info(self):
        self.cpp_info.libs = [self.name]