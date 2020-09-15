#include "page3.h"
#include "ui_page3.h"
#include"piggame.h"
#include"QString"
#include"QMessageBox"
#include<QDebug>
page3::page3(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::page3)
{
    ui->setupUi(this);
}

page3::~page3()
{
    delete ui;
}
void page3::on_pushButton_1_clicked()
{
    int bainum = 0, huanum = 0, heinum = 0;
     QString title = "  序号 | 体重 | 种类 | 天数 | 感染情况 | \n";
    p = head;
    QString s[10];
    for (int i = 0; i < 40; i++)
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
            QString all = "猪圈序号: 41\n此猪圈内猪的数量 : " + QString::number(p->number) + "\n种类数 : 黑猪 | 白猪 | 花白猪\n" + "               " + QString::number(heinum) + "       " + QString::number(bainum) + "        " + QString::number(huanum) + "\n                     ----详细数据----\n" + title;
                                    for (int k = 0; k < 10; k++)
                                    {
                                        all = all + "  " + QString::number(k) + "  " + s[k] + "\n";
                                    }
                                        QMessageBox::information(this, "查询结果", all, "返回游戏");}

void page3::on_pushButton_2_clicked()
{
    int bainum = 0, huanum = 0, heinum = 0;
     QString title = "  序号 | 体重 | 种类 | 天数 | 感染情况 | \n";
    p = head;
    QString s[10];
    for (int i = 0; i < 41; i++)
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
            QString all = "猪圈序号: 42\n此猪圈内猪的数量 : " + QString::number(p->number) + "\n种类数 : 黑猪 | 白猪 | 花白猪\n" + "               " + QString::number(heinum) + "       " + QString::number(bainum) + "        " + QString::number(huanum) + "\n                     ----详细数据----\n" + title;
                                    for (int k = 0; k < 10; k++)
                                    {
                                        all = all + "  " + QString::number(k) + "  " + s[k] + "\n";
                                    }
                                        QMessageBox::information(this, "查询结果", all, "返回游戏");}

void page3::on_pushButton_3_clicked()
{
    int bainum = 0, huanum = 0, heinum = 0;
     QString title = "  序号 | 体重 | 种类 | 天数 | 感染情况 | \n";
    p = head;
    QString s[10];
    for (int i = 0; i < 42; i++)
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
            QString all = "猪圈序号: 43\n此猪圈内猪的数量 : " + QString::number(p->number) + "\n种类数 : 黑猪 | 白猪 | 花白猪\n" + "               " + QString::number(heinum) + "       " + QString::number(bainum) + "        " + QString::number(huanum) + "\n                     ----详细数据----\n" + title;
                                    for (int k = 0; k < 10; k++)
                                    {
                                        all = all + "  " + QString::number(k) + "  " + s[k] + "\n";
                                    }
                                        QMessageBox::information(this, "查询结果", all, "返回游戏");}

void page3::on_pushButton_4_clicked()
{
    int bainum = 0, huanum = 0, heinum = 0;
     QString title = "  序号 | 体重 | 种类 | 天数 | 感染情况 | \n";
    p = head;
    QString s[10];
    for (int i = 0; i < 43; i++)
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
            QString all = "猪圈序号: 44\n此猪圈内猪的数量 : " + QString::number(p->number) + "\n种类数 : 黑猪 | 白猪 | 花白猪\n" + "               " + QString::number(heinum) + "       " + QString::number(bainum) + "        " + QString::number(huanum) + "\n                     ----详细数据----\n" + title;
                                    for (int k = 0; k < 10; k++)
                                    {
                                        all = all + "  " + QString::number(k) + "  " + s[k] + "\n";
                                    }
                                        QMessageBox::information(this, "查询结果", all, "返回游戏");}

void page3::on_pushButton_5_clicked()
{
    int bainum = 0, huanum = 0, heinum = 0;
     QString title = "  序号 | 体重 | 种类 | 天数 | 感染情况 | \n";
    p = head;
    QString s[10];
    for (int i = 0; i < 44; i++)
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
            QString all = "猪圈序号: 45\n此猪圈内猪的数量 : " + QString::number(p->number) + "\n种类数 : 黑猪 | 白猪 | 花白猪\n" + "               " + QString::number(heinum) + "       " + QString::number(bainum) + "        " + QString::number(huanum) + "\n                     ----详细数据----\n" + title;
                                    for (int k = 0; k < 10; k++)
                                    {
                                        all = all + "  " + QString::number(k) + "  " + s[k] + "\n";
                                    }
                                        QMessageBox::information(this, "查询结果", all, "返回游戏");}

