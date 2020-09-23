/********************************************************************************
** Form generated from reading UI file 'colorform.ui'
**
** Created by: Qt User Interface Compiler version 5.10.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_COLORFORM_H
#define UI_COLORFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ColorForm
{
public:

    void setupUi(QWidget *ColorForm)
    {
        if (ColorForm->objectName().isEmpty())
            ColorForm->setObjectName(QStringLiteral("ColorForm"));
        ColorForm->resize(400, 300);

        retranslateUi(ColorForm);

        QMetaObject::connectSlotsByName(ColorForm);
    } // setupUi

    void retranslateUi(QWidget *ColorForm)
    {
        ColorForm->setWindowTitle(QApplication::translate("ColorForm", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ColorForm: public Ui_ColorForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_COLORFORM_H
