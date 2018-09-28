#ifndef ITESTABLE_H
#define ITESTABLE_H

#include <QObject>
#include "CommonTest.h"

class ITestable
{

public:
    ITestable(){}
    virtual bool run() = 0;

};


#endif // ITESTABLE_H

