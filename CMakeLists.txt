cmake_minimum_required(VERSION 3.13.0)

set(CMAKE_CXX_STANDARD 14)

## [discover_ogre]
# The COMPONENTS part checks that OGRE was built the way we need it
# The CONFIG flag makes sure we get OGRE instead of OGRE-next
find_package(OGRE REQUIRED COMPONENTS Bites CONFIG)

# add the source files as usual
add_executable(OpenThisle main.cpp)

# this also sets the includes and pulls third party dependencies
target_link_libraries(OpenThisle OgreBites)
## [discover_ogre]
