#pragma once
#include "../world.hpp"

namespace RBX {
    namespace Classes {
        class Instance {
            public:
                std::string Name;
                std::vector<Instance> children;
                RBX::Classes::Instance* parent;
        };
    }
}