#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QUdpSocket>
#include <QTimer>

#include <QTcpServer>
#include <QTcpSocket>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow() override;

private slots:
    void sendMessage();
    void broadcastPresence();
    void processPendingDatagrams();

    void newConnection();
    void readMessage();


private:
    Ui::MainWindow *ui;

    QUdpSocket *udpSocket;
    QTimer *broadcastTimer;

    QTcpServer *tcpServer;
    QTcpSocket *tcpSocket;
};
#endif // MAINWINDOW_H
