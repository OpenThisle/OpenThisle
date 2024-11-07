#include "Window.hpp"
namespace RBX {
    namespace UI {
        Window::Window(QWidget *parent) : QWidget(parent), ui(new Ui::Form) {
            ui->setupUi(this);
        }
        Window::~Window() {
            delete ui;
        }
    }
}
