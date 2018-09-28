#ifndef APPENGINE_H
#define APPENGINE_H

#include <QObject>

#include  "CommonTest.h"

#include "workerthread.h"

class AppEngine : public QObject
{

    Q_OBJECT
    QThread workerThread;

private:

    WorkerThread* m_worker;

public:
    int init();

public slots:
    void start();
    void stop();
    void handleResults(QString);

signals:
    void sendResults(QString);
    void operate(const QString &);
};

#endif // APPENGINE_H
