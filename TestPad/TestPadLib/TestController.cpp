#include "TestController.h"
#include "Derived.h"


TestController::TestController(QObject *parent) : QObject(parent)
{

}

void TestController::run()
{
    Derived derived;
    derived.method1();

    ITestable* test = TestFactory::createTest("Cpp14");
    test->run();

    ITestable* test2 = TestFactory::createTest("Cpp11");
    test2->run();

    ITestable* test3 = TestFactory::createTest("Fizzbuzz");
    test3->run();
}

