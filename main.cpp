#include "driftassessment.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    driftassessment w;
    w.show();
    return QCoreApplication::exec();
}
