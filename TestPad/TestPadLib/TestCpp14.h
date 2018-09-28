#ifndef TESTCPP14_H
#define TESTCPP14_H

#include <memory>
#include <iostream>

#include "CommonTest.h"

#include "ITestable.h"



class TestCpp14 : public ITestable, QObject
{

public:
    explicit TestCpp14(ITestable *parent = 0);
    bool run();

signals:

public slots:
};

#endif // TESTCPP14_H
