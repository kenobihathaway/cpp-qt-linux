#ifndef DERVIVED_H
#define DERVIVED_H

#include <QObject>

#include "Base.h"

class Derived : public Base
{
public:
    Derived();
    virtual void method2();

    virtual ~Derived();
};

#endif // DERVIVED_H
