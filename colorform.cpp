#include "colorform.h"
#include "ui_colorform.h"

ColorForm::ColorForm(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ColorForm)
{
    ui->setupUi(this);
}

ColorForm::~ColorForm()
{
    delete ui;
}
