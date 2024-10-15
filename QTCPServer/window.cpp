#include "window.h"
#include "ui_window.h"

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
