#include "Derived.h"
#include <QDebug>

Derived::Derived()
{

}

void Derived::method2()
{
    qDebug() << "Derived::method2()";
}

Derived::~Derived()
{

}
