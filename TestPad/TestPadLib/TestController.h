#ifndef TESTCONTROLLER_H
#define TESTCONTROLLER_H

#include <QObject>

#include "CommonTest.h"

#include "TestFactory.h"

#include "spdlog/spdlog.h"
#include "spdlog/sinks/stdout_color_sinks.h"
#include "spdlog/sinks/basic_file_sink.h"

class TestController : public QObject
{
    Q_OBJECT
public:
    explicit TestController(spdlog::logger* console_, QObject *parent = nullptr);
    void run();
private:
    spdlog::logger* m_logger;

signals:

public slots:
};

#endif // TESTCONTROLLER_H
