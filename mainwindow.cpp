#include "mainwindow.h"
#include "ui_mainwindow.h"
#include<QDebug>
#include<QPoint>
#include<QClipboard>
#include"qssstyle.h"
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
    ui->textEdit->setStyleSheet("font: 75 12pt \"DejaVu Sans Mono\";font-weight: bold;");
    ui->pushButton_11->setChecked(true);
    myMapper = new QSignalMapper(this);
    QPushButton * button[18]={ui->pushButton_11,ui->pushButton_23,ui->pushButton_24,ui->pushButton_25,ui->pushButton_26,
                             ui->pushButton_31,ui->pushButton_32,ui->pushButton_33,ui->pushButton_34,ui->pushButton_35,
                             ui->pushButton_36,ui->pushButton_37,ui->pushButton_38,ui->pushButton_39,ui->pushButton_40,
                             ui->pushButton_42,ui->pushButton_43,ui->pushButton_44};
   for(int i = 0;i<18;i++)
   {
        connect(button[i], SIGNAL(clicked(bool)), myMapper, SLOT(map()));
        myMapper->setMapping(button[i], i);
    }
   connect(myMapper, SIGNAL(mapped(int)), this, SLOT(setPushButton(int)));
   //设置初始qss
   ui->label_29->setStyleSheet("background-color:#FFFFFF;border-color:#999999;color:#EEEEEE;");
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

void MainWindow::setPushButton(int index)
{
    //qDebug()<<"  序号："<<index+2;
    ui->stackedWidget->setCurrentIndex(index);
    ui->stackedWidget_2->setCurrentIndex(index);
    switch (index) {
    case 0:
        ui->spinBox_14->setValue(ui->label_29->height());
        ui->spinBox_15->setValue(ui->label_29->width());
        break;
    default:
        break;
    }
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
    ui->label_29->setStyleSheet(ui->textEdit->toPlainText());
}

void MainWindow::PrintLogMsg_font(QString msg)
{
    ui->lineEdit_70->setText(msg);
    QString str = QString("background:%1;border-radius:4px;").arg(msg);
    ui->pushButton_113->setStyleSheet(str);
}
void MainWindow::PrintLogMsg_backgroud(QString msg)
{
    ui->lineEdit_71->setText(msg);
    QString str = QString("background:%1;border-radius:4px;").arg(msg);
    ui->pushButton_114->setStyleSheet(str);
}

