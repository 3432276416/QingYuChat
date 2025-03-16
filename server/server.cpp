#include "server.h"
#include "ui_server.h"

Server::Server(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Server)
{
    ui->setupUi(this);
}

Server::~Server()
{
    delete ui;
}

bool Server::ConnectDataBase()
{

}

void Server::on_flush_btn_clicked()
{

}


void Server::on_open_btn_clicked()
{

}

