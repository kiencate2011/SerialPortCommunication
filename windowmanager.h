#ifndef WINDOWMANAGER_H
#define WINDOWMANAGER_H

#include <QObject>
#include <QQmlApplicationEngine>
#include <QGuiApplication>
#include <QQmlComponent>
#include <QQuickWindow>

class WindowManager : public QObject
{
    Q_OBJECT
public:
    explicit WindowManager(QObject *parent = nullptr);

public slots:
    void openNewWindow(const QString &qmlFile);

private:
    QQmlApplicationEngine m_engine;
};

#endif // WINDOWMANAGER_H
