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
    ui->textEdit->setStyleSheet("font: 75 12pt \"DejaVu Sans Mono\";font-weight: bold;");
    Group = new QButtonGroup(this);
    Group->addButton(ui->pushButton_11,1);
    Group->addButton(ui->pushButton_23,2);
    Group->addButton(ui->pushButton_24,3);
    Group->addButton(ui->pushButton_25,4);
    Group->addButton(ui->pushButton_26,5);
    Group->addButton(ui->pushButton_31,6);
    Group->addButton(ui->pushButton_32,7);
    Group->addButton(ui->pushButton_33,8);
    Group->addButton(ui->pushButton_34,9);
    Group->addButton(ui->pushButton_35,10);
    Group->addButton(ui->pushButton_36,11);
    Group->addButton(ui->pushButton_37,12);
    Group->addButton(ui->pushButton_38,13);
    Group->addButton(ui->pushButton_39,14);
    Group->addButton(ui->pushButton_40,15);
    Group->addButton(ui->pushButton_42,16);
    Group->addButton(ui->pushButton_43,17);
    Group->addButton(ui->pushButton_44,18);
    Group->setExclusive(false);
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
    ui->pushButton_10->setStyleSheet(str);
}
void MainWindow::PrintLogMsg_backgroud(QString msg)
{
    ui->lineEdit_2->setText(msg);
    QString str = QString("background:%1;border-radius:4px;").arg(msg);
    ui->pushButton_46->setStyleSheet(str);
}

