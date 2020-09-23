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
    explicit ColorForm(QWidget *parent = 0);
    ~ColorForm();

private:
    Ui::ColorForm *ui;
};

#endif // COLORFORM_H
