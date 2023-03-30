/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_widget
{
public:
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QComboBox *serialBox;
    QComboBox *baudrateBox;
    QLabel *label_4;
    QTextEdit *transit_data;
    QTextEdit *receive_data;

    void setupUi(QWidget *widget)
    {
        if (widget->objectName().isEmpty())
            widget->setObjectName(QString::fromUtf8("widget"));
        widget->resize(870, 581);
        pushButton = new QPushButton(widget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(660, 450, 93, 28));
        pushButton_2 = new QPushButton(widget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(660, 490, 93, 28));
        label = new QLabel(widget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 30, 111, 41));
        label_2 = new QLabel(widget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(10, 10, 81, 21));
        label_3 = new QLabel(widget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(360, 50, 201, 41));
        serialBox = new QComboBox(widget);
        serialBox->addItem(QString());
        serialBox->addItem(QString());
        serialBox->addItem(QString());
        serialBox->addItem(QString());
        serialBox->addItem(QString());
        serialBox->setObjectName(QString::fromUtf8("serialBox"));
        serialBox->setGeometry(QRect(100, 10, 87, 22));
        baudrateBox = new QComboBox(widget);
        baudrateBox->addItem(QString());
        baudrateBox->addItem(QString());
        baudrateBox->setObjectName(QString::fromUtf8("baudrateBox"));
        baudrateBox->setGeometry(QRect(110, 40, 87, 22));
        label_4 = new QLabel(widget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(380, 400, 81, 20));
        transit_data = new QTextEdit(widget);
        transit_data->setObjectName(QString::fromUtf8("transit_data"));
        transit_data->setGeometry(QRect(240, 426, 351, 111));
        receive_data = new QTextEdit(widget);
        receive_data->setObjectName(QString::fromUtf8("receive_data"));
        receive_data->setGeometry(QRect(160, 120, 521, 231));

        retranslateUi(widget);

        QMetaObject::connectSlotsByName(widget);
    } // setupUi

    void retranslateUi(QWidget *widget)
    {
        widget->setWindowTitle(QCoreApplication::translate("widget", "widget", nullptr));
        pushButton->setText(QCoreApplication::translate("widget", "\346\211\223\345\274\200\344\270\262\345\217\243", nullptr));
        pushButton_2->setText(QCoreApplication::translate("widget", "\345\205\263\351\227\255\344\270\262\345\217\243", nullptr));
        label->setText(QCoreApplication::translate("widget", "\346\263\242\347\211\271\347\216\207", nullptr));
        label_2->setText(QCoreApplication::translate("widget", "\344\270\262\345\217\243", nullptr));
        label_3->setText(QCoreApplication::translate("widget", "\346\216\245\345\217\227\346\225\260\346\215\256\346\263\242\345\275\242", nullptr));
        serialBox->setItemText(0, QCoreApplication::translate("widget", "COM3", nullptr));
        serialBox->setItemText(1, QCoreApplication::translate("widget", "COM9", nullptr));
        serialBox->setItemText(2, QCoreApplication::translate("widget", "COM15", nullptr));
        serialBox->setItemText(3, QCoreApplication::translate("widget", "COM16", nullptr));
        serialBox->setItemText(4, QCoreApplication::translate("widget", "COM4", nullptr));

        baudrateBox->setItemText(0, QCoreApplication::translate("widget", "9600", nullptr));
        baudrateBox->setItemText(1, QCoreApplication::translate("widget", "115200", nullptr));

        label_4->setText(QCoreApplication::translate("widget", "\345\217\221\351\200\201\346\225\260\346\215\256\345\217\243", nullptr));
    } // retranslateUi

};

namespace Ui {
    class widget: public Ui_widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
