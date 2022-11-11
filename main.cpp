#include "test5.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Test5 w;
    w.show();
    return a.exec();
}
