#include "honor.h"
#include "ui_honor.h"
#include"QFile"
#include"QMessageBox"
#include"QTextStream"
honor::honor(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::honor)
{
    ui->setupUi(this);
    setWindowFlags(windowFlags()&~Qt::WindowMaximizeButtonHint);
    this->setFixedSize(this->size().width(),this->size().height());
    this->setWindowModality(Qt::ApplicationModal);
    QFile file("honor.xdn");
    if(! file.open(QIODevice::ReadOnly|QIODevice::Text))//如果没有这个文件就新建一个
    {
        /*file.close();
        file.open(QIODevice::WriteOnly|QIODevice::Text);
        QTextStream out(&file);
        out<<"000000";
            file.close();
            file.open(QIODevice::ReadOnly|QIODevice::Text);*/;
    }


    file.open(QIODevice::ReadOnly|QIODevice::Text);
    QByteArray line = file.readLine();
    QString str(line);
    file.close();
    if(str[0]=='1')
        ui->lb_win->setText("已获得");
    else
         ui->lb_win->setText("未获得");

    if(str[1]=='1')
        ui->lb_lose->setText("已获得");
    else
         ui->lb_lose->setText("未获得");

    if(str[2]=='1')
        ui->lb_70pig->setText("已获得");
    else
         ui->lb_70pig->setText("未获得");

    if(str[3]=='1')
        ui->lb_100pig->setText("已获得");
    else
         ui->lb_100pig->setText("未获得");

    if(str[4]=='1')
        ui->lb_5Wdoller->setText("已获得");
    else
         ui->lb_5Wdoller->setText("未获得");

    if(str[5]=='1')
        ui->lb_10Wdoller->setText("已获得");
    else
         ui->lb_10Wdoller->setText("未获得");
}

honor::~honor()
{
    delete ui;
}

void honor::on_pushButton_clicked()
{
    this->close();
}
