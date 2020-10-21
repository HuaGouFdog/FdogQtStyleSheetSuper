/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.10.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFontComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QWidget *widget;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_3;
    QLabel *label_3;
    QLabel *label;
    QSpacerItem *horizontalSpacer_7;
    QSpacerItem *horizontalSpacer_9;
    QPushButton *pushButton_4;
    QSpacerItem *horizontalSpacer_8;
    QPushButton *pushButton;
    QSpacerItem *horizontalSpacer_5;
    QPushButton *pushButton_2;
    QSpacerItem *horizontalSpacer_4;
    QPushButton *pushButton_3;
    QSpacerItem *horizontalSpacer_2;
    QGroupBox *groupBox;
    QTextEdit *textEdit;
    QGroupBox *groupBox_2;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QVBoxLayout *verticalLayout;
    QPushButton *pushButton_5;
    QWidget *widget_2;
    QGridLayout *gridLayout;
    QLabel *label_5;
    QLineEdit *lineEdit_3;
    QLineEdit *lineEdit_2;
    QPushButton *pushButton_15;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton_13;
    QLabel *label_6;
    QLineEdit *lineEdit;
    QLabel *label_7;
    QPushButton *pushButton_14;
    QSpacerItem *horizontalSpacer_12;
    QPushButton *pushButton_6;
    QWidget *widget_3;
    QGridLayout *gridLayout_2;
    QSpacerItem *horizontalSpacer_10;
    QFontComboBox *fontComboBox;
    QComboBox *comboBox;
    QComboBox *comboBox_5;
    QLabel *label_10;
    QLabel *label_12;
    QLabel *label_13;
    QLabel *label_9;
    QLabel *label_11;
    QLabel *label_14;
    QSpinBox *spinBox;
    QLabel *label_15;
    QLabel *label_16;
    QSpinBox *spinBox_3;
    QSpinBox *spinBox_2;
    QLabel *label_8;
    QComboBox *comboBox_2;
    QComboBox *comboBox_3;
    QComboBox *comboBox_4;
    QPushButton *pushButton_7;
    QWidget *widget_4;
    QGridLayout *gridLayout_3;
    QLabel *label_19;
    QLabel *label_17;
    QLabel *label_20;
    QSpinBox *spinBox_4;
    QSpinBox *spinBox_5;
    QSpinBox *spinBox_6;
    QSpacerItem *horizontalSpacer_6;
    QPushButton *pushButton_8;
    QWidget *widget_5;
    QGridLayout *gridLayout_4;
    QLabel *label_22;
    QSpinBox *spinBox_7;
    QSpinBox *spinBox_8;
    QSpinBox *spinBox_10;
    QSpinBox *spinBox_9;
    QSpinBox *spinBox_11;
    QLabel *label_23;
    QLabel *label_18;
    QLabel *label_24;
    QLabel *label_25;
    QLabel *label_21;
    QSpinBox *spinBox_12;
    QSpacerItem *horizontalSpacer_11;
    QSpacerItem *verticalSpacer_2;
    QSpacerItem *verticalSpacer;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout_2;
    QPushButton *pushButton_10;
    QWidget *widget_6;
    QPushButton *pushButton_11;
    QWidget *widget_7;
    QPushButton *pushButton_9;
    QWidget *widget_8;
    QLabel *label_2;
    QLabel *label_4;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(1090, 753);
        MainWindow->setMinimumSize(QSize(1000, 700));
        QFont font;
        font.setPointSize(9);
        font.setBold(true);
        font.setItalic(false);
        font.setWeight(75);
        MainWindow->setFont(font);
        QIcon icon;
        icon.addFile(QStringLiteral(":/lib/icon_2.png"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindow->setWindowIcon(icon);
        MainWindow->setStyleSheet(QLatin1String("QStatusBar\n"
"{\n"
"background-color: rgb(79, 79, 79);\n"
"}"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        centralWidget->setStyleSheet(QLatin1String("#centralWidget\n"
"{\n"
"background-color: rgb(79, 79, 79);\n"
"}"));
        widget = new QWidget(centralWidget);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(0, 0, 1081, 31));
        widget->setMinimumSize(QSize(1081, 31));
        widget->setStyleSheet(QStringLiteral(""));
        horizontalLayout_2 = new QHBoxLayout(widget);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer_3 = new QSpacerItem(4, 20, QSizePolicy::Maximum, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_3);

        label_3 = new QLabel(widget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setMinimumSize(QSize(20, 20));
        label_3->setMaximumSize(QSize(20, 20));
        label_3->setStyleSheet(QStringLiteral("border-image: url(:/lib/icon_2.png);"));

        horizontalLayout_2->addWidget(label_3);

        label = new QLabel(widget);
        label->setObjectName(QStringLiteral("label"));
        QFont font1;
        font1.setBold(true);
        font1.setItalic(false);
        font1.setUnderline(false);
        font1.setWeight(75);
        font1.setKerning(true);
        label->setFont(font1);
        label->setToolTipDuration(-1);
        label->setStyleSheet(QStringLiteral("color: rgb(226, 226, 226);"));
        label->setLineWidth(1);
        label->setAlignment(Qt::AlignCenter);
        label->setMargin(1);
        label->setIndent(-1);

        horizontalLayout_2->addWidget(label);

        horizontalSpacer_7 = new QSpacerItem(40, 0, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_7);

        horizontalSpacer_9 = new QSpacerItem(10, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_9);

        pushButton_4 = new QPushButton(widget);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setMinimumSize(QSize(20, 20));
        pushButton_4->setMaximumSize(QSize(20, 20));
        pushButton_4->setStyleSheet(QStringLiteral("border-image: url(:/lib/xuanxiang.png);"));

        horizontalLayout_2->addWidget(pushButton_4);

        horizontalSpacer_8 = new QSpacerItem(10, 20, QSizePolicy::Maximum, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_8);

        pushButton = new QPushButton(widget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setMinimumSize(QSize(20, 20));
        pushButton->setMaximumSize(QSize(20, 20));
        pushButton->setStyleSheet(QStringLiteral("border-image: url(:/lib/zuixiao.png);"));

        horizontalLayout_2->addWidget(pushButton);

        horizontalSpacer_5 = new QSpacerItem(7, 20, QSizePolicy::Maximum, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_5);

        pushButton_2 = new QPushButton(widget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setMinimumSize(QSize(20, 20));
        pushButton_2->setMaximumSize(QSize(20, 20));
        pushButton_2->setStyleSheet(QStringLiteral("border-image: url(:/lib/zuidahua.png);"));

        horizontalLayout_2->addWidget(pushButton_2);

        horizontalSpacer_4 = new QSpacerItem(10, 20, QSizePolicy::Maximum, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_4);

        pushButton_3 = new QPushButton(widget);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setMinimumSize(QSize(20, 20));
        pushButton_3->setMaximumSize(QSize(20, 20));
        pushButton_3->setStyleSheet(QStringLiteral("border-image: url(:/lib/guanbi.png);"));

        horizontalLayout_2->addWidget(pushButton_3);

        horizontalSpacer_2 = new QSpacerItem(10, 20, QSizePolicy::Maximum, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);

        groupBox = new QGroupBox(centralWidget);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(230, 30, 521, 371));
        groupBox->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        textEdit = new QTextEdit(groupBox);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        textEdit->setGeometry(QRect(10, 20, 501, 341));
        QFont font2;
        font2.setFamily(QStringLiteral("ADMUI3Lg"));
        font2.setPointSize(11);
        font2.setBold(true);
        font2.setWeight(75);
        textEdit->setFont(font2);
        textEdit->setStyleSheet(QStringLiteral("color:rgb(255, 0, 0)"));
        groupBox_2 = new QGroupBox(centralWidget);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setGeometry(QRect(230, 410, 511, 311));
        groupBox_2->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        scrollArea = new QScrollArea(centralWidget);
        scrollArea->setObjectName(QStringLiteral("scrollArea"));
        scrollArea->setGeometry(QRect(0, 31, 212, 721));
        QFont font3;
        font3.setBold(false);
        font3.setWeight(50);
        scrollArea->setFont(font3);
        scrollArea->setStyleSheet(QStringLiteral("background-color: rgba(255, 255, 255, 0);"));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QStringLiteral("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 225, 729));
        scrollAreaWidgetContents->setStyleSheet(QLatin1String("#scrollAreaWidgetContents\n"
"{\n"
"background-color: rgb(74, 74, 74);\n"
"}"));
        verticalLayout = new QVBoxLayout(scrollAreaWidgetContents);
        verticalLayout->setSpacing(1);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setSizeConstraint(QLayout::SetDefaultConstraint);
        verticalLayout->setContentsMargins(0, 1, 0, 9);
        pushButton_5 = new QPushButton(scrollAreaWidgetContents);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));
        pushButton_5->setMinimumSize(QSize(225, 20));
        pushButton_5->setMaximumSize(QSize(132, 16777215));
        QFont font4;
        font4.setBold(true);
        font4.setWeight(75);
        pushButton_5->setFont(font4);
        pushButton_5->setStyleSheet(QLatin1String("background-color: rgb(120, 120, 120);\n"
"border-image: url(:/lib/zhankai.png);\n"
"border-style:solid;\n"
"color: rgb(219, 219, 219);"));

        verticalLayout->addWidget(pushButton_5);

        widget_2 = new QWidget(scrollAreaWidgetContents);
        widget_2->setObjectName(QStringLiteral("widget_2"));
        widget_2->setMinimumSize(QSize(208, 0));
        widget_2->setMaximumSize(QSize(208, 85));
        widget_2->setStyleSheet(QLatin1String("color: rgb(204, 204, 204);\n"
""));
        gridLayout = new QGridLayout(widget_2);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(-1, 0, -1, 0);
        label_5 = new QLabel(widget_2);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setFont(font4);

        gridLayout->addWidget(label_5, 0, 0, 1, 1);

        lineEdit_3 = new QLineEdit(widget_2);
        lineEdit_3->setObjectName(QStringLiteral("lineEdit_3"));
        lineEdit_3->setMinimumSize(QSize(65, 23));
        lineEdit_3->setMaximumSize(QSize(65, 16777215));
        QFont font5;
        font5.setPointSize(10);
        font5.setBold(true);
        font5.setWeight(75);
        lineEdit_3->setFont(font5);
        lineEdit_3->setStyleSheet(QLatin1String("color: rgb(204, 204, 204);\n"
"background-color: rgba(255, 255, 255, 0);\n"
"border-style:solid;\n"
"border-width:1px;\n"
"border-color:rgb(204, 204, 204);\n"
"border-radius:3px;"));

        gridLayout->addWidget(lineEdit_3, 2, 3, 1, 1);

        lineEdit_2 = new QLineEdit(widget_2);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));
        lineEdit_2->setMinimumSize(QSize(65, 23));
        lineEdit_2->setMaximumSize(QSize(65, 16777215));
        lineEdit_2->setFont(font5);
        lineEdit_2->setStyleSheet(QLatin1String("color: rgb(204, 204, 204);\n"
"background-color: rgba(255, 255, 255, 0);\n"
"border-style:solid;\n"
"border-width:1px;\n"
"border-color: rgb(204, 204, 204);\n"
"border-radius:3px;"));

        gridLayout->addWidget(lineEdit_2, 1, 3, 1, 1);

        pushButton_15 = new QPushButton(widget_2);
        pushButton_15->setObjectName(QStringLiteral("pushButton_15"));
        pushButton_15->setMinimumSize(QSize(0, 22));
        pushButton_15->setMaximumSize(QSize(50, 16777215));
        pushButton_15->setStyleSheet(QLatin1String("background-color: rgb(0, 255, 127);\n"
"border-radius:4px"));

        gridLayout->addWidget(pushButton_15, 2, 1, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 0, 2, 1, 1);

        pushButton_13 = new QPushButton(widget_2);
        pushButton_13->setObjectName(QStringLiteral("pushButton_13"));
        pushButton_13->setMinimumSize(QSize(50, 22));
        pushButton_13->setMaximumSize(QSize(50, 16777215));
        pushButton_13->setStyleSheet(QLatin1String("background-color: rgb(255, 255, 255);\n"
"border-radius:4px"));

        gridLayout->addWidget(pushButton_13, 0, 1, 1, 1);

        label_6 = new QLabel(widget_2);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setFont(font4);

        gridLayout->addWidget(label_6, 1, 0, 1, 1);

        lineEdit = new QLineEdit(widget_2);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setMinimumSize(QSize(65, 23));
        lineEdit->setMaximumSize(QSize(65, 16777215));
        lineEdit->setFont(font5);
        lineEdit->setStyleSheet(QLatin1String("color: rgb(204, 204, 204);\n"
"background-color: rgba(255, 255, 255, 0);\n"
"border-style:solid;\n"
"border-width:1px;\n"
"border-color:rgb(204, 204, 204);\n"
"border-radius:3px;"));

        gridLayout->addWidget(lineEdit, 0, 3, 1, 1);

        label_7 = new QLabel(widget_2);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setFont(font4);

        gridLayout->addWidget(label_7, 2, 0, 1, 1);

        pushButton_14 = new QPushButton(widget_2);
        pushButton_14->setObjectName(QStringLiteral("pushButton_14"));
        pushButton_14->setMinimumSize(QSize(0, 22));
        pushButton_14->setMaximumSize(QSize(50, 16777215));
        pushButton_14->setStyleSheet(QLatin1String("background-color: rgb(0, 170, 255);\n"
"border-radius:4px"));

        gridLayout->addWidget(pushButton_14, 1, 1, 1, 1);

        horizontalSpacer_12 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_12, 1, 4, 1, 1);


        verticalLayout->addWidget(widget_2);

        pushButton_6 = new QPushButton(scrollAreaWidgetContents);
        pushButton_6->setObjectName(QStringLiteral("pushButton_6"));
        pushButton_6->setMinimumSize(QSize(225, 20));
        pushButton_6->setFont(font4);
        pushButton_6->setStyleSheet(QLatin1String("border-style:solid;\n"
"background-color: rgb(120, 120, 120);\n"
"border-image: url(:/lib/zhankai.png);\n"
"color: rgb(219, 219, 219);"));

        verticalLayout->addWidget(pushButton_6);

        widget_3 = new QWidget(scrollAreaWidgetContents);
        widget_3->setObjectName(QStringLiteral("widget_3"));
        widget_3->setMinimumSize(QSize(208, 300));
        widget_3->setMaximumSize(QSize(208, 300));
        widget_3->setStyleSheet(QLatin1String("color: rgb(204, 204, 204);\n"
""));
        gridLayout_2 = new QGridLayout(widget_3);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout_2->setHorizontalSpacing(6);
        gridLayout_2->setContentsMargins(9, 0, -1, 0);
        horizontalSpacer_10 = new QSpacerItem(31, 20, QSizePolicy::Minimum, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_10, 7, 3, 1, 1);

        fontComboBox = new QFontComboBox(widget_3);
        fontComboBox->setObjectName(QStringLiteral("fontComboBox"));
        fontComboBox->setMinimumSize(QSize(107, 23));
        fontComboBox->setStyleSheet(QLatin1String("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);"));

        gridLayout_2->addWidget(fontComboBox, 0, 2, 1, 1);

        comboBox = new QComboBox(widget_3);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName(QStringLiteral("comboBox"));
        comboBox->setMinimumSize(QSize(107, 23));
        comboBox->setStyleSheet(QLatin1String("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);"));

        gridLayout_2->addWidget(comboBox, 2, 2, 1, 1);

        comboBox_5 = new QComboBox(widget_3);
        comboBox_5->addItem(QString());
        comboBox_5->addItem(QString());
        comboBox_5->addItem(QString());
        comboBox_5->addItem(QString());
        comboBox_5->addItem(QString());
        comboBox_5->addItem(QString());
        comboBox_5->addItem(QString());
        comboBox_5->addItem(QString());
        comboBox_5->addItem(QString());
        comboBox_5->addItem(QString());
        comboBox_5->setObjectName(QStringLiteral("comboBox_5"));
        comboBox_5->setMinimumSize(QSize(107, 23));
        comboBox_5->setStyleSheet(QLatin1String("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);"));

        gridLayout_2->addWidget(comboBox_5, 6, 2, 1, 1);

        label_10 = new QLabel(widget_3);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setFont(font4);

        gridLayout_2->addWidget(label_10, 2, 0, 1, 1);

        label_12 = new QLabel(widget_3);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setFont(font4);

        gridLayout_2->addWidget(label_12, 4, 0, 1, 1);

        label_13 = new QLabel(widget_3);
        label_13->setObjectName(QStringLiteral("label_13"));
        label_13->setFont(font4);

        gridLayout_2->addWidget(label_13, 5, 0, 1, 1);

        label_9 = new QLabel(widget_3);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setFont(font4);

        gridLayout_2->addWidget(label_9, 1, 0, 1, 1);

        label_11 = new QLabel(widget_3);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setFont(font4);

        gridLayout_2->addWidget(label_11, 3, 0, 1, 1);

        label_14 = new QLabel(widget_3);
        label_14->setObjectName(QStringLiteral("label_14"));
        label_14->setFont(font4);

        gridLayout_2->addWidget(label_14, 6, 0, 1, 1);

        spinBox = new QSpinBox(widget_3);
        spinBox->setObjectName(QStringLiteral("spinBox"));
        spinBox->setMinimumSize(QSize(107, 23));
        spinBox->setStyleSheet(QLatin1String("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);"));

        gridLayout_2->addWidget(spinBox, 1, 2, 1, 1);

        label_15 = new QLabel(widget_3);
        label_15->setObjectName(QStringLiteral("label_15"));
        label_15->setFont(font4);

        gridLayout_2->addWidget(label_15, 7, 0, 1, 1);

        label_16 = new QLabel(widget_3);
        label_16->setObjectName(QStringLiteral("label_16"));
        label_16->setFont(font4);

        gridLayout_2->addWidget(label_16, 8, 0, 1, 1);

        spinBox_3 = new QSpinBox(widget_3);
        spinBox_3->setObjectName(QStringLiteral("spinBox_3"));
        spinBox_3->setMinimumSize(QSize(107, 23));
        spinBox_3->setStyleSheet(QLatin1String("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);"));

        gridLayout_2->addWidget(spinBox_3, 8, 2, 1, 1);

        spinBox_2 = new QSpinBox(widget_3);
        spinBox_2->setObjectName(QStringLiteral("spinBox_2"));
        spinBox_2->setMinimumSize(QSize(107, 23));
        spinBox_2->setStyleSheet(QLatin1String("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);"));

        gridLayout_2->addWidget(spinBox_2, 7, 2, 1, 1);

        label_8 = new QLabel(widget_3);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setMinimumSize(QSize(70, 0));
        label_8->setFont(font4);

        gridLayout_2->addWidget(label_8, 0, 0, 1, 1);

        comboBox_2 = new QComboBox(widget_3);
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->setObjectName(QStringLiteral("comboBox_2"));
        comboBox_2->setMinimumSize(QSize(107, 23));
        comboBox_2->setStyleSheet(QLatin1String("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);"));

        gridLayout_2->addWidget(comboBox_2, 3, 2, 1, 1);

        comboBox_3 = new QComboBox(widget_3);
        comboBox_3->addItem(QString());
        comboBox_3->addItem(QString());
        comboBox_3->addItem(QString());
        comboBox_3->setObjectName(QStringLiteral("comboBox_3"));
        comboBox_3->setMinimumSize(QSize(107, 23));
        comboBox_3->setStyleSheet(QLatin1String("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);"));

        gridLayout_2->addWidget(comboBox_3, 4, 2, 1, 1);

        comboBox_4 = new QComboBox(widget_3);
        comboBox_4->addItem(QString());
        comboBox_4->addItem(QString());
        comboBox_4->addItem(QString());
        comboBox_4->addItem(QString());
        comboBox_4->setObjectName(QStringLiteral("comboBox_4"));
        comboBox_4->setMinimumSize(QSize(107, 23));
        comboBox_4->setStyleSheet(QLatin1String("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);"));

        gridLayout_2->addWidget(comboBox_4, 5, 2, 1, 1);


        verticalLayout->addWidget(widget_3);

        pushButton_7 = new QPushButton(scrollAreaWidgetContents);
        pushButton_7->setObjectName(QStringLiteral("pushButton_7"));
        pushButton_7->setMinimumSize(QSize(225, 20));
        pushButton_7->setFont(font4);
        pushButton_7->setStyleSheet(QLatin1String("background-color: rgb(120, 120, 120);\n"
"border-image: url(:/lib/zhankai.png);\n"
"border-style:solid;\n"
"color: rgb(219, 219, 219);"));

        verticalLayout->addWidget(pushButton_7);

        widget_4 = new QWidget(scrollAreaWidgetContents);
        widget_4->setObjectName(QStringLiteral("widget_4"));
        widget_4->setMinimumSize(QSize(208, 0));
        widget_4->setMaximumSize(QSize(208, 98));
        widget_4->setStyleSheet(QLatin1String("color: rgb(204, 204, 204);\n"
""));
        gridLayout_3 = new QGridLayout(widget_4);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        gridLayout_3->setContentsMargins(-1, 0, -1, 0);
        label_19 = new QLabel(widget_4);
        label_19->setObjectName(QStringLiteral("label_19"));
        label_19->setFont(font4);

        gridLayout_3->addWidget(label_19, 2, 0, 1, 1);

        label_17 = new QLabel(widget_4);
        label_17->setObjectName(QStringLiteral("label_17"));
        label_17->setMinimumSize(QSize(70, 0));
        label_17->setMaximumSize(QSize(52, 16777215));
        label_17->setFont(font4);

        gridLayout_3->addWidget(label_17, 1, 0, 1, 1);

        label_20 = new QLabel(widget_4);
        label_20->setObjectName(QStringLiteral("label_20"));
        label_20->setFont(font4);

        gridLayout_3->addWidget(label_20, 3, 0, 1, 1);

        spinBox_4 = new QSpinBox(widget_4);
        spinBox_4->setObjectName(QStringLiteral("spinBox_4"));
        spinBox_4->setMinimumSize(QSize(107, 23));
        spinBox_4->setStyleSheet(QLatin1String("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);"));

        gridLayout_3->addWidget(spinBox_4, 1, 1, 1, 1);

        spinBox_5 = new QSpinBox(widget_4);
        spinBox_5->setObjectName(QStringLiteral("spinBox_5"));
        spinBox_5->setMinimumSize(QSize(107, 23));
        spinBox_5->setStyleSheet(QLatin1String("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);"));

        gridLayout_3->addWidget(spinBox_5, 2, 1, 1, 1);

        spinBox_6 = new QSpinBox(widget_4);
        spinBox_6->setObjectName(QStringLiteral("spinBox_6"));
        spinBox_6->setMinimumSize(QSize(107, 23));
        spinBox_6->setStyleSheet(QLatin1String("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);"));

        gridLayout_3->addWidget(spinBox_6, 3, 1, 1, 1);

        horizontalSpacer_6 = new QSpacerItem(31, 20, QSizePolicy::Maximum, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer_6, 2, 2, 1, 1);


        verticalLayout->addWidget(widget_4);

        pushButton_8 = new QPushButton(scrollAreaWidgetContents);
        pushButton_8->setObjectName(QStringLiteral("pushButton_8"));
        pushButton_8->setMinimumSize(QSize(225, 20));
        pushButton_8->setFont(font4);
        pushButton_8->setStyleSheet(QLatin1String("background-color: rgb(120, 120, 120);\n"
"border-image: url(:/lib/zhankai.png);\n"
"border-style:solid;\n"
"color: rgb(219, 219, 219);"));

        verticalLayout->addWidget(pushButton_8);

        widget_5 = new QWidget(scrollAreaWidgetContents);
        widget_5->setObjectName(QStringLiteral("widget_5"));
        widget_5->setMinimumSize(QSize(208, 0));
        widget_5->setMaximumSize(QSize(208, 214));
        widget_5->setStyleSheet(QLatin1String("color: rgb(204, 204, 204);\n"
""));
        gridLayout_4 = new QGridLayout(widget_5);
        gridLayout_4->setSpacing(6);
        gridLayout_4->setContentsMargins(11, 11, 11, 11);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        gridLayout_4->setContentsMargins(-1, 0, -1, 0);
        label_22 = new QLabel(widget_5);
        label_22->setObjectName(QStringLiteral("label_22"));
        label_22->setFont(font4);

        gridLayout_4->addWidget(label_22, 2, 0, 1, 1);

        spinBox_7 = new QSpinBox(widget_5);
        spinBox_7->setObjectName(QStringLiteral("spinBox_7"));
        spinBox_7->setMinimumSize(QSize(107, 23));
        spinBox_7->setStyleSheet(QLatin1String("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);"));

        gridLayout_4->addWidget(spinBox_7, 0, 1, 1, 1);

        spinBox_8 = new QSpinBox(widget_5);
        spinBox_8->setObjectName(QStringLiteral("spinBox_8"));
        spinBox_8->setMinimumSize(QSize(107, 23));
        spinBox_8->setStyleSheet(QLatin1String("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);"));

        gridLayout_4->addWidget(spinBox_8, 1, 1, 1, 1);

        spinBox_10 = new QSpinBox(widget_5);
        spinBox_10->setObjectName(QStringLiteral("spinBox_10"));
        spinBox_10->setMinimumSize(QSize(107, 23));
        spinBox_10->setStyleSheet(QLatin1String("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);"));

        gridLayout_4->addWidget(spinBox_10, 3, 1, 1, 1);

        spinBox_9 = new QSpinBox(widget_5);
        spinBox_9->setObjectName(QStringLiteral("spinBox_9"));
        spinBox_9->setMinimumSize(QSize(107, 23));
        spinBox_9->setStyleSheet(QLatin1String("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);"));

        gridLayout_4->addWidget(spinBox_9, 2, 1, 1, 1);

        spinBox_11 = new QSpinBox(widget_5);
        spinBox_11->setObjectName(QStringLiteral("spinBox_11"));
        spinBox_11->setMinimumSize(QSize(107, 23));
        spinBox_11->setStyleSheet(QLatin1String("\n"
"background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);"));

        gridLayout_4->addWidget(spinBox_11, 4, 1, 1, 1);

        label_23 = new QLabel(widget_5);
        label_23->setObjectName(QStringLiteral("label_23"));
        label_23->setFont(font4);

        gridLayout_4->addWidget(label_23, 4, 0, 1, 1);

        label_18 = new QLabel(widget_5);
        label_18->setObjectName(QStringLiteral("label_18"));
        label_18->setMinimumSize(QSize(70, 0));
        label_18->setFont(font4);

        gridLayout_4->addWidget(label_18, 0, 0, 1, 1);

        label_24 = new QLabel(widget_5);
        label_24->setObjectName(QStringLiteral("label_24"));
        label_24->setFont(font4);

        gridLayout_4->addWidget(label_24, 3, 0, 1, 1);

        label_25 = new QLabel(widget_5);
        label_25->setObjectName(QStringLiteral("label_25"));
        label_25->setFont(font4);

        gridLayout_4->addWidget(label_25, 5, 0, 1, 1);

        label_21 = new QLabel(widget_5);
        label_21->setObjectName(QStringLiteral("label_21"));
        label_21->setFont(font4);

        gridLayout_4->addWidget(label_21, 1, 0, 1, 1);

        spinBox_12 = new QSpinBox(widget_5);
        spinBox_12->setObjectName(QStringLiteral("spinBox_12"));
        spinBox_12->setMinimumSize(QSize(107, 23));
        spinBox_12->setStyleSheet(QLatin1String("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);"));

        gridLayout_4->addWidget(spinBox_12, 5, 1, 1, 1);

        horizontalSpacer_11 = new QSpacerItem(31, 20, QSizePolicy::Maximum, QSizePolicy::Minimum);

        gridLayout_4->addItem(horizontalSpacer_11, 0, 2, 1, 1);


        verticalLayout->addWidget(widget_5);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_2);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        scrollArea->setWidget(scrollAreaWidgetContents);
        verticalLayoutWidget = new QWidget(centralWidget);
        verticalLayoutWidget->setObjectName(QStringLiteral("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(840, 160, 160, 411));
        verticalLayout_2 = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        pushButton_10 = new QPushButton(verticalLayoutWidget);
        pushButton_10->setObjectName(QStringLiteral("pushButton_10"));

        verticalLayout_2->addWidget(pushButton_10);

        widget_6 = new QWidget(verticalLayoutWidget);
        widget_6->setObjectName(QStringLiteral("widget_6"));
        widget_6->setStyleSheet(QStringLiteral("background-color: rgb(0, 255, 127);"));

        verticalLayout_2->addWidget(widget_6);

        pushButton_11 = new QPushButton(verticalLayoutWidget);
        pushButton_11->setObjectName(QStringLiteral("pushButton_11"));

        verticalLayout_2->addWidget(pushButton_11);

        widget_7 = new QWidget(verticalLayoutWidget);
        widget_7->setObjectName(QStringLiteral("widget_7"));
        widget_7->setStyleSheet(QStringLiteral("background-color: rgb(0, 255, 127);"));

        verticalLayout_2->addWidget(widget_7);

        pushButton_9 = new QPushButton(verticalLayoutWidget);
        pushButton_9->setObjectName(QStringLiteral("pushButton_9"));

        verticalLayout_2->addWidget(pushButton_9);

        widget_8 = new QWidget(verticalLayoutWidget);
        widget_8->setObjectName(QStringLiteral("widget_8"));
        widget_8->setStyleSheet(QStringLiteral("background-color: rgb(0, 255, 127);"));

        verticalLayout_2->addWidget(widget_8);

        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(0, 30, 1091, 1));
        label_2->setStyleSheet(QStringLiteral("background-color: rgb(0, 0, 0);"));
        label_4 = new QLabel(centralWidget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(0, 730, 1091, 1));
        label_4->setStyleSheet(QStringLiteral("background-color: rgb(0, 0, 0);"));
        MainWindow->setCentralWidget(centralWidget);
        label_4->raise();
        label_2->raise();
        widget->raise();
        groupBox->raise();
        groupBox_2->raise();
        scrollArea->raise();
        verticalLayoutWidget->raise();
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);
        QObject::connect(pushButton, SIGNAL(clicked()), MainWindow, SLOT(showMinimized()));
        QObject::connect(pushButton_2, SIGNAL(clicked()), MainWindow, SLOT(showMaximized()));
        QObject::connect(pushButton_3, SIGNAL(clicked()), MainWindow, SLOT(close()));
        QObject::connect(pushButton_4, SIGNAL(clicked()), MainWindow, SLOT(showFullScreen()));

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Qt\347\232\256\350\202\244\347\224\237\346\210\220\345\231\250", nullptr));
        label_3->setText(QString());
        label->setText(QApplication::translate("MainWindow", "Qt\347\232\256\350\202\244\347\224\237\346\210\220\345\231\250", nullptr));
        pushButton_4->setText(QString());
        pushButton->setText(QString());
        pushButton_2->setText(QString());
        pushButton_3->setText(QString());
        groupBox->setTitle(QApplication::translate("MainWindow", "\344\273\243\347\240\201\345\214\272", nullptr));
        textEdit->setHtml(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'ADMUI3Lg'; font-size:11pt; font-weight:600; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'SimSun'; font-size:12pt; font-weight:400;\">#lable</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'SimSun'; font-size:12pt; font-weight:400;\">{</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'SimSun'; font-size:12pt; font-weight:400;\">background:rgb(50,50,50);<br />}</span></p></body></html>", nullptr));
        groupBox_2->setTitle(QApplication::translate("MainWindow", "\346\216\247\344\273\266\345\214\272", nullptr));
        pushButton_5->setText(QApplication::translate("MainWindow", "\351\242\234\350\211\262\350\256\276\347\275\256     ", nullptr));
        label_5->setText(QApplication::translate("MainWindow", "\345\255\227\344\275\223\351\242\234\350\211\262", nullptr));
        lineEdit_3->setText(QApplication::translate("MainWindow", "#EEEEEE", nullptr));
        lineEdit_2->setText(QApplication::translate("MainWindow", "#999999", nullptr));
        pushButton_15->setText(QString());
        pushButton_13->setText(QString());
        label_6->setText(QApplication::translate("MainWindow", "\350\203\214\346\231\257\351\242\234\350\211\262", nullptr));
        lineEdit->setText(QApplication::translate("MainWindow", "#FFFFFF", nullptr));
        label_7->setText(QApplication::translate("MainWindow", "\350\276\271\346\241\206\351\242\234\350\211\262", nullptr));
        pushButton_14->setText(QString());
        pushButton_6->setText(QApplication::translate("MainWindow", "\346\226\207\345\255\227\350\256\276\347\275\256     ", nullptr));
        comboBox->setItemText(0, QApplication::translate("MainWindow", "\345\267\246\344\270\212\345\257\271\351\275\220", nullptr));
        comboBox->setItemText(1, QApplication::translate("MainWindow", "\345\267\246\344\270\213\345\257\271\351\275\220", nullptr));
        comboBox->setItemText(2, QApplication::translate("MainWindow", "\345\267\246\345\257\271\351\275\220", nullptr));
        comboBox->setItemText(3, QApplication::translate("MainWindow", "\345\217\263\344\270\212\345\257\271\351\275\220", nullptr));
        comboBox->setItemText(4, QApplication::translate("MainWindow", "\345\217\263\344\270\213\345\257\271\351\275\220", nullptr));
        comboBox->setItemText(5, QApplication::translate("MainWindow", "\345\217\263\345\257\271\351\275\220", nullptr));
        comboBox->setItemText(6, QApplication::translate("MainWindow", "\344\270\212\345\261\200\344\270\255", nullptr));
        comboBox->setItemText(7, QApplication::translate("MainWindow", "\344\270\213\345\261\200\344\270\255", nullptr));
        comboBox->setItemText(8, QApplication::translate("MainWindow", "\345\261\205\344\270\255", nullptr));

        comboBox_5->setItemText(0, QApplication::translate("MainWindow", "none", nullptr));
        comboBox_5->setItemText(1, QApplication::translate("MainWindow", "solid", nullptr));
        comboBox_5->setItemText(2, QApplication::translate("MainWindow", "dotted", nullptr));
        comboBox_5->setItemText(3, QApplication::translate("MainWindow", "dashed", nullptr));
        comboBox_5->setItemText(4, QApplication::translate("MainWindow", "double", nullptr));
        comboBox_5->setItemText(5, QApplication::translate("MainWindow", "groove", nullptr));
        comboBox_5->setItemText(6, QApplication::translate("MainWindow", "ridge", nullptr));
        comboBox_5->setItemText(7, QApplication::translate("MainWindow", "inset", nullptr));
        comboBox_5->setItemText(8, QApplication::translate("MainWindow", "outset", nullptr));
        comboBox_5->setItemText(9, QApplication::translate("MainWindow", "inherit", nullptr));

        label_10->setText(QApplication::translate("MainWindow", "\346\226\207\345\255\227\345\257\271\351\275\220", nullptr));
        label_12->setText(QApplication::translate("MainWindow", "\346\226\207\345\255\227\347\262\227\347\273\206", nullptr));
        label_13->setText(QApplication::translate("MainWindow", "\346\226\207\345\255\227\344\277\256\351\245\260", nullptr));
        label_9->setText(QApplication::translate("MainWindow", "\346\226\207\345\255\227\345\244\247\345\260\217", nullptr));
        label_11->setText(QApplication::translate("MainWindow", "\346\226\207\345\255\227\346\240\267\345\274\217", nullptr));
        label_14->setText(QApplication::translate("MainWindow", "\350\276\271\346\241\206\351\243\216\346\240\274", nullptr));
        label_15->setText(QApplication::translate("MainWindow", "\350\276\271\346\241\206\345\244\247\345\260\217", nullptr));
        label_16->setText(QApplication::translate("MainWindow", "\345\234\206\350\247\222\345\244\247\345\260\217", nullptr));
        label_8->setText(QApplication::translate("MainWindow", "\346\226\207\345\255\227\345\255\227\344\275\223", nullptr));
        comboBox_2->setItemText(0, QApplication::translate("MainWindow", "normal", nullptr));
        comboBox_2->setItemText(1, QApplication::translate("MainWindow", "oblique", nullptr));
        comboBox_2->setItemText(2, QApplication::translate("MainWindow", "italic", nullptr));

        comboBox_3->setItemText(0, QApplication::translate("MainWindow", "normal", nullptr));
        comboBox_3->setItemText(1, QApplication::translate("MainWindow", "bold", nullptr));
        comboBox_3->setItemText(2, QApplication::translate("MainWindow", "lighter", nullptr));

        comboBox_4->setItemText(0, QApplication::translate("MainWindow", "blink", nullptr));
        comboBox_4->setItemText(1, QApplication::translate("MainWindow", "underline", nullptr));
        comboBox_4->setItemText(2, QApplication::translate("MainWindow", "overline", nullptr));
        comboBox_4->setItemText(3, QApplication::translate("MainWindow", "line-through", nullptr));

        pushButton_7->setText(QApplication::translate("MainWindow", "ScrollBar     ", nullptr));
        label_19->setText(QApplication::translate("MainWindow", "padding", nullptr));
        label_17->setText(QApplication::translate("MainWindow", "\347\256\255\345\244\264\351\253\230\345\272\246", nullptr));
        label_20->setText(QApplication::translate("MainWindow", "\346\214\211\351\222\256\351\253\230\345\272\246", nullptr));
        pushButton_8->setText(QApplication::translate("MainWindow", "Slider     ", nullptr));
        label_22->setText(QApplication::translate("MainWindow", "\346\214\211\351\222\256\344\270\213\351\253\230", nullptr));
        label_23->setText(QApplication::translate("MainWindow", "\345\267\246\347\274\251\350\277\233", nullptr));
        label_18->setText(QApplication::translate("MainWindow", "\350\277\233\345\272\246\346\235\241\345\256\275\345\272\246", nullptr));
        label_24->setText(QApplication::translate("MainWindow", "\346\214\211\351\222\256\345\256\275\345\272\246", nullptr));
        label_25->setText(QApplication::translate("MainWindow", "\345\217\263\347\274\251\350\277\233", nullptr));
        label_21->setText(QApplication::translate("MainWindow", "\346\214\211\351\222\256\344\270\212\351\253\230", nullptr));
        pushButton_10->setText(QApplication::translate("MainWindow", "PushButton", nullptr));
        pushButton_11->setText(QApplication::translate("MainWindow", "PushButton", nullptr));
        pushButton_9->setText(QApplication::translate("MainWindow", "PushButton", nullptr));
        label_2->setText(QString());
        label_4->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
