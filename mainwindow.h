#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "colorform.h"
#include<QMouseEvent>
#include<QPoint>
#include<QString>
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
    void on_pushButton_5_clicked();

    void on_pushButton_7_clicked();

    void on_pushButton_8_clicked();

    void on_pushButton_6_clicked();

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

private:
    Ui::MainWindow *ui;
    ColorForm * cp;
};

#endif // MAINWINDOW_H
