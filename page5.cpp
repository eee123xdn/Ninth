#include "page5.h"
#include "ui_page5.h"
#include"piggame.h"
#include"QString"
#include"QMessageBox"
#include<QDebug>
page5::page5(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::page5)
{
    ui->setupUi(this);
}

page5::~page5()
{
    delete ui;
}
void page5::on_pushButton_1_clicked()
{
    qDebug()<<"55555";
    int bainum = 0, huanum = 0, heinum = 0;
     QString title = "  序号 | 体重 | 种类 | 天数 | 感染情况 | \n";
    p = head;
    QString s[10];
    for (int i = 0; i < 80; i++)
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
            QString all = "猪圈序号: 81\n此猪圈内猪的数量 : " + QString::number(p->number) + "\n种类数 : 黑猪 | 白猪 | 花白猪\n" + "               " + QString::number(heinum) + "       " + QString::number(bainum) + "        " + QString::number(huanum) + "\n                     ----详细数据----\n" + title;
                                    for (int k = 0; k < 10; k++)
                                    {
                                        all = all + "  " + QString::number(k) + "  " + s[k] + "\n";
                                    }
                                        QMessageBox::information(this, "查询结果", all, "返回游戏");}

void page5::on_pushButton_2_clicked()
{
    int bainum = 0, huanum = 0, heinum = 0;
     QString title = "  序号 | 体重 | 种类 | 天数 | 感染情况 | \n";
    p = head;
    QString s[10];
    for (int i = 0; i < 81; i++)
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
            QString all = "猪圈序号: 82\n此猪圈内猪的数量 : " + QString::number(p->number) + "\n种类数 : 黑猪 | 白猪 | 花白猪\n" + "               " + QString::number(heinum) + "       " + QString::number(bainum) + "        " + QString::number(huanum) + "\n                     ----详细数据----\n" + title;
                                    for (int k = 0; k < 10; k++)
                                    {
                                        all = all + "  " + QString::number(k) + "  " + s[k] + "\n";
                                    }
                                        QMessageBox::information(this, "查询结果", all, "返回游戏");}

void page5::on_pushButton_3_clicked()
{
    int bainum = 0, huanum = 0, heinum = 0;
     QString title = "  序号 | 体重 | 种类 | 天数 | 感染情况 | \n";
    p = head;
    QString s[10];
    for (int i = 0; i < 82; i++)
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
            QString all = "猪圈序号: 83\n此猪圈内猪的数量 : " + QString::number(p->number) + "\n种类数 : 黑猪 | 白猪 | 花白猪\n" + "               " + QString::number(heinum) + "       " + QString::number(bainum) + "        " + QString::number(huanum) + "\n                     ----详细数据----\n" + title;
                                    for (int k = 0; k < 10; k++)
                                    {
                                        all = all + "  " + QString::number(k) + "  " + s[k] + "\n";
                                    }
                                        QMessageBox::information(this, "查询结果", all, "返回游戏");}

void page5::on_pushButton_4_clicked()
{
    int bainum = 0, huanum = 0, heinum = 0;
     QString title = "  序号 | 体重 | 种类 | 天数 | 感染情况 | \n";
    p = head;
    QString s[10];
    for (int i = 0; i < 83; i++)
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
            QString all = "猪圈序号: 84\n此猪圈内猪的数量 : " + QString::number(p->number) + "\n种类数 : 黑猪 | 白猪 | 花白猪\n" + "               " + QString::number(heinum) + "       " + QString::number(bainum) + "        " + QString::number(huanum) + "\n                     ----详细数据----\n" + title;
                                    for (int k = 0; k < 10; k++)
                                    {
                                        all = all + "  " + QString::number(k) + "  " + s[k] + "\n";
                                    }
                                        QMessageBox::information(this, "查询结果", all, "返回游戏");}

void page5::on_pushButton_5_clicked()
{
    int bainum = 0, huanum = 0, heinum = 0;
     QString title = "  序号 | 体重 | 种类 | 天数 | 感染情况 | \n";
    p = head;
    QString s[10];
    for (int i = 0; i < 84; i++)
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
            QString all = "猪圈序号: 85\n此猪圈内猪的数量 : " + QString::number(p->number) + "\n种类数 : 黑猪 | 白猪 | 花白猪\n" + "               " + QString::number(heinum) + "       " + QString::number(bainum) + "        " + QString::number(huanum) + "\n                     ----详细数据----\n" + title;
                                    for (int k = 0; k < 10; k++)
                                    {
                                        all = all + "  " + QString::number(k) + "  " + s[k] + "\n";
                                    }
                                        QMessageBox::information(this, "查询结果", all, "返回游戏");}

