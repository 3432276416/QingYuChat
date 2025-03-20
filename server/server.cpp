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
    qry.prepare("INSERT INTO Users(qq_number, password) "
                "VALUES(:username, :password)");
    qry.bindValue(":username,","1234");
    qry.bindValue(":password","root25");
    //显示表格
    if(qry.exec())
    {
        qDebug()<<"执行成功";
    }
    showTable("Users");
    ui->tableView->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
    //初始化tcp对象
    tcp_server = new QTcpServer(this);

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

void Server::showTable(const QString &tablename)//显示表格
{
    QString queryStr;
    if (tablename == "Users") {
        queryStr = "SELECT qq_number,password,nickname,signature,gender,question,answer FROM Users";
    } else if (tablename == "Messages") {
        queryStr = "SELECT sender_id,receiver_id,timestamp,message_type,filename,status FROM Messages";
    } else if (tablename == "Friends") {
        queryStr = "SELECT * FROM Friends";
    } else if (tablename == "FriendRequests") {
        queryStr = "SELECT * FROM FriendRequests";
    }
    //创建模型并设置查询
    QSqlQueryModel *model = new QSqlQueryModel(this);
    model->setQuery(queryStr, Server::db);
    if (model->lastError().isValid()) {
        qDebug() << "查询失败:" << model->lastError().text();
        return;
    }
    qDebug() << "加载行数:" << model->rowCount();
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
    on_ckb_select_currentIndexChanged(ui->ckb_select->currentIndex());
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
void Server::on_ckb_select_currentIndexChanged(int index)
{
    if(index == 0)
        showTable("Users");
    if(index == 1)
        showTable("Messages");
    if(index == 2)
        showTable("Friends");
    if(index == 3)
        showTable("FriendRequests");
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
        showTable(ui->ckb_select->currentText());
    } else {
        qDebug() << "SQL 执行错误:" << qry.lastError().text();
    }
}

