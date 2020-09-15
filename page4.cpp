#include "page4.h"
#include "ui_page4.h"
#include"piggame.h"
#include"QString"
#include"QMessageBox"
#include<QDebug>
page4::page4(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::page4)
{
    ui->setupUi(this);
}

page4::~page4()
{
    delete ui;
}

void page4::on_pushButton_1_clicked()
{
    qDebug()<<"44444";
    int bainum = 0, huanum = 0, heinum = 0;
     QString title = "  序号 | 体重 | 种类 | 天数 | 感染情况 | \n";
    p = head;
    QString s[10];
    for (int i = 0; i < 60; i++)
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
            QString all = "猪圈序号: 61\n此猪圈内猪的数量 : " + QString::number(p->number) + "\n种类数 : 黑猪 | 白猪 | 花白猪\n" + "               " + QString::number(heinum) + "       " + QString::number(bainum) + "        " + QString::number(huanum) + "\n                     ----详细数据----\n" + title;
                                    for (int k = 0; k < 10; k++)
                                    {
                                        all = all + "  " + QString::number(k) + "  " + s[k] + "\n";
                                    }
                                        QMessageBox::information(this, "查询结果", all, "返回游戏");}

void page4::on_pushButton_2_clicked()
{
    int bainum = 0, huanum = 0, heinum = 0;
     QString title = "  序号 | 体重 | 种类 | 天数 | 感染情况 | \n";
    p = head;
    QString s[10];
    for (int i = 0; i < 61; i++)
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
            QString all = "猪圈序号: 62\n此猪圈内猪的数量 : " + QString::number(p->number) + "\n种类数 : 黑猪 | 白猪 | 花白猪\n" + "               " + QString::number(heinum) + "       " + QString::number(bainum) + "        " + QString::number(huanum) + "\n                     ----详细数据----\n" + title;
                                    for (int k = 0; k < 10; k++)
                                    {
                                        all = all + "  " + QString::number(k) + "  " + s[k] + "\n";
                                    }
                                        QMessageBox::information(this, "查询结果", all, "返回游戏");}

void page4::on_pushButton_3_clicked()
{
    int bainum = 0, huanum = 0, heinum = 0;
     QString title = "  序号 | 体重 | 种类 | 天数 | 感染情况 | \n";
    p = head;
    QString s[10];
    for (int i = 0; i < 62; i++)
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
            QString all = "猪圈序号: 63\n此猪圈内猪的数量 : " + QString::number(p->number) + "\n种类数 : 黑猪 | 白猪 | 花白猪\n" + "               " + QString::number(heinum) + "       " + QString::number(bainum) + "        " + QString::number(huanum) + "\n                     ----详细数据----\n" + title;
                                    for (int k = 0; k < 10; k++)
                                    {
                                        all = all + "  " + QString::number(k) + "  " + s[k] + "\n";
                                    }
                                        QMessageBox::information(this, "查询结果", all, "返回游戏");}

void page4::on_pushButton_4_clicked()
{
    int bainum = 0, huanum = 0, heinum = 0;
     QString title = "  序号 | 体重 | 种类 | 天数 | 感染情况 | \n";
    p = head;
    QString s[10];
    for (int i = 0; i < 63; i++)
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
            QString all = "猪圈序号: 64\n此猪圈内猪的数量 : " + QString::number(p->number) + "\n种类数 : 黑猪 | 白猪 | 花白猪\n" + "               " + QString::number(heinum) + "       " + QString::number(bainum) + "        " + QString::number(huanum) + "\n                     ----详细数据----\n" + title;
                                    for (int k = 0; k < 10; k++)
                                    {
                                        all = all + "  " + QString::number(k) + "  " + s[k] + "\n";
                                    }
                                        QMessageBox::information(this, "查询结果", all, "返回游戏");}

void page4::on_pushButton_5_clicked()
{
    int bainum = 0, huanum = 0, heinum = 0;
     QString title = "  序号 | 体重 | 种类 | 天数 | 感染情况 | \n";
    p = head;
    QString s[10];
    for (int i = 0; i < 64; i++)
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
            QString all = "猪圈序号: 65\n此猪圈内猪的数量 : " + QString::number(p->number) + "\n种类数 : 黑猪 | 白猪 | 花白猪\n" + "               " + QString::number(heinum) + "       " + QString::number(bainum) + "        " + QString::number(huanum) + "\n                     ----详细数据----\n" + title;
                                    for (int k = 0; k < 10; k++)
                                    {
                                        all = all + "  " + QString::number(k) + "  " + s[k] + "\n";
                                    }
                                        QMessageBox::information(this, "查询结果", all, "返回游戏");}

