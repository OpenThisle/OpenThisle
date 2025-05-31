#include "BasePart.hpp"

namespace RBX {
    namespace Classes {
        
        RBX::Classes::Vector3 BasePart::getBrickColor() {
            return this->brickColor;
        }
        bool BasePart::setBrickColor(int color[]) {
            this->brickColor = Ogre::Vector3((float)color[1], (float)color[2], (float)color[3]);
            return true;
        }

        RBX::Classes::Vector3 BasePart::getPosition() {
            return this->position;
        }

        RBX::Classes::Vector3 BasePart::setPosition(RBX::Classes::Vector3 position) {
            this->position = position;
            this->sceneNode.setPosition(position);
        }
    }
}