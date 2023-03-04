#include "mainwindow.h"
#include<QPushButton>
#include "mypushbutton.h"
#include<QtDebug>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    //这里的这个是初始化列表，是表示构造带有参数的一个函数，构造函数带有参数
{
    /*我的封装好的类函数
    mypushButton *atr = new mypushButton;
    atr->setParent(this);
    atr->setText("我的按钮");
    atr->show();
    */

    QPushButton *btl = new QPushButton;
    btl->setParent(this);
    btl->setText("设置波特率");
    btl->setFixedSize(80,40);//设置按钮的大小

    //第二个按钮
    QPushButton * kaiguan = new QPushButton(this);
    kaiguan->setParent(this);
    kaiguan->setText("打开串口");
    kaiguan->move(100,100);
    //重置窗口的大小
   // resize(100,200);


}

MainWindow::~MainWindow()
{

}

