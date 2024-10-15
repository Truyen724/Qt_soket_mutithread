#ifndef WINDOW_H
#define WINDOW_H
#include <QDialog>
#include "Serverwindow.h"
namespace Ui {
class window;
}

class window : public QDialog
{
    Q_OBJECT

public:
    explicit window(QWidget *parent = nullptr);
    ~window();

private slots:
    void on_pushButton_clicked();
    void handleData(const QString &data); // Xử lý dữ liệu từ Server
    void on_lineEdit_textEdited(const QString &arg1);

private:
    Ui::window *ui;
    MainWindow *SerWidow;
};

#endif // WINDOW_H
