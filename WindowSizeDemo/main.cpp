#include "WindowSizeDemo.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    WindowSizeDemo w;
    w.show();
    return a.exec();
}
