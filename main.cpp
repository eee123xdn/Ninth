#include "startgame.h"
#include "piggame.h"
#include"charts_my.h"
#include <QApplication>
#include<piggame.h>
int sum=500,day=0,money=500,sum_money=0 , cnt=0,bgm=1,bgpic=1,modetj = 0;
double speed = 1;
int speedf1 = 0;
Node *p =  new Node(),*head =  new Node(),*tail =  new Node();
int buy_bai = 0,buy_hua = 0,buy_hei = 0;
bool _60 = 0,_120 = 0,_180 = 0;
int bai1 = 0,hua1=0,hei1=0;
int bai2[4]={0},hei2[4]={0},hua2[4]={0},bai3[4]={0},hei3[4]={0},hua3[4]={0};
//QString bgmstr = "";
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    StartGame w;
    w.show();
    return a.exec();
}
