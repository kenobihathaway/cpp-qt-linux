#include "TestController.h"
#include "Derived.h"

TestController::TestController(std::shared_ptr<spdlog::logger> multiLogger, QObject *parent) : QObject(parent)
{
    m_logger = multiLogger;

}

void TestController::run()
{
    // create color multi threaded logger
    m_logger->info("TestController::run started.");

    Derived derived;
    derived.method1();

    ITestable* test = TestFactory::createTest("Cpp14");
    test->run();

    ITestable* test2 = TestFactory::createTest("Cpp11");
    test2->run();

    ITestable* test3 = TestFactory::createTest("Fizzbuzz");
    test3->run();

    m_logger->info("TestController::run finished.");
}

