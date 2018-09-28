#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <string>

#include <iostream>

#include <TestController.h>
#include <TestPointer.h>

#include <memory>

using namespace std;


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QCoreApplication::setApplicationVersion(QString(APP_VERSION));
    setWindowTitle("TestPad " + QCoreApplication::applicationVersion());

    // Setup console and file sink for a multi logger.
    console_sink = std::make_shared<spdlog::sinks::stdout_color_sink_mt>();
    file_sink = std::make_shared<spdlog::sinks::basic_file_sink_mt>("TestPad.log", true);
    file_sink->set_level(spdlog::level::trace);
    //multiLogger = std::make_shared<spdlog::logger>("MainLogger", {file_sink, console_sink}); // this doesn't work
    sinksList = {file_sink, console_sink};
    multiLogger = std::make_shared<spdlog::logger>("MainLogger", sinksList);
    multiLogger->flush_on(spdlog::level::info);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_test_clicked()
{
    ui->textEdit->append("Test");
    TestController controller(multiLogger);
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
    TestController controller(multiLogger);
    controller.run();
}
