#include <iostream>
#include "render.hpp"

int main(int argc, char **argv)
{
    try
    {
    	OpenThisle app;
        app.initApp();
        app.getRoot()->startRendering();
        app.closeApp();
    }
    catch (const std::exception& e)
    {
        std::cerr << "Error:" << e.what() << '\n';
        std::cout << "Exiting.......";
        return 1;
    }

    return 0;
}
