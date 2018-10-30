#ifndef ITESTABLE_H
#define ITESTABLE_H

#include <QObject>
#include "CommonTest.h"
#include "spdlog/spdlog.h"

class ITestable
{

public:
    ITestable(std::shared_ptr<spdlog::logger> logger){m_loggerPtr = logger;}
    ITestable(){m_loggerPtr = nullptr;}
    virtual bool run() = 0;
    virtual ~ITestable(){}
    std::shared_ptr<spdlog::logger> m_loggerPtr;
    void log() { m_loggerPtr->info(Q_FUNC_INFO);}
};


#endif // ITESTABLE_H

