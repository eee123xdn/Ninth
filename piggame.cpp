#include "piggame.h"
#include "ui_piggame.h"
#include<QPushButton>
#include"page1.h"
#include"page2.h"
#include"page3.h"
#include"page4.h"
#include"page5.h"
#include"config.h"
#include"store.h"
#include"honor.h"
#include<QTime>
#include<QTimer>
#include<QString>
#include<QDebug>
#include<QFile>
#include<QStringList>
#include<QMediaPlayer>
#include<QMessageBox>
#include<QSound>
#include<QTextCodec>
#include"charts_my.h"
QTimer*my_timer=new QTimer();//设置一个Qtimer
QTimer*my_timer1=new QTimer();//设置一个Qtimer
QTimer*my_timer2=new QTimer();//设置一个Qtimer
QTimer*my_timer4=new QTimer();//设置一个Qtimer
QTimer*my_timer5=new QTimer();//设置一个Qtimer
QTimer*my_timer6=new QTimer();//设置一个Qtimer
QTimer*my_timer7=new QTimer();//设置一个Qtimer
QTimer*my_timer8=new QTimer();//设置一个Qtimer
std::vector<QString> sales_record;
std::vector<QString> buy_record;
const QString bgmstr = ":/res/res/1.wav";
QMediaPlayer * player = new QMediaPlayer();
int healthtime = 0,nowspeed = 1;
PigGame::PigGame(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::PigGame)
{
    ui->setupUi(this);
    setWindowFlags(windowFlags()&~Qt::WindowMaximizeButtonHint);          //固定大小作用
    this->setFixedSize(this->size().width(),this->size().height());
    PigGame::new_game(); 
    //qDebug()<<"54545465465464685468548564685456485645";
    //ui->stackedWidget_2->hide();
    ui->btn_tj_days_2->hide();                        //返回游戏的按钮
    bells1 = new QSound(":/res/res/1.wav");
    bells2 = new QSound(":/res/res/2.wav");
    bells3 = new QSound(":/res/res/3.wav");
    bells1->play();
    bells1->setLoops(-1);                             //歌曲循环播放
    connect(my_timer,SIGNAL(timeout()),this,SLOT(goout()));       //将QTimer绑定给出栏函数
    my_timer->start(speed*1000);                                  //开始1000/speed毫秒执行一次goout
    connect(my_timer1,SIGNAL(timeout()),this,SLOT(illmode()));    //将QTimer绑定给感染函数
    my_timer1->start(speed*1000);                                 //开始1000/speed毫秒执行一次goout
    connect(my_timer2,SIGNAL(timeout()),this,SLOT(healthemode()));//将QTimer绑定给隔离函数
    connect(my_timer4,SIGNAL(timeout()),this,SLOT(pig_grow()));
    my_timer4->start(speed*1000);
    connect(my_timer5,&QTimer::timeout,this,[=](){                //自动保存按钮
        ui->lb_saveauto->setStyleSheet("color: rgb(0, 5, 25);\
                                       font: 9pt \"方正少儿简体\";");
        my_timer5->stop();
    });
    PigGame::loadgame();
}
PigGame::~PigGame()
{
    delete ui;

}
void PigGame::new_game()
{
    p = head;
    //350hua or bai
    for(int i = 0;i<70;i++)
    {
        p->type = false;                                          //猪圈是不是黑猪圈，是为true,但是p->type=0后面会出问题
        for(int K=0;K<5;K++)
        {
            qsrand(QTime(0,0,0).secsTo(QTime::currentTime())+K*10000+i);          //短时间内快速获取不一样的随机数，k太小，可能重复
            p->data[K][0]=qrand()%2+1;                            //猪的种类，可一起装白猪或者花猪
            p->data[K][2] = 1;                                    //天数开始都赋值为1
            p->data[K][3] = 0;                                    //是否感染
            p->data[K][4] = 0;                                    //需要隔离的天数
        }
        for(int K=5;K<10;K++)
        {
            p->data[K][0] = 4;                                    //每个猪圈后面五个位置没装，种类定为4
            p->data[K][1] = 0;
            p->data[K][2] = 0;
            p->data[K][3] = 0;
            p->data[K][4] = 0;
        }
        p->number=5;                                              //猪圈数量初始化为5
        p->flag=0;                                                //猪圈开始未感染
        p->N = new Node();                                        //新建节点，表示猪圈
        p=p->N;
    }
    //150hei
    for(int i = 70;i<100;i++)
    {
        p->type = true;
        for(int K=0;K<5;K++)
        {
           //qDebug()<<"1";
            p->data[K][0] = 3;
           // p->data[K][1] = 200;
            p->data[K][2] = 1;
            //qDebug()<<p->data[K][0];
            p->data[K][3] = 0;
            p->data[K][4] = 0;
        }
        for(int K=5;K<10;K++)
        {
            p->data[K][0] = 4;
            p->data[K][1] = 0;
            p->data[K][2] = 0;
            p->data[K][3] = 0;
            p->data[K][4] = 0;
        }
        p->number=5;
        p->flag=0;
        p->N = new Node();
        p=p->N;
    }
    p=head;
    for(int i = 0;i<100;i++)
    {

        for(int K=0;K<5;K++)
        {
                    qsrand(QTime(0,0,0).secsTo(QTime::currentTime())+K*100+i);
                    p->data[K][1]=qrand()%300+200;
                    //if(i>=70)
                    //qDebug()<<p->data[K][0];
                    }
        p=p->N;
        }
     p=head;                                                   //被坑过。。。
     sum = 500;                                                //总数sum一开始赋予500

}
void PigGame::illmode()
{
        p=head;
        int m;
        if(illcheck() == false)                                //未感染状态时才可能发生感染，不然万一多个感染过程，多线程搞出来了
        {
            qsrand(QTime(0,0,0).secsTo(QTime::currentTime()));
            int x=qrand()%20+60;                               //主要是为了快一点感染，好展示效果hhhhh
            if(x==61)
            {
                qsrand(QTime(0,0,0).secsTo(QTime::currentTime()));
                m=qrand()%100;
                for(int i=0;i<100;i++)
                {
                    if(i==m)
                    {
                        int n=qrand()%10;
                        p->data[n][3]=1;       //该猪已经被感染
                        p->flag=1;             //猪圈已经被感染
                        cnt=std::max(m,100-m)*7+8;
                        break;
                    }
                    p=p->N;
                }
            }
        }
        if(cnt == 0&&illcheck()==true)                      //最开始养猪场感染了
        {
            QString ac = "有瘟疫的猪圈有"+QString::number(illsum())+"个，占到了所有猪圈的"+QString::number(illsum())+"%";
            this->ui->lb_ill_pigsty->setText(ac);
            this->ui->lb_ill_arise->setText("养猪场出现瘟疫");
            this->ui->lb_daed_day->setText("如果未隔离，最快"+QString::number(cnt)+"天后全部猪就会死亡");
        }
        else if(illcheck()==false)
        {
            this->ui->lb_ill_pigsty->setText("有瘟疫的猪圈有0个，占到了所有猪圈的0%");
            this->ui->lb_ill_arise->setText("养猪场未出现瘟疫");
            this->ui->lb_daed_day->setText("恭喜你，目前你的猪尚未感染瘟疫");
        }
            else                                          //一直处于死亡倒计时状态,倒计完了,cnt=0，又重复随机感染过程
       {
            QString ac = "有瘟疫的猪圈有"+QString::number(illsum())+"个，占到了所有猪圈的"+QString::number(illsum())+"%";
            this->ui->lb_ill_pigsty->setText(ac);
            this->ui->lb_ill_arise->setText("养猪场出现瘟疫");
            QString ab = "如果未隔离，最快"+QString::number(cnt)+"天后全部猪就会死亡";
            this->ui->lb_daed_day->setText(ab);
            cnt--;
        }
        p=head;
        if(check())                                       //一旦有一只感染的，就模拟，每只猪隔离期就设为180天，这其实也算模拟每只猪的感染过程嘛，上面只是计算
            {
                for(int i=0;i<100;i++)
                {
                    for(int k=0;k<10;k++)
                    {
                        if(p->data[k][3]==1)              //感染过了，跳过
                        {
                            continue;
                        }
                        else if(p->flag==1)               //如果本猪圈感染，用50%的概率计算
                        {
                            int x=qrand()%100;
                            if(x<50)
                            {
                                p->data[k][3]=1;         //该猪感染状态和隔离天数都记录一下
                                p->data[k][4]=180;
                            }
                        }
                        else if(p->flag==0&&((p->F!=NULL&&p->F->flag==1)||(p->N!=NULL&&p->N->flag==1)))           //两边边界注意一下，只考虑一方，出过bug
                        {
                            int x=qrand()%100;
                            if(x<15)
                            {
                                p->flag=1;
                                p->data[k][3]=1;
                                p->data[k][4]=180;
                            }
                        }
                    }
                    p=p->N;
                }
            }
}
void PigGame::on_btn_config_clicked()
{
    config *a = new config(this);
    connect(a,SIGNAL(change_BGM_and_BGPIC()),this,SLOT(change_BGM_and_BGPIC()));              //自定义一下
    a->show();
}
void PigGame::on_btn_store_clicked()
{
    store *a = new store(this);
    connect(a,&store::finish_buy,this,[=](){                                 //点击商店按钮，然后打开商店界面，买了之后，记得存入文件一下，后面可以显示自动补入记录
        ui->lb_saveauto->setStyleSheet("color: rgb(255, 255, 255);\
                                       font: 9pt \"方正少儿简体\";");
        my_timer5->start(1000);
        savefile();
    });
    a->show();
    p=head;
}
void PigGame::on_btn_honor_clicked()
{
       honor *a = new honor(this);
       a->show();

}
void PigGame::on_btn_nextpage_clicked()
{
       int nIndex = ui->stackedWidget->currentIndex();
       ++nIndex;                                                             // 获取下一个需要显示的页面索引
       if (nIndex == 5)
           nIndex = 0;                                                       // 当需要显示的页面索引大于等于总页面时，切换至首页
       ui->stackedWidget->setCurrentIndex(nIndex);
}
void PigGame::on_btn_frontpage_clicked()
{
    int nIndex = ui->stackedWidget->currentIndex();                          // 获取上一个需要显示的页面索引
        --nIndex;                                                            // 当需要显示的页面索引小于0时，切换至首页
        if (nIndex == -1)
            nIndex = 4;
       ui->stackedWidget->setCurrentIndex(nIndex);
}
void PigGame::goout()                                                        //这个其实还是每秒运行一次，只是说当天数%90==0时才执行出栏
{
    if(day%90 == 0)
    {
        int sellhua=0,sellbai=0,sellhei=0;
     ui->lb_saveauto->setStyleSheet("color: rgb(255, 255, 255);\
                                    font: 9pt \"方正少儿简体\";");
    my_timer5->start(1000);
    sum_money = 0;
    int hua=0,bai = 0,hei = 0;;
    int numpig = 0;
    p = head;
    for(int i = 0;i<100;i++)
    {
        for(int K=0;K<10;K++)
        {
            if((p->data[K][1]>=750||p->data[K][2]>360)&&p->data[K][0]<=3&&p->data[K][3]==0)//一个月30天//注意：要该猪不是空，且未被感染才可以出栏
            {
                numpig ++;
                if(p->data[K][0]==1)
                {
                    sellhua++;
                    sum_money += 7.0*p->data[K][1]/10;
                }
                if(p->data[K][0]==2)
                 {
                    sellbai++;
                    sum_money += 6.0*p->data[K][1]/10;
                }
                if(p->data[K][0]==3)
                   {
                    sellhei++;
                    sum_money += 15.0*p->data[K][1]/10;
                }
                if(p->type == false)                                                       //补入注意，如果不是黑猪圈，就随机补花猪或白猪，否则补黑猪
                {
                qsrand(QTime(0,0,0).secsTo(QTime::currentTime())+K*10000+i);
                p->data[K][0]=qrand()%2+1;
                if(p->data[K][0] == 1)
                    hua++;
                if(p->data[K][0] == 2)
                    bai++;
                qsrand(QTime(0,0,0).secsTo(QTime::currentTime())+K*100+i);
                p->data[K][1]=qrand()%300+200;
                p->data[K][2]=1;                                                           //补充的几个信息都要初始化
                p->data[K][3]=0;
                p->data[K][4]=0;
                }
                else
                {
                    hei++;
                    p->data[K][0]=3;
                    qsrand(QTime(0,0,0).secsTo(QTime::currentTime())+K*100+i);
                    p->data[K][1]=qrand()%300+200;
                    p->data[K][2]=1;
                    p->data[K][3]=0;
                    p->data[K][4]=0;
                }
            }
        }

        p=p->N;
    }
    money+=sum_money;
    //MainWindow::savefile_chulan(QString::number(sum)+"|"+QString::number(numpig)+"|"+QString::number(hua)+"|"+QString::number(bai)+"|"+QString::number(hei));
    //MainWindow::savefile_zhuangtai("a");
    //QString ab = QString::number(sum_money) + "|" +QString::number(numpig);
    QString cntstr = "时间 "+QString::number(day/360+2015)+" 年 "+QString::number(((day-day/360*360)/30==0)?1:(day-day/360*360)/30)+" 月 "+QString::number(day%30+1)+" 日"+"    卖出钱数 "+QString::number(sum_money);
    cntstr=cntstr+" 卖出猪数 "+QString::number(sellhua+sellbai+sellhei)+" 花猪数 "+QString::number(sellhua)+" 白猪数 "+QString::number(sellbai)+" 黑猪数 "+QString::number(sellhei);
    sales_record.push_back(cntstr);
    if(sales_record.size()> 4)
    {
        int cntnum = sales_record.size()-4;
        ui->lb_tips->setText("\n");
        ui->lb_tips->setText(ui->lb_tips->text()+"         "+sales_record[cntnum]+"\n");
        ui->lb_tips->setText(ui->lb_tips->text()+"         "+sales_record[cntnum+1]+"\n");
        ui->lb_tips->setText(ui->lb_tips->text()+"         "+sales_record[cntnum+2]+"\n");
        ui->lb_tips->setText(ui->lb_tips->text()+"         "+sales_record[cntnum+3]+"\n");
    }
    else
    {
        ui->lb_tips->setText("\n");
        int cntnum = sales_record.size()-1;
        for(int i = 0 ; i <= cntnum ;i++)
        {
            ui->lb_tips->setText(ui->lb_tips->text()+"         "+sales_record[i]+"\n");
        }
    }
    buy_record.push_back("类型: 自动补货   白猪 "+QString::number(bai)+" 花白猪 "+QString::number(hua)+" 黑猪 "+QString::number(hei));
    PigGame::savefile();
    }
}
bool PigGame::check()                                        //检查是否全被感染
 {
     p=head;
     for(int i=0;i<100;i++)
     {
         for(int k=0;k<10;k++)
         {
             if(p->data[k][3] == 0&&p->data[k][0]<=3)        //这个位置有猪并且猪未被感染
                {
                 p=head;
                 return true;
             }
         }
         p=p->N;
     }
     p=head;
     return false;
 }
