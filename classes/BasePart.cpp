#include "BasePart.hpp"

namespace RBX {
    namespace Classes {
        BasePart::BasePart()
        RBX::Classes::Vector3 BasePart::getBrickColor() {
            return this->BrickColor;
        }
        bool BasePart::setBrickColor(int[] color) {
            this->BrickColor = Ogre::Vector3((float)color[1], (float)color[2], (float)color[3]);
            return true;
        }
    }
}