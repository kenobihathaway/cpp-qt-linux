#ifndef WORKERTHREAD_H
#define WORKERTHREAD_H

#include "qobject.h"
#include "qthread.h"

#include <QDebug>

//#include "liquid/liquid.h"
#include <complex>
#include <math.h>
#include <unistd.h>

class WorkerThread : public QObject
{
    Q_OBJECT

public:
    bool bQuit;

signals:
    void resultsReady(QString);
    void finished();


public slots:
    void doWork(const QString &params)
    {
        if (params != 0 && params.size() > 0)
            qDebug() << params;

        while (!bQuit)
        {
            QString results;
            doit(&results);
            emit resultsReady(results);
            sleep(1);
        }

        emit finished();
    }

private:
    void doit(QString* ref)
    {
        ref->append("results");
    };

};

#endif // WORKERTHREAD_H
