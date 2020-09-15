#include "config.h"
#include "ui_config.h"
#include<piggame.h>
#include<QMessageBox>
#include<QFile>
#include<QTextStream>
#include<piggame.h>
#include<QDebug>

config::config(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::config)
{


    ui->setupUi(this);
    setWindowFlags(windowFlags()&~Qt::WindowMaximizeButtonHint);
    this->setFixedSize(this->size().width(),this->size().height());
    this->setWindowModality(Qt::ApplicationModal);
        ui->cb_pic->setCurrentIndex(bgpic - 1);
        ui->cb_music->setCurrentIndex(bgm - 1);
        ui->cb_speed->setCurrentIndex(speedf1);

}

config::~config()
{
    delete ui;
}

void config::on_pushButton_3_clicked()
{
    int ret = QMessageBox::information(this,"提示","你确定要修改设置吗？","确定","取消");
    if(!ret)
    {
    bgpic = ui->cb_pic->currentIndex()+1;

    bgm = ui->cb_music->currentIndex()+1;
    emit change_BGM_and_BGPIC();
    speed = 1/ui ->cb_speed->currentText().toDouble();
    speedf1 =ui->cb_speed->currentIndex();
    if(my_timer->isActive())
    {
        my_timer->stop();
        my_timer->start(speed*1000);
    }
    if(my_timer2->isActive())
    {
        my_timer2->stop();
        my_timer2->start(speed*1000);
    }
    if(my_timer1->isActive())
    {
        my_timer1->stop();
        my_timer1->start(speed*1000);
    }
    if(my_timer4->isActive())
    {
        my_timer4->stop();
        my_timer4->start(speed*1000);
    }
    this->close();
    }
}

void config::on_pushButton_2_clicked()
{
    int ret = QMessageBox::critical(this,"警告","你确定要退出游戏吗？","确定","取消");
    if(!ret)
    {
        exit(0);
    }
}

void config::on_pushButton_4_clicked()
{
    int ret = QMessageBox::information(this,"提示","你确定要放弃修改的设置吗？","确定","取消");
    if(!ret)
    {
    this->close();
    }
}

void config::on_btn_save_clicked()
{
    int ret = QMessageBox::information(this,"提示","你确定要存档吗？这会覆盖现有的存档","确定","取消");
    if(!ret)
    {

        int in_geli = 0,in_ill = 0;
        QFile file("pigdata.mt");
        if(! file.open(QIODevice::WriteOnly|QIODevice::Text))
        {
            QMessageBox::critical(this,"严重错误","文件打开失败，信息未写入，请与开发者联系","确认");
            return;
        }

        QTextStream out(&file);
        if(healthtime != 0)
            in_geli = 1;
        if(PigGame::illcheck())
            in_ill = 1;
        out<<in_geli;
        out<<"|";
        out<<healthtime;
        out<<"|";
        out<<in_ill;
        out<<"|";
        out<<cnt;
        out<<"|";
        out<<money;
        out<<"|";
        out<<day;
        out<<endl;
        p=head;
        for(int i=0;i<100;i++)
        {
            for(int k =0;k<10;k++)
            {
                out<<p->data[k][0]<<"|"<<p->data[k][1]<<"|"<<p->data[k][2]<<"|"<<p->data[k][3]<<"|"<<p->data[k][4]<<endl;
            }
            p = p->N;
        }
        p = head;
        file.close();

    }
}
