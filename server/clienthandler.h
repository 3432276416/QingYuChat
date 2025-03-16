#ifndef CLIENTHANDLER_H
#define CLIENTHANDLER_H

#include <QThread>
#include <QMainWindow>
#include <QSqlDatabase>
#include <QSqlTableModel>
#include <QSqlQuery>
#include <QSqlError>
#include <QDebug>
#include <QString>
#include <QTableView>
#include <QTcpServer>
#include <QTcpSocket>
#include <QThread>
#include <QByteArray>
#include <QCoreApplication>
#include <QJsonDocument>
#include <QJsonObject>
#include <QRandomGenerator>
#include <QMutex>
#include <QBuffer>
#include <QJsonArray>
#include <QReadWriteLock>
#include <QTimer>
#include"server.h"
#include"connectionpool.h"


class ClientHandler : public QThread
{
    Q_OBJECT
public:
    explicit ClientHandler(QObject *parent = nullptr);
};

#endif // CLIENTHANDLER_H
