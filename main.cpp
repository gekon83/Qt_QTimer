#include <QCoreApplication>
#include "mytimer.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    // create MyTimer instance
    MyTimer timer1(1);
    MyTimer timer2(2,200);

    return a.exec();
}
