#include "mainwindow.h"
#include "mypushbutton.h"
#include <QApplication>//应用程序类的头文件

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;

    //打印出输出流的函数
    //qDebug() << "My name is ";


    w.show();

    //应用程序对象进入消息循环的机制,不会跳出程序的运行
    return a.exec();
}
