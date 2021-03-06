#ifndef TESTCPP11_H
#define TESTCPP11_H

#include <memory>
#include <iostream>

#include "CommonTest.h"

#include "ITestable.h"



class TestCpp11 : public ITestable, QObject
{

public:
    explicit TestCpp11(std::shared_ptr<spdlog::logger> pLogger, ITestable *parent = 0);
    bool run();
private:
    bool lambdaTest();
    bool moduloTest();
    bool testAuto();
    bool testSharedPointer();

signals:

public slots:
};

#endif // TESTCPP11_H
