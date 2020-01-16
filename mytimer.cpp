#include "mytimer.h"
#include <QDebug>

MyTimer::MyTimer(int id)
{
    // create a timer
    timer = new QTimer(this);

    // setup signal and slots
    connect(timer, SIGNAL(timeout()), this, SLOT(MyTimerSlot()));

    // milisec
    this->id = id;
    interval = 1000;
    timer->start(interval);
}

MyTimer::MyTimer(int id, int interval)
{
    // create a timer
    timer = new QTimer(this);

    // setup signal and slots
    connect(timer, SIGNAL(timeout()), this, SLOT(MyTimerSlot()));

    // milisec
    this->id = id;
    this->interval = interval;
    timer->start(interval);
}

void MyTimer::MyTimerSlot()
{
    qDebug() << "Timer " << id << " clicks ..." << interval;
    interval -= 50;
    if (interval < 100)
        interval = 1000;
}
