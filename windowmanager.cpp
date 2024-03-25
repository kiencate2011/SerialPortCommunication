#include "windowmanager.h"

WindowManager::WindowManager(QObject *parent) : QObject(parent)
{
    // Initialize QML engine

    // m_engine.rootContext()->setContextProperty("windowManager", this);
}

void WindowManager::openNewWindow(const QString &qmlFile)
{
    QUrl source(qmlFile);
    QQmlComponent component(&m_engine, source);
    QQuickWindow *window = qobject_cast<QQuickWindow *>(component.create());

    if (window)
        window->show();
}
