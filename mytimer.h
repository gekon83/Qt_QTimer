#ifndef MYTIMER_H
#define MYTIMER_H

#include <QTimer>

class MyTimer : public QObject
{
    Q_OBJECT

public:
    MyTimer(int id);
    MyTimer(int id, int interval);
    QTimer *timer;
    int interval;
    int id;

public slots:
    void MyTimerSlot();
};

#endif // MYTIMER_H
