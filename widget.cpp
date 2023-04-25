#include "widget.h"
#include "ui_widget.h"
#include <QDebug>

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
    qDebug()<<"aaaaaaaaaaaaaaaaaaaaaaaaa";
}

Widget::~Widget()
{
    delete ui;
}
