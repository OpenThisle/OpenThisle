#include "RenderedObject.hpp"
#include <OgreEntity.h>
#include <OgreRoot.h>
#include <string.h>

namespace RBX {
    namespace Classes {

        void RenderedObject::renderSetup() {
            // If you are reading this, you are reading.
            this->renderScnManager = Ogre::Root::getSingletonPtr()->getSceneManager("mainWindow");
            this->renderEntity = this->renderScnManager->createEntity("stud.mesh");
            this->renderScnNode = this->renderScnManager->getRootSceneNode()->createChildSceneNode();
            this->renderScnNode->attachObject(this->renderEntity);
        }
        
        void RenderedObject::renderColorChanger(int color) {
            this->renderEntity->setMaterial(Ogre::MaterialManager::getSingleton().getByName("partcolor/" + std::to_string(color)));
        }
    };
};
