#ifndef TESTFACTORY_H
#define TESTFACTORY_H

#include <string>

#include "CommonTest.h"

#include "ITestable.h"

class TestFactory : public QObject
{
    Q_OBJECT
public:
    explicit TestFactory(QObject *parent = 0);
    static ITestable* createTest(std::string name);

signals:

public slots:
};

#endif // TESTFACTORY_H
