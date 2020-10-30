#include "colorform.h"
#include "ui_colorform.h"
#include<QDebug>
ColorForm::ColorForm(QWidget *parent,QString ColorInfo) :
    QWidget(parent),
    ui(new Ui::ColorForm)
{
    ui->setupUi(this);
    //获取十六位颜色进行解析并显示
    //1.要当前文本框数据
    //2.转换成对应的RGB数据
    //3.并显示在旧的数据
    qDebug()<<"NIhao";
    int R = ColorInfo.mid(1,2).toInt(NULL,16);
    int G = ColorInfo.mid(3,2).toInt(NULL,16);
    int B = ColorInfo.mid(5,2).toInt(NULL,16);
    QString str = QString("background:rgb(%1,%2,%3)").arg(R).arg(G).arg(B);
    ui->label_4->setStyleSheet(str);
    qDebug()<<R;
    qDebug()<<G;
    qDebug()<<B;
}

ColorForm::~ColorForm()
{
    delete ui;
}


void ColorForm::on_pushButton_clicked() //确定
{
    emit GetUdpLogMsg(ui->lineEdit_4->text());
    this->close();
}

void ColorForm::on_pushButton_2_clicked() //关闭
{
    this->close();
}

void ColorForm::on_horizontalSlider_valueChanged(int value)
{
    ui->lineEdit->setText(QString::number(value));
    QString str = QString("background:rgb(%1,%2,%3)").arg(ui->horizontalSlider->value()).arg(ui->horizontalSlider_2->value()).arg(ui->horizontalSlider_3->value());
    ui->label_3->setStyleSheet(str);

    QString str_2 = QString("#%1%2%3").arg(ui->horizontalSlider->value(),2,16,QChar('0')).arg(ui->horizontalSlider_2->value(),2,16,QChar('0')).arg(ui->horizontalSlider_3->value(),2,16,QChar('0'));
    qDebug()<<str_2;
    ui->lineEdit_4->setText(str_2);
}

void ColorForm::on_horizontalSlider_2_valueChanged(int value)
{
    ui->lineEdit_2->setText(QString::number(value));
    QString str = QString("background:rgb(%1,%2,%3)").arg(ui->horizontalSlider->value()).arg(ui->horizontalSlider_2->value()).arg(ui->horizontalSlider_3->value());
    ui->label_3->setStyleSheet(str);

    QString str_2 = QString("#%1%2%3").arg(ui->horizontalSlider->value(),2,16,QChar('0')).arg(ui->horizontalSlider_2->value(),2,16,QChar('0')).arg(ui->horizontalSlider_3->value(),2,16,QChar('0'));
    qDebug()<<str_2;
    ui->lineEdit_4->setText(str_2);
}

void ColorForm::on_horizontalSlider_3_valueChanged(int value)
{
    ui->lineEdit_3->setText(QString::number(value));
    QString str = QString("background:rgb(%1,%2,%3)").arg(ui->horizontalSlider->value()).arg(ui->horizontalSlider_2->value()).arg(ui->horizontalSlider_3->value());
    ui->label_3->setStyleSheet(str);

    QString str_2 = QString("#%1%2%3").arg(ui->horizontalSlider->value(),2,16,QChar('0')).arg(ui->horizontalSlider_2->value(),2,16,QChar('0')).arg(ui->horizontalSlider_3->value(),2,16,QChar('0'));
    qDebug()<<str_2;
    ui->lineEdit_4->setText(str_2);
}