void page5::on_pushButton_6_clicked()
{
    int bainum = 0, huanum = 0, heinum = 0;
     QString title = "  序号 | 体重 | 种类 | 天数 | 感染情况 | \n";
    p = head;
    QString s[10];
    for (int i = 0; i < 85; i++)
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
            QString all = "猪圈序号: 86\n此猪圈内猪的数量 : " + QString::number(p->number) + "\n种类数 : 黑猪 | 白猪 | 花白猪\n" + "               " + QString::number(heinum) + "       " + QString::number(bainum) + "        " + QString::number(huanum) + "\n                     ----详细数据----\n" + title;
                                    for (int k = 0; k < 10; k++)
                                    {
                                        all = all + "  " + QString::number(k) + "  " + s[k] + "\n";
                                    }
                                        QMessageBox::information(this, "查询结果", all, "返回游戏");}

void page5::on_pushButton_7_clicked()
{
    int bainum = 0, huanum = 0, heinum = 0;
     QString title = "  序号 | 体重 | 种类 | 天数 | 感染情况 | \n";
    p = head;
    QString s[10];
    for (int i = 0; i < 86; i++)
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
            QString all = "猪圈序号: 87\n此猪圈内猪的数量 : " + QString::number(p->number) + "\n种类数 : 黑猪 | 白猪 | 花白猪\n" + "               " + QString::number(heinum) + "       " + QString::number(bainum) + "        " + QString::number(huanum) + "\n                     ----详细数据----\n" + title;
                                    for (int k = 0; k < 10; k++)
                                    {
                                        all = all + "  " + QString::number(k) + "  " + s[k] + "\n";
                                    }
                                        QMessageBox::information(this, "查询结果", all, "返回游戏");}

void page5::on_pushButton_8_clicked()
{
    int bainum = 0, huanum = 0, heinum = 0;
     QString title = "  序号 | 体重 | 种类 | 天数 | 感染情况 | \n";
    p = head;
    QString s[10];
    for (int i = 0; i < 87; i++)
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
            QString all = "猪圈序号: 88\n此猪圈内猪的数量 : " + QString::number(p->number) + "\n种类数 : 黑猪 | 白猪 | 花白猪\n" + "               " + QString::number(heinum) + "       " + QString::number(bainum) + "        " + QString::number(huanum) + "\n                     ----详细数据----\n" + title;
                                    for (int k = 0; k < 10; k++)
                                    {
                                        all = all + "  " + QString::number(k) + "  " + s[k] + "\n";
                                    }
                                        QMessageBox::information(this, "查询结果", all, "返回游戏");}

void page5::on_pushButton_9_clicked()
{
    int bainum = 0, huanum = 0, heinum = 0;
     QString title = "  序号 | 体重 | 种类 | 天数 | 感染情况 | \n";
    p = head;
    QString s[10];
    for (int i = 0; i < 88; i++)
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
            QString all = "猪圈序号: 89\n此猪圈内猪的数量 : " + QString::number(p->number) + "\n种类数 : 黑猪 | 白猪 | 花白猪\n" + "               " + QString::number(heinum) + "       " + QString::number(bainum) + "        " + QString::number(huanum) + "\n                     ----详细数据----\n" + title;
                                    for (int k = 0; k < 10; k++)
                                    {
                                        all = all + "  " + QString::number(k) + "  " + s[k] + "\n";
                                    }
                                        QMessageBox::information(this, "查询结果", all, "返回游戏");}

void page5::on_pushButton_10_clicked()
{
    int bainum = 0, huanum = 0, heinum = 0;
     QString title = "  序号 | 体重 | 种类 | 天数 | 感染情况 | \n";
    p = head;
    QString s[10];
    for (int i = 0; i < 89; i++)
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
            QString all = "猪圈序号: 90\n此猪圈内猪的数量 : " + QString::number(p->number) + "\n种类数 : 黑猪 | 白猪 | 花白猪\n" + "               " + QString::number(heinum) + "       " + QString::number(bainum) + "        " + QString::number(huanum) + "\n                     ----详细数据----\n" + title;
                                    for (int k = 0; k < 10; k++)
                                    {
                                        all = all + "  " + QString::number(k) + "  " + s[k] + "\n";
                                    }
                                        QMessageBox::information(this, "查询结果", all, "返回游戏");}

