#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "colorform.h"
#include<QMouseEvent>
#include<QPoint>
#include<QString>
#include<QButtonGroup>
#include<QSignalMapper>
namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT
    QPoint m_point;                         //鼠标坐标
    bool isok = false;                      //判断是否标签栏
//是否展开
    bool iswiedet_1=true;
    bool iswiedet_2=true;
    bool iswiedet_3=true;
    bool iswiedet_4=true;
    QSignalMapper * myMapper;
public:   
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    void mousePressEvent(QMouseEvent *event);
    void mouseMoveEvent(QMouseEvent *event);
    void mouseReleaseEvent(QMouseEvent *event);
    QString str_1 = QString("color: rgba(%1, %2, %3,%4);");
    QString str_2 = QString("background-color:rgba(%1,%2,%3,%4);");
    QString str_3 = QString("border-color:rgba(%1,%2,%3,%4);");
private slots:
    void setPushButton(int index);//列表效果
//    void on_pushButton_5_clicked();

//    void on_pushButton_7_clicked();

//    void on_pushButton_8_clicked();

//    void on_pushButton_6_clicked();

    void on_pushButton_12_clicked();

    void on_pushButton_16_clicked();

    void on_pushButton_17_clicked();

    void on_pushButton_30_clicked();

private slots:
    void PrintLogMsg_font(QString msg);
    void PrintLogMsg_backgroud(QString msg);
    void PrintLogMsg_border(QString msg);
    void on_pushButton_13_clicked();
    void on_pushButton_14_clicked();
    void on_pushButton_15_clicked();

    void on_pushButton_11_clicked();

    void on_pushButton_23_clicked();

    void on_spinBox_14_valueChanged(int arg1);


    void on_pushButton_45_clicked();

    void on_pushButton_46_clicked();

    void on_pushButton_47_clicked();

    void on_spinBox_15_valueChanged(int arg1);

    void on_pushButton_24_clicked();

    void on_pushButton_25_clicked();

    void on_pushButton_26_clicked();

    void on_pushButton_31_clicked();

    void on_pushButton_32_clicked();

    void on_pushButton_33_clicked();

    void on_pushButton_34_clicked();

    void on_pushButton_35_clicked();

    void on_pushButton_36_clicked();

    void on_pushButton_37_clicked();

    void on_pushButton_38_clicked();

    void on_pushButton_39_clicked();

    void on_pushButton_40_clicked();

    void on_pushButton_42_clicked();

    void on_pushButton_43_clicked();

    void on_pushButton_44_clicked();

private:
    Ui::MainWindow *ui;
    ColorForm * cp;
    QButtonGroup * Group;
};

#endif // MAINWINDOW_H
