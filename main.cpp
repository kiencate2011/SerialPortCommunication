#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include "connection.h"
#include "windowmanager.h"

int main(int argc, char *argv[])
{
    QGuiApplication app(argc, argv);

    qmlRegisterType<Connection>("Connection", 1, 0, "Connection");
    qmlRegisterType<WindowManager>("WindowManager", 1, 0, "WindowManager");
    QQmlApplicationEngine engine;
    const QUrl url(u"qrc:/SerialPortSimulation/Main.qml"_qs);
    QObject::connect(
        &engine,
        &QQmlApplicationEngine::objectCreationFailed,
        &app,
        []() { QCoreApplication::exit(-1); },
        Qt::QueuedConnection);
    engine.load(url);

    return app.exec();
}