void MainWindow::PrintLogMsg_border(QString msg)
{
    ui->lineEdit_3->setText(msg);
    QString str = QString("background:%1;border-radius:4px;").arg(msg);
    ui->pushButton_47->setStyleSheet(str);
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

void MainWindow::on_pushButton_11_clicked()
{
    ui->spinBox_14->setValue(ui->label_29->height());
    ui->spinBox_15->setValue(ui->label_29->width());
    ui->stackedWidget->setCurrentIndex(0);
    ui->stackedWidget_2->setCurrentIndex(0);
    //ui->textEdit->setText("#table{\n}");
}

void MainWindow::on_pushButton_23_clicked()
{
    ui->spinBox_14->setValue(ui->pushButton_10->height());
    ui->spinBox_15->setValue(ui->pushButton_10->width());
    ui->stackedWidget->setCurrentIndex(1);
    ui->stackedWidget_2->setCurrentIndex(1);
}


void MainWindow::on_pushButton_45_clicked()
{
    cp = new ColorForm(0,ui->lineEdit_7->text());
    cp->show();
    connect(cp,SIGNAL(GetUdpLogMsg(QString)),this,SLOT(PrintLogMsg_font(QString)));
}

void MainWindow::on_pushButton_46_clicked()
{
    cp = new ColorForm(0,ui->lineEdit_6->text());
    cp->show();
    connect(cp,SIGNAL(GetUdpLogMsg(QString)),this,SLOT(PrintLogMsg_font(QString)));
}

void MainWindow::on_pushButton_47_clicked()
{
    cp = new ColorForm(0,ui->lineEdit_5->text());
    cp->show();
    connect(cp,SIGNAL(GetUdpLogMsg(QString)),this,SLOT(PrintLogMsg_font(QString)));
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

void MainWindow::on_pushButton_24_clicked()
{
    ui->spinBox_14->setValue(ui->toolButton_2->height());
    ui->spinBox_15->setValue(ui->toolButton_2->width());
    ui->stackedWidget->setCurrentIndex(3);
    ui->stackedWidget_2->setCurrentIndex(3);
}

void MainWindow::on_pushButton_25_clicked()
{
    ui->spinBox_14->setValue(ui->radioButton_2->height());
    ui->spinBox_15->setValue(ui->radioButton_2->width());
    ui->stackedWidget->setCurrentIndex(4);
    ui->stackedWidget_2->setCurrentIndex(4);
}

void MainWindow::on_pushButton_26_clicked()
{
    ui->spinBox_14->setValue(ui->checkBox_2->height());
    ui->spinBox_15->setValue(ui->checkBox_2->width());
    ui->stackedWidget->setCurrentIndex(5);
    ui->stackedWidget_2->setCurrentIndex(5);
}

void MainWindow::on_pushButton_31_clicked()
{
    ui->spinBox_14->setValue(ui->buttonBox_2->height());
    ui->spinBox_15->setValue(ui->buttonBox_2->width());
    ui->stackedWidget->setCurrentIndex(6);
    ui->stackedWidget_2->setCurrentIndex(6);
}

void MainWindow::on_pushButton_32_clicked()
{
    ui->spinBox_14->setValue(ui->horizontalScrollBar_2->height());
    ui->spinBox_15->setValue(ui->horizontalScrollBar_2->width());
    ui->stackedWidget->setCurrentIndex(7);
    ui->stackedWidget_2->setCurrentIndex(7);
}

void MainWindow::on_pushButton_33_clicked()
{
    ui->spinBox_14->setValue(ui->verticalScrollBar_2->height());
    ui->spinBox_15->setValue(ui->verticalScrollBar_2->width());
    ui->stackedWidget->setCurrentIndex(8);
    ui->stackedWidget_2->setCurrentIndex(8);
}

void MainWindow::on_pushButton_34_clicked()
{
    ui->spinBox_14->setValue(ui->horizontalSlider_2->height());
    ui->spinBox_15->setValue(ui->horizontalSlider_2->width());
    ui->stackedWidget->setCurrentIndex(9);
    ui->stackedWidget_2->setCurrentIndex(9);
}

void MainWindow::on_pushButton_35_clicked()
{
    ui->spinBox_14->setValue(ui->verticalSlider_2->height());
    ui->spinBox_15->setValue(ui->verticalSlider_2->width());
    ui->stackedWidget->setCurrentIndex(10);
    ui->stackedWidget_2->setCurrentIndex(10);
}

void MainWindow::on_pushButton_36_clicked()
{
    ui->spinBox_14->setValue(ui->lineEdit_4->height());
    ui->spinBox_15->setValue(ui->lineEdit_4->width());
    ui->stackedWidget->setCurrentIndex(11);
    ui->stackedWidget_2->setCurrentIndex(11);
}

void MainWindow::on_pushButton_37_clicked()
{
    ui->spinBox_14->setValue(ui->textEdit_3->height());
    ui->spinBox_15->setValue(ui->textEdit_3->width());
    ui->stackedWidget->setCurrentIndex(12);
    ui->stackedWidget_2->setCurrentIndex(12);
}

void MainWindow::on_pushButton_38_clicked()
{
    ui->spinBox_14->setValue(ui->spinBox_16->height());
    ui->spinBox_15->setValue(ui->spinBox_16->width());
    ui->stackedWidget->setCurrentIndex(13);
    ui->stackedWidget_2->setCurrentIndex(13);
}

void MainWindow::on_pushButton_39_clicked()
{
    ui->spinBox_14->setValue(ui->progressBar_2->height());
    ui->spinBox_15->setValue(ui->progressBar_2->width());
    ui->stackedWidget->setCurrentIndex(14);
    ui->stackedWidget_2->setCurrentIndex(14);
}

void MainWindow::on_pushButton_40_clicked()
{
    ui->spinBox_14->setValue(ui->comboBox_7->height());
    ui->spinBox_15->setValue(ui->comboBox_7->width());
    ui->stackedWidget->setCurrentIndex(15);
    ui->stackedWidget_2->setCurrentIndex(15);
}

void MainWindow::on_pushButton_42_clicked()
{
    ui->spinBox_14->setValue(ui->groupBox->height());
    ui->spinBox_15->setValue(ui->groupBox->width());
    ui->stackedWidget->setCurrentIndex(16);
    ui->stackedWidget_2->setCurrentIndex(16);
}

void MainWindow::on_pushButton_43_clicked()
{
    ui->spinBox_14->setValue(ui->toolBox->height());
    ui->spinBox_15->setValue(ui->toolBox->width());
    ui->stackedWidget->setCurrentIndex(17);
    ui->stackedWidget_2->setCurrentIndex(17);
}

void MainWindow::on_pushButton_44_clicked()
{
    ui->spinBox_14->setValue(ui->tabWidget->height());
    ui->spinBox_15->setValue(ui->tabWidget->width());
    ui->stackedWidget->setCurrentIndex(18);
    ui->stackedWidget_2->setCurrentIndex(18);
}
