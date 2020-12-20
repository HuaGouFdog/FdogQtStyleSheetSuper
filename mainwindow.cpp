#include "mainwindow.h"
#include "ui_mainwindow.h"
#include<QDebug>
#include<QPoint>
#include<QClipboard>
#if _MSC_VER >= 1600
#pragma execution_character_set("utf-8")
#endif
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->setWindowFlags(Qt::FramelessWindowHint);
    ui->statusBar->showMessage(tr("欢迎使用QSS生成器     作者：花狗Fdog  QQ交流群：227421536  欢迎提出意见！"));
    ui->statusBar->setStyleSheet("color: rgb(226, 226, 226);");
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


void MainWindow::on_pushButton_5_clicked()
{
    if(iswiedet_1==true)
    {
        ui->widget_2->setVisible(false);
        iswiedet_1=false;
        ui->pushButton_5->setStyleSheet("border-style:solid;border-image: url(:/lib/hebing.png);background-color: rgb(120, 120, 120);color: rgb(219, 219, 219);");
        return;
    }
    ui->widget_2->setVisible(true);
    iswiedet_1=true;
    ui->pushButton_5->setStyleSheet("border-style:solid;border-image: url(:/lib/zhankai.png);background-color: rgb(120, 120, 120);color: rgb(219, 219, 219);");
}
void MainWindow::on_pushButton_6_clicked()
{
    if(iswiedet_2==true)
    {
        ui->widget_3->setVisible(false);
        iswiedet_2=false;
        ui->pushButton_6->setStyleSheet("border-style:solid;border-image: url(:/lib/hebing.png);background-color: rgb(120, 120, 120);color: rgb(219, 219, 219);");
        return;
    }
    ui->widget_3->setVisible(true);
    iswiedet_2=true;
    ui->pushButton_6->setStyleSheet("border-style:solid;border-image: url(:/lib/zhankai.png);background-color: rgb(120, 120, 120);color: rgb(219, 219, 219);");
}

void MainWindow::on_pushButton_7_clicked()
{
    if(iswiedet_3==true)
    {
        ui->widget_4->setVisible(false);
        iswiedet_3=false;
        ui->pushButton_7->setStyleSheet("border-style:solid;border-image: url(:/lib/hebing.png);background-color: rgb(120, 120, 120);color: rgb(219, 219, 219);");
        return;
    }
    ui->widget_4->setVisible(true);
    iswiedet_3=true;
    ui->pushButton_7->setStyleSheet("border-style:solid;border-image: url(:/lib/zhankai.png);background-color: rgb(120, 120, 120);color: rgb(219, 219, 219);");
}

void MainWindow::on_pushButton_8_clicked()
{
    if(iswiedet_4==true)
    {
        ui->widget_5->setVisible(false);
        iswiedet_4=false;
        ui->pushButton_8->setStyleSheet("border-style:solid;border-image: url(:/lib/hebing.png);background-color: rgb(120, 120, 120);color: rgb(219, 219, 219);");
        return;
    }
    ui->widget_5->setVisible(true);
    iswiedet_4=true;
    ui->pushButton_8->setStyleSheet("border-style:solid;border-image: url(:/lib/zhankai.png);background-color: rgb(120, 120, 120);color: rgb(219, 219, 219);");
}


void MainWindow::on_pushButton_12_clicked()
{
    QClipboard *clip=QApplication::clipboard();
    clip->setText(ui->textEdit->toPlainText());
}

void MainWindow::on_pushButton_16_clicked()
{
    ui->textEdit->setStyleSheet("font: 75 12pt \"DejaVu Sans Mono\";font-weight: bold;");
    ui->textEdit->append(":hover\n{\n\n}");
}

void MainWindow::on_pushButton_17_clicked()
{
    ui->textEdit->setStyleSheet("font: 75 12pt \"DejaVu Sans Mono\";font-weight: bold;");
    ui->textEdit->append(":pressed\n{\n\n}");
}

void MainWindow::on_pushButton_30_clicked()
{
    //将代码发送给按钮
    ui->pushButton_10->setStyleSheet(ui->textEdit->toPlainText());
}

void MainWindow::PrintLogMsg_font(QString msg)
{
    ui->lineEdit->setText(msg);
    QString str = QString("background:%1;border-radius:4px;").arg(msg);
    ui->pushButton_13->setStyleSheet(str);
}
void MainWindow::PrintLogMsg_backgroud(QString msg)
{
    ui->lineEdit_2->setText(msg);
    QString str = QString("background:%1;border-radius:4px;").arg(msg);
    ui->pushButton_14->setStyleSheet(str);
}

void MainWindow::PrintLogMsg_border(QString msg)
{
    ui->lineEdit_3->setText(msg);
    QString str = QString("background:%1;border-radius:4px;").arg(msg);
    ui->pushButton_15->setStyleSheet(str);
}

void MainWindow::on_pushButton_13_clicked() //字体颜色
{
    cp = new ColorForm(0,ui->lineEdit->text());
    cp->show();
    connect(cp,SIGNAL(GetUdpLogMsg(QString)),this,SLOT(PrintLogMsg_font(QString)));
}

void MainWindow::on_pushButton_14_clicked() //背景颜色
{

    cp = new ColorForm(0,ui->lineEdit_2->text());
    cp->show();
    connect(cp,SIGNAL(GetUdpLogMsg(QString)),this,SLOT(PrintLogMsg_backgroud(QString)));
}

void MainWindow::on_pushButton_15_clicked()//边框颜色
{
    cp = new ColorForm(0,ui->lineEdit_3->text());
    cp->show();
    connect(cp,SIGNAL(GetUdpLogMsg(QString)),this,SLOT(PrintLogMsg_border(QString)));
}
