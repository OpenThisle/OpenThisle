#pragma once

#include <QWidget>
#include <Ogre.h>
#include <QResizeEvent>
#include <QPaintEvent>
#include <QMessageBox>
#include <QVulkanWindow>

namespace RBX {
    namespace Render {
        class MainRender : public QVulkanWindow
        {

            public:
                // Constructor and Destructor
                MainRender(QWidget *parent = nullptr);
                ~MainRender();

                // Initialization and rendering control
                void initializeOgre();
                void startRendering();
                void stopRendering();

            protected:
                // Override resize event for Vulkan context resizing
                void resizeEvent(QResizeEvent *event) override;

                // Override paint event to trigger Ogre frame rendering
                void paintEvent(QPaintEvent *event) override;

            private:
                // Ogre related members
                Ogre::Root* mRoot;                    // Root object for Ogre
                Ogre::RenderWindow* mRenderWindow;    // Ogre render window
                Ogre::SceneManager* mSceneManager;    // Ogre scene manager
                Ogre::Camera* mCamera;                // Ogre camera
                Ogre::Viewport* mViewport;            // Ogre viewport
                bool mIsRendering;                    // Flag for rendering status



        };
    }
}
