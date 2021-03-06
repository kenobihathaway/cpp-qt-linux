#ifndef TESTFIZZBUZZ_H
#define TESTFIZZBUZZ_H

#include <memory>
#include <iostream>

#include <QObject>
#include "ITestable.h"

class TestFizzbuzz : public ITestable, QObject
{

public:
    explicit TestFizzbuzz(std::shared_ptr<spdlog::logger> pLogger, QObject *parent = nullptr);
    bool run();
    std::vector<ulong> generateFibonaci();

signals:

public slots:
};

#endif // TESTFIZZBUZZ_H
