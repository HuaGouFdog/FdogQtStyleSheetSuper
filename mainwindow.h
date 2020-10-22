#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include<QMouseEvent>
#include<QPoint>
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

private slots:
    void on_pushButton_5_clicked();

    void on_pushButton_7_clicked();

    void on_pushButton_8_clicked();

    void on_pushButton_6_clicked();

    void on_pushButton_10_clicked();

    void on_pushButton_11_clicked();

    void on_pushButton_12_clicked();

    void on_pushButton_16_clicked();

    void on_pushButton_17_clicked();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
