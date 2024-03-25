#include "connection.h"

Connection::Connection(QObject *parent)
    : QObject{parent}
{}

void Connection::updatePort()
{
    listPort = QSerialPortInfo::availablePorts();
    for (const QSerialPortInfo &serialPort : listPort) {
        listPortString.append(serialPort.portName());
    }
}

QList<QString> Connection::getListPort()
{
    return listPortString;
}
