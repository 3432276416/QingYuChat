#include "connectionpool.h"

ConnectionPool& ConnectionPool::getInstance()//获取单例实例
{
    static ConnectionPool instance;//确保是同一个实例
    return instance;
}

ConnectionPool::ConnectionPool() {}

QSqlDatabase ConnectionPool::getConnection() // 获取数据库连接
{
    QMutexLocker locker(&mutex);
    if(!pool.isEmpty())
    {
        QSqlDatabase db=pool.dequeue();
        if(db.isOpen())
        {
            return db;
        }
        else
        {
            db.close();
            return getConnection();
        }
    }
    //如果没有可用的连接且池未满，则新建连接
    if (pool.size() < maxConnections) {
        QString connectionName = QString("Connection_%1").arg(++connectionCounter);
        QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE", connectionName);
        db.setDatabaseName(dbName);
        if (!db.open()) {
            qDebug() << "数据库打开失败:" << db.lastError().text();
            return QSqlDatabase();
        }
        return db; // 返回新连接
    } else {
        qDebug() << "数据库最大连接数已达到!";
        return QSqlDatabase();
    }
}
