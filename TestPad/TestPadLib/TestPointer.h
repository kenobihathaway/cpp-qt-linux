#ifndef TESTPOINTER_H
#define TESTPOINTER_H

#include "CommonTest.h"

#include <TestClass.h>

class TestPointer : public QObject
{
    Q_OBJECT
public:
    explicit TestPointer(QObject *parent = NULL);

private:
    void testptr(TestClass* pTest);
    void testptr2(TestClass* pTest);
    int testptr3();
    long f(long p_lParameter);

signals:

public slots:
};

#endif // TESTPOINTER_H
