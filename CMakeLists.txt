cmake_minimum_required(VERSION 3.16)

project(OpenThisle VERSION 0.0.1 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(OGRE REQUIRED COMPONENTS Bites CONFIG)
find_package(Qt6 REQUIRED COMPONENTS Widgets)
qt_standard_project_setup()

target_link_libraries(helloworld PRIVATE Qt6::Core)
add_subdirectory(src)
