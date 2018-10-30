#include "TestCpp14.h"

TestCpp14::TestCpp14(std::shared_ptr<spdlog::logger> pLogger, ITestable*)
{
    this->m_loggerPtr = pLogger;
}


bool TestCpp14::run()
{
    m_loggerPtr->info(Q_FUNC_INFO);
    std::cout << "TestCpp14" << "\n";

    return true;
}
