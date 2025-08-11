#include "BasePart.hpp"

namespace RBX {
    namespace Classes {
        BasePart::BasePart() {
            this->renderSetup();
        }
        int BasePart::getBrickColor() {
            return this->brickColor;
        }
        bool BasePart::setBrickColor(int color) {
            this->renderColorChanger(color);
            this->brickColor = color;
            
            return true;
        }

        RBX::Classes::Vector3 BasePart::getPosition() {
            return this->position;
        }

        bool BasePart::setPosition(RBX::Classes::Vector3 position) {
            this->renderScnNode->setPosition(position);
            this->position = position;
       
            return 0;

        }
    }
}