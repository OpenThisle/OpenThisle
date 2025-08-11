#pragma once

#include "Ogre.h"
#include "OgreApplicationContext.h"
#include "OgreInput.h"
#include "OgreRTShaderSystem.h"
#include <iostream>
#include <OgreCameraMan.h>
#include <OgreResourceManager.h>
#include <vector>
#include "OgreSceneManager.h"
#include "world.hpp"
#include "./classes/classes.hpp"
using namespace Ogre;
using namespace OgreBites;

class OpenThisle
        : public ApplicationContext
        , public InputListener
{
public:
    OpenThisle();
    virtual ~OpenThisle() {}

    void setup();
    std::vector<Ogre::TextureUnitState> colors;
    bool keyPressed(const KeyboardEvent& evt);

private:
    OgreBites::CameraMan* mCameraMan;
    int captureCounter = 0;
};


