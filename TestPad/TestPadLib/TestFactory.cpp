#include "TestFactory.h"
#include "TestCpp14.h"
#include "TestCpp11.h"
#include "TestFizzbuzz.h"
#include "TestMoveSematics.h"

TestFactory::TestFactory(QObject *parent) : QObject(parent)
{

}

ITestable* TestFactory::createTest(std::shared_ptr<spdlog::logger> pLogger, std::string name)
{
    if (name == "Cpp14")
        return new TestCpp14(pLogger);
    else if (name == "Cpp11")
        return new TestCpp11(pLogger);
    else if (name == "Fizzbuzz")
        return new TestFizzbuzz(pLogger);
    else if (name == "MoveSemantics")
        return new TestMoveSematics(pLogger);

    return nullptr;
}



