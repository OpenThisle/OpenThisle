cmake_minimum_required(VERSION 3.13.0)

set(CMAKE_CXX_STANDARD 14)
project(OpenThisle)
## [discover_ogre]
# The COMPONENTS part checks that OGRE was built the way we need it
# The CONFIG flag makes sure we get OGRE instead of OGRE-next
find_package(OGRE REQUIRED COMPONENTS Bites CONFIG)
find_package(pugixml REQUIRED)
# add the source files as usual

file(GLOB SOURCE_FILES
     "*.h"
     "*.hpp"
     "*.cpp"
)
add_executable(OpenThisle ${SOURCE_FILES})
add_subdirectory(${CMAKE_SOURCE_DIR}/classes)

# this also sets the includes and pulls third party dependencies
target_link_libraries(OpenThisle OgreBites)
target_link_libraries(OpenThisle pugixml)
## [discover_ogre]
configure_file(resources.cfg resources.cfg COPYONLY)