void page5::on_pushButton_11_clicked()
{
    int bainum = 0, huanum = 0, heinum = 0;
     QString title = "  序号 | 体重 | 种类 | 天数 | 感染情况 | \n";
    p = head;
    QString s[10];
    for (int i = 0; i < 90; i++)
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
            QString all = "猪圈序号: 91\n此猪圈内猪的数量 : " + QString::number(p->number) + "\n种类数 : 黑猪 | 白猪 | 花白猪\n" + "               " + QString::number(heinum) + "       " + QString::number(bainum) + "        " + QString::number(huanum) + "\n                     ----详细数据----\n" + title;
                                    for (int k = 0; k < 10; k++)
                                    {
                                        all = all + "  " + QString::number(k) + "  " + s[k] + "\n";
                                    }
                                        QMessageBox::information(this, "查询结果", all, "返回游戏");}

void page5::on_pushButton_12_clicked()
{
    int bainum = 0, huanum = 0, heinum = 0;
     QString title = "  序号 | 体重 | 种类 | 天数 | 感染情况 | \n";
    p = head;
    QString s[10];
    for (int i = 0; i < 91; i++)
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
            QString all = "猪圈序号: 92\n此猪圈内猪的数量 : " + QString::number(p->number) + "\n种类数 : 黑猪 | 白猪 | 花白猪\n" + "               " + QString::number(heinum) + "       " + QString::number(bainum) + "        " + QString::number(huanum) + "\n                     ----详细数据----\n" + title;
                                    for (int k = 0; k < 10; k++)
                                    {
                                        all = all + "  " + QString::number(k) + "  " + s[k] + "\n";
                                    }
                                        QMessageBox::information(this, "查询结果", all, "返回游戏");}

void page5::on_pushButton_13_clicked()
{
    int bainum = 0, huanum = 0, heinum = 0;
     QString title = "  序号 | 体重 | 种类 | 天数 | 感染情况 | \n";
    p = head;
    QString s[10];
    for (int i = 0; i < 92; i++)
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
            QString all = "猪圈序号: 93\n此猪圈内猪的数量 : " + QString::number(p->number) + "\n种类数 : 黑猪 | 白猪 | 花白猪\n" + "               " + QString::number(heinum) + "       " + QString::number(bainum) + "        " + QString::number(huanum) + "\n                     ----详细数据----\n" + title;
                                    for (int k = 0; k < 10; k++)
                                    {
                                        all = all + "  " + QString::number(k) + "  " + s[k] + "\n";
                                    }
                                        QMessageBox::information(this, "查询结果", all, "返回游戏");}

void page5::on_pushButton_14_clicked()
{
    int bainum = 0, huanum = 0, heinum = 0;
     QString title = "  序号 | 体重 | 种类 | 天数 | 感染情况 | \n";
    p = head;
    QString s[10];
    for (int i = 0; i < 93; i++)
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
            QString all = "猪圈序号: 94\n此猪圈内猪的数量 : " + QString::number(p->number) + "\n种类数 : 黑猪 | 白猪 | 花白猪\n" + "               " + QString::number(heinum) + "       " + QString::number(bainum) + "        " + QString::number(huanum) + "\n                     ----详细数据----\n" + title;
                                    for (int k = 0; k < 10; k++)
                                    {
                                        all = all + "  " + QString::number(k) + "  " + s[k] + "\n";
                                    }
                                        QMessageBox::information(this, "查询结果", all, "返回游戏");}

void page5::on_pushButton_15_clicked()
{
    int bainum = 0, huanum = 0, heinum = 0;
     QString title = "  序号 | 体重 | 种类 | 天数 | 感染情况 | \n";
    p = head;
    QString s[10];
    for (int i = 0; i < 94; i++)
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
            QString all = "猪圈序号: 95\n此猪圈内猪的数量 : " + QString::number(p->number) + "\n种类数 : 黑猪 | 白猪 | 花白猪\n" + "               " + QString::number(heinum) + "       " + QString::number(bainum) + "        " + QString::number(huanum) + "\n                     ----详细数据----\n" + title;
                                    for (int k = 0; k < 10; k++)
                                    {
                                        all = all + "  " + QString::number(k) + "  " + s[k] + "\n";
                                    }
                                        QMessageBox::information(this, "查询结果", all, "返回游戏");}

