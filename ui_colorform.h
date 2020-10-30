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
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ColorForm
{
public:
    QSlider *horizontalSlider;
    QSlider *horizontalSlider_2;
    QSlider *horizontalSlider_3;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QLineEdit *lineEdit_3;
    QLabel *label;
    QLabel *label_2;
    QLineEdit *lineEdit_4;
    QLabel *label_3;
    QLabel *label_4;
    QPushButton *pushButton;
    QPushButton *pushButton_2;

    void setupUi(QWidget *ColorForm)
    {
        if (ColorForm->objectName().isEmpty())
            ColorForm->setObjectName(QStringLiteral("ColorForm"));
        ColorForm->resize(317, 171);
        ColorForm->setStyleSheet(QLatin1String("#ColorForm\n"
"{\n"
"background-color: rgb(214, 214, 214);\n"
"}\n"
""));
        horizontalSlider = new QSlider(ColorForm);
        horizontalSlider->setObjectName(QStringLiteral("horizontalSlider"));
        horizontalSlider->setGeometry(QRect(10, 10, 121, 22));
        horizontalSlider->setMaximum(255);
        horizontalSlider->setPageStep(1);
        horizontalSlider->setOrientation(Qt::Horizontal);
        horizontalSlider_2 = new QSlider(ColorForm);
        horizontalSlider_2->setObjectName(QStringLiteral("horizontalSlider_2"));
        horizontalSlider_2->setGeometry(QRect(10, 40, 121, 22));
        horizontalSlider_2->setMaximum(255);
        horizontalSlider_2->setPageStep(1);
        horizontalSlider_2->setOrientation(Qt::Horizontal);
        horizontalSlider_3 = new QSlider(ColorForm);
        horizontalSlider_3->setObjectName(QStringLiteral("horizontalSlider_3"));
        horizontalSlider_3->setGeometry(QRect(10, 70, 121, 22));
        horizontalSlider_3->setMaximum(255);
        horizontalSlider_3->setPageStep(1);
        horizontalSlider_3->setOrientation(Qt::Horizontal);
        lineEdit = new QLineEdit(ColorForm);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(140, 10, 41, 20));
        lineEdit_2 = new QLineEdit(ColorForm);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(140, 40, 41, 20));
        lineEdit_3 = new QLineEdit(ColorForm);
        lineEdit_3->setObjectName(QStringLiteral("lineEdit_3"));
        lineEdit_3->setGeometry(QRect(140, 70, 41, 20));
        label = new QLabel(ColorForm);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(270, 10, 41, 21));
        label->setStyleSheet(QStringLiteral(""));
        label_2 = new QLabel(ColorForm);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(270, 40, 41, 20));
        label_2->setStyleSheet(QStringLiteral(""));
        lineEdit_4 = new QLineEdit(ColorForm);
        lineEdit_4->setObjectName(QStringLiteral("lineEdit_4"));
        lineEdit_4->setGeometry(QRect(200, 80, 61, 20));
        QFont font;
        font.setPointSize(11);
        lineEdit_4->setFont(font);
        label_3 = new QLabel(ColorForm);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(200, 10, 61, 31));
        QFont font1;
        font1.setPointSize(10);
        label_3->setFont(font1);
        label_3->setStyleSheet(QStringLiteral("background-color: rgb(0, 0, 0);"));
        label_4 = new QLabel(ColorForm);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(200, 40, 61, 31));
        label_4->setFont(font1);
        label_4->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        pushButton = new QPushButton(ColorForm);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(60, 130, 75, 23));
        pushButton_2 = new QPushButton(ColorForm);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(190, 130, 75, 23));

        retranslateUi(ColorForm);

        QMetaObject::connectSlotsByName(ColorForm);
    } // setupUi

    void retranslateUi(QWidget *ColorForm)
    {
        ColorForm->setWindowTitle(QApplication::translate("ColorForm", "Form", nullptr));
        label->setText(QApplication::translate("ColorForm", "\346\226\260\347\232\204", nullptr));
        label_2->setText(QApplication::translate("ColorForm", "\346\227\247\347\232\204", nullptr));
        lineEdit_4->setText(QApplication::translate("ColorForm", "#FFFFFF", nullptr));
        label_3->setText(QString());
        label_4->setText(QString());
        pushButton->setText(QApplication::translate("ColorForm", "\347\241\256\345\256\232", nullptr));
        pushButton_2->setText(QApplication::translate("ColorForm", "\345\217\226\346\266\210", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ColorForm: public Ui_ColorForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_COLORFORM_H
