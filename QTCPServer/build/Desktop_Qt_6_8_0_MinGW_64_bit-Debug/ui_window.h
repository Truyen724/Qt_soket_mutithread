/********************************************************************************
** Form generated from reading UI file 'window.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WINDOW_H
#define UI_WINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_window
{
public:
    QPushButton *pushButton;
    QLineEdit *lineEdit;
    QLabel *label;

    void setupUi(QDialog *window)
    {
        if (window->objectName().isEmpty())
            window->setObjectName("window");
        window->resize(400, 300);
        pushButton = new QPushButton(window);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(160, 140, 75, 24));
        lineEdit = new QLineEdit(window);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setGeometry(QRect(150, 70, 113, 22));
        lineEdit->setReadOnly(true);
        label = new QLabel(window);
        label->setObjectName("label");
        label->setGeometry(QRect(60, 60, 91, 41));

        retranslateUi(window);

        QMetaObject::connectSlotsByName(window);
    } // setupUi

    void retranslateUi(QDialog *window)
    {
        window->setWindowTitle(QCoreApplication::translate("window", "Dialog", nullptr));
        pushButton->setText(QCoreApplication::translate("window", "Runserver", nullptr));
        label->setText(QCoreApplication::translate("window", "Data Received", nullptr));
    } // retranslateUi

};

namespace Ui {
    class window: public Ui_window {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WINDOW_H
