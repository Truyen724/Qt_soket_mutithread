#include "window.h"
#include "ui_window.h"
#include "Serverwindow.h"
#include <QDebug>
#include <QThread>
window::window(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::window)
{
    ui->setupUi(this);
}
window::~window()
{
    delete ui;
}

void window::on_pushButton_clicked()
{
    // Khởi tạo MainWindow và hiển thị trong luồng chính
    MainWindow *SerWindow = new MainWindow();
    SerWindow->setAttribute(Qt::WA_DeleteOnClose);
    connect(SerWindow, &MainWindow::dataReady, this, &window::handleData);

    SerWindow->show();

    // Tạo luồng mới cho Worker
    // QThread *thread = new QThread(this);
    // MainWindow *worker = new MainWindow();
    // worker->moveToThread(thread);

    // Kết nối tín hiệu bắt đầu luồng với hàm process() của Worker
    // connect(thread, &QThread::started, worker, &MainWindow::process);

    // Kết nối tín hiệu hoàn thành và xóa luồng
    // connect(worker, &MainWindow::destroyed, thread, &QThread::quit);
    // connect(thread, &QThread::finished, thread, &QThread::deleteLater);
    // connect(worker, &MainWindow::destroyed, worker, &MainWindow::deleteLater);

    // Khởi động luồng
    // thread->start();

    // qDebug() << "MainWindow và Worker đã được khởi chạy.";
}
void window::handleData(const QString &data)
{
    // Xử lý dữ liệu từ WindowB ở đây
    qDebug() << "Dữ liệu nhận từ WindowB:" << data;
    ui->lineEdit->setText(data); // Ví dụ: hiển thị dữ liệu trên một label
}

void window::on_lineEdit_textEdited(const QString &arg1)
{

}