void page4::on_pushButton_6_clicked()
{
    int bainum = 0, huanum = 0, heinum = 0;
     QString title = "  序号 | 体重 | 种类 | 天数 | 感染情况 | \n";
    p = head;
    QString s[10];
    for (int i = 0; i < 65; i++)
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
            QString all = "猪圈序号: 66\n此猪圈内猪的数量 : " + QString::number(p->number) + "\n种类数 : 黑猪 | 白猪 | 花白猪\n" + "               " + QString::number(heinum) + "       " + QString::number(bainum) + "        " + QString::number(huanum) + "\n                     ----详细数据----\n" + title;
                                    for (int k = 0; k < 10; k++)
                                    {
                                        all = all + "  " + QString::number(k) + "  " + s[k] + "\n";
                                    }
                                        QMessageBox::information(this, "查询结果", all, "返回游戏");}

void page4::on_pushButton_7_clicked()
{
    int bainum = 0, huanum = 0, heinum = 0;
     QString title = "  序号 | 体重 | 种类 | 天数 | 感染情况 | \n";
    p = head;
    QString s[10];
    for (int i = 0; i < 66; i++)
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
            QString all = "猪圈序号: 67\n此猪圈内猪的数量 : " + QString::number(p->number) + "\n种类数 : 黑猪 | 白猪 | 花白猪\n" + "               " + QString::number(heinum) + "       " + QString::number(bainum) + "        " + QString::number(huanum) + "\n                     ----详细数据----\n" + title;
                                    for (int k = 0; k < 10; k++)
                                    {
                                        all = all + "  " + QString::number(k) + "  " + s[k] + "\n";
                                    }
                                        QMessageBox::information(this, "查询结果", all, "返回游戏");}

void page4::on_pushButton_8_clicked()
{
    int bainum = 0, huanum = 0, heinum = 0;
     QString title = "  序号 | 体重 | 种类 | 天数 | 感染情况 | \n";
    p = head;
    QString s[10];
    for (int i = 0; i < 67; i++)
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
            QString all = "猪圈序号: 68\n此猪圈内猪的数量 : " + QString::number(p->number) + "\n种类数 : 黑猪 | 白猪 | 花白猪\n" + "               " + QString::number(heinum) + "       " + QString::number(bainum) + "        " + QString::number(huanum) + "\n                     ----详细数据----\n" + title;
                                    for (int k = 0; k < 10; k++)
                                    {
                                        all = all + "  " + QString::number(k) + "  " + s[k] + "\n";
                                    }
                                        QMessageBox::information(this, "查询结果", all, "返回游戏");}

void page4::on_pushButton_9_clicked()
{
    int bainum = 0, huanum = 0, heinum = 0;
     QString title = "  序号 | 体重 | 种类 | 天数 | 感染情况 | \n";
    p = head;
    QString s[10];
    for (int i = 0; i < 68; i++)
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
            QString all = "猪圈序号: 69\n此猪圈内猪的数量 : " + QString::number(p->number) + "\n种类数 : 黑猪 | 白猪 | 花白猪\n" + "               " + QString::number(heinum) + "       " + QString::number(bainum) + "        " + QString::number(huanum) + "\n                     ----详细数据----\n" + title;
                                    for (int k = 0; k < 10; k++)
                                    {
                                        all = all + "  " + QString::number(k) + "  " + s[k] + "\n";
                                    }
                                        QMessageBox::information(this, "查询结果", all, "返回游戏");}

void page4::on_pushButton_10_clicked()
{
    int bainum = 0, huanum = 0, heinum = 0;
     QString title = "  序号 | 体重 | 种类 | 天数 | 感染情况 | \n";
    p = head;
    QString s[10];
    for (int i = 0; i < 69; i++)
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
            QString all = "猪圈序号: 70\n此猪圈内猪的数量 : " + QString::number(p->number) + "\n种类数 : 黑猪 | 白猪 | 花白猪\n" + "               " + QString::number(heinum) + "       " + QString::number(bainum) + "        " + QString::number(huanum) + "\n                     ----详细数据----\n" + title;
                                    for (int k = 0; k < 10; k++)
                                    {
                                        all = all + "  " + QString::number(k) + "  " + s[k] + "\n";
                                    }
                                        QMessageBox::information(this, "查询结果", all, "返回游戏");}

