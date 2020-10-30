#ifndef COLORFORM_H
#define COLORFORM_H

#include <QWidget>

namespace Ui {
class ColorForm;
}

class ColorForm : public QWidget
{
    Q_OBJECT

public:
    explicit ColorForm(QWidget *parent = 0,QString ColorInfo = "#FFFFFF");
    ~ColorForm();
signals:
    void GetUdpLogMsg(QString msg);

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_horizontalSlider_valueChanged(int value);

    void on_horizontalSlider_2_valueChanged(int value);

    void on_horizontalSlider_3_valueChanged(int value);

private:
    Ui::ColorForm *ui;
};

#endif // COLORFORM_H
