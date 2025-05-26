/*-------------------------------------------------------------------------
This file is part of OpenThisle.

OpenThisle is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License
as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
OpenThisle is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY;
without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with Foobar.
If not, see <https://www.gnu.org/licenses/>.
-------------------------------------------------------------------------*/

//! [fullsource]

#include "render.hpp"


OpenThisle::OpenThisle()
    : ApplicationContext("OpenThisle")
{
}


void OpenThisle::setup()
{
    // do not forget to call the base first
    ApplicationContext::setup();


    // get a pointer to the already created root
    Root* root = getRoot();
    Ogre::RenderTarget* rendertarget = root->getRenderTarget("OpenThisle");
    SceneManager* scnMgr = root->createSceneManager();

    // register our scene with the RTSS
    RTShader::ShaderGenerator* shadergen = RTShader::ShaderGenerator::getSingletonPtr();
    shadergen->addSceneManager(scnMgr);

    // -- tutorial section start --
    //! [turnlights]
    scnMgr->setAmbientLight(ColourValue(0.5, 0.5, 0.5));
    //! [turnlights]

    //! [newlight]
    Light* light = scnMgr->createLight("MainLight");
    SceneNode* lightNode = scnMgr->getRootSceneNode()->createChildSceneNode();
    lightNode->attachObject(light);
    //! [newlight]

    //! [lightpos]
    lightNode->setPosition(0, 0, 0);
    //! [lightpos]

    //! [camera]
    SceneNode* camNode = scnMgr->getRootSceneNode()->createChildSceneNode();

    // create the camera
    Camera* cam = scnMgr->createCamera("myCam");
    cam->setNearClipDistance(5); 
    cam->setAutoAspectRatio(true);
    camNode->attachObject(cam);
    camNode->setPosition(0, 0, 140);
    mCameraMan = new OgreBites::CameraMan(camNode);
    mCameraMan->setStyle(OgreBites::CS_FREELOOK);
    addInputListener(mCameraMan);
    addInputListener(this);

    this->setWindowGrab((NativeWindowType*)rendertarget, true);
    // and tell it to render into the main window
    getRenderWindow()->addViewport(cam);


    //! [camera]



    //! [cameramove]
    camNode->setPosition(0, 0, 0);

    //! [cameramove]
    Entity* ogreEntity = scnMgr->createEntity("stud.mesh"); 
    SceneNode* ogreNode = scnMgr->getRootSceneNode()->createChildSceneNode();
    ogreNode->attachObject(ogreEntity);
  
    Ogre::MaterialPtr studmaterial = static_cast<Ogre::MaterialPtr>(Ogre::MaterialManager::getSingleton().getByName("th.objPart1Mtl")); 
    Ogre::Technique* studtech = studmaterial->getTechnique("everything");
    Ogre::Pass* studcolorpass = studtech->createPass();
    Ogre::TextureUnitState* studtexture = studcolorpass->createTextureUnitState();
    Ogre::ColourValue studcolor = Ogre::ColourValue(0.0, 0.0, 1.0, 0.0); // set color!
    studtexture->setColourOperationEx(Ogre::LBX_MODULATE, Ogre::LBS_MANUAL, Ogre::LBS_CURRENT, studcolor);


}

bool OpenThisle::keyPressed(const KeyboardEvent& evt)
{

    if (evt.keysym.sym == SDLK_ESCAPE)
    {
        Ogre::RenderTarget* rendertarget = getRoot()->getRenderTarget("OpenThisle");
        if(this->captureCounter == 0) {
            this->setWindowGrab((NativeWindowType*)rendertarget, false);
            this->captureCounter = 1;
            delete rendertarget;
            rendertarget = nullptr;
        } else {
            this->setWindowGrab((NativeWindowType*)rendertarget, true);
            this->captureCounter = 0;
            delete rendertarget;
            rendertarget = nullptr;
        }


    }


    return true;
}

//! [fullsource]
