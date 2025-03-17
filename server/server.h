#ifndef SERVER_H
#define SERVER_H
#include <QMainWindow>
#include<QHash>

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
    void on_flush_btn_clicked();

    void on_open_btn_clicked();

private:
    Ui::Server *ui;

public:
    QHash<QString,ClientHandler*> clientsMap; //存储账号与ClientHandler的映射
};
#endif // SERVER_H
