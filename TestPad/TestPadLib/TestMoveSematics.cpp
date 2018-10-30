#include "TestMoveSematics.h"

TestMoveSematics::TestMoveSematics(std::shared_ptr<spdlog::logger> pLogger, QObject* parent) : QObject(parent)
{
    this->m_loggerPtr = pLogger;
}

bool TestMoveSematics::run()
{
    return false;
}