void page4::on_pushButton_11_clicked()
{
    int bainum = 0, huanum = 0, heinum = 0;
     QString title = "  序号 | 体重 | 种类 | 天数 | 感染情况 | \n";
    p = head;
    QString s[10];
    for (int i = 0; i < 70; i++)
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
            QString all = "猪圈序号: 71\n此猪圈内猪的数量 : " + QString::number(p->number) + "\n种类数 : 黑猪 | 白猪 | 花白猪\n" + "               " + QString::number(heinum) + "       " + QString::number(bainum) + "        " + QString::number(huanum) + "\n                     ----详细数据----\n" + title;
                                    for (int k = 0; k < 10; k++)
                                    {
                                        all = all + "  " + QString::number(k) + "  " + s[k] + "\n";
                                    }
                                        QMessageBox::information(this, "查询结果", all, "返回游戏");}

void page4::on_pushButton_12_clicked()
{
    int bainum = 0, huanum = 0, heinum = 0;
     QString title = "  序号 | 体重 | 种类 | 天数 | 感染情况 | \n";
    p = head;
    QString s[10];
    for (int i = 0; i < 71; i++)
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
            QString all = "猪圈序号: 72\n此猪圈内猪的数量 : " + QString::number(p->number) + "\n种类数 : 黑猪 | 白猪 | 花白猪\n" + "               " + QString::number(heinum) + "       " + QString::number(bainum) + "        " + QString::number(huanum) + "\n                     ----详细数据----\n" + title;
                                    for (int k = 0; k < 10; k++)
                                    {
                                        all = all + "  " + QString::number(k) + "  " + s[k] + "\n";
                                    }
                                        QMessageBox::information(this, "查询结果", all, "返回游戏");}

void page4::on_pushButton_13_clicked()
{
    int bainum = 0, huanum = 0, heinum = 0;
     QString title = "  序号 | 体重 | 种类 | 天数 | 感染情况 | \n";
    p = head;
    QString s[10];
    for (int i = 0; i < 72; i++)
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
            QString all = "猪圈序号: 73\n此猪圈内猪的数量 : " + QString::number(p->number) + "\n种类数 : 黑猪 | 白猪 | 花白猪\n" + "               " + QString::number(heinum) + "       " + QString::number(bainum) + "        " + QString::number(huanum) + "\n                     ----详细数据----\n" + title;
                                    for (int k = 0; k < 10; k++)
                                    {
                                        all = all + "  " + QString::number(k) + "  " + s[k] + "\n";
                                    }
                                        QMessageBox::information(this, "查询结果", all, "返回游戏");}

void page4::on_pushButton_14_clicked()
{
    int bainum = 0, huanum = 0, heinum = 0;
     QString title = "  序号 | 体重 | 种类 | 天数 | 感染情况 | \n";
    p = head;
    QString s[10];
    for (int i = 0; i < 73; i++)
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
            QString all = "猪圈序号: 74\n此猪圈内猪的数量 : " + QString::number(p->number) + "\n种类数 : 黑猪 | 白猪 | 花白猪\n" + "               " + QString::number(heinum) + "       " + QString::number(bainum) + "        " + QString::number(huanum) + "\n                     ----详细数据----\n" + title;
                                    for (int k = 0; k < 10; k++)
                                    {
                                        all = all + "  " + QString::number(k) + "  " + s[k] + "\n";
                                    }
                                        QMessageBox::information(this, "查询结果", all, "返回游戏");}

void page4::on_pushButton_15_clicked()
{
    int bainum = 0, huanum = 0, heinum = 0;
     QString title = "  序号 | 体重 | 种类 | 天数 | 感染情况 | \n";
    p = head;
    QString s[10];
    for (int i = 0; i < 74; i++)
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
            QString all = "猪圈序号: 75\n此猪圈内猪的数量 : " + QString::number(p->number) + "\n种类数 : 黑猪 | 白猪 | 花白猪\n" + "               " + QString::number(heinum) + "       " + QString::number(bainum) + "        " + QString::number(huanum) + "\n                     ----详细数据----\n" + title;
                                    for (int k = 0; k < 10; k++)
                                    {
                                        all = all + "  " + QString::number(k) + "  " + s[k] + "\n";
                                    }
                                        QMessageBox::information(this, "查询结果", all, "返回游戏");}