void page3::on_pushButton_6_clicked()
{
    int bainum = 0, huanum = 0, heinum = 0;
     QString title = "  序号 | 体重 | 种类 | 天数 | 感染情况 | \n";
    p = head;
    QString s[10];
    for (int i = 0; i < 45; i++)
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
            QString all = "猪圈序号: 46\n此猪圈内猪的数量 : " + QString::number(p->number) + "\n种类数 : 黑猪 | 白猪 | 花白猪\n" + "               " + QString::number(heinum) + "       " + QString::number(bainum) + "        " + QString::number(huanum) + "\n                     ----详细数据----\n" + title;
                                    for (int k = 0; k < 10; k++)
                                    {
                                        all = all + "  " + QString::number(k) + "  " + s[k] + "\n";
                                    }
                                        QMessageBox::information(this, "查询结果", all, "返回游戏");}

void page3::on_pushButton_7_clicked()
{
    int bainum = 0, huanum = 0, heinum = 0;
     QString title = "  序号 | 体重 | 种类 | 天数 | 感染情况 | \n";
    p = head;
    QString s[10];
    for (int i = 0; i < 46; i++)
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
            QString all = "猪圈序号: 47\n此猪圈内猪的数量 : " + QString::number(p->number) + "\n种类数 : 黑猪 | 白猪 | 花白猪\n" + "               " + QString::number(heinum) + "       " + QString::number(bainum) + "        " + QString::number(huanum) + "\n                     ----详细数据----\n" + title;
                                    for (int k = 0; k < 10; k++)
                                    {
                                        all = all + "  " + QString::number(k) + "  " + s[k] + "\n";
                                    }
                                        QMessageBox::information(this, "查询结果", all, "返回游戏");}

void page3::on_pushButton_8_clicked()
{
    int bainum = 0, huanum = 0, heinum = 0;
     QString title = "  序号 | 体重 | 种类 | 天数 | 感染情况 | \n";
    p = head;
    QString s[10];
    for (int i = 0; i < 47; i++)
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
            QString all = "猪圈序号: 48\n此猪圈内猪的数量 : " + QString::number(p->number) + "\n种类数 : 黑猪 | 白猪 | 花白猪\n" + "               " + QString::number(heinum) + "       " + QString::number(bainum) + "        " + QString::number(huanum) + "\n                     ----详细数据----\n" + title;
                                    for (int k = 0; k < 10; k++)
                                    {
                                        all = all + "  " + QString::number(k) + "  " + s[k] + "\n";
                                    }
                                        QMessageBox::information(this, "查询结果", all, "返回游戏");}

void page3::on_pushButton_9_clicked()
{
    int bainum = 0, huanum = 0, heinum = 0;
     QString title = "  序号 | 体重 | 种类 | 天数 | 感染情况 | \n";
    p = head;
    QString s[10];
    for (int i = 0; i < 48; i++)
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
            QString all = "猪圈序号: 49\n此猪圈内猪的数量 : " + QString::number(p->number) + "\n种类数 : 黑猪 | 白猪 | 花白猪\n" + "               " + QString::number(heinum) + "       " + QString::number(bainum) + "        " + QString::number(huanum) + "\n                     ----详细数据----\n" + title;
                                    for (int k = 0; k < 10; k++)
                                    {
                                        all = all + "  " + QString::number(k) + "  " + s[k] + "\n";
                                    }
                                        QMessageBox::information(this, "查询结果", all, "返回游戏");}

void page3::on_pushButton_10_clicked()
{
    qDebug()<<"page3_1\n\n";
    int bainum = 0, huanum = 0, heinum = 0;
     QString title = "  序号 | 体重 | 种类 | 天数 | 感染情况 | \n";
    p = head;
    QString s[10];
    qDebug()<<"page3_2\n\n";
    for (int i = 0; i < 49; i++)
    {
        p = p->N;
    }
    qDebug()<<"page3_3\n\n";
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
        qDebug()<<"page3_4\n\n";
            QString all = "猪圈序号: 50\n此猪圈内猪的数量 : " + QString::number(p->number) + "\n种类数 : 黑猪 | 白猪 | 花白猪\n" + "               " + QString::number(heinum) + "       " + QString::number(bainum) + "        " + QString::number(huanum) + "\n                     ----详细数据----\n" + title;
                                    for (int k = 0; k < 10; k++)
                                    {
                                        all = all + "  " + QString::number(k) + "  " + s[k] + "\n";
                                    }
                                        QMessageBox::information(this, "查询结果", all, "返回游戏");
qDebug()<<"page3_5\n\n";
}

