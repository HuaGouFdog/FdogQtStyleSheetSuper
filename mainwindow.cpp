#include "mainwindow.h"
#include "ui_mainwindow.h"
#include<QDebug>
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->setWindowFlags(Qt::FramelessWindowHint);
}

MainWindow::~MainWindow()
{
    delete ui;
}
void MainWindow::mousePressEvent(QMouseEvent *event)
{
    if (event->button() == Qt::LeftButton)
    {
        m_point = event->pos();
        //isok = true;
       // qDebug()<<"确定";
    }
     //&& event->pos().y() < 22 && event->pos().y() > 0
}
void MainWindow::mouseMoveEvent(QMouseEvent *event)
{
   // if(isok = true)
    {
    move(event->pos() - m_point + pos());
    }
}
void MainWindow::mouseReleaseEvent(QMouseEvent *event)
{
    //isok = false;
    Q_UNUSED(event);
}
