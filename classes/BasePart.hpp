#include "Instance.hpp"
#include "../colors.hpp"
#include <Ogre.h>
#include "../alias.hpp"
namespace RBX {
    namespace Classes {
        class BasePart : RBX::Classes::Instance {
            public:
                BasePart();
                RBX::Classes::Vector3 getBrickColor();
                bool setBrickColor(int color[]);
                RBX::Classes::Vector3 getSize();
                bool setSize(RBX::Classes::Vector3 size);
                RBX::Classes::Vector3 getPosition();
                bool setPosition(RBX::Classes::Vector3 position);

            private:
                Ogre::Entity entity;
                Ogre::SceneNode sceneNode
                RBX::Classes::Vector3 brickColor;
                RBX::Classes::Vector3 size;
                RBX::Classes::Vector3 position;

        };
    }
}