void page4::on_pushButton_16_clicked()
{
    int bainum = 0, huanum = 0, heinum = 0;
     QString title = "  序号 | 体重 | 种类 | 天数 | 感染情况 | \n";
    p = head;
    QString s[10];
    for (int i = 0; i < 75; i++)
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
            QString all = "猪圈序号: 76\n此猪圈内猪的数量 : " + QString::number(p->number) + "\n种类数 : 黑猪 | 白猪 | 花白猪\n" + "               " + QString::number(heinum) + "       " + QString::number(bainum) + "        " + QString::number(huanum) + "\n                     ----详细数据----\n" + title;
                                    for (int k = 0; k < 10; k++)
                                    {
                                        all = all + "  " + QString::number(k) + "  " + s[k] + "\n";
                                    }
                                        QMessageBox::information(this, "查询结果", all, "返回游戏");}

void page4::on_pushButton_17_clicked()
{
    int bainum = 0, huanum = 0, heinum = 0;
     QString title = "  序号 | 体重 | 种类 | 天数 | 感染情况 | \n";
    p = head;
    QString s[10];
    for (int i = 0; i < 76; i++)
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
            QString all = "猪圈序号: 77\n此猪圈内猪的数量 : " + QString::number(p->number) + "\n种类数 : 黑猪 | 白猪 | 花白猪\n" + "               " + QString::number(heinum) + "       " + QString::number(bainum) + "        " + QString::number(huanum) + "\n                     ----详细数据----\n" + title;
                                    for (int k = 0; k < 10; k++)
                                    {
                                        all = all + "  " + QString::number(k) + "  " + s[k] + "\n";
                                    }
                                        QMessageBox::information(this, "查询结果", all, "返回游戏");}

void page4::on_pushButton_18_clicked()
{
    int bainum = 0, huanum = 0, heinum = 0;
     QString title = "  序号 | 体重 | 种类 | 天数 | 感染情况 | \n";
    p = head;
    QString s[10];
    for (int i = 0; i < 77; i++)
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
            QString all = "猪圈序号: 78\n此猪圈内猪的数量 : " + QString::number(p->number) + "\n种类数 : 黑猪 | 白猪 | 花白猪\n" + "               " + QString::number(heinum) + "       " + QString::number(bainum) + "        " + QString::number(huanum) + "\n                     ----详细数据----\n" + title;
                                    for (int k = 0; k < 10; k++)
                                    {
                                        all = all + "  " + QString::number(k) + "  " + s[k] + "\n";
                                    }
                                        QMessageBox::information(this, "查询结果", all, "返回游戏");}

void page4::on_pushButton_19_clicked()
{
    int bainum = 0, huanum = 0, heinum = 0;
     QString title = "  序号 | 体重 | 种类 | 天数 | 感染情况 | \n";
    p = head;
    QString s[10];
    for (int i = 0; i < 78; i++)
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
            QString all = "猪圈序号: 79\n此猪圈内猪的数量 : " + QString::number(p->number) + "\n种类数 : 黑猪 | 白猪 | 花白猪\n" + "               " + QString::number(heinum) + "       " + QString::number(bainum) + "        " + QString::number(huanum) + "\n                     ----详细数据----\n" + title;
                                    for (int k = 0; k < 10; k++)
                                    {
                                        all = all + "  " + QString::number(k) + "  " + s[k] + "\n";
                                    }
                                        QMessageBox::information(this, "查询结果", all, "返回游戏");}

void page4::on_pushButton_20_clicked()
{
    int bainum = 0, huanum = 0, heinum = 0;
     QString title = "  序号 | 体重 | 种类 | 天数 | 感染情况 | \n";
    p = head;
    QString s[10];
    for (int i = 0; i < 79; i++)
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
            QString all = "猪圈序号: 80\n此猪圈内猪的数量 : " + QString::number(p->number) + "\n种类数 : 黑猪 | 白猪 | 花白猪\n" + "               " + QString::number(heinum) + "       " + QString::number(bainum) + "        " + QString::number(huanum) + "\n                     ----详细数据----\n" + title;
                                    for (int k = 0; k < 10; k++)
                                    {
                                        all = all + "  " + QString::number(k) + "  " + s[k] + "\n";
                                    }
                                        QMessageBox::information(this, "查询结果", all, "返回游戏");}

