#ifndef CONNECTION_H
#define CONNECTION_H

#include <QObject>
#include <QSerialPort>
#include <QSerialPortInfo>
#include <QDebug>

class Connection : public QObject
{
    Q_OBJECT
    Q_PROPERTY(QList<QString> listPort READ getListPort)
public:
    explicit Connection(QObject *parent = nullptr);
    QList<QString> getListPort();
signals:

public slots:
    void updatePort();

private:
    QList<QSerialPortInfo> listPort;
    QList<QString> listPortString;
};

#endif // CONNECTION_H
