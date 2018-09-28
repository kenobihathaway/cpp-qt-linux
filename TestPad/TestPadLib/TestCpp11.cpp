

#include "TestCpp11.h"
#include "Derived.h"

#include <memory>

TestCpp11::TestCpp11(ITestable*)
{

}


bool TestCpp11::run()
{
    std::cout << "TestCpp11" << "\n";
    lambdaTest();
    moduloTest();
    testAuto();
    testSharedPointer();
    return true;
}

bool TestCpp11::lambdaTest()
{
    // lambda
    std::vector<int> some_list;
    int total = 0;
    for (int i=0;i<5;i++) some_list.push_back(i);
    std::for_each(begin(some_list), end(some_list), [&total](int x) { total += x;});
    std::cout << total << " total computed in lambda." << "\n";
    return true;
}

bool TestCpp11::moduloTest()
{
    for (int index = 0; index < 100; index ++)
    {
        if (index % 10 == 0)
            std::cout << index << " mod 10 == 0" << "\n";
        else
            std::cout << index << " mod 10 != 0" << "\n";
    }

    return true;
}

bool TestCpp11::testAuto()
{
    auto x = 1;
    std::cout << x;

    return x == 1;
}

bool TestCpp11::testSharedPointer()
{
    std::shared_ptr<Derived> derived(new Derived());
    derived->method2();

    std::shared_ptr<Derived> derived2 = std::make_shared<Derived>();
    derived2->method2();
    return true;

}
