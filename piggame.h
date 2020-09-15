#ifndef PIGGAME_H
#define PIGGAME_H
#include<QSound>
#include <QMainWindow>
#include<page1.h>
#include<QTimer>
#include<vector>
namespace Ui {
class PigGame;
}
class Node
{
public:
    Node()
    {
     ;
    }
    int number,data[15][5],kind[3][6];
    //1 = hua 2 = write 3 =blake;
    bool type = false;
    bool flag;
    Node *F = NULL,*N = NULL;
};
extern Node *p,*head,*tail;
extern int sum,day,money,sum_money,cnt,healthtime,bgm,bgpic,bai1,hei1,hua1,bai2[4],hei2[4],hua2[4],bai3[4],hei3[4],hua3[4],modetj;
extern const QString bgmstr;
extern int buy_bai,buy_hua,buy_hei, speedf1;
extern bool _60,_120,_180;
extern double speed;
extern QTimer* my_timer;//=new QTimer();//设置一个Qtimer
extern QTimer* my_timer1;//=new QTimer();//设置一个Qtimer
extern QTimer* my_timer2;//=new QTimer();//设置一个Qtimer
extern QTimer* my_timer4;//=new QTimer();//设置一个Qtimer
extern QTimer*my_timer6;//=new QTimer();//设置一个Qtimer
extern QTimer*my_timer7;//=new QTimer();//设置一个Qtimer
extern QTimer*my_timer8;//=new QTimer();//设置一个Qtimer
extern std::vector<QString> sales_record;
extern std::vector<QString> buy_record;
class PigGame : public QMainWindow
{
    Q_OBJECT

public:
    explicit PigGame(QWidget *parent = nullptr);
    ~PigGame();
    int illsum();
    QSound *bells1,*bells2,*bells3;
public slots:
    void change_BGM_and_BGPIC();
    void goout();
    void new_game();
    void illmode();
    void healthemode();
    void loadgame();
    bool check();
    void pig_grow();
    static bool illcheck();
    void savefile();
private slots:
    void on_btn_config_clicked();

    void on_btn_store_clicked();

    void on_btn_honor_clicked();

    void on_btn_nextpage_clicked();

    void on_btn_frontpage_clicked();

    void on_btn_geli_clicked();

    void on_btn_viewmoneyall_clicked();

    void on_btn_buy_recoder_clicked();

    void on_btn_tj_number_clicked();

    void on_btn_tj_days_2_clicked();

    void on_btn_tj_weight_clicked();

    void on_btn_tj_days_clicked();

private:

    Ui::PigGame *ui;
};

#endif // PIGGAME_H
