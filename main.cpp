#include "guigit.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    guigit w;
    w.resize(500, 500); 
    w.show();
    return a.exec();
}
