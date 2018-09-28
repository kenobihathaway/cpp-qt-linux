#include "TestPointer.h"
#include "TestClass.h"

TestPointer::TestPointer(QObject *parent) : QObject(parent)
{    
//    TestClass* test = new TestClass();
//    testptr(test);
//    int* s = 0;

//    cout << s << endl;
//    std::string str = "Test Ptr " + test->value;
    cout << testptr3();

}

void TestPointer::testptr(TestClass* pTest)
{
    //pTest = new TestClass();
    pTest->value = "1";
    testptr2(pTest);
}

void TestPointer::testptr2(TestClass* pTest)
{
    //pTest = new TestClass();
    pTest->value = "2";
}

int TestPointer::testptr3()
{
//#include <stdio.h>
//#include <stdlib.h>
//#include <iostream>
//using namespace std;

    // These are the 3 warnings allowed in this project to show the hiding of lValue
    long lValue = 7;
    for( int i = 0; i < 5; i++ )
    {
        long lValue2 = 2;
        lValue2 += f( lValue2 *= lValue ) + f( lValue );
        long lValue = lValue2;
    }
    cout << lValue;
    return 0;
}


long TestPointer::f( long p_lParameter )
{
    long *s;
    s = nullptr;
    s = new long;
    *s += p_lParameter;
    return (*s);
}