void page5::on_pushButton_16_clicked()
{
    int bainum = 0, huanum = 0, heinum = 0;
     QString title = "  序号 | 体重 | 种类 | 天数 | 感染情况 | \n";
    p = head;
    QString s[10];
    for (int i = 0; i < 95; i++)
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
            QString all = "猪圈序号: 96\n此猪圈内猪的数量 : " + QString::number(p->number) + "\n种类数 : 黑猪 | 白猪 | 花白猪\n" + "               " + QString::number(heinum) + "       " + QString::number(bainum) + "        " + QString::number(huanum) + "\n                     ----详细数据----\n" + title;
                                    for (int k = 0; k < 10; k++)
                                    {
                                        all = all + "  " + QString::number(k) + "  " + s[k] + "\n";
                                    }
                                        QMessageBox::information(this, "查询结果", all, "返回游戏");}

void page5::on_pushButton_17_clicked()
{
    int bainum = 0, huanum = 0, heinum = 0;
     QString title = "  序号 | 体重 | 种类 | 天数 | 感染情况 | \n";
    p = head;
    QString s[10];
    for (int i = 0; i < 96; i++)
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
            QString all = "猪圈序号: 97\n此猪圈内猪的数量 : " + QString::number(p->number) + "\n种类数 : 黑猪 | 白猪 | 花白猪\n" + "               " + QString::number(heinum) + "       " + QString::number(bainum) + "        " + QString::number(huanum) + "\n                     ----详细数据----\n" + title;
                                    for (int k = 0; k < 10; k++)
                                    {
                                        all = all + "  " + QString::number(k) + "  " + s[k] + "\n";
                                    }
                                        QMessageBox::information(this, "查询结果", all, "返回游戏");}

void page5::on_pushButton_18_clicked()
{
    int bainum = 0, huanum = 0, heinum = 0;
     QString title = "  序号 | 体重 | 种类 | 天数 | 感染情况 | \n";
    p = head;
    QString s[10];
    for (int i = 0; i < 97; i++)
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
            QString all = "猪圈序号: 98\n此猪圈内猪的数量 : " + QString::number(p->number) + "\n种类数 : 黑猪 | 白猪 | 花白猪\n" + "               " + QString::number(heinum) + "       " + QString::number(bainum) + "        " + QString::number(huanum) + "\n                     ----详细数据----\n" + title;
                                    for (int k = 0; k < 10; k++)
                                    {
                                        all = all + "  " + QString::number(k) + "  " + s[k] + "\n";
                                    }
                                        QMessageBox::information(this, "查询结果", all, "返回游戏");}

void page5::on_pushButton_19_clicked()
{
    int bainum = 0, huanum = 0, heinum = 0;
     QString title = "  序号 | 体重 | 种类 | 天数 | 感染情况 | \n";
    p = head;
    QString s[10];
    for (int i = 0; i < 98; i++)
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
            QString all = "猪圈序号: 99\n此猪圈内猪的数量 : " + QString::number(p->number) + "\n种类数 : 黑猪 | 白猪 | 花白猪\n" + "               " + QString::number(heinum) + "       " + QString::number(bainum) + "        " + QString::number(huanum) + "\n                     ----详细数据----\n" + title;
                                    for (int k = 0; k < 10; k++)
                                    {
                                        all = all + "  " + QString::number(k) + "  " + s[k] + "\n";
                                    }
                                        QMessageBox::information(this, "查询结果", all, "返回游戏");}

void page5::on_pushButton_20_clicked()
{
    int bainum = 0, huanum = 0, heinum = 0;
     QString title = "  序号 | 体重 | 种类 | 天数 | 感染情况 | \n";
    p = head;
    QString s[10];
    for (int i = 0; i < 99; i++)
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
            QString all = "猪圈序号: 100\n此猪圈内猪的数量 : " + QString::number(p->number) + "\n种类数 : 黑猪 | 白猪 | 花白猪\n" + "               " + QString::number(heinum) + "       " + QString::number(bainum) + "        " + QString::number(huanum) + "\n                     ----详细数据----\n" + title;
                                    for (int k = 0; k < 10; k++)
                                    {
                                        all = all + "  " + QString::number(k) + "  " + s[k] + "\n";
                                    }
                                        QMessageBox::information(this, "查询结果", all, "返回游戏");}

