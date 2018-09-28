#include "TestController.h"
#include "Derived.h"

TestController::TestController(spdlog::logger* console_, QObject *parent) : QObject(parent)
{
    console = console_;

}

void TestController::run()
{
    // create color multi threaded logger
    console->info("TestController::run started.");

    Derived derived;
    derived.method1();

    ITestable* test = TestFactory::createTest("Cpp14");
    test->run();

    ITestable* test2 = TestFactory::createTest("Cpp11");
    test2->run();

    ITestable* test3 = TestFactory::createTest("Fizzbuzz");
    test3->run();

    console->info("TestController::run finished.");
}

