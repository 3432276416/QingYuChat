#include "server.h"
#include "ui_server.h"

Server::Server(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Server)
{
    ui->setupUi(this);
    ui->ckb_select->addItem("Users");
    ui->ckb_select->addItem("Messages");
    ui->ckb_select->addItem("Friends");
    ui->ckb_select->addItem("FriendRequests");
    databasesConnect();
    //显示表格
    model=new QSqlTableModel(this,db);
    model->setTable("Users");
    ui->tableView->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
    ui->tableView->setModel(model);
    model->select();

    //初始化tcp对象
    tcp_server = new QTcpServer(this);
    port=6677;

}

Server::~Server()
{
    delete ui;
}

bool Server::databasesConnect()//连接数据库
{
    ConnectionPool& pool=ConnectionPool::getInstance();
    Server::db=pool.getConnection();
    if (!db.isValid()) {//检查连接是否有效
        qDebug() << "打开失败: 获取数据库连接失败";
        return false;//连接获取失败
    } else {
        qDebug() << "数据库连接成功";
        qry = QSqlQuery(db);//使用有效连接创建查询对象
        return true;
    }

}

void Server::showSqlTable(const QString &tablename)//显示表格
{
    model=new QSqlTableModel(this,db);
    if (tablename == "Users") {
        model->setTable("Users");
        model->select();
    } else if (tablename == "Messages") {
        model->setTable("Messages");
        model->select();
    } else if (tablename == "Friends") {
        model->setTable("Friends");
        model->select();
    } else if (tablename == "FriendRequests") {
        model->setTable("FriendRequests");
        model->select();
    }
    ui->tableView->setModel(model);
}

bool Server::tcpListen()
{
    connect(tcp_server,SIGNAL(QTcpServer::newConnection()),this,SLOT(onNewConnection()));
    if(tcp_server->listen(QHostAddress::Any,port))
    {
        qDebug()<<"监听成功";
        return true;
    }
    else
    {
        qDebug()<<"监听失败";
        return false;
    }
}


void Server::on_flush_btn_clicked()
{
    qDebug()<<"当前连接的账号有"<<clientsMap;
    // on_ckb_select_currentIndexChanged(ui->ckb_select->currentIndex());
}


void Server::on_open_btn_clicked()
{
    if(!listenFlag) {
        ui->open_btn->setText("关闭服务器");
        listenFlag = true;
        tcpListen();//直接调用当前对象的 tcpListen 方法
    } else
    {
        ui->open_btn->setText("开启服务器");
        listenFlag = false;
        qDebug()<<"服务器关闭";
        tcp_server->close();//确保关闭 TCP 服务器
    }
}

void Server::onNewConnection()//有新连接到来新建clienthandler
{
    qDebug()<<"主线程是"<<QThread::currentThread()->currentThreadId();
    QTcpSocket *socket = tcp_server->nextPendingConnection();
    ConnectionPool& pool = ConnectionPool::getInstance();//获取连接池实例
    ClientHandler* handler = new ClientHandler(socket, pool, this);
    handler->start();
}

void Server::on_sql_btn_clicked()
{
    if (qry.prepare(ui->lineEdit->text()) && qry.exec()) {
        showSqlTable(ui->ckb_select->currentText());
    } else {
        qDebug() << "SQL 执行错误:" << qry.lastError().text();
    }
}


void Server::on_save_btn_clicked()
{


}


void Server::on_ckb_select_currentTextChanged(const QString &text)
{
    showSqlTable(text);
}


void Server::on_add_btn_clicked()
{
    model->insertRow(model->rowCount(),QModelIndex());
}


void Server::on_remove_btn_clicked()
{
    int currow=ui->tableView->currentIndex().row();
    model->removeRows(currow,1);
}


void Server::on_revoke_btn_clicked()
{

}


void Server::on_insert_btn_clicked()
{

    int currow=ui->tableView->currentIndex().row();
    model->insertRow(ui->tableView->currentIndex().row()+1,QModelIndex());
}

