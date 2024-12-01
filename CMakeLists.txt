cmake_minimum_required(VERSION 3.16)

project(OpenThisle VERSION 0.0.1 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_AUTOUIC ON)

find_package(Qt6 REQUIRED COMPONENTS Core Gui Widgets)
find_package(OGRE REQUIRED COMPONENTS Bites CONFIG)
qt_standard_project_setup()

file(GLOB_RECURSE CXX_SOURCES "src/*.cpp")
file(GLOB_RECURSE C_SOURCES "src/*.c")
file(GLOB_RECURSE SOURCES "src/**/*.cpp")

qt_wrap_ui(GENERATED_UI_HEADERS ${UI_FILES})

qt_add_executable(OpenThisle
    main.cpp
    ${gui}
    ${ui}
    ${RENDER}
)


target_link_libraries(OpenThisle PUBLIC
    Qt::Core
    Qt::Gui
    Qt::Widgets
    OgreBites
)

set_target_properties(OpenThisle PROPERTIES
    WIN32_EXECUTABLE ON
    MACOSX_BUNDLE ON
)
