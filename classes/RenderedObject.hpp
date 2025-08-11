#pragma once
#include "Instance.hpp"
#include "../colors.hpp"
#include <Ogre.h>
#include <string>
#include "../alias.hpp"

namespace RBX {
    namespace Classes {
        class RenderedObject : Instance {
            protected:
                void renderSetup();
                void renderColorChanger(int color);
                RBX::Classes::Vector3 renderPos;
                RBX::Classes::Vector3 renderScale;
                Ogre::Entity* renderEntity;
                Ogre::SceneNode* renderScnNode;
                Ogre::SceneManager* renderScnManager;
                
        };
    }
}
