#ifndef CONNECTIONPOOL_H
#define CONNECTIONPOOL_H

#include <QMainWindow>
#include <QObject>
#include <QSharedDataPointer>
#include <QWidget>
#include <QQueue>
#include<QMutex>
#include <QSqlError>
#include <QSqlQuery>

class ConnectionPool
{
public:
    ConnectionPool& getInstance();
    void releaseConnection(QSqlDatabase db);//释放连接
    QSqlDatabase getConnection();
    void setMaxConnections(int max);//设置最大连接数
    int getMaxConnections();

private:

    ConnectionPool();//私有构造函数
    ~ConnectionPool();//私有析构函数
    QQueue<QSqlDatabase> pool;
    QMutex mutex;//互斥锁
    int maxConnections;
    QString dbName="qingyuserver.db";
    int connectionCounter=0;


};

#endif // CONNECTIONPOOL_H
