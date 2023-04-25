#include "widget.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Widget w;
    int a = 5;
    int b = 4;
    w.show();
    
    return a.exec();
}
