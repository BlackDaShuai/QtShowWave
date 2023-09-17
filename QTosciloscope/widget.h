#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>

#include <QSerialPort>
#include <QSerialPortInfo>
#include <QPlainTextEdit>
#include "qcustomplot.h"
#include <QDateTime>
#include <QTimer>
#include <QFont>


QT_BEGIN_NAMESPACE
namespace Ui { class Widget; }
QT_END_NAMESPACE

class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = nullptr);

    long long countTimeOut = 0;
    ~Widget();



public:
    QSerialPort *Serial = new QSerialPort();
    //    QFont lastFont;
    //    QPalette pletRed;
    //    QPalette pletBlack;

    //    bool isHexadecimal(const QString &str);已改为正则

    //    void oneLineColorful(QString text, QPlainTextEdit* plainTextEdit,int fontSize, QColor fontColor, QColor backColor);
private slots:


    void on_clear_clicked();

    void on_cbPortName_clicked();

    void on_open_clicked();

    void showSerialData();

    void on_send_clicked();

    void on_clearSend_clicked();

    void on_receiveEdit_textChanged();

    void on_btnDraw_stateChanged(int arg1);

    QString upDateTime(bool arg);

    void on_sbFontSize_valueChanged(int arg1);

    void customInit();

    void customTimeOut();

    void updateXYMinMaxToCus();

    //    void horzScrollBarChanged(int value);
    //    void vertScrollBarChanged(int value);
    //    void xAxisChanged(QCPRange range);
    //    void yAxisChanged(QCPRange range);



    void on_horizontalSlider_sliderMoved(int position);

    void on_stopDraw_clicked();

    void on_AutoSet_clicked();

    void on_clearCharts_clicked();

    void on_AlwaysAuto_stateChanged(int arg1);

    void drawSerialData();//串口收完数据后的绘制操作

    void on_checkBox_stateChanged(int arg1);

private:
    Ui::Widget *ui;

    double doubleData = 0.0;


    int MaxX = 100;
    int MinX = 0;
    int MaxY = 100;
    int MinY = -100;
    QTimer *timeStart = new QTimer();

    bool flagUpdateDraw = 1;
    bool flagAlwaysAuto = 1;
    bool flagFirstDataToDraw = 0;
    bool flagXAuto = 1;

    //绘图数据更新间隔
    int tIv = 10;
    int *timeInterval = &tIv;
    double yVal = 0;

    int xRangeRange = 500;

    double yMaxAuto = 0;
    double yMinAuto = 0;
    //testData

signals:
    void serialRecOK();
};
#endif // WIDGET_H
