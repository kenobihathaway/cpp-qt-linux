#ifndef TESTCONTROLLER_H
#define TESTCONTROLLER_H

#include <QObject>

#include "CommonTest.h"

#include "TestFactory.h"

class TestController : public QObject
{
    Q_OBJECT
public:
    explicit TestController(QObject *parent = 0);
    void run();

signals:

public slots:
};

#endif // TESTCONTROLLER_H
