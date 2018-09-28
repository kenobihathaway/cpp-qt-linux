#ifndef COMMONTEST_H
#define COMMONTEST_H

#include <QObject>
#include <QDebug>

class CommonTest : public QObject
{
    Q_OBJECT
public:
    explicit CommonTest(QObject *parent = 0);

signals:

public slots:
};

#endif // COMMONTEST_H
