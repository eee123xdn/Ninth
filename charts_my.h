#ifndef CHARTS_MY_H
#define CHARTS_MY_H

#include <QWidget>
#include <QtCharts>
#include<piggame.h>
QT_CHARTS_USE_NAMESPACE
namespace Ui {
class charts_my;
}

class charts_my : public QWidget
{
    Q_OBJECT

public:
    explicit charts_my(QWidget *parent = nullptr);

    ~charts_my();

private slots:


    void on_pushButton_clicked();

private:
    Ui::charts_my *ui;
};

#endif // CHARTS_MY_H
