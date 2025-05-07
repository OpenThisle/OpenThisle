#pragma once

#include "Ogre.h"
#include "OgreApplicationContext.h"
#include "OgreInput.h"
#include "OgreRTShaderSystem.h"
#include <iostream>
#include <OgreCameraMan.h>
#include <OgreResourceManager.h>
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
    bool keyPressed(const KeyboardEvent& evt);

private:
    OgreBites::CameraMan* mCameraMan;
    int captureCounter = 0;
};
