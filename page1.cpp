#include "page1.h"
#include "ui_page1.h"
#include<QString>
#include "piggame.h"
#include"QString"
#include"QMessageBox"
#include"QDebug"
page1::page1(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::page1)
{
    ui->setupUi(this);
  /*  QPushButton * btn[21];
    for (int i = 1;i <= 20;i++)
    {
        btn[i] = new QPushButton;
        btn[i]->setParent(this);
         btn[i]->setText(QString::number(i));
          btn[i]->resize(60,60);
          btn[i]->move((i/5+1)*15+(i/5)*60,(i%5+1)*64+(i%5)*60);
      }
    }

    //change size of btn

    //QPushButton *btn2 = new QPushButton("second blood",this);
    //windoes daxiao
    //resize(600,400);
    //btn move*/}


page1::~page1()
{
    delete ui;
}

void page1::on_pushButton_1_clicked()
{
    int bainum = 0,huanum = 0,heinum= 0;
    QString title = "  序号  |  体重  |  种类  |  天数  |  感染情况  |\n";
    p = head;

    QString s[10];
    for(int i=0;i<0;i++)
    {
        p=p->N;
    }
    for(int k=0;k<10;k++)
    {

        if(p->data[k][0]>3) 
            s[k] = "            此位置没有猪存在";
        else
            {
        s[k]="      "+QString::number(p->data[k][1]/10.0,'f',1)+"       ";
        if(p->data[k][0] == 1)
        {
            s[k]+="花猪    ";
            huanum++;
        }
        if(p->data[k][0] == 2)
        {
            s[k]+="白猪    ";
            bainum++;
        }
        if(p->data[k][0] == 3)
        {
            s[k]+="黑猪    ";
            heinum++;
        }
        s[k]=s[k]+"   "+QString::number(p->data[k][2])+"   ";
        if(p->data[k][3] == 0)
        {
            s[k]+="       未感染  ";
        }
        if(p->data[k][3] == 1)
        {
            s[k]+="       感染 ";
        }
            }
    }
    QString all = "猪圈序号: 01\n此猪圈内猪的数量: "+QString::number(p->number)+"\n种类数: 黑猪|白猪|花白猪\n"+"               "+QString::number(heinum)+"       "+QString::number(bainum)+"        "+QString::number(huanum)+"\n                     ----详细数据----\n"+title;
    for(int k = 0;k<10;k++)
    {
        all = all + "  "+QString::number(k)+"  "+s[k] +"\n";
    }
    QMessageBox::information(this,"查询结果",all,"返回游戏");
}









void page1::on_pushButton_2_clicked()
{
    qDebug()<<"btn2";
    int bainum = 0, huanum = 0, heinum = 0;
     QString title = "  序号 | 体重 | 种类 | 天数 | 感染情况 | \n";
    p = head;
    QString s[10];
    for (int i = 0; i < 1; i++)
    {
        p = p->N;
    }
        for (int k = 0; k < 10; k++)
        {
            if (p->data[k][0] > 3)
                s[k] = "            此位置没有猪存在";
            else
            {
                s[k] = "      " + QString::number(p->data[k][1] / 10.0, 'f', 1) + "       ";
                if (p->data[k][0] == 1)
                {
                    s[k] += "花猪    ";
                    huanum++;
                }
                    if (p->data[k][0] == 2)
                    {
                        s[k] += "白猪    ";
                        bainum++;
                    }
                        if (p->data[k][0] == 3)
                        {
                            s[k] += "黑猪    ";
                            heinum++;
                        }
                            s[k] = s[k] + "   " + QString::number(p->data[k][2]) + "   ";
                            if (p->data[k][3] == 0)
                            {
                                s[k] += "       未感染  ";
                            }
                                if (p->data[k][3] == 1)
                                {
                                    s[k] += "       感染 ";
                                }
            }
        }
            QString all = "猪圈序号: 02\n此猪圈内猪的数量 : " + QString::number(p->number) + "\n种类数 : 黑猪 | 白猪 | 花白猪\n" + "               " + QString::number(heinum) + "       " + QString::number(bainum) + "        " + QString::number(huanum) + "\n                     ----详细数据----\n" + title;
                                    for (int k = 0; k < 10; k++)
                                    {
                                        all = all + "  " + QString::number(k) + "  " + s[k] + "\n";
                                    }
                                        QMessageBox::information(this, "查询结果", all, "返回游戏");
   }

