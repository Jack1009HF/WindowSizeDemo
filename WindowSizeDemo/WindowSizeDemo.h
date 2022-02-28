#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_WindowSizeDemo.h"

class WindowSizeDemo : public QMainWindow
{
    Q_OBJECT

public:
    WindowSizeDemo(QWidget *parent = Q_NULLPTR);

private:
    Ui::WindowSizeDemoClass ui;
};
