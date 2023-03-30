#include "widget.h"
#include "ui_widget.h"

widget::widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::widget)
{
    ui->setupUi(this);

    QStringList serialNameport;

    this->setWindowTitle("serial");

    serialPort = new QSerialPort;//类对象指针
    foreach (const QSerialPortInfo &inf0, QSerialPortInfo::availablePorts())
    {
            serialNameport<<inf0.portName();
    }
    ui->serialBox->addItems(serialNameport);


   // data_plot();


/*进来数据以后画出曲线*/
connect(serialPort,&QSerialPort::readyRead,[=](){
     //写下串口的数据
    widget::data_plot();
    //更新曲线的数据
});

}


void widget::data_plot()
{
    /*绘制串口的接收曲线图*/



    QByteArray Read_buf = serialPort->readAll();    //读取串口数据

    ui->receive_data->append(Read_buf);

}


widget::~widget()
{
    delete ui;
}

void widget::on_pushButton_clicked()//打开串口
{

        /* 串口设置 */
        serialPort->setPortName(ui->serialBox->currentText());
        serialPort->setBaudRate(ui->baudrateBox->currentText().toInt());//波特率的设置
        serialPort->setDataBits(QSerialPort::Data8);
        serialPort->setStopBits(QSerialPort::OneStop);//8位数据位，1个停止位
        serialPort->setParity(QSerialPort::NoParity);  //没有校验位

        /* 打开串口提示框 */
        if (true == serialPort->open(QIODevice::ReadWrite))
        {
            QMessageBox::information(this, "提示", "串口打开成功");

        }
        else
        {
            QMessageBox::critical(this, "提示", "串口打开失败");
        }

}

void widget::on_pushButton_2_clicked()//关闭串口
{

    serialPort->close();
}


void widget::on_transit_data_textChanged()
{
    //输入了值以后发送这个数据
    /*这里代码区，串口发送数据*/
    //打印其内容
     qDebug() << ui->transit_data->toPlainText().mid(ui->transit_data->toPlainText().size()-1,1);//最后一个字符打印
     //serialPort->write("ui->transit_data->toPlainText().mid(ui->transit_data->toPlainText().size()-1,1)");
     serialPort->write("ON\n");
     //清除相关的数据
    if(ui->transit_data->document()->lineCount()>1)//当行数大于1行的时候
    {
        qDebug() << "串口满了";
        ui->transit_data->clear();
    }
}


