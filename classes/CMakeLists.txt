file(GLOB CLASS_SOURCES
     "*.h"
     "*.hpp"
     "*.cpp"
)

target_sources(OpenThisle PRIVATE ${CLASS_SOURCES})