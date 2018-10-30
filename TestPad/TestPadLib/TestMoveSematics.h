#ifndef TESTMOVESEMATICS_H
#define TESTMOVESEMATICS_H

#include <QObject>
#include "ITestable.h"

class TestMoveSematics : public ITestable, QObject
{    
public:
    explicit TestMoveSematics(std::shared_ptr<spdlog::logger> pLogger, QObject *parent = nullptr);
    bool run();
};

#endif // TESTMOVESEMATICS_H
