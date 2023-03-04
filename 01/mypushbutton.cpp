#include "mypushbutton.h"
#include<QPushButton>
#include<QDebug>

mypushButton::mypushButton(QWidget *parent) : QPushButton(parent)
{

   qDebug()<< "my函数的构造";

}

mypushButton::~mypushButton()

{
    qDebug()<< "my函数的析构";

}
