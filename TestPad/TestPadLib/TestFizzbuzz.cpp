#include "TestFizzbuzz.h"

TestFizzbuzz::TestFizzbuzz(QObject *parent) : QObject(parent)
{

}


bool TestFizzbuzz::run()
{
    std::cout << "TestFizzbuzz" << "\n";
    std::vector<ulong> sequence = generateFibonaci();

    for(auto const& value: sequence)
    {
        if (value % 3 == 0)
            std::cout << "Fizz";
        if (value % 5 == 0)
            std::cout << "Buzz";
        if (value % 3 != 0 && value % 5 != 0)
            std::cout << value;

         std::cout << "\n";
    }
}

std::vector<ulong> TestFizzbuzz::generateFibonaci()
{
    std::vector<ulong> fibList;

    fibList.push_back(1);
    fibList.push_back(1);

    while (fibList.size() < 50)
    {
        long num1 = fibList[fibList.size() - 1];
        long num2 = fibList[fibList.size() - 2];
        fibList.push_back(num1 + num2);
    }

    return fibList;
}