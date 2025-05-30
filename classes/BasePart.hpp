#include "Instance.hpp"
#include "../colors.hpp"
#include <OgreVector3.h>
namespace RBX {
    namespace Classes {
        class BasePart : RBX::Classes::Instance {
            public:
                BasePart();
                RBX::Classes::Vector3 getBrickColor();
                bool setBrickColor(int[] color);
                RBX::Classes::Vector3 getSize();
                bool setSize(RBX::Classes::Vector3 size);


            private:
                Ogre::Entity entity;
                RBX::Classes::Vector3 BrickColor;
                RBX::Classes::Vector3 Size;

        }
    }
}