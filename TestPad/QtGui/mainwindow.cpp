#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <string>

#include <iostream>

#include <TestController.h>
#include <TestPointer.h>

using namespace std;


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QCoreApplication::setApplicationVersion(QString(APP_VERSION));
    setWindowTitle("TestPad " + QCoreApplication::applicationVersion());
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_test_clicked()
{
    ui->textEdit->append("Test");
    TestController controller;
    controller.run();
}




void MainWindow::processResults(QString results)
{
    ui->textEdit->append(results);
}



void MainWindow::on_pushButton_start_clicked()
{
    emit start();
}

void MainWindow::on_pushButton_stop_clicked()
{
    emit stop();
}

void MainWindow::on_pushButton_test2_clicked()
{
    ui->textEditTest2->append("Test2");
    TestPointer testp;
}

void MainWindow::on_pushButton_clicked()
{
    ui->textEdit->append("Test");
    TestController controller;
    controller.run();
}