void page3::on_pushButton_11_clicked()
{
    int bainum = 0, huanum = 0, heinum = 0;
     QString title = "  序号 | 体重 | 种类 | 天数 | 感染情况 | \n";
    p = head;
    QString s[10];
    for (int i = 0; i < 50; i++)
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
            QString all = "猪圈序号: 51\n此猪圈内猪的数量 : " + QString::number(p->number) + "\n种类数 : 黑猪 | 白猪 | 花白猪\n" + "               " + QString::number(heinum) + "       " + QString::number(bainum) + "        " + QString::number(huanum) + "\n                     ----详细数据----\n" + title;
                                    for (int k = 0; k < 10; k++)
                                    {
                                        all = all + "  " + QString::number(k) + "  " + s[k] + "\n";
                                    }
                                        QMessageBox::information(this, "查询结果", all, "返回游戏");}

void page3::on_pushButton_12_clicked()
{
    int bainum = 0, huanum = 0, heinum = 0;
     QString title = "  序号 | 体重 | 种类 | 天数 | 感染情况 | \n";
    p = head;
    QString s[10];
    for (int i = 0; i < 51; i++)
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
            QString all = "猪圈序号: 52\n此猪圈内猪的数量 : " + QString::number(p->number) + "\n种类数 : 黑猪 | 白猪 | 花白猪\n" + "               " + QString::number(heinum) + "       " + QString::number(bainum) + "        " + QString::number(huanum) + "\n                     ----详细数据----\n" + title;
                                    for (int k = 0; k < 10; k++)
                                    {
                                        all = all + "  " + QString::number(k) + "  " + s[k] + "\n";
                                    }
                                        QMessageBox::information(this, "查询结果", all, "返回游戏");}

void page3::on_pushButton_13_clicked()
{
    int bainum = 0, huanum = 0, heinum = 0;
     QString title = "  序号 | 体重 | 种类 | 天数 | 感染情况 | \n";
    p = head;
    QString s[10];
    for (int i = 0; i < 52; i++)
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
            QString all = "猪圈序号: 53\n此猪圈内猪的数量 : " + QString::number(p->number) + "\n种类数 : 黑猪 | 白猪 | 花白猪\n" + "               " + QString::number(heinum) + "       " + QString::number(bainum) + "        " + QString::number(huanum) + "\n                     ----详细数据----\n" + title;
                                    for (int k = 0; k < 10; k++)
                                    {
                                        all = all + "  " + QString::number(k) + "  " + s[k] + "\n";
                                    }
                                        QMessageBox::information(this, "查询结果", all, "返回游戏");}

void page3::on_pushButton_14_clicked()
{
    int bainum = 0, huanum = 0, heinum = 0;
     QString title = "  序号 | 体重 | 种类 | 天数 | 感染情况 | \n";
    p = head;
    QString s[10];
    for (int i = 0; i < 53; i++)
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
            QString all = "猪圈序号: 54\n此猪圈内猪的数量 : " + QString::number(p->number) + "\n种类数 : 黑猪 | 白猪 | 花白猪\n" + "               " + QString::number(heinum) + "       " + QString::number(bainum) + "        " + QString::number(huanum) + "\n                     ----详细数据----\n" + title;
                                    for (int k = 0; k < 10; k++)
                                    {
                                        all = all + "  " + QString::number(k) + "  " + s[k] + "\n";
                                    }
                                        QMessageBox::information(this, "查询结果", all, "返回游戏");}

void page3::on_pushButton_15_clicked()
{
    int bainum = 0, huanum = 0, heinum = 0;
     QString title = "  序号 | 体重 | 种类 | 天数 | 感染情况 | \n";
    p = head;
    QString s[10];
    for (int i = 0; i < 54; i++)
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
            QString all = "猪圈序号: 55\n此猪圈内猪的数量 : " + QString::number(p->number) + "\n种类数 : 黑猪 | 白猪 | 花白猪\n" + "               " + QString::number(heinum) + "       " + QString::number(bainum) + "        " + QString::number(huanum) + "\n                     ----详细数据----\n" + title;
                                    for (int k = 0; k < 10; k++)
                                    {
                                        all = all + "  " + QString::number(k) + "  " + s[k] + "\n";
                                    }
                                        QMessageBox::information(this, "查询结果", all, "返回游戏");}