bool PigGame::illcheck()                                   //检查是否感染
 {
     p=head;
     for(int i=0;i<100;i++)
     {
         for(int k=0;k<10;k++)
         {
             if(p->data[k][3] == 1)
             {
                 p=head;
                 return true;
             }
         }

         p=p->N;

     }
     p=head;
     return false;
 }
void PigGame::on_btn_geli_clicked()
{
    if(illcheck()&&my_timer2->isActive() == false)                //隔离期间重复点击无效
    {
    p=head;
    healthtime = 180;                                             //隔离初始设为180天
    my_timer1->stop();                                            //模拟死亡暂停
    this->ui->lb_daed_day->setText("开始隔离，停止计算死亡时间");
    this->ui->lb_ill_arise->setText("出现瘟疫，开始隔离");
    my_timer2->start(speed*1000);//开始1000毫秒执行一次隔离模式
    }
}
void PigGame::healthemode()
{
    this->ui->lb_health_day->setText("还有"+QString::number(healthtime)+"天隔离完成,在此期间病猪不可出栏");
    healthtime--;                                                //每1s刷一次，隔离天数减1
    if(healthtime == -1)
    {
        this->ui->lb_health_day->setText("目前处于非隔离状态");
        p = head;
        for(int i = 0;i<100;i++)
        {
            for (int k = 0;k<10;k++)
            {
                p->data[k][3] = 0;
            }
            p->flag = 0;
            p=p->N;
        }
        p = head;
        my_timer2->stop();
        my_timer1->start(speed*1000);
    }
}
int PigGame::illsum()
{
    int summ = 0;
    p=head;
    for(int i = 0;i<=99;i++)
    {
        if(p->flag == 1)
            summ++;
        p=p->N;
    }
    p=head;
    return summ;
}
void PigGame::loadgame()
{
    p = head;
    QFile file("pigdata.mt");
    file.open(QIODevice::ReadOnly|QIODevice::Text);
    int numcnt = 0;
    int healthtimecnt,in_geli = 0,in_ill,cntcnt,moneycnt;
    while(!file.atEnd())
    {
        numcnt++;                                                                  //一行一行读呗
        if(numcnt == 1)                                                            //第一行就是整个猪圈的数据，读回来
        {
            QByteArray line = file.readLine();
            QString str(line);
            QStringList list = str.split("|");
            in_geli = list[0].toInt();
            healthtimecnt =list[1].toInt();
            in_ill = list[2].toInt();
            cntcnt = list[3].toInt();
            moneycnt = list[4].toInt();
            day = list[5].toInt();
            cnt = cntcnt;
            money = moneycnt;
        }
        else
        {
            for(int k=0;k<10;k++)                                                 //接下来就是每一行的数据，读回来
            {
                QByteArray line = file.readLine();
                QString str(line);
                QStringList list = str.split("|");
                p->data[k][0] = list[0].toInt();
                p->data[k][1] = list[1].toInt();
                p->data[k][2] = list[2].toInt();
                p->data[k][3] = list[3].toInt();
                p->data[k][4] = list[4].toInt();
                if(p->data[k][3] == 1)
                p->flag = 1;
                qDebug()<<k;
            }
            p = p -> N;

        }
    }
    if(in_geli == 1&&in_ill == 1)
    {
        QString ac = "有瘟疫的猪圈有"+QString::number(illsum())+"个，占到了所有猪圈的"+QString::number(illsum())+"%";
        this->ui->lb_ill_pigsty->setText(ac);
        if(my_timer1->isActive())                                    //感染
        PigGame::on_btn_geli_clicked();
        healthtime=healthtimecnt;
    }
    file.close();
    QFile file1("search.mt");
    file1.open(QIODevice::ReadOnly|QIODevice::Text);
    while(!file1.atEnd())
    {
            QByteArray line = file1.readLine();                      //中文有乱码
            QTextCodec *tc = QTextCodec::codecForName("GBK");
            QString str = tc->toUnicode(line);
            // QString str(line);
            // QTextStream in(&file1);
            // QString str = in.readLine();
            // str=str.toUtf8();
            sales_record.push_back(str.left(str.size() - 1));
    }
    if(sales_record.size()> 4)
    {
        int cntnum = sales_record.size()-4;
        ui->lb_tips->setText("\n");
        ui->lb_tips->setText(ui->lb_tips->text()+"         "+sales_record[cntnum]+"\n");
        ui->lb_tips->setText(ui->lb_tips->text()+"         "+sales_record[cntnum+1]+"\n");
        ui->lb_tips->setText(ui->lb_tips->text()+"         "+sales_record[cntnum+2]+"\n");
        ui->lb_tips->setText(ui->lb_tips->text()+"         "+sales_record[cntnum+3]+"\n");
    }
    else
    {
        ui->lb_tips->setText("\n");
        int cntnum = sales_record.size()-1;
        for(int i = 0 ; i <= cntnum ;i++)
        {
            ui->lb_tips->setText(ui->lb_tips->text()+"         "+sales_record[i]+"\n");
        }
    }
    file1.close();
    QFile file2("buysearch.mt");
    file2.open(QIODevice::ReadOnly|QIODevice::Text);
    while(!file2.atEnd())
    {
            QByteArray line = file2.readLine();
            QTextCodec *tc = QTextCodec::codecForName("GBK");
            QString str = tc->toUnicode(line);
            // QString str(line);
            // QTextStream in(&file1);
            // QString str = in.readLine();
            // str=str.toUtf8();
            buy_record.push_back(str.left(str.size() - 1));
    }
    file2.close();
    p= head;
}
void PigGame::change_BGM_and_BGPIC()
{
    if(bgpic == 1)
    ui->backimg->setStyleSheet("background-image: url(:/res/res/game3.jpg);");
    if(bgpic == 2)
    ui->backimg->setStyleSheet("background-image: url(:/res/res/game2.jpg);");
    if(bgpic == 3)
    ui->backimg->setStyleSheet("background-image: url(:/res/res/game1.jpg);");
    if(bgm == 1)
    {
        bells2->stop();
        bells3->stop();
        bells1->stop();
        bells1->play();
        bells1->setLoops(-1);                                           //差点忘记了换歌也得循环
    }
    if(bgm == 2)
    {
        bells2->stop();
        bells3->stop();
        bells1->stop();
        bells2->play();
        bells1->setLoops(-1);
    }
    if(bgm == 3)
    {
        bells2->stop();
        bells3->stop();
        bells1->stop();
        bells3->play();
        bells1->setLoops(-1);
    }
}
void PigGame::pig_grow()                                                 //生长函数
{
    p = head;
    for(int i = 0;i<100;i++)
    {
        for(int K=0;K<10;K++)
        {
         qsrand(QTime(0,0,0).secsTo(QTime::currentTime())+K*day*1000+i);
         int test =qrand()%13;
         p->data[K][1]+=test;
         p->data[K][2]++;
        }
        p=p->N;
    }
    p=head;
    day++;
    if(money >= 50000||sum >700||(money<=0&&sum<=0))
    {
        QFile file("honor.xdn");
        file.open(QIODevice::ReadOnly|QIODevice::Text);
        QByteArray line = file.readLine();
        QString s(line);
        file.close();
        if(money>=50000)
            s[4] = '1';
        if(money>=100000)
            s[5] = '1';
        if(sum>=700)
            s[2] = '1';
        if(sum>=1000)
            s[3] = '1';
        if(money>=100000&&sum>=1000)
            s[0] = '1';
        if(money<=0&&sum<=0)
            s[1] = '1';

                    if(! file.open(QIODevice::WriteOnly|QIODevice::Text))
                    {
                        QMessageBox::critical(this,"存档严重错误","文件打开失败，信息未写入，请与开发者联系","确认");
                        return;
                    }
                    QTextStream out(&file);
                    out<<s;
                    file.close();
    }
}
void PigGame::savefile()
{
        //int ret = QMessageBox::information(this,"提示","你确定要存档吗？这会覆盖现有的存档","确定","取消");
        if(true)
        {
            int in_geli = 0,in_ill = 0;
            QFile file("pigdata.mt");
            if(! file.open(QIODevice::WriteOnly|QIODevice::Text))
            {
                QMessageBox::critical(this,"自动存档严重错误","文件打开失败，信息未写入，请与开发者联系","确认");
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
        if(sales_record.size() != 0)//写销售记录
        {
            QFile file("search.mt");
            if(! file.open(QIODevice::WriteOnly|QIODevice::Text))
            {
                QMessageBox::critical(this,"自动存档严重错误","文件打开失败，信息未写入，请与开发者联系","确认");
                return;
            }
            QTextStream out(&file);
            for(unsigned int i = 0;i < sales_record.size();i++)
            {
                out<<sales_record[i];
                out<<endl;
            }
            file.close();
        }
        if(sales_record.size() != 0)//写购买记录
        {
            QFile file("buysearch.mt");
            if(! file.open(QIODevice::WriteOnly|QIODevice::Text))
            {
                QMessageBox::critical(this,"自动存档严重错误","文件打开失败，信息未写入，请与开发者联系","确认");
                return;
            }
            QTextStream out(&file);
            for(unsigned int i = 0;i < sales_record.size();i++)
            {
                out<<buy_record[i];
                out<<endl;
            }
            file.close();
        }

}
void PigGame::on_btn_viewmoneyall_clicked()                            //近五年的卖出情况
{
    QString all;
    for(unsigned int i = ((sales_record.size()<=20)?0:sales_record.size()-21);i< sales_record.size();i++)
    {
        all=all+sales_record[i]+"\n";
    }
    QMessageBox::information(this,"财务信息","您的五年内财务情况如下：\n\n\n"+all,"确认");
}
void PigGame::on_btn_buy_recoder_clicked()                             //近五年的购入情况
{
    QString all;
    for(unsigned int i = ((buy_record.size()<=20)?0:buy_record.size()-21);i< buy_record.size();i++)
    {
        all=all+buy_record[i]+"\n";
    }
    QMessageBox::information(this,"购入信息","您的近期购入情况如下：\n\n\n"+all,"确认");
}
void PigGame::on_btn_tj_number_clicked()                              //统计图
{

    //ui->stackedWidget_2->setCurrentIndex(0);
   // ui->stackedWidget_2->show();
   // ui->btn_tj_days_2->show();

    p=head;
    bai1 = hua1= hei1 = 0;
        for(int i = 0;i<100;i++)
     {     modetj = 1;
          for(int k = 0;k<10;k++)
          {
         if(p->data[k][0] == 1)
             hua1++;
         if(p->data[k][0] == 2)
             bai1++;
         if(p->data[k][0] == 3)
             hei1++;
          }
         p = p -> N;
     }
     p=head;
     qDebug() << bai1 << hua1<< hei1 ;
     charts_my *aaa = new charts_my();
     aaa->show();
}
void PigGame::on_btn_tj_days_2_clicked()
{
   // my_timer6->stop();
     //my_timer7->stop();
    //ui->stackedWidget_2->setCurrentIndex(1);
   // ui->btn_tj_days_2->hide();
   // ui->stackedWidget_2->hide();


}
void PigGame::on_btn_tj_weight_clicked()
{
modetj = 3;
p=head;
bai2[1] = bai2[2]= bai2[3] = 0;
hua2[1] = hua2[2]= hua2[3] = 0;
hei2[1] = hei2[2]= hei2[3] = 0;
for(int i = 0;i<100;i++)
{
  for(int k = 0;k<10;k++)
  {
 if(p->data[k][1] <= 350)
 {
     if(p->data[k][0] == 1)
     hua2[1]++;
     if(p->data[k][0] == 2)
     bai2[1]++;
     if(p->data[k][0] == 3)
     hei2[1]++;
 }

 else if(p->data[k][1] >= 550)
 {
     if(p->data[k][0] == 1)
     hua2[3]++;
     if(p->data[k][0] == 2)
     bai2[3]++;
     if(p->data[k][0] == 3)
     hei2[3]++;
 }
 else
 {
     if(p->data[k][0] == 1)
     hua2[2]++;
     if(p->data[k][0] == 2)
     bai2[2]++;
     if(p->data[k][0] == 3)
     hei2[2]++;
 }

  }
 p = p -> N;

}
p=head;
charts_my *aaa = new charts_my();
aaa->show();
}
void PigGame::on_btn_tj_days_clicked()
{
    modetj = 2;
    //ui->stackedWidget_2->setCurrentIndex(0);
    //ui->stackedWidget_2->show();
    //ui->btn_tj_days_2->show();
    p=head;
bai2[1] = bai2[2]= bai2[3] = 0;
hua2[1] = hua2[2]= hua2[3] = 0;
hei2[1] = hei2[2]= hei2[3] = 0;
        for(int i = 0;i<100;i++)
     {

          for(int k = 0;k<10;k++)
          {
         if(p->data[k][2] <= 90)
         {
             if(p->data[k][0] == 1)
             hua2[1]++;
             if(p->data[k][0] == 2)
             bai2[1]++;
             if(p->data[k][0] == 3)
             hei2[1]++;
         }

         else if(p->data[k][2] >= 180)
         {
             if(p->data[k][0] == 1)
             hua2[3]++;
             if(p->data[k][0] == 2)
             bai2[3]++;
             if(p->data[k][0] == 3)
             hei2[3]++;
         }
         else
         {
             if(p->data[k][0] == 1)
             hua2[2]++;
             if(p->data[k][0] == 2)
             bai2[2]++;
             if(p->data[k][0] == 3)
             hei2[2]++;
         }

          }
         p = p -> N;

     }
     p=head;
     charts_my *aaa = new charts_my();
     aaa->show();
}
