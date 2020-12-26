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
    void on_spinBox_14_valueChanged(int arg1);
    void on_pushButton_114_clicked();
    void on_pushButton_113_clicked();
    void on_pushButton_112_clicked();
    void on_spinBox_15_valueChanged(int arg1);
    void on_lineEdit_71_textChanged(const QString &arg1);

    void on_lineEdit_70_textChanged(const QString &arg1);

    void on_lineEdit_69_textChanged(const QString &arg1);



    void on_fontComboBox_currentIndexChanged(const QString &arg1);

    void on_spinBox_90_valueChanged(const QString &arg1);

    void on_comboBox_6_currentIndexChanged(const QString &arg1);

    void on_comboBox_8_currentIndexChanged(const QString &arg1);

    void on_comboBox_11_currentIndexChanged(const QString &arg1);



    void on_comboBox_10_currentIndexChanged(const QString &arg1);

    void on_comboBox_9_currentIndexChanged(const QString &arg1);

    void on_spinBox_13_valueChanged(const QString &arg1);

    void on_spinBox_17_valueChanged(const QString &arg1);

private:
    Ui::MainWindow *ui;
    ColorForm * cp;
    QButtonGroup * Group;
};

#endif // MAINWINDOW_H