void MainWindow::PrintLogMsg_border(QString msg)
{
    ui->lineEdit_69->setText(msg);
    QString str = QString("background:%1;border-radius:4px;").arg(msg);
    ui->pushButton_112->setStyleSheet(str);
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



void MainWindow::on_pushButton_114_clicked()
{
    cp = new ColorForm(0,ui->lineEdit_71->text());
    cp->show();
    connect(cp,SIGNAL(GetUdpLogMsg(QString)),this,SLOT(PrintLogMsg_backgroud(QString)));
}

void MainWindow::on_pushButton_113_clicked()
{
    cp = new ColorForm(0,ui->lineEdit_70->text());
    cp->show();
    connect(cp,SIGNAL(GetUdpLogMsg(QString)),this,SLOT(PrintLogMsg_font(QString)));
}

void MainWindow::on_pushButton_112_clicked()
{
    cp = new ColorForm(0,ui->lineEdit_69->text());
    cp->show();
    connect(cp,SIGNAL(GetUdpLogMsg(QString)),this,SLOT(PrintLogMsg_border(QString)));
}

void MainWindow::on_spinBox_14_valueChanged(int arg1)
{
    //先判断用户选择的那个控件
    //获取该原值
    //将改的值写入该控件 判断在第几页
    int page = ui->stackedWidget->currentIndex();
    switch (page) {
    case 0:
            ui->label_29->setMinimumHeight(arg1);
        break;
    case 1:
            ui->pushButton_10->setMinimumHeight(arg1);
        break;
    case 2:
            ui->toolButton_2->setMinimumHeight(arg1);
        break;
    case 3:
            ui->radioButton_2->setMinimumHeight(arg1);
        break;
    case 4:
            ui->checkBox_2->setMinimumHeight(arg1);
        break;
    case 5:
            ui->buttonBox_2->setMinimumHeight(arg1);
        break;
    case 6:
            ui->horizontalScrollBar_2->setMinimumHeight(arg1);
        break;
    case 7:
            ui->verticalScrollBar_2->setMinimumHeight(arg1);
        break;
    case 8:
            ui->horizontalSlider_2->setMinimumHeight(arg1);
        break;
    case 9:
            ui->verticalSlider_2->setMinimumHeight(arg1);
        break;
    case 10:
            ui->lineEdit_4->setMinimumHeight(arg1);
        break;
    case 11:
            ui->textEdit_3->setMinimumHeight(arg1);
        break;
    case 12:
            ui->spinBox_16->setMinimumHeight(arg1);
        break;
    case 13:
            ui->progressBar_2->setMinimumHeight(arg1);
        break;
    case 14:
            ui->comboBox_7->setMinimumHeight(arg1);
        break;
    case 15:
            ui->groupBox->setMinimumHeight(arg1);
        break;
    case 16:
            ui->toolBox->setMinimumHeight(arg1);
        break;
    case 17:
            ui->tabWidget->setMinimumHeight(arg1);
        break;
    default:
        break;
    }
    //当用户离开后，恢复原值
}

void MainWindow::on_spinBox_15_valueChanged(int arg1)
{
    int page = ui->stackedWidget->currentIndex();
    switch (page) {
    case 0:
            ui->label_29->setMinimumWidth(arg1);
        break;
    case 1:
            ui->pushButton_10->setMinimumWidth(arg1);
        break;
    case 2:
            ui->toolButton_2->setMinimumWidth(arg1);
        break;
    case 3:
            ui->radioButton_2->setMinimumWidth(arg1);
        break;
    case 4:
            ui->checkBox_2->setMinimumWidth(arg1);
        break;
    case 5:
            ui->buttonBox_2->setMinimumWidth(arg1);
        break;
    case 6:
            ui->horizontalScrollBar_2->setMinimumWidth(arg1);
        break;
    case 7:
            ui->verticalScrollBar_2->setMinimumWidth(arg1);
        break;
    case 8:
            ui->horizontalSlider_2->setMinimumWidth(arg1);
        break;
    case 9:
            ui->verticalSlider_2->setMinimumWidth(arg1);
        break;
    case 10:
            ui->lineEdit_4->setMinimumWidth(arg1);
        break;
    case 11:
            ui->textEdit_3->setMinimumWidth(arg1);
        break;
    case 12:
            ui->spinBox_16->setMinimumWidth(arg1);
        break;
    case 13:
            ui->progressBar_2->setMinimumWidth(arg1);
        break;
    case 14:
            ui->comboBox_7->setMinimumWidth(arg1);
        break;
    case 15:
            ui->groupBox->setMinimumWidth(arg1);
        break;
    case 16:
            ui->toolBox->setMinimumWidth(arg1);
        break;
    case 17:
            ui->tabWidget->setMinimumWidth(arg1);
        break;
    default:
        break;
    }
}


//void MainWindow::on_pushButton_5_clicked()
//{
//    if(iswiedet_1==true)
//    {
//        ui->widget_2->setVisible(false);
//        iswiedet_1=false;
//        ui->pushButton_5->setStyleSheet("border-style:solid;border-image: url(:/lib/hebing.png);background-color: rgb(120, 120, 120);color: rgb(219, 219, 219);");
//        return;
//    }
//    ui->widget_2->setVisible(true);
//    iswiedet_1=true;
//    ui->pushButton_5->setStyleSheet("border-style:solid;border-image: url(:/lib/zhankai.png);background-color: rgb(120, 120, 120);color: rgb(219, 219, 219);");
//}
//void MainWindow::on_pushButton_6_clicked()
//{
//    if(iswiedet_2==true)
//    {
//        ui->widget_3->setVisible(false);
//        iswiedet_2=false;
//        ui->pushButton_6->setStyleSheet("border-style:solid;border-image: url(:/lib/hebing.png);background-color: rgb(120, 120, 120);color: rgb(219, 219, 219);");
//        return;
//    }
//    ui->widget_3->setVisible(true);
//    iswiedet_2=true;
//    ui->pushButton_6->setStyleSheet("border-style:solid;border-image: url(:/lib/zhankai.png);background-color: rgb(120, 120, 120);color: rgb(219, 219, 219);");
//}

//void MainWindow::on_pushButton_7_clicked()
//{
//    if(iswiedet_3==true)
//    {
//        ui->widget_4->setVisible(false);
//        iswiedet_3=false;
//        ui->pushButton_7->setStyleSheet("border-style:solid;border-image: url(:/lib/hebing.png);background-color: rgb(120, 120, 120);color: rgb(219, 219, 219);");
//        return;
//    }
//    ui->widget_4->setVisible(true);
//    iswiedet_3=true;
//    ui->pushButton_7->setStyleSheet("border-style:solid;border-image: url(:/lib/zhankai.png);background-color: rgb(120, 120, 120);color: rgb(219, 219, 219);");
//}

//void MainWindow::on_pushButton_8_clicked()
//{
//    if(iswiedet_4==true)
//    {
//        ui->widget_5->setVisible(false);
//        iswiedet_4=false;
//        ui->pushButton_8->setStyleSheet("border-style:solid;border-image: url(:/lib/hebing.png);background-color: rgb(120, 120, 120);color: rgb(219, 219, 219);");
//        return;
//    }
//    ui->widget_5->setVisible(true);
//    iswiedet_4=true;
//    ui->pushButton_8->setStyleSheet("border-style:solid;border-image: url(:/lib/zhankai.png);background-color: rgb(120, 120, 120);color: rgb(219, 219, 219);");
//}

void MainWindow::on_lineEdit_71_textChanged(const QString &arg1)
{
    ui->textEdit->append(qssstyle::background_color(arg1));
    ui->label_29->setStyleSheet(qssstyle::background_color(arg1));
}

void MainWindow::on_lineEdit_70_textChanged(const QString &arg1)
{
    ui->textEdit->append(qssstyle::fontcolor(arg1));
    ui->label_29->setStyleSheet(qssstyle::fontcolor(arg1));
}

void MainWindow::on_lineEdit_69_textChanged(const QString &arg1)
{
    ui->textEdit->append(qssstyle::border_color(arg1));
    ui->label_29->setStyleSheet(qssstyle::border_color(arg1));
}

void MainWindow::on_fontComboBox_currentIndexChanged(const QString &arg1)
{
    ui->textEdit->append(qssstyle::font_size(ui->spinBox_90->text(),arg1));
    ui->label_29->setStyleSheet(qssstyle::font_size(ui->spinBox_90->text(),arg1));
}

void MainWindow::on_spinBox_90_valueChanged(const QString &arg1)
{
    ui->textEdit->append(qssstyle::font_size(arg1,ui->fontComboBox->currentText()));
    ui->label_29->setStyleSheet(qssstyle::font_size(arg1,ui->fontComboBox->currentText()));
}


void MainWindow::on_comboBox_6_currentIndexChanged(const QString &arg1)
{
    ui->textEdit->append(qssstyle::text_align(arg1));
    ui->label_29->setStyleSheet(qssstyle::text_align(arg1));
}

void MainWindow::on_comboBox_8_currentIndexChanged(const QString &arg1)
{
    ui->textEdit->append(qssstyle::font_style(arg1));
    ui->label_29->setStyleSheet(qssstyle::font_style(arg1));
}

void MainWindow::on_comboBox_11_currentIndexChanged(const QString &arg1)
{
    ui->textEdit->append(qssstyle::text_decoration(arg1));
    ui->label_29->setStyleSheet(qssstyle::text_decoration(arg1));
}


void MainWindow::on_comboBox_10_currentIndexChanged(const QString &arg1)
{
    ui->textEdit->append(qssstyle::font_weight(arg1));
    ui->label_29->setStyleSheet(qssstyle::font_weight(arg1));
}

void MainWindow::on_comboBox_9_currentIndexChanged(const QString &arg1)
{
    ui->textEdit->append(qssstyle::border_style(arg1));
    ui->label_29->setStyleSheet(qssstyle::border_style(arg1));
}

void MainWindow::on_spinBox_13_valueChanged(const QString &arg1)
{
    ui->textEdit->append(qssstyle::border_width(arg1));
    ui->label_29->setStyleSheet(qssstyle::border_width(arg1));
}

void MainWindow::on_spinBox_17_valueChanged(const QString &arg1)
{
    ui->textEdit->append(qssstyle::border_radius(arg1));
    ui->label_29->setStyleSheet(qssstyle::border_radius(arg1));
}
