#pragma once

#include <QWidget>
#include "ui_Window.h"
namespace RBX {
    namespace UI {
        class Window
            : public QWidget
        {
            public:
                explicit Window(QWidget *parent = nullptr);
                ~Window();
            private:
               Ui::Form *ui;
        };
    }
}
