#include <QApplication>
#include "src/gui/Window.hpp"
int main(int argc, char **argv)
{
     QApplication a(argc, argv);
    RBX::UI::Window w;
    w.show();
    return a.exec();
}
