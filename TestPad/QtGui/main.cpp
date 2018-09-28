#include <QApplication>
#include "mainwindow.h"
#include "appengine.h"


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    AppEngine app;
    MainWindow win;

    QCoreApplication::setApplicationVersion(QString(APP_VERSION));

    QObject::connect(&app, SIGNAL(sendResults(QString)),
              &win, SLOT(processResults(QString)));

    QObject::connect(&win, SIGNAL(start()),
              &app, SLOT(start()));

    QObject::connect(&win, SIGNAL(stop()),
              &app, SLOT(stop()));

    app.init();
    win.show();

    return a.exec();
}
