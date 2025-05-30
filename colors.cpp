#include "colors.hpp"
#include "world.hpp"
#include <string>

namespace RBX {
    void generateColorMaterial() {
        Ogre::MaterialPtr baseMaterial = static_cast<Ogre::MaterialPtr>(Ogre::MaterialManager::getSingleton().getByName("th.objPart1Mtl"));
        int rows = sizeof(RBX::colors) / sizeof(RBX::colors[0]);
        for (int i = 0; i < rows; i++) {
            std::string num = std::to_string(i);
            Ogre::MaterialPtr studmaterial = baseMaterial->clone("partcolor/" + s);
            Ogre::Technique* studtech = studmaterial->getTechnique("everything");
            Ogre::Pass* studcolorpass = studtech->getPass(0);
            Ogre::TextureUnitState* studtexture = studcolorpass->getTextureUnitState(0);
            Ogre::ColourValue studcolor = Ogre::ColourValue();
            
            studtexture1->setColourOperationEx(Ogre::LBX_MODULATE, Ogre::LBS_MANUAL, Ogre::LBS_CURRENT, studcolor);
            ogreEntity->setMateria
            


        }
    }
}