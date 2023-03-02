/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QFrame *HighVoltage;
    QProgressBar *progressBar;
    QFrame *LowVoltage;
    QFrame *Motor;
    QFrame *System;
    QWidget *verticalLayoutWidget_2;
    QVBoxLayout *verticalLayout_3;
    QVBoxLayout *verticalLayout_2;
    QFrame *Odometer;
    QFrame *Bottom;
    QFrame *AutorcrossStatus;
    QFrame *SkidpadStatus;
    QPushButton *Autocross;
    QFrame *EnduranceStatus;
    QFrame *BrakeStatus;
    QPushButton *Brake;
    QPushButton *SkidPad;
    QPushButton *Acceleration;
    QPushButton *Endurance;
    QFrame *AccelerationStatus;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->setEnabled(true);
        MainWindow->resize(800, 480);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        MainWindow->setStyleSheet(QString::fromUtf8("background-color: rgb(44, 44, 44);"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        HighVoltage = new QFrame(centralwidget);
        HighVoltage->setObjectName(QString::fromUtf8("HighVoltage"));
        HighVoltage->setGeometry(QRect(15, 55, 178, 137));
        HighVoltage->setStyleSheet(QString::fromUtf8("QFrame{\n"
"	border-radius: 2px;\n"
"	background-color: rgb(44, 44, 44);\n"
"	background-position: center;\n"
"}"));
        HighVoltage->setFrameShape(QFrame::StyledPanel);
        HighVoltage->setFrameShadow(QFrame::Raised);
        progressBar = new QProgressBar(HighVoltage);
        progressBar->setObjectName(QString::fromUtf8("progressBar"));
        progressBar->setGeometry(QRect(30, 100, 118, 23));
        progressBar->setStyleSheet(QString::fromUtf8("QProgressBar{\n"
"	border-radius: 5px;\n"
"	background-color: rgb(44, 44, 44);\n"
"	border-color: rgb(23, 165, 0);\n"
"}\n"
"\n"
"QProgressBar::chunk {\n"
"	 border-radius: 5px;\n"
"     background-color: green;\n"
" }\n"
""));
        progressBar->setValue(24);
        LowVoltage = new QFrame(centralwidget);
        LowVoltage->setObjectName(QString::fromUtf8("LowVoltage"));
        LowVoltage->setGeometry(QRect(15, 227, 178, 90));
        LowVoltage->setStyleSheet(QString::fromUtf8("QFrame{\n"
"	border-radius: 2px;\n"
"	background-color: rgb(44, 44, 44);\n"
"	background-position: center;\n"
"}"));
        LowVoltage->setFrameShape(QFrame::StyledPanel);
        LowVoltage->setFrameShadow(QFrame::Raised);
        Motor = new QFrame(centralwidget);
        Motor->setObjectName(QString::fromUtf8("Motor"));
        Motor->setGeometry(QRect(447, 55, 178, 137));
        Motor->setStyleSheet(QString::fromUtf8("QFrame{\n"
"	border-radius: 2px;\n"
"	background-color: rgb(44, 44, 44);\n"
"	background-position: center;\n"
"}"));
        Motor->setFrameShape(QFrame::StyledPanel);
        Motor->setFrameShadow(QFrame::Raised);
        System = new QFrame(centralwidget);
        System->setObjectName(QString::fromUtf8("System"));
        System->setGeometry(QRect(447, 225, 178, 90));
        System->setStyleSheet(QString::fromUtf8("QFrame{\n"
"	border-radius: 2px;\n"
"	background-color: rgb(44, 44, 44);\n"
"	background-position: center;\n"
"}"));
        System->setFrameShape(QFrame::StyledPanel);
        System->setFrameShadow(QFrame::Raised);
        verticalLayoutWidget_2 = new QWidget(centralwidget);
        verticalLayoutWidget_2->setObjectName(QString::fromUtf8("verticalLayoutWidget_2"));
        verticalLayoutWidget_2->setGeometry(QRect(730, 410, 301, 301));
        verticalLayout_3 = new QVBoxLayout(verticalLayoutWidget_2);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(20, 20, 20, 20);
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(10, 10, 10, 10);

        verticalLayout_3->addLayout(verticalLayout_2);

        Odometer = new QFrame(centralwidget);
        Odometer->setObjectName(QString::fromUtf8("Odometer"));
        Odometer->setGeometry(QRect(202, 79, 236, 236));
        Odometer->setStyleSheet(QString::fromUtf8("QFrame{\n"
"	background-color: rgb(44, 44, 44);\n"
"	color: #f8f8f2;\n"
"	border-radius: 120px;\n"
"}"));
        Odometer->setFrameShape(QFrame::NoFrame);
        Odometer->setFrameShadow(QFrame::Raised);
        Bottom = new QFrame(centralwidget);
        Bottom->setObjectName(QString::fromUtf8("Bottom"));
        Bottom->setGeometry(QRect(0, 370, 641, 91));
        Bottom->setFrameShape(QFrame::StyledPanel);
        Bottom->setFrameShadow(QFrame::Raised);
        AutorcrossStatus = new QFrame(Bottom);
        AutorcrossStatus->setObjectName(QString::fromUtf8("AutorcrossStatus"));
        AutorcrossStatus->setGeometry(QRect(290, 60, 49, 7));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(AutorcrossStatus->sizePolicy().hasHeightForWidth());
        AutorcrossStatus->setSizePolicy(sizePolicy1);
        AutorcrossStatus->setStyleSheet(QString::fromUtf8("QFrame{\n"
"	border-radius: 2px;\n"
"	background-color: rgb(108, 108, 108);\n"
"	background-position: center;\n"
"}\n"
"\n"
"QFrame:hover{\n"
"	background-color: rgb(23, 165, 0);\n"
"}"));
        AutorcrossStatus->setFrameShape(QFrame::StyledPanel);
        AutorcrossStatus->setFrameShadow(QFrame::Raised);
        SkidpadStatus = new QFrame(Bottom);
        SkidpadStatus->setObjectName(QString::fromUtf8("SkidpadStatus"));
        SkidpadStatus->setGeometry(QRect(420, 60, 49, 7));
        sizePolicy1.setHeightForWidth(SkidpadStatus->sizePolicy().hasHeightForWidth());
        SkidpadStatus->setSizePolicy(sizePolicy1);
        SkidpadStatus->setStyleSheet(QString::fromUtf8("QFrame{\n"
"	border-radius: 2px;\n"
"	background-color: rgb(108, 108, 108);\n"
"	background-position: center;\n"
"}\n"
"\n"
"QFrame:hover{\n"
"	background-color: rgb(23, 165, 0);\n"
"}"));
        SkidpadStatus->setFrameShape(QFrame::StyledPanel);
        SkidpadStatus->setFrameShadow(QFrame::Raised);
        Autocross = new QPushButton(Bottom);
        Autocross->setObjectName(QString::fromUtf8("Autocross"));
        Autocross->setGeometry(QRect(257, 2, 120, 77));
        Autocross->setStyleSheet(QString::fromUtf8("font: 900 12pt \"Arial Black\";"));
        EnduranceStatus = new QFrame(Bottom);
        EnduranceStatus->setObjectName(QString::fromUtf8("EnduranceStatus"));
        EnduranceStatus->setGeometry(QRect(547, 60, 49, 7));
        sizePolicy1.setHeightForWidth(EnduranceStatus->sizePolicy().hasHeightForWidth());
        EnduranceStatus->setSizePolicy(sizePolicy1);
        EnduranceStatus->setStyleSheet(QString::fromUtf8("QFrame{\n"
"	border-radius: 2px;\n"
"	background-color: rgb(108, 108, 108);\n"
"	background-position: center;\n"
"}\n"
"\n"
"QFrame:hover{\n"
"	background-color: rgb(23, 165, 0);\n"
"}"));
        EnduranceStatus->setFrameShape(QFrame::StyledPanel);
        EnduranceStatus->setFrameShadow(QFrame::Raised);
        BrakeStatus = new QFrame(Bottom);
        BrakeStatus->setObjectName(QString::fromUtf8("BrakeStatus"));
        BrakeStatus->setGeometry(QRect(39, 60, 49, 7));
        sizePolicy1.setHeightForWidth(BrakeStatus->sizePolicy().hasHeightForWidth());
        BrakeStatus->setSizePolicy(sizePolicy1);
        BrakeStatus->setAutoFillBackground(false);
        BrakeStatus->setStyleSheet(QString::fromUtf8("QFrame{\n"
"	border-radius: 2px;\n"
"	background-color: rgb(108, 108, 108);\n"
"	background-position: center;\n"
"}\n"
"\n"
"QFrame:hover{\n"
"	background-color: rgb(23, 165, 0);\n"
"}"));
        BrakeStatus->setFrameShape(QFrame::StyledPanel);
        BrakeStatus->setFrameShadow(QFrame::Raised);
        Brake = new QPushButton(Bottom);
        Brake->setObjectName(QString::fromUtf8("Brake"));
        Brake->setGeometry(QRect(3, 2, 120, 77));
        QFont font;
        font.setFamily(QString::fromUtf8("Arial Black"));
        font.setPointSize(12);
        font.setBold(true);
        font.setItalic(false);
        font.setWeight(99);
        Brake->setFont(font);
        Brake->setStyleSheet(QString::fromUtf8("font: 900 12pt \"Arial Black\";\n"
"background-color: rgb(44, 44, 44);\n"
"\n"
"QPushButton :: hover{\n"
"\n"
"}"));
        SkidPad = new QPushButton(Bottom);
        SkidPad->setObjectName(QString::fromUtf8("SkidPad"));
        SkidPad->setGeometry(QRect(384, 2, 120, 77));
        SkidPad->setStyleSheet(QString::fromUtf8("font: 900 12pt \"Arial Black\";"));
        Acceleration = new QPushButton(Bottom);
        Acceleration->setObjectName(QString::fromUtf8("Acceleration"));
        Acceleration->setGeometry(QRect(130, 2, 120, 77));
        Acceleration->setStyleSheet(QString::fromUtf8("font: 900 12pt \"Arial Black\";"));
        Acceleration->setAutoDefault(false);
        Endurance = new QPushButton(Bottom);
        Endurance->setObjectName(QString::fromUtf8("Endurance"));
        Endurance->setGeometry(QRect(511, 2, 120, 77));
        Endurance->setStyleSheet(QString::fromUtf8("font: 900 12pt \"Arial Black\";"));
        AccelerationStatus = new QFrame(Bottom);
        AccelerationStatus->setObjectName(QString::fromUtf8("AccelerationStatus"));
        AccelerationStatus->setGeometry(QRect(163, 60, 49, 7));
        sizePolicy1.setHeightForWidth(AccelerationStatus->sizePolicy().hasHeightForWidth());
        AccelerationStatus->setSizePolicy(sizePolicy1);
        AccelerationStatus->setStyleSheet(QString::fromUtf8("QFrame{\n"
"	border-radius: 2px;\n"
"	background-color: rgb(108, 108, 108);\n"
"	background-position: center;\n"
"}\n"
"\n"
"QFrame:hover{\n"
"	background-color: rgb(23, 165, 0);\n"
"}"));
        AccelerationStatus->setFrameShape(QFrame::StyledPanel);
        AccelerationStatus->setFrameShadow(QFrame::Raised);
        Endurance->raise();
        Acceleration->raise();
        SkidPad->raise();
        Brake->raise();
        Autocross->raise();
        AccelerationStatus->raise();
        AutorcrossStatus->raise();
        BrakeStatus->raise();
        EnduranceStatus->raise();
        SkidpadStatus->raise();
        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        Autocross->setText(QApplication::translate("MainWindow", "Autocross", nullptr));
        Brake->setText(QApplication::translate("MainWindow", "Brake", nullptr));
        SkidPad->setText(QApplication::translate("MainWindow", "SkidPad", nullptr));
        Acceleration->setText(QApplication::translate("MainWindow", "Acceleration", nullptr));
        Endurance->setText(QApplication::translate("MainWindow", "Endurance", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
