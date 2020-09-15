#include "startgame.h"
#include "ui_startgame.h"
#include<QMessageBox>
#include"piggame.h"
#include<QFile>

StartGame::StartGame(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::StartGame)
{
    ui->setupUi(this);
    setWindowFlags(windowFlags()&~Qt::WindowMaximizeButtonHint);
    this->setFixedSize(this->size().width(),this->size().height());
    //this->ui->btn_start->setStyleSheet("border:none;");
}

StartGame::~StartGame()
{
    delete ui;
}


void StartGame::on_btn_start_clicked()
{

    int ret = QMessageBox::information(this,"确认","开始新游戏会覆盖原有的存档，是否继续？","确定","取消");
    if(!ret)
    {
        QFile file("pigdata.mt");
        file.open(QIODevice::WriteOnly|QIODevice::Text);
        file.close();
        QFile file1("search.mt");
        file1.open(QIODevice::WriteOnly|QIODevice::Text);
        file1.close();
        QFile file2("buysearch.mt");
        file2.open(QIODevice::WriteOnly|QIODevice::Text);
        file2.close();
        PigGame * a = new PigGame(this);
        a->show();
        this->hide();
    }
}

void StartGame::on_pushButton_2_clicked()
{
    PigGame * a = new PigGame(this);
    a->show();
    this->hide();
}

void StartGame::on_pushButton_3_clicked()
{
    int ret = QMessageBox::critical(this,"警告","你确定要退出游戏吗？","确定","取消");
    if(!ret)
    {
        exit(0);
    }
}
