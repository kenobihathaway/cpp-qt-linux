#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "QString"

#include "TestClass.h"

#include "spdlog/spdlog.h"
#include "spdlog/sinks/stdout_color_sinks.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT
    
public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    
public slots:
    void on_pushButton_test_clicked();
    void processResults(QString);

private slots:
    void on_pushButton_start_clicked();
    void on_pushButton_stop_clicked();

    void on_pushButton_test2_clicked();

    void on_pushButton_clicked();

signals:
    void start();
    void stop();

private:
    Ui::MainWindow *ui;
    void testptr(TestClass*);
    void testptr2(TestClass*);
    std::shared_ptr<spdlog::logger> console;
};

#endif // MAINWINDOW_H
