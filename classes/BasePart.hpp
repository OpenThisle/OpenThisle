#include "RenderedObject.hpp"
#include "../colors.hpp"
#include <Ogre.h>
#include <string>
#include "../alias.hpp"
namespace RBX {
    namespace Classes {
        class BasePart : RBX::Classes::RenderedObject {
            public:
                BasePart();
                int getBrickColor();
                bool setBrickColor(int color);
                RBX::Classes::Vector3 getSize();
                bool setSize(RBX::Classes::Vector3 size);
                RBX::Classes::Vector3 getPosition();
                bool setPosition(RBX::Classes::Vector3 position);

            private:
                int brickColor;
                RBX::Classes::Vector3 size;
                RBX::Classes::Vector3 position;

        };
    }
}