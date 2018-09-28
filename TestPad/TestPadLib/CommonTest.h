#ifndef COMMONTEST_H
#define COMMONTEST_H

#include <QObject>
#include <QDebug>

class CommonTest : public QObject
{
    Q_OBJECT
public:
    explicit CommonTest(QObject *parent = nullptr);

signals:

public slots:
};

#endif // COMMONTEST_H
