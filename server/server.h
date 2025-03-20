#ifndef SERVER_H
#define SERVER_H
#include <QMainWindow>
#include<QHash>
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
#include <QThreadPool>
#include <QAbstractSocket>
#include <QMutex>
#include"connectionpool.h"
#include"clienthandler.h"

class ClientHandler;

QT_BEGIN_NAMESPACE
namespace Ui {
class Server;
}
QT_END_NAMESPACE

class Server : public QMainWindow
{
    Q_OBJECT

public:
    Server(QWidget *parent = nullptr);
    ~Server();
    bool ConnectDataBase();

private slots:
    void onNewConnection();//有新连接到来新建clienthandler
    void on_flush_btn_clicked();

    void on_open_btn_clicked();

    void on_ckb_select_currentIndexChanged(int index);

    void on_sql_btn_clicked();

private:
    Ui::Server *ui;
    bool tcpListen();
    void showTable(const QString &tablename);

    QThreadPool *threadPool;//线程池
    QMutex mapMutex; // 互斥量，确保线程安全
    QSqlDatabase db;
    QSqlQuery qry;
    QTcpServer *tcp_server;
    int port; //连接端口
    bool listenFlag = false;

    bool databasesConnect();//连接数据库

public:
    QHash<QString,ClientHandler*> clientsMap; //存储账号与ClientHandler的映射
};
#endif // SERVER_H
