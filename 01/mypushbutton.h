#ifndef MYPUSHBUTTON_H
#define MYPUSHBUTTON_H

#include <QWidget>
#include<QPushButton>

class mypushButton : public QPushButton
{
    Q_OBJECT
public:
    explicit mypushButton(QWidget *parent = nullptr);

    ~mypushButton();

signals:

};

#endif // MYPUSHBUTTON_H
