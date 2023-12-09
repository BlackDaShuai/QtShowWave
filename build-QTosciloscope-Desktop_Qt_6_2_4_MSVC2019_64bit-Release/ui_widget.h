/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include <qcustomplot.h>
#include "mycombobox.h"

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QGridLayout *gridLayout_4;
    QSplitter *splitter;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout_5;
    QVBoxLayout *verticalLayout_3;
    QLabel *lbConnected;
    QGridLayout *gridLayout_3;
    QLabel *label;
    QComboBox *cbParity;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_2;
    QComboBox *cbDataBits;
    QComboBox *cbStopBits;
    MyComboBox *cbPortName;
    QLabel *label_5;
    QComboBox *cbBaudRate;
    QCheckBox *chk0x16Show;
    QCheckBox *chkTimeShow;
    QHBoxLayout *horizontalLayout_4;
    QSpinBox *sbFontSize;
    QLabel *fontSize;
    QPushButton *open;
    QPushButton *clear;
    QSpacerItem *verticalSpacer;
    QVBoxLayout *verticalLayout_2;
    QPushButton *send;
    QCheckBox *btnDraw;
    QCheckBox *chkClearAfterSend;
    QCheckBox *chk0x16Send;
    QCheckBox *chkNewLine;
    QPushButton *clearSend;
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout_2;
    QPlainTextEdit *receiveEdit;
    QGroupBox *groupBox_3;
    QGridLayout *gridLayout;
    QPlainTextEdit *sendEdit;
    QGroupBox *groupBox_7;
    QVBoxLayout *verticalLayout_4;
    QGridLayout *gridLayout_7;
    QCustomPlot *cusplot;
    QGroupBox *groupBox_5;
    QVBoxLayout *verticalLayout_8;
    QHBoxLayout *horizontalLayout_3;
    QVBoxLayout *verticalLayout_6;
    QSpinBox *minRange;
    QLabel *label_6;
    QSlider *horizontalSlider;
    QVBoxLayout *verticalLayout_7;
    QSpinBox *spinBox_2;
    QLabel *label_7;
    QHBoxLayout *horizontalLayout_2;
    QCheckBox *AlwaysAuto;
    QCheckBox *checkBox;
    QSpacerItem *horizontalSpacer;
    QPushButton *AutoSet;
    QPushButton *stopDraw;
    QPushButton *clearCharts;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QString::fromUtf8("Widget"));
        Widget->resize(640, 560);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/new/prefix1/recf/wave.ico"), QSize(), QIcon::Normal, QIcon::Off);
        Widget->setWindowIcon(icon);
        gridLayout_4 = new QGridLayout(Widget);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        splitter = new QSplitter(Widget);
        splitter->setObjectName(QString::fromUtf8("splitter"));
        splitter->setOrientation(Qt::Horizontal);
        layoutWidget = new QWidget(splitter);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        groupBox = new QGroupBox(layoutWidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setMinimumSize(QSize(160, 0));
        groupBox->setMaximumSize(QSize(160, 16777215));
        verticalLayout_5 = new QVBoxLayout(groupBox);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        lbConnected = new QLabel(groupBox);
        lbConnected->setObjectName(QString::fromUtf8("lbConnected"));
        lbConnected->setStyleSheet(QString::fromUtf8("color: rgb(0, 85, 255)"));
        lbConnected->setTextFormat(Qt::AutoText);
        lbConnected->setAlignment(Qt::AlignCenter);
        lbConnected->setWordWrap(false);

        verticalLayout_3->addWidget(lbConnected);

        gridLayout_3 = new QGridLayout();
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout_3->addWidget(label, 1, 0, 1, 1);

        cbParity = new QComboBox(groupBox);
        cbParity->addItem(QString());
        cbParity->addItem(QString());
        cbParity->addItem(QString());
        cbParity->setObjectName(QString::fromUtf8("cbParity"));

        gridLayout_3->addWidget(cbParity, 5, 1, 1, 1);

        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout_3->addWidget(label_3, 3, 0, 1, 1);

        label_4 = new QLabel(groupBox);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout_3->addWidget(label_4, 4, 0, 1, 1);

        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout_3->addWidget(label_2, 2, 0, 1, 1);

        cbDataBits = new QComboBox(groupBox);
        cbDataBits->addItem(QString());
        cbDataBits->addItem(QString());
        cbDataBits->addItem(QString());
        cbDataBits->addItem(QString());
        cbDataBits->setObjectName(QString::fromUtf8("cbDataBits"));

        gridLayout_3->addWidget(cbDataBits, 4, 1, 1, 1);

        cbStopBits = new QComboBox(groupBox);
        cbStopBits->addItem(QString());
        cbStopBits->addItem(QString());
        cbStopBits->addItem(QString());
        cbStopBits->setObjectName(QString::fromUtf8("cbStopBits"));

        gridLayout_3->addWidget(cbStopBits, 3, 1, 1, 1);

        cbPortName = new MyComboBox(groupBox);
        cbPortName->addItem(QString());
        cbPortName->setObjectName(QString::fromUtf8("cbPortName"));

        gridLayout_3->addWidget(cbPortName, 1, 1, 1, 1);

        label_5 = new QLabel(groupBox);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout_3->addWidget(label_5, 5, 0, 1, 1);

        cbBaudRate = new QComboBox(groupBox);
        cbBaudRate->addItem(QString());
        cbBaudRate->addItem(QString());
        cbBaudRate->addItem(QString());
        cbBaudRate->addItem(QString());
        cbBaudRate->addItem(QString());
        cbBaudRate->addItem(QString());
        cbBaudRate->addItem(QString());
        cbBaudRate->addItem(QString());
        cbBaudRate->addItem(QString());
        cbBaudRate->setObjectName(QString::fromUtf8("cbBaudRate"));

        gridLayout_3->addWidget(cbBaudRate, 2, 1, 1, 1);


        verticalLayout_3->addLayout(gridLayout_3);

        chk0x16Show = new QCheckBox(groupBox);
        chk0x16Show->setObjectName(QString::fromUtf8("chk0x16Show"));

        verticalLayout_3->addWidget(chk0x16Show);

        chkTimeShow = new QCheckBox(groupBox);
        chkTimeShow->setObjectName(QString::fromUtf8("chkTimeShow"));

        verticalLayout_3->addWidget(chkTimeShow);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        sbFontSize = new QSpinBox(groupBox);
        sbFontSize->setObjectName(QString::fromUtf8("sbFontSize"));

        horizontalLayout_4->addWidget(sbFontSize);

        fontSize = new QLabel(groupBox);
        fontSize->setObjectName(QString::fromUtf8("fontSize"));

        horizontalLayout_4->addWidget(fontSize);


        verticalLayout_3->addLayout(horizontalLayout_4);

        open = new QPushButton(groupBox);
        open->setObjectName(QString::fromUtf8("open"));

        verticalLayout_3->addWidget(open);

        clear = new QPushButton(groupBox);
        clear->setObjectName(QString::fromUtf8("clear"));

        verticalLayout_3->addWidget(clear);


        verticalLayout_5->addLayout(verticalLayout_3);

        verticalSpacer = new QSpacerItem(17, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_5->addItem(verticalSpacer);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        send = new QPushButton(groupBox);
        send->setObjectName(QString::fromUtf8("send"));
        QFont font;
        font.setBold(true);
        send->setFont(font);

        verticalLayout_2->addWidget(send);

        btnDraw = new QCheckBox(groupBox);
        btnDraw->setObjectName(QString::fromUtf8("btnDraw"));
        btnDraw->setChecked(false);

        verticalLayout_2->addWidget(btnDraw);

        chkClearAfterSend = new QCheckBox(groupBox);
        chkClearAfterSend->setObjectName(QString::fromUtf8("chkClearAfterSend"));

        verticalLayout_2->addWidget(chkClearAfterSend);

        chk0x16Send = new QCheckBox(groupBox);
        chk0x16Send->setObjectName(QString::fromUtf8("chk0x16Send"));

        verticalLayout_2->addWidget(chk0x16Send);

        chkNewLine = new QCheckBox(groupBox);
        chkNewLine->setObjectName(QString::fromUtf8("chkNewLine"));
        chkNewLine->setChecked(true);

        verticalLayout_2->addWidget(chkNewLine);

        clearSend = new QPushButton(groupBox);
        clearSend->setObjectName(QString::fromUtf8("clearSend"));

        verticalLayout_2->addWidget(clearSend);


        verticalLayout_5->addLayout(verticalLayout_2);


        horizontalLayout->addWidget(groupBox);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        groupBox_2 = new QGroupBox(layoutWidget);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        gridLayout_2 = new QGridLayout(groupBox_2);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        receiveEdit = new QPlainTextEdit(groupBox_2);
        receiveEdit->setObjectName(QString::fromUtf8("receiveEdit"));
        receiveEdit->setReadOnly(true);
        receiveEdit->setTextInteractionFlags(Qt::NoTextInteraction);
        receiveEdit->setMaximumBlockCount(100000);

        gridLayout_2->addWidget(receiveEdit, 0, 0, 1, 1);


        verticalLayout->addWidget(groupBox_2);

        groupBox_3 = new QGroupBox(layoutWidget);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        gridLayout = new QGridLayout(groupBox_3);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        sendEdit = new QPlainTextEdit(groupBox_3);
        sendEdit->setObjectName(QString::fromUtf8("sendEdit"));

        gridLayout->addWidget(sendEdit, 0, 0, 1, 1);


        verticalLayout->addWidget(groupBox_3);

        verticalLayout->setStretch(0, 3);
        verticalLayout->setStretch(1, 1);

        horizontalLayout->addLayout(verticalLayout);

        horizontalLayout->setStretch(0, 1);
        horizontalLayout->setStretch(1, 2);
        splitter->addWidget(layoutWidget);
        groupBox_7 = new QGroupBox(splitter);
        groupBox_7->setObjectName(QString::fromUtf8("groupBox_7"));
        groupBox_7->setMinimumSize(QSize(300, 0));
        verticalLayout_4 = new QVBoxLayout(groupBox_7);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        gridLayout_7 = new QGridLayout();
        gridLayout_7->setObjectName(QString::fromUtf8("gridLayout_7"));
        cusplot = new QCustomPlot(groupBox_7);
        cusplot->setObjectName(QString::fromUtf8("cusplot"));

        gridLayout_7->addWidget(cusplot, 0, 0, 1, 1);


        verticalLayout_4->addLayout(gridLayout_7);

        groupBox_5 = new QGroupBox(groupBox_7);
        groupBox_5->setObjectName(QString::fromUtf8("groupBox_5"));
        groupBox_5->setMinimumSize(QSize(0, 0));
        verticalLayout_8 = new QVBoxLayout(groupBox_5);
        verticalLayout_8->setObjectName(QString::fromUtf8("verticalLayout_8"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        minRange = new QSpinBox(groupBox_5);
        minRange->setObjectName(QString::fromUtf8("minRange"));
        minRange->setMinimum(1);
        minRange->setMaximum(10000);
        minRange->setSingleStep(10);

        verticalLayout_6->addWidget(minRange);

        label_6 = new QLabel(groupBox_5);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        QFont font1;
        font1.setPointSize(6);
        label_6->setFont(font1);
        label_6->setAlignment(Qt::AlignHCenter|Qt::AlignTop);

        verticalLayout_6->addWidget(label_6);


        horizontalLayout_3->addLayout(verticalLayout_6);

        horizontalSlider = new QSlider(groupBox_5);
        horizontalSlider->setObjectName(QString::fromUtf8("horizontalSlider"));
        horizontalSlider->setMinimum(1);
        horizontalSlider->setMaximum(1000);
        horizontalSlider->setValue(500);
        horizontalSlider->setOrientation(Qt::Horizontal);
        horizontalSlider->setTickPosition(QSlider::TicksBelow);
        horizontalSlider->setTickInterval(100);

        horizontalLayout_3->addWidget(horizontalSlider);

        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        spinBox_2 = new QSpinBox(groupBox_5);
        spinBox_2->setObjectName(QString::fromUtf8("spinBox_2"));
        spinBox_2->setMinimum(1);
        spinBox_2->setMaximum(10000);
        spinBox_2->setSingleStep(10);
        spinBox_2->setValue(1000);

        verticalLayout_7->addWidget(spinBox_2);

        label_7 = new QLabel(groupBox_5);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setFont(font1);
        label_7->setAlignment(Qt::AlignHCenter|Qt::AlignTop);

        verticalLayout_7->addWidget(label_7);


        horizontalLayout_3->addLayout(verticalLayout_7);

        horizontalLayout_3->setStretch(0, 1);
        horizontalLayout_3->setStretch(1, 10);
        horizontalLayout_3->setStretch(2, 1);

        verticalLayout_8->addLayout(horizontalLayout_3);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        AlwaysAuto = new QCheckBox(groupBox_5);
        AlwaysAuto->setObjectName(QString::fromUtf8("AlwaysAuto"));
        AlwaysAuto->setChecked(true);

        horizontalLayout_2->addWidget(AlwaysAuto);

        checkBox = new QCheckBox(groupBox_5);
        checkBox->setObjectName(QString::fromUtf8("checkBox"));
        checkBox->setChecked(true);

        horizontalLayout_2->addWidget(checkBox);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        AutoSet = new QPushButton(groupBox_5);
        AutoSet->setObjectName(QString::fromUtf8("AutoSet"));

        horizontalLayout_2->addWidget(AutoSet);

        stopDraw = new QPushButton(groupBox_5);
        stopDraw->setObjectName(QString::fromUtf8("stopDraw"));

        horizontalLayout_2->addWidget(stopDraw);

        clearCharts = new QPushButton(groupBox_5);
        clearCharts->setObjectName(QString::fromUtf8("clearCharts"));

        horizontalLayout_2->addWidget(clearCharts);


        verticalLayout_8->addLayout(horizontalLayout_2);


        verticalLayout_4->addWidget(groupBox_5);

        verticalLayout_4->setStretch(0, 3);
        verticalLayout_4->setStretch(1, 1);
        splitter->addWidget(groupBox_7);

        gridLayout_4->addWidget(splitter, 0, 0, 1, 1);

        QWidget::setTabOrder(sendEdit, receiveEdit);
        QWidget::setTabOrder(receiveEdit, cbPortName);
        QWidget::setTabOrder(cbPortName, cbBaudRate);
        QWidget::setTabOrder(cbBaudRate, cbStopBits);
        QWidget::setTabOrder(cbStopBits, cbDataBits);
        QWidget::setTabOrder(cbDataBits, cbParity);
        QWidget::setTabOrder(cbParity, chk0x16Show);
        QWidget::setTabOrder(chk0x16Show, chkClearAfterSend);
        QWidget::setTabOrder(chkClearAfterSend, chk0x16Send);
        QWidget::setTabOrder(chk0x16Send, chkNewLine);

        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "SSWHelper-\344\270\262\345\217\243\347\244\272\346\263\242\345\231\250", nullptr));
        groupBox->setTitle(QCoreApplication::translate("Widget", "\344\270\262\345\217\243\346\223\215\344\275\234", nullptr));
        lbConnected->setText(QCoreApplication::translate("Widget", "\345\275\223\345\211\215\346\234\252\350\277\236\346\216\245", nullptr));
        label->setText(QCoreApplication::translate("Widget", "\347\253\257\345\217\243", nullptr));
        cbParity->setItemText(0, QCoreApplication::translate("Widget", "\346\227\240", nullptr));
        cbParity->setItemText(1, QCoreApplication::translate("Widget", "\345\245\207", nullptr));
        cbParity->setItemText(2, QCoreApplication::translate("Widget", "\345\201\266", nullptr));

        cbParity->setCurrentText(QCoreApplication::translate("Widget", "\346\227\240", nullptr));
        label_3->setText(QCoreApplication::translate("Widget", "\345\201\234\346\255\242\344\275\215", nullptr));
        label_4->setText(QCoreApplication::translate("Widget", "\346\225\260\346\215\256\344\275\215", nullptr));
        label_2->setText(QCoreApplication::translate("Widget", "\346\263\242\347\211\271\347\216\207", nullptr));
        cbDataBits->setItemText(0, QCoreApplication::translate("Widget", "8", nullptr));
        cbDataBits->setItemText(1, QCoreApplication::translate("Widget", "7", nullptr));
        cbDataBits->setItemText(2, QCoreApplication::translate("Widget", "6", nullptr));
        cbDataBits->setItemText(3, QCoreApplication::translate("Widget", "5", nullptr));

        cbDataBits->setCurrentText(QCoreApplication::translate("Widget", "8", nullptr));
        cbStopBits->setItemText(0, QCoreApplication::translate("Widget", "1", nullptr));
        cbStopBits->setItemText(1, QCoreApplication::translate("Widget", "1.5", nullptr));
        cbStopBits->setItemText(2, QCoreApplication::translate("Widget", "2", nullptr));

        cbPortName->setItemText(0, QCoreApplication::translate("Widget", "\350\257\267\351\200\211\346\213\251", nullptr));

        cbPortName->setCurrentText(QCoreApplication::translate("Widget", "\350\257\267\351\200\211\346\213\251", nullptr));
        label_5->setText(QCoreApplication::translate("Widget", "\345\245\207\345\201\266\346\240\241\351\252\214", nullptr));
        cbBaudRate->setItemText(0, QCoreApplication::translate("Widget", "1200", nullptr));
        cbBaudRate->setItemText(1, QCoreApplication::translate("Widget", "2400", nullptr));
        cbBaudRate->setItemText(2, QCoreApplication::translate("Widget", "4800", nullptr));
        cbBaudRate->setItemText(3, QCoreApplication::translate("Widget", "9600", nullptr));
        cbBaudRate->setItemText(4, QCoreApplication::translate("Widget", "14400", nullptr));
        cbBaudRate->setItemText(5, QCoreApplication::translate("Widget", "19200", nullptr));
        cbBaudRate->setItemText(6, QCoreApplication::translate("Widget", "38400", nullptr));
        cbBaudRate->setItemText(7, QCoreApplication::translate("Widget", "57600", nullptr));
        cbBaudRate->setItemText(8, QCoreApplication::translate("Widget", "115200", nullptr));

        cbBaudRate->setCurrentText(QCoreApplication::translate("Widget", "1200", nullptr));
        chk0x16Show->setText(QCoreApplication::translate("Widget", "16\350\277\233\345\210\266\346\230\276\347\244\272", nullptr));
        chkTimeShow->setText(QCoreApplication::translate("Widget", "\346\230\276\347\244\272\346\227\266\351\227\264\346\210\263", nullptr));
        fontSize->setText(QCoreApplication::translate("Widget", "\345\255\227\344\275\223\345\244\247\345\260\217", nullptr));
        open->setText(QCoreApplication::translate("Widget", "\346\211\223\345\274\200\344\270\262\345\217\243", nullptr));
        clear->setText(QCoreApplication::translate("Widget", "\346\270\205\347\251\272\346\216\245\346\224\266", nullptr));
        send->setText(QCoreApplication::translate("Widget", "\345\217\221\351\200\201", nullptr));
        btnDraw->setText(QCoreApplication::translate("Widget", "\345\274\200\345\220\257\347\273\230\345\210\266\345\214\272", nullptr));
        chkClearAfterSend->setText(QCoreApplication::translate("Widget", "\346\257\217\346\254\241\345\217\221\345\256\214\346\270\205\347\251\272\345\217\221\351\200\201\345\214\272", nullptr));
        chk0x16Send->setText(QCoreApplication::translate("Widget", "16\350\277\233\345\210\266\345\217\221\351\200\201", nullptr));
        chkNewLine->setText(QCoreApplication::translate("Widget", "\345\217\221\351\200\201\346\226\260\350\241\214", nullptr));
        clearSend->setText(QCoreApplication::translate("Widget", "\346\270\205\347\251\272\345\217\221\351\200\201\345\214\272", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("Widget", "\346\216\245\346\224\266\345\214\272", nullptr));
        groupBox_3->setTitle(QCoreApplication::translate("Widget", "\345\217\221\351\200\201\345\214\272", nullptr));
        groupBox_7->setTitle(QCoreApplication::translate("Widget", "\347\273\230\345\210\266\345\214\272", nullptr));
        groupBox_5->setTitle(QCoreApplication::translate("Widget", "\347\273\230\345\210\266\346\216\247\345\210\266", nullptr));
        label_6->setText(QCoreApplication::translate("Widget", "MIN", nullptr));
        label_7->setText(QCoreApplication::translate("Widget", "MAX", nullptr));
        AlwaysAuto->setText(QCoreApplication::translate("Widget", "\350\207\252\345\212\250\350\256\276\347\275\256", nullptr));
        checkBox->setText(QCoreApplication::translate("Widget", "xAuto", nullptr));
        AutoSet->setText(QCoreApplication::translate("Widget", "\345\215\225\346\254\241\350\207\252\345\212\250", nullptr));
        stopDraw->setText(QCoreApplication::translate("Widget", "\345\201\234\346\255\242\347\273\230\345\210\266", nullptr));
        clearCharts->setText(QCoreApplication::translate("Widget", "\346\270\205\351\231\244\346\233\262\347\272\277", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
