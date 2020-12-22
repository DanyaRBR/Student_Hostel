#include "signals.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Signals start;
    start.show();
    return a.exec();
}
