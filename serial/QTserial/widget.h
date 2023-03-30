#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include<QSerialPort>
#include<QSerialPortInfo>//串口头文件
#include<QMessageBox>
#include<QDebug>
#include <QTextBlock>

/*
 * 画图的头文件，qcharts绘图
#include<QtCharts/QDateTimeAxis>
#include<QtCharts/QSplineSeries>
#include<QtCharts/QValueAxis>
#include<QTimer>
#include<QtCharts/QChart>

#include<QDateTime>
*/

QT_BEGIN_NAMESPACE

namespace Ui { class widget; }

QT_END_NAMESPACE


extern qreal ax;


class widget : public QWidget
{
    Q_OBJECT

public:
    widget(QWidget *parent = nullptr);
    ~widget();
    QSerialPort* serialPort;

     void data_plot();
private slots:
    //槽函数
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_transit_data_textChanged();


private:
    Ui::widget *ui;

};


#endif // WIDGET_H