void page1::on_pushButton_3_clicked()
  {
      int bainum = 0, huanum = 0, heinum = 0;
       QString title = "  序号 | 体重 | 种类 | 天数 | 感染情况 | \n";
      p = head;
      QString s[10];
      for (int i = 0; i < 2; i++)
      {
          p = p->N;
      }
          for (int k = 0; k < 10; k++)
          {
              if (p->data[k][0] > 3)
                  s[k] = "            此位置没有猪存在";
              else
              {
                  s[k] = "      " + QString::number(p->data[k][1] / 10.0, 'f', 1) + "       ";
                  if (p->data[k][0] == 1)
                  {
                      s[k] += "花猪    ";
                      huanum++;
                  }
                      if (p->data[k][0] == 2)
                      {
                          s[k] += "白猪    ";
                          bainum++;
                      }
                          if (p->data[k][0] == 3)
                          {
                              s[k] += "黑猪    ";
                              heinum++;
                          }
                              s[k] = s[k] + "   " + QString::number(p->data[k][2]) + "   ";
                              if (p->data[k][3] == 0)
                              {
                                  s[k] += "       未感染  ";
                              }
                                  if (p->data[k][3] == 1)
                                  {
                                      s[k] += "       感染 ";
                                  }
              }
          }
              QString all = "猪圈序号: 03\n此猪圈内猪的数量 : " + QString::number(p->number) + "\n种类数 : 黑猪 | 白猪 | 花白猪\n" + "               " + QString::number(heinum) + "       " + QString::number(bainum) + "        " + QString::number(huanum) + "\n                     ----详细数据----\n" + title;
                                      for (int k = 0; k < 10; k++)
                                      {
                                          all = all + "  " + QString::number(k) + "  " + s[k] + "\n";
                                      }
                                          QMessageBox::information(this, "查询结果", all, "返回游戏");
     }

  void page1::on_pushButton_4_clicked()
  {
      int bainum = 0, huanum = 0, heinum = 0;
       QString title = "  序号 | 体重 | 种类 | 天数 | 感染情况 | \n";
      p = head;
      QString s[10];
      for (int i = 0; i < 3; i++)
      {
          p = p->N;
      }
          for (int k = 0; k < 10; k++)
          {
              if (p->data[k][0] > 3)
                  s[k] = "            此位置没有猪存在";
              else
              {
                  s[k] = "      " + QString::number(p->data[k][1] / 10.0, 'f', 1) + "       ";
                  if (p->data[k][0] == 1)
                  {
                      s[k] += "花猪    ";
                      huanum++;
                  }
                      if (p->data[k][0] == 2)
                      {
                          s[k] += "白猪    ";
                          bainum++;
                      }
                          if (p->data[k][0] == 3)
                          {
                              s[k] += "黑猪    ";
                              heinum++;
                          }
                              s[k] = s[k] + "   " + QString::number(p->data[k][2]) + "   ";
                              if (p->data[k][3] == 0)
                              {
                                  s[k] += "       未感染  ";
                              }
                                  if (p->data[k][3] == 1)
                                  {
                                      s[k] += "       感染 ";
                                  }
              }
          }
              QString all = "猪圈序号: 04\n此猪圈内猪的数量 : " + QString::number(p->number) + "\n种类数 : 黑猪 | 白猪 | 花白猪\n" + "               " + QString::number(heinum) + "       " + QString::number(bainum) + "        " + QString::number(huanum) + "\n                     ----详细数据----\n" + title;
                                      for (int k = 0; k < 10; k++)
                                      {
                                          all = all + "  " + QString::number(k) + "  " + s[k] + "\n";
                                      }
                                          QMessageBox::information(this, "查询结果", all, "返回游戏");
     }

  void page1::on_pushButton_5_clicked()
  {
      int bainum = 0, huanum = 0, heinum = 0;
       QString title = "  序号 | 体重 | 种类 | 天数 | 感染情况 | \n";
      p = head;
      QString s[10];
      for (int i = 0; i < 4; i++)
      {
          p = p->N;
      }
          for (int k = 0; k < 10; k++)
          {
              if (p->data[k][0] > 3)
                  s[k] = "            此位置没有猪存在";
              else
              {
                  s[k] = "      " + QString::number(p->data[k][1] / 10.0, 'f', 1) + "       ";
                  if (p->data[k][0] == 1)
                  {
                      s[k] += "花猪    ";
                      huanum++;
                  }
                      if (p->data[k][0] == 2)
                      {
                          s[k] += "白猪    ";
                          bainum++;
                      }
                          if (p->data[k][0] == 3)
                          {
                              s[k] += "黑猪    ";
                              heinum++;
                          }
                              s[k] = s[k] + "   " + QString::number(p->data[k][2]) + "   ";
                              if (p->data[k][3] == 0)
                              {
                                  s[k] += "       未感染  ";
                              }
                                  if (p->data[k][3] == 1)
                                  {
                                      s[k] += "       感染 ";
                                  }
              }
          }
              QString all = "猪圈序号: 05\n此猪圈内猪的数量 : " + QString::number(p->number) + "\n种类数 : 黑猪 | 白猪 | 花白猪\n" + "               " + QString::number(heinum) + "       " + QString::number(bainum) + "        " + QString::number(huanum) + "\n                     ----详细数据----\n" + title;
                                      for (int k = 0; k < 10; k++)
                                      {
                                          all = all + "  " + QString::number(k) + "  " + s[k] + "\n";
                                      }
                                          QMessageBox::information(this, "查询结果", all, "返回游戏");
     }

  void page1::on_pushButton_6_clicked()
  {
      int bainum = 0, huanum = 0, heinum = 0;
       QString title = "  序号 | 体重 | 种类 | 天数 | 感染情况 | \n";
      p = head;
      QString s[10];
      for (int i = 0; i < 5; i++)
      {
          p = p->N;
      }
          for (int k = 0; k < 10; k++)
          {
              if (p->data[k][0] > 3)
                  s[k] = "            此位置没有猪存在";
              else
              {
                  s[k] = "      " + QString::number(p->data[k][1] / 10.0, 'f', 1) + "       ";
                  if (p->data[k][0] == 1)
                  {
                      s[k] += "花猪    ";
                      huanum++;
                  }
                      if (p->data[k][0] == 2)
                      {
                          s[k] += "白猪    ";
                          bainum++;
                      }
                          if (p->data[k][0] == 3)
                          {
                              s[k] += "黑猪    ";
                              heinum++;
                          }
                              s[k] = s[k] + "   " + QString::number(p->data[k][2]) + "   ";
                              if (p->data[k][3] == 0)
                              {
                                  s[k] += "       未感染  ";
                              }
                                  if (p->data[k][3] == 1)
                                  {
                                      s[k] += "       感染 ";
                                  }
              }
          }
              QString all = "猪圈序号: 06\n此猪圈内猪的数量 : " + QString::number(p->number) + "\n种类数 : 黑猪 | 白猪 | 花白猪\n" + "               " + QString::number(heinum) + "       " + QString::number(bainum) + "        " + QString::number(huanum) + "\n                     ----详细数据----\n" + title;
                                      for (int k = 0; k < 10; k++)
                                      {
                                          all = all + "  " + QString::number(k) + "  " + s[k] + "\n";
                                      }
                                          QMessageBox::information(this, "查询结果", all, "返回游戏");
     }

  void page1::on_pushButton_7_clicked()
  {
      int bainum = 0, huanum = 0, heinum = 0;
       QString title = "  序号 | 体重 | 种类 | 天数 | 感染情况 | \n";
      p = head;
      QString s[10];
      for (int i = 0; i < 6; i++)
      {
          p = p->N;
      }
          for (int k = 0; k < 10; k++)
          {
              if (p->data[k][0] > 3)
                  s[k] = "            此位置没有猪存在";
              else
              {
                  s[k] = "      " + QString::number(p->data[k][1] / 10.0, 'f', 1) + "       ";
                  if (p->data[k][0] == 1)
                  {
                      s[k] += "花猪    ";
                      huanum++;
                  }
                      if (p->data[k][0] == 2)
                      {
                          s[k] += "白猪    ";
                          bainum++;
                      }
                          if (p->data[k][0] == 3)
                          {
                              s[k] += "黑猪    ";
                              heinum++;
                          }
                              s[k] = s[k] + "   " + QString::number(p->data[k][2]) + "   ";
                              if (p->data[k][3] == 0)
                              {
                                  s[k] += "       未感染  ";
                              }
                                  if (p->data[k][3] == 1)
                                  {
                                      s[k] += "       感染 ";
                                  }
              }
          }
              QString all = "猪圈序号: 07\n此猪圈内猪的数量 : " + QString::number(p->number) + "\n种类数 : 黑猪 | 白猪 | 花白猪\n" + "               " + QString::number(heinum) + "       " + QString::number(bainum) + "        " + QString::number(huanum) + "\n                     ----详细数据----\n" + title;
                                      for (int k = 0; k < 10; k++)
                                      {
                                          all = all + "  " + QString::number(k) + "  " + s[k] + "\n";
                                      }
                                          QMessageBox::information(this, "查询结果", all, "返回游戏");
     }

  void page1::on_pushButton_8_clicked()
  {
      int bainum = 0, huanum = 0, heinum = 0;
       QString title = "  序号 | 体重 | 种类 | 天数 | 感染情况 | \n";
      p = head;
      QString s[10];
      for (int i = 0; i < 7; i++)
      {
          p = p->N;
      }
          for (int k = 0; k < 10; k++)
          {
              if (p->data[k][0] > 3)
                  s[k] = "            此位置没有猪存在";
              else
              {
                  s[k] = "      " + QString::number(p->data[k][1] / 10.0, 'f', 1) + "       ";
                  if (p->data[k][0] == 1)
                  {
                      s[k] += "花猪    ";
                      huanum++;
                  }
                      if (p->data[k][0] == 2)
                      {
                          s[k] += "白猪    ";
                          bainum++;
                      }
                          if (p->data[k][0] == 3)
                          {
                              s[k] += "黑猪    ";
                              heinum++;
                          }
                              s[k] = s[k] + "   " + QString::number(p->data[k][2]) + "   ";
                              if (p->data[k][3] == 0)
                              {
                                  s[k] += "       未感染  ";
                              }
                                  if (p->data[k][3] == 1)
                                  {
                                      s[k] += "       感染 ";
                                  }
              }
          }
              QString all = "猪圈序号: 08\n此猪圈内猪的数量 : " + QString::number(p->number) + "\n种类数 : 黑猪 | 白猪 | 花白猪\n" + "               " + QString::number(heinum) + "       " + QString::number(bainum) + "        " + QString::number(huanum) + "\n                     ----详细数据----\n" + title;
                                      for (int k = 0; k < 10; k++)
                                      {
                                          all = all + "  " + QString::number(k) + "  " + s[k] + "\n";
                                      }
                                          QMessageBox::information(this, "查询结果", all, "返回游戏");
     }

  void page1::on_pushButton_9_clicked()
  {
      int bainum = 0, huanum = 0, heinum = 0;
       QString title = "  序号 | 体重 | 种类 | 天数 | 感染情况 | \n";
      p = head;
      QString s[10];
      for (int i = 0; i < 8; i++)
      {
          p = p->N;
      }
          for (int k = 0; k < 10; k++)
          {
              if (p->data[k][0] > 3)
                  s[k] = "            此位置没有猪存在";
              else
              {
                  s[k] = "      " + QString::number(p->data[k][1] / 10.0, 'f', 1) + "       ";
                  if (p->data[k][0] == 1)
                  {
                      s[k] += "花猪    ";
                      huanum++;
                  }
                      if (p->data[k][0] == 2)
                      {
                          s[k] += "白猪    ";
                          bainum++;
                      }
                          if (p->data[k][0] == 3)
                          {
                              s[k] += "黑猪    ";
                              heinum++;
                          }
                              s[k] = s[k] + "   " + QString::number(p->data[k][2]) + "   ";
                              if (p->data[k][3] == 0)
                              {
                                  s[k] += "       未感染  ";
                              }
                                  if (p->data[k][3] == 1)
                                  {
                                      s[k] += "       感染 ";
                                  }
              }
          }
              QString all = "猪圈序号: 09\n此猪圈内猪的数量 : " + QString::number(p->number) + "\n种类数 : 黑猪 | 白猪 | 花白猪\n" + "               " + QString::number(heinum) + "       " + QString::number(bainum) + "        " + QString::number(huanum) + "\n                     ----详细数据----\n" + title;
                                      for (int k = 0; k < 10; k++)
                                      {
                                          all = all + "  " + QString::number(k) + "  " + s[k] + "\n";
                                      }
                                          QMessageBox::information(this, "查询结果", all, "返回游戏");
     }

  void page1::on_pushButton_10_clicked()
  {
      int bainum = 0, huanum = 0, heinum = 0;
       QString title = "  序号 | 体重 | 种类 | 天数 | 感染情况 | \n";
      p = head;
      QString s[10];
      for (int i = 0; i < 9; i++)
      {
          p = p->N;
      }
          for (int k = 0; k < 10; k++)
          {
              if (p->data[k][0] > 3)
                  s[k] = "            此位置没有猪存在";
              else
              {
                  s[k] = "      " + QString::number(p->data[k][1] / 10.0, 'f', 1) + "       ";
                  if (p->data[k][0] == 1)
                  {
                      s[k] += "花猪    ";
                      huanum++;
                  }
                      if (p->data[k][0] == 2)
                      {
                          s[k] += "白猪    ";
                          bainum++;
                      }
                          if (p->data[k][0] == 3)
                          {
                              s[k] += "黑猪    ";
                              heinum++;
                          }
                              s[k] = s[k] + "   " + QString::number(p->data[k][2]) + "   ";
                              if (p->data[k][3] == 0)
                              {
                                  s[k] += "       未感染  ";
                              }
                                  if (p->data[k][3] == 1)
                                  {
                                      s[k] += "       感染 ";
                                  }
              }
          }
              QString all = "猪圈序号: 10\n此猪圈内猪的数量 : " + QString::number(p->number) + "\n种类数 : 黑猪 | 白猪 | 花白猪\n" + "               " + QString::number(heinum) + "       " + QString::number(bainum) + "        " + QString::number(huanum) + "\n                     ----详细数据----\n" + title;
                                      for (int k = 0; k < 10; k++)
                                      {
                                          all = all + "  " + QString::number(k) + "  " + s[k] + "\n";
                                      }
                                          QMessageBox::information(this, "查询结果", all, "返回游戏");}

  void page1::on_pushButton_11_clicked()
  {
      int bainum = 0, huanum = 0, heinum = 0;
       QString title = "  序号 | 体重 | 种类 | 天数 | 感染情况 | \n";
      p = head;
      QString s[10];
      for (int i = 0; i < 10; i++)
      {
          p = p->N;
      }
          for (int k = 0; k < 10; k++)
          {
              if (p->data[k][0] > 3)
                  s[k] = "            此位置没有猪存在";
              else
              {
                  s[k] = "      " + QString::number(p->data[k][1] / 10.0, 'f', 1) + "       ";
                  if (p->data[k][0] == 1)
                  {
                      s[k] += "花猪    ";
                      huanum++;
                  }
                      if (p->data[k][0] == 2)
                      {
                          s[k] += "白猪    ";
                          bainum++;
                      }
                          if (p->data[k][0] == 3)
                          {
                              s[k] += "黑猪    ";
                              heinum++;
                          }
                              s[k] = s[k] + "   " + QString::number(p->data[k][2]) + "   ";
                              if (p->data[k][3] == 0)
                              {
                                  s[k] += "       未感染  ";
                              }
                                  if (p->data[k][3] == 1)
                                  {
                                      s[k] += "       感染 ";
                                  }
              }
          }
              QString all = "猪圈序号: 11\n此猪圈内猪的数量 : " + QString::number(p->number) + "\n种类数 : 黑猪 | 白猪 | 花白猪\n" + "               " + QString::number(heinum) + "       " + QString::number(bainum) + "        " + QString::number(huanum) + "\n                     ----详细数据----\n" + title;
                                      for (int k = 0; k < 10; k++)
                                      {
                                          all = all + "  " + QString::number(k) + "  " + s[k] + "\n";
                                      }
                                          QMessageBox::information(this, "查询结果", all, "返回游戏");}

  void page1::on_pushButton_12_clicked()
  {
      int bainum = 0, huanum = 0, heinum = 0;
       QString title = "  序号 | 体重 | 种类 | 天数 | 感染情况 | \n";
      p = head;
      QString s[10];
      for (int i = 0; i < 11; i++)
      {
          p = p->N;
      }
          for (int k = 0; k < 10; k++)
          {
              if (p->data[k][0] > 3)
                  s[k] = "            此位置没有猪存在";
              else
              {
                  s[k] = "      " + QString::number(p->data[k][1] / 10.0, 'f', 1) + "       ";
                  if (p->data[k][0] == 1)
                  {
                      s[k] += "花猪    ";
                      huanum++;
                  }
                      if (p->data[k][0] == 2)
                      {
                          s[k] += "白猪    ";
                          bainum++;
                      }
                          if (p->data[k][0] == 3)
                          {
                              s[k] += "黑猪    ";
                              heinum++;
                          }
                              s[k] = s[k] + "   " + QString::number(p->data[k][2]) + "   ";
                              if (p->data[k][3] == 0)
                              {
                                  s[k] += "       未感染  ";
                              }
                                  if (p->data[k][3] == 1)
                                  {
                                      s[k] += "       感染 ";
                                  }
              }
          }
              QString all = "猪圈序号: 12\n此猪圈内猪的数量 : " + QString::number(p->number) + "\n种类数 : 黑猪 | 白猪 | 花白猪\n" + "               " + QString::number(heinum) + "       " + QString::number(bainum) + "        " + QString::number(huanum) + "\n                     ----详细数据----\n" + title;
                                      for (int k = 0; k < 10; k++)
                                      {
                                          all = all + "  " + QString::number(k) + "  " + s[k] + "\n";
                                      }
                                          QMessageBox::information(this, "查询结果", all, "返回游戏");}

  void page1::on_pushButton_13_clicked()
  {
      int bainum = 0, huanum = 0, heinum = 0;
       QString title = "  序号 | 体重 | 种类 | 天数 | 感染情况 | \n";
      p = head;
      QString s[10];
      for (int i = 0; i < 12; i++)
      {
          p = p->N;
      }
          for (int k = 0; k < 10; k++)
          {
              if (p->data[k][0] > 3)
                  s[k] = "            此位置没有猪存在";
              else
              {
                  s[k] = "      " + QString::number(p->data[k][1] / 10.0, 'f', 1) + "       ";
                  if (p->data[k][0] == 1)
                  {
                      s[k] += "花猪    ";
                      huanum++;
                  }
                      if (p->data[k][0] == 2)
                      {
                          s[k] += "白猪    ";
                          bainum++;
                      }
                          if (p->data[k][0] == 3)
                          {
                              s[k] += "黑猪    ";
                              heinum++;
                          }
                              s[k] = s[k] + "   " + QString::number(p->data[k][2]) + "   ";
                              if (p->data[k][3] == 0)
                              {
                                  s[k] += "       未感染  ";
                              }
                                  if (p->data[k][3] == 1)
                                  {
                                      s[k] += "       感染 ";
                                  }
              }
          }
              QString all = "猪圈序号: 13\n此猪圈内猪的数量 : " + QString::number(p->number) + "\n种类数 : 黑猪 | 白猪 | 花白猪\n" + "               " + QString::number(heinum) + "       " + QString::number(bainum) + "        " + QString::number(huanum) + "\n                     ----详细数据----\n" + title;
                                      for (int k = 0; k < 10; k++)
                                      {
                                          all = all + "  " + QString::number(k) + "  " + s[k] + "\n";
                                      }
                                          QMessageBox::information(this, "查询结果", all, "返回游戏");}

  void page1::on_pushButton_14_clicked()
  {
      int bainum = 0, huanum = 0, heinum = 0;
       QString title = "  序号 | 体重 | 种类 | 天数 | 感染情况 | \n";
      p = head;
      QString s[10];
      for (int i = 0; i < 13; i++)
      {
          p = p->N;
      }
          for (int k = 0; k < 10; k++)
          {
              if (p->data[k][0] > 3)
                  s[k] = "            此位置没有猪存在";
              else
              {
                  s[k] = "      " + QString::number(p->data[k][1] / 10.0, 'f', 1) + "       ";
                  if (p->data[k][0] == 1)
                  {
                      s[k] += "花猪    ";
                      huanum++;
                  }
                      if (p->data[k][0] == 2)
                      {
                          s[k] += "白猪    ";
                          bainum++;
                      }
                          if (p->data[k][0] == 3)
                          {
                              s[k] += "黑猪    ";
                              heinum++;
                          }
                              s[k] = s[k] + "   " + QString::number(p->data[k][2]) + "   ";
                              if (p->data[k][3] == 0)
                              {
                                  s[k] += "       未感染  ";
                              }
                                  if (p->data[k][3] == 1)
                                  {
                                      s[k] += "       感染 ";
                                  }
              }
          }
              QString all = "猪圈序号: 14\n此猪圈内猪的数量 : " + QString::number(p->number) + "\n种类数 : 黑猪 | 白猪 | 花白猪\n" + "               " + QString::number(heinum) + "       " + QString::number(bainum) + "        " + QString::number(huanum) + "\n                     ----详细数据----\n" + title;
                                      for (int k = 0; k < 10; k++)
                                      {
                                          all = all + "  " + QString::number(k) + "  " + s[k] + "\n";
                                      }
                                          QMessageBox::information(this, "查询结果", all, "返回游戏");}

  void page1::on_pushButton_15_clicked()
  {
      int bainum = 0, huanum = 0, heinum = 0;
       QString title = "  序号 | 体重 | 种类 | 天数 | 感染情况 | \n";
      p = head;
      QString s[10];
      for (int i = 0; i < 14; i++)
      {
          p = p->N;
      }
          for (int k = 0; k < 10; k++)
          {
              if (p->data[k][0] > 3)
                  s[k] = "            此位置没有猪存在";
              else
              {
                  s[k] = "      " + QString::number(p->data[k][1] / 10.0, 'f', 1) + "       ";
                  if (p->data[k][0] == 1)
                  {
                      s[k] += "花猪    ";
                      huanum++;
                  }
                      if (p->data[k][0] == 2)
                      {
                          s[k] += "白猪    ";
                          bainum++;
                      }
                          if (p->data[k][0] == 3)
                          {
                              s[k] += "黑猪    ";
                              heinum++;
                          }
                              s[k] = s[k] + "   " + QString::number(p->data[k][2]) + "   ";
                              if (p->data[k][3] == 0)
                              {
                                  s[k] += "       未感染  ";
                              }
                                  if (p->data[k][3] == 1)
                                  {
                                      s[k] += "       感染 ";
                                  }
              }
          }
              QString all = "猪圈序号: 15\n此猪圈内猪的数量 : " + QString::number(p->number) + "\n种类数 : 黑猪 | 白猪 | 花白猪\n" + "               " + QString::number(heinum) + "       " + QString::number(bainum) + "        " + QString::number(huanum) + "\n                     ----详细数据----\n" + title;
                                      for (int k = 0; k < 10; k++)
                                      {
                                          all = all + "  " + QString::number(k) + "  " + s[k] + "\n";
                                      }
                                          QMessageBox::information(this, "查询结果", all, "返回游戏");}

  void page1::on_pushButton_16_clicked()
  {
      int bainum = 0, huanum = 0, heinum = 0;
       QString title = "  序号 | 体重 | 种类 | 天数 | 感染情况 | \n";
      p = head;
      QString s[10];
      for (int i = 0; i < 15; i++)
      {
          p = p->N;
      }
          for (int k = 0; k < 10; k++)
          {
              if (p->data[k][0] > 3)
                  s[k] = "            此位置没有猪存在";
              else
              {
                  s[k] = "      " + QString::number(p->data[k][1] / 10.0, 'f', 1) + "       ";
                  if (p->data[k][0] == 1)
                  {
                      s[k] += "花猪    ";
                      huanum++;
                  }
                      if (p->data[k][0] == 2)
                      {
                          s[k] += "白猪    ";
                          bainum++;
                      }
                          if (p->data[k][0] == 3)
                          {
                              s[k] += "黑猪    ";
                              heinum++;
                          }
                              s[k] = s[k] + "   " + QString::number(p->data[k][2]) + "   ";
                              if (p->data[k][3] == 0)
                              {
                                  s[k] += "       未感染  ";
                              }
                                  if (p->data[k][3] == 1)
                                  {
                                      s[k] += "       感染 ";
                                  }
              }
          }
              QString all = "猪圈序号: 16\n此猪圈内猪的数量 : " + QString::number(p->number) + "\n种类数 : 黑猪 | 白猪 | 花白猪\n" + "               " + QString::number(heinum) + "       " + QString::number(bainum) + "        " + QString::number(huanum) + "\n                     ----详细数据----\n" + title;
                                      for (int k = 0; k < 10; k++)
                                      {
                                          all = all + "  " + QString::number(k) + "  " + s[k] + "\n";
                                      }
                                          QMessageBox::information(this, "查询结果", all, "返回游戏");}

  void page1::on_pushButton_17_clicked()
  {
      int bainum = 0, huanum = 0, heinum = 0;
       QString title = "  序号 | 体重 | 种类 | 天数 | 感染情况 | \n";
      p = head;
      QString s[10];
      for (int i = 0; i < 16; i++)
      {
          p = p->N;
      }
          for (int k = 0; k < 10; k++)
          {
              if (p->data[k][0] > 3)
                  s[k] = "            此位置没有猪存在";
              else
              {
                  s[k] = "      " + QString::number(p->data[k][1] / 10.0, 'f', 1) + "       ";
                  if (p->data[k][0] == 1)
                  {
                      s[k] += "花猪    ";
                      huanum++;
                  }
                      if (p->data[k][0] == 2)
                      {
                          s[k] += "白猪    ";
                          bainum++;
                      }
                          if (p->data[k][0] == 3)
                          {
                              s[k] += "黑猪    ";
                              heinum++;
                          }
                              s[k] = s[k] + "   " + QString::number(p->data[k][2]) + "   ";
                              if (p->data[k][3] == 0)
                              {
                                  s[k] += "       未感染  ";
                              }
                                  if (p->data[k][3] == 1)
                                  {
                                      s[k] += "       感染 ";
                                  }
              }
          }
              QString all = "猪圈序号: 17\n此猪圈内猪的数量 : " + QString::number(p->number) + "\n种类数 : 黑猪 | 白猪 | 花白猪\n" + "               " + QString::number(heinum) + "       " + QString::number(bainum) + "        " + QString::number(huanum) + "\n                     ----详细数据----\n" + title;
                                      for (int k = 0; k < 10; k++)
                                      {
                                          all = all + "  " + QString::number(k) + "  " + s[k] + "\n";
                                      }
                                          QMessageBox::information(this, "查询结果", all, "返回游戏");}

  void page1::on_pushButton_18_clicked()
  {
      int bainum = 0, huanum = 0, heinum = 0;
       QString title = "  序号 | 体重 | 种类 | 天数 | 感染情况 | \n";
      p = head;
      QString s[10];
      for (int i = 0; i < 17; i++)
      {
          p = p->N;
      }
          for (int k = 0; k < 10; k++)
          {
              if (p->data[k][0] > 3)
                  s[k] = "            此位置没有猪存在";
              else
              {
                  s[k] = "      " + QString::number(p->data[k][1] / 10.0, 'f', 1) + "       ";
                  if (p->data[k][0] == 1)
                  {
                      s[k] += "花猪    ";
                      huanum++;
                  }
                      if (p->data[k][0] == 2)
                      {
                          s[k] += "白猪    ";
                          bainum++;
                      }
                          if (p->data[k][0] == 3)
                          {
                              s[k] += "黑猪    ";
                              heinum++;
                          }
                              s[k] = s[k] + "   " + QString::number(p->data[k][2]) + "   ";
                              if (p->data[k][3] == 0)
                              {
                                  s[k] += "       未感染  ";
                              }
                                  if (p->data[k][3] == 1)
                                  {
                                      s[k] += "       感染 ";
                                  }
              }
          }
              QString all = "猪圈序号: 18\n此猪圈内猪的数量 : " + QString::number(p->number) + "\n种类数 : 黑猪 | 白猪 | 花白猪\n" + "               " + QString::number(heinum) + "       " + QString::number(bainum) + "        " + QString::number(huanum) + "\n                     ----详细数据----\n" + title;
                                      for (int k = 0; k < 10; k++)
                                      {
                                          all = all + "  " + QString::number(k) + "  " + s[k] + "\n";
                                      }
                                          QMessageBox::information(this, "查询结果", all, "返回游戏");}

  void page1::on_pushButton_19_clicked()
  {
      int bainum = 0, huanum = 0, heinum = 0;
       QString title = "  序号 | 体重 | 种类 | 天数 | 感染情况 | \n";
      p = head;
      QString s[10];
      for (int i = 0; i < 18; i++)
      {
          p = p->N;
      }
          for (int k = 0; k < 10; k++)
          {
              if (p->data[k][0] > 3)
                  s[k] = "            此位置没有猪存在";
              else
              {
                  s[k] = "      " + QString::number(p->data[k][1] / 10.0, 'f', 1) + "       ";
                  if (p->data[k][0] == 1)
                  {
                      s[k] += "花猪    ";
                      huanum++;
                  }
                      if (p->data[k][0] == 2)
                      {
                          s[k] += "白猪    ";
                          bainum++;
                      }
                          if (p->data[k][0] == 3)
                          {
                              s[k] += "黑猪    ";
                              heinum++;
                          }
                              s[k] = s[k] + "   " + QString::number(p->data[k][2]) + "   ";
                              if (p->data[k][3] == 0)
                              {
                                  s[k] += "       未感染  ";
                              }
                                  if (p->data[k][3] == 1)
                                  {
                                      s[k] += "       感染 ";
                                  }
              }
          }
              QString all = "猪圈序号: 19\n此猪圈内猪的数量 : " + QString::number(p->number) + "\n种类数 : 黑猪 | 白猪 | 花白猪\n" + "               " + QString::number(heinum) + "       " + QString::number(bainum) + "        " + QString::number(huanum) + "\n                     ----详细数据----\n" + title;
                                      for (int k = 0; k < 10; k++)
                                      {
                                          all = all + "  " + QString::number(k) + "  " + s[k] + "\n";
                                      }
                                          QMessageBox::information(this, "查询结果", all, "返回游戏");}

  void page1::on_pushButton_20_clicked()
  {
      int bainum = 0, huanum = 0, heinum = 0;
       QString title = "  序号 | 体重 | 种类 | 天数 | 感染情况 | \n";
      p = head;
      QString s[10];
      for (int i = 0; i < 19; i++)
      {
          p = p->N;
      }
          for (int k = 0; k < 10; k++)
          {
              if (p->data[k][0] > 3)
                  s[k] = "            此位置没有猪存在";
              else
              {
                  s[k] = "      " + QString::number(p->data[k][1] / 10.0, 'f', 1) + "       ";
                  if (p->data[k][0] == 1)
                  {
                      s[k] += "花猪    ";
                      huanum++;
                  }
                      if (p->data[k][0] == 2)
                      {
                          s[k] += "白猪    ";
                          bainum++;
                      }
                          if (p->data[k][0] == 3)
                          {
                              s[k] += "黑猪    ";
                              heinum++;
                          }
                              s[k] = s[k] + "   " + QString::number(p->data[k][2]) + "   ";
                              if (p->data[k][3] == 0)
                              {
                                  s[k] += "       未感染  ";
                              }
                                  if (p->data[k][3] == 1)
                                  {
                                      s[k] += "       感染 ";
                                  }
              }
          }
              QString all = "猪圈序号: 20\n此猪圈内猪的数量 : " + QString::number(p->number) + "\n种类数 : 黑猪 | 白猪 | 花白猪\n" + "               " + QString::number(heinum) + "       " + QString::number(bainum) + "        " + QString::number(huanum) + "\n                     ----详细数据----\n" + title;
                                      for (int k = 0; k < 10; k++)
                                      {
                                          all = all + "  " + QString::number(k) + "  " + s[k] + "\n";
                                      }
                                          QMessageBox::information(this, "查询结果", all, "返回游戏");}