void page3::on_pushButton_16_clicked()
{
    int bainum = 0, huanum = 0, heinum = 0;
     QString title = "  序号 | 体重 | 种类 | 天数 | 感染情况 | \n";
    p = head;
    QString s[10];
    for (int i = 0; i < 55; i++)
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
            QString all = "猪圈序号: 56\n此猪圈内猪的数量 : " + QString::number(p->number) + "\n种类数 : 黑猪 | 白猪 | 花白猪\n" + "               " + QString::number(heinum) + "       " + QString::number(bainum) + "        " + QString::number(huanum) + "\n                     ----详细数据----\n" + title;
                                    for (int k = 0; k < 10; k++)
                                    {
                                        all = all + "  " + QString::number(k) + "  " + s[k] + "\n";
                                    }
                                        QMessageBox::information(this, "查询结果", all, "返回游戏");}

void page3::on_pushButton_17_clicked()
{
    int bainum = 0, huanum = 0, heinum = 0;
     QString title = "  序号 | 体重 | 种类 | 天数 | 感染情况 | \n";
    p = head;
    QString s[10];
    for (int i = 0; i < 56; i++)
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
            QString all = "猪圈序号: 57\n此猪圈内猪的数量 : " + QString::number(p->number) + "\n种类数 : 黑猪 | 白猪 | 花白猪\n" + "               " + QString::number(heinum) + "       " + QString::number(bainum) + "        " + QString::number(huanum) + "\n                     ----详细数据----\n" + title;
                                    for (int k = 0; k < 10; k++)
                                    {
                                        all = all + "  " + QString::number(k) + "  " + s[k] + "\n";
                                    }
                                        QMessageBox::information(this, "查询结果", all, "返回游戏");}

void page3::on_pushButton_18_clicked()
{
    int bainum = 0, huanum = 0, heinum = 0;
     QString title = "  序号 | 体重 | 种类 | 天数 | 感染情况 | \n";
    p = head;
    QString s[10];
    for (int i = 0; i < 57; i++)
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
            QString all = "猪圈序号: 58\n此猪圈内猪的数量 : " + QString::number(p->number) + "\n种类数 : 黑猪 | 白猪 | 花白猪\n" + "               " + QString::number(heinum) + "       " + QString::number(bainum) + "        " + QString::number(huanum) + "\n                     ----详细数据----\n" + title;
                                    for (int k = 0; k < 10; k++)
                                    {
                                        all = all + "  " + QString::number(k) + "  " + s[k] + "\n";
                                    }
                                        QMessageBox::information(this, "查询结果", all, "返回游戏");}

void page3::on_pushButton_19_clicked()
{
    int bainum = 0, huanum = 0, heinum = 0;
     QString title = "  序号 | 体重 | 种类 | 天数 | 感染情况 | \n";
    p = head;
    QString s[10];
    for (int i = 0; i < 58; i++)
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
            QString all = "猪圈序号: 59\n此猪圈内猪的数量 : " + QString::number(p->number) + "\n种类数 : 黑猪 | 白猪 | 花白猪\n" + "               " + QString::number(heinum) + "       " + QString::number(bainum) + "        " + QString::number(huanum) + "\n                     ----详细数据----\n" + title;
                                    for (int k = 0; k < 10; k++)
                                    {
                                        all = all + "  " + QString::number(k) + "  " + s[k] + "\n";
                                    }
                                        QMessageBox::information(this, "查询结果", all, "返回游戏");}

void page3::on_pushButton_20_clicked()
{
    int bainum = 0, huanum = 0, heinum = 0;
     QString title = "  序号 | 体重 | 种类 | 天数 | 感染情况 | \n";
    p = head;
    QString s[10];
    for (int i = 0; i < 59; i++)
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
            QString all = "猪圈序号: 60\n此猪圈内猪的数量 : " + QString::number(p->number) + "\n种类数 : 黑猪 | 白猪 | 花白猪\n" + "               " + QString::number(heinum) + "       " + QString::number(bainum) + "        " + QString::number(huanum) + "\n                     ----详细数据----\n" + title;
                                    for (int k = 0; k < 10; k++)
                                    {
                                        all = all + "  " + QString::number(k) + "  " + s[k] + "\n";
                                    }
                                        QMessageBox::information(this, "查询结果", all, "返回游戏");}

