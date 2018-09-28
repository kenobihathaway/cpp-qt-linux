#include "appengine.h"

int AppEngine::init()
{
    return 0;
}

void AppEngine::start()
{
    m_worker = new WorkerThread(); // delete in stop
    m_worker->moveToThread(&workerThread);

    connect(&workerThread, SIGNAL(finished()), m_worker, SLOT(deleteLater()));
    connect(this, SIGNAL(operate(const QString &)), m_worker, SLOT(doWork(const QString &)));
    connect(m_worker, SIGNAL(resultsReady(QString)), this, SLOT(handleResults(QString)));

    m_worker->bQuit = false;
    workerThread.start();
    emit operate("start");
    QString param = "none";

    QString resultsString = "Started";
    emit sendResults(resultsString);
}

void AppEngine::stop()
{
    m_worker->bQuit = true;
    workerThread.quit();
    workerThread.wait(0);
    QString status = "Stopped";
    emit sendResults(status);
    m_worker->deleteLater();
}

void AppEngine::handleResults(QString resultsString)
{
    emit sendResults(resultsString);
}
