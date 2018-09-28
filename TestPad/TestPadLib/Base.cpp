#include "Base.h"

Base::Base()
{

}


void Base::method1()
{
    qDebug() << "Base::method1()";
    qDebug() << "Which method2 will be called?";
    method2();
    qDebug() << "Which method2 was called?";
}

void Base::method2()
{
    qDebug() << "Base::method2()";
}
