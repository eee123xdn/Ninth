#include "page2.h"
#include "ui_page2.h"
#include"piggame.h"
#include"QString"
#include"QMessageBox"
#include"QDebug"
page2::page2(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::page2)
{
    ui->setupUi(this);
}

page2::~page2()
{
    delete ui;
}

void page2::on_pushButton_1_clicked()
{
    qDebug()<<"1";
    int bainum = 0, huanum = 0, heinum = 0;
     QString title = "  序号 | 体重 | 种类 | 天数 | 感染情况 | \n";
    p = head;
    QString s[10];
    for (int i = 0; i < 20; i++)
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
            QString all = "猪圈序号: 21\n此猪圈内猪的数量 : " + QString::number(p->number) + "\n种类数 : 黑猪 | 白猪 | 花白猪\n" + "               " + QString::number(heinum) + "       " + QString::number(bainum) + "        " + QString::number(huanum) + "\n                     ----详细数据----\n" + title;
                                    for (int k = 0; k < 10; k++)
                                    {
                                        all = all + "  " + QString::number(k) + "  " + s[k] + "\n";
                                    }
                                        QMessageBox::information(this, "查询结果", all, "返回游戏");}

void page2::on_pushButton_2_clicked()
{
    int bainum = 0, huanum = 0, heinum = 0;
     QString title = "  序号 | 体重 | 种类 | 天数 | 感染情况 | \n";
    p = head;
    QString s[10];
    for (int i = 0; i < 21; i++)
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
            QString all = "猪圈序号: 22\n此猪圈内猪的数量 : " + QString::number(p->number) + "\n种类数 : 黑猪 | 白猪 | 花白猪\n" + "               " + QString::number(heinum) + "       " + QString::number(bainum) + "        " + QString::number(huanum) + "\n                     ----详细数据----\n" + title;
                                    for (int k = 0; k < 10; k++)
                                    {
                                        all = all + "  " + QString::number(k) + "  " + s[k] + "\n";
                                    }
                                        QMessageBox::information(this, "查询结果", all, "返回游戏");}

void page2::on_pushButton_3_clicked()
{
    int bainum = 0, huanum = 0, heinum = 0;
     QString title = "  序号 | 体重 | 种类 | 天数 | 感染情况 | \n";
    p = head;
    QString s[10];
    for (int i = 0; i < 22; i++)
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
            QString all = "猪圈序号: 23\n此猪圈内猪的数量 : " + QString::number(p->number) + "\n种类数 : 黑猪 | 白猪 | 花白猪\n" + "               " + QString::number(heinum) + "       " + QString::number(bainum) + "        " + QString::number(huanum) + "\n                     ----详细数据----\n" + title;
                                    for (int k = 0; k < 10; k++)
                                    {
                                        all = all + "  " + QString::number(k) + "  " + s[k] + "\n";
                                    }
                                        QMessageBox::information(this, "查询结果", all, "返回游戏");}

void page2::on_pushButton_4_clicked()
{
    int bainum = 0, huanum = 0, heinum = 0;
     QString title = "  序号 | 体重 | 种类 | 天数 | 感染情况 | \n";
    p = head;
    QString s[10];
    for (int i = 0; i < 23; i++)
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
            QString all = "猪圈序号: 24\n此猪圈内猪的数量 : " + QString::number(p->number) + "\n种类数 : 黑猪 | 白猪 | 花白猪\n" + "               " + QString::number(heinum) + "       " + QString::number(bainum) + "        " + QString::number(huanum) + "\n                     ----详细数据----\n" + title;
                                    for (int k = 0; k < 10; k++)
                                    {
                                        all = all + "  " + QString::number(k) + "  " + s[k] + "\n";
                                    }
                                        QMessageBox::information(this, "查询结果", all, "返回游戏");}

void page2::on_pushButton_5_clicked()
{
    int bainum = 0, huanum = 0, heinum = 0;
     QString title = "  序号 | 体重 | 种类 | 天数 | 感染情况 | \n";
    p = head;
    QString s[10];
    for (int i = 0; i < 24; i++)
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
            QString all = "猪圈序号: 25\n此猪圈内猪的数量 : " + QString::number(p->number) + "\n种类数 : 黑猪 | 白猪 | 花白猪\n" + "               " + QString::number(heinum) + "       " + QString::number(bainum) + "        " + QString::number(huanum) + "\n                     ----详细数据----\n" + title;
                                    for (int k = 0; k < 10; k++)
                                    {
                                        all = all + "  " + QString::number(k) + "  " + s[k] + "\n";
                                    }
                                        QMessageBox::information(this, "查询结果", all, "返回游戏");}

void page2::on_pushButton_6_clicked()
{
    int bainum = 0, huanum = 0, heinum = 0;
     QString title = "  序号 | 体重 | 种类 | 天数 | 感染情况 | \n";
    p = head;
    QString s[10];
    for (int i = 0; i < 25; i++)
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
            QString all = "猪圈序号: 26\n此猪圈内猪的数量 : " + QString::number(p->number) + "\n种类数 : 黑猪 | 白猪 | 花白猪\n" + "               " + QString::number(heinum) + "       " + QString::number(bainum) + "        " + QString::number(huanum) + "\n                     ----详细数据----\n" + title;
                                    for (int k = 0; k < 10; k++)
                                    {
                                        all = all + "  " + QString::number(k) + "  " + s[k] + "\n";
                                    }
                                        QMessageBox::information(this, "查询结果", all, "返回游戏");}

void page2::on_pushButton_7_clicked()
{
    int bainum = 0, huanum = 0, heinum = 0;
     QString title = "  序号 | 体重 | 种类 | 天数 | 感染情况 | \n";
    p = head;
    QString s[10];
    for (int i = 0; i < 26; i++)
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
            QString all = "猪圈序号: 27\n此猪圈内猪的数量 : " + QString::number(p->number) + "\n种类数 : 黑猪 | 白猪 | 花白猪\n" + "               " + QString::number(heinum) + "       " + QString::number(bainum) + "        " + QString::number(huanum) + "\n                     ----详细数据----\n" + title;
                                    for (int k = 0; k < 10; k++)
                                    {
                                        all = all + "  " + QString::number(k) + "  " + s[k] + "\n";
                                    }
                                        QMessageBox::information(this, "查询结果", all, "返回游戏");}

void page2::on_pushButton_8_clicked()
{
    int bainum = 0, huanum = 0, heinum = 0;
     QString title = "  序号 | 体重 | 种类 | 天数 | 感染情况 | \n";
    p = head;
    QString s[10];
    for (int i = 0; i < 27; i++)
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
            QString all = "猪圈序号: 28\n此猪圈内猪的数量 : " + QString::number(p->number) + "\n种类数 : 黑猪 | 白猪 | 花白猪\n" + "               " + QString::number(heinum) + "       " + QString::number(bainum) + "        " + QString::number(huanum) + "\n                     ----详细数据----\n" + title;
                                    for (int k = 0; k < 10; k++)
                                    {
                                        all = all + "  " + QString::number(k) + "  " + s[k] + "\n";
                                    }
                                        QMessageBox::information(this, "查询结果", all, "返回游戏");}

void page2::on_pushButton_9_clicked()
{
    int bainum = 0, huanum = 0, heinum = 0;
     QString title = "  序号 | 体重 | 种类 | 天数 | 感染情况 | \n";
    p = head;
    QString s[10];
    for (int i = 0; i < 28; i++)
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
            QString all = "猪圈序号: 29\n此猪圈内猪的数量 : " + QString::number(p->number) + "\n种类数 : 黑猪 | 白猪 | 花白猪\n" + "               " + QString::number(heinum) + "       " + QString::number(bainum) + "        " + QString::number(huanum) + "\n                     ----详细数据----\n" + title;
                                    for (int k = 0; k < 10; k++)
                                    {
                                        all = all + "  " + QString::number(k) + "  " + s[k] + "\n";
                                    }
                                        QMessageBox::information(this, "查询结果", all, "返回游戏");}

void page2::on_pushButton_10_clicked()
{
    int bainum = 0, huanum = 0, heinum = 0;
     QString title = "  序号 | 体重 | 种类 | 天数 | 感染情况 | \n";
    p = head;
    QString s[10];
    for (int i = 0; i < 29; i++)
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
            QString all = "猪圈序号: 30\n此猪圈内猪的数量 : " + QString::number(p->number) + "\n种类数 : 黑猪 | 白猪 | 花白猪\n" + "               " + QString::number(heinum) + "       " + QString::number(bainum) + "        " + QString::number(huanum) + "\n                     ----详细数据----\n" + title;
                                    for (int k = 0; k < 10; k++)
                                    {
                                        all = all + "  " + QString::number(k) + "  " + s[k] + "\n";
                                    }
                                        QMessageBox::information(this, "查询结果", all, "返回游戏");}

void page2::on_pushButton_11_clicked()
{
    int bainum = 0, huanum = 0, heinum = 0;
     QString title = "  序号 | 体重 | 种类 | 天数 | 感染情况 | \n";
    p = head;
    QString s[10];
    for (int i = 0; i < 30; i++)
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
            QString all = "猪圈序号: 31\n此猪圈内猪的数量 : " + QString::number(p->number) + "\n种类数 : 黑猪 | 白猪 | 花白猪\n" + "               " + QString::number(heinum) + "       " + QString::number(bainum) + "        " + QString::number(huanum) + "\n                     ----详细数据----\n" + title;
                                    for (int k = 0; k < 10; k++)
                                    {
                                        all = all + "  " + QString::number(k) + "  " + s[k] + "\n";
                                    }
                                        QMessageBox::information(this, "查询结果", all, "返回游戏");}

void page2::on_pushButton_12_clicked()
{
    int bainum = 0, huanum = 0, heinum = 0;
     QString title = "  序号 | 体重 | 种类 | 天数 | 感染情况 | \n";
    p = head;
    QString s[10];
    for (int i = 0; i < 31; i++)
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
            QString all = "猪圈序号: 32\n此猪圈内猪的数量 : " + QString::number(p->number) + "\n种类数 : 黑猪 | 白猪 | 花白猪\n" + "               " + QString::number(heinum) + "       " + QString::number(bainum) + "        " + QString::number(huanum) + "\n                     ----详细数据----\n" + title;
                                    for (int k = 0; k < 10; k++)
                                    {
                                        all = all + "  " + QString::number(k) + "  " + s[k] + "\n";
                                    }
                                        QMessageBox::information(this, "查询结果", all, "返回游戏");}

void page2::on_pushButton_13_clicked()
{
    int bainum = 0, huanum = 0, heinum = 0;
     QString title = "  序号 | 体重 | 种类 | 天数 | 感染情况 | \n";
    p = head;
    QString s[10];
    for (int i = 0; i < 32; i++)
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
            QString all = "猪圈序号: 33\n此猪圈内猪的数量 : " + QString::number(p->number) + "\n种类数 : 黑猪 | 白猪 | 花白猪\n" + "               " + QString::number(heinum) + "       " + QString::number(bainum) + "        " + QString::number(huanum) + "\n                     ----详细数据----\n" + title;
                                    for (int k = 0; k < 10; k++)
                                    {
                                        all = all + "  " + QString::number(k) + "  " + s[k] + "\n";
                                    }
                                        QMessageBox::information(this, "查询结果", all, "返回游戏");}

void page2::on_pushButton_14_clicked()
{
    int bainum = 0, huanum = 0, heinum = 0;
     QString title = "  序号 | 体重 | 种类 | 天数 | 感染情况 | \n";
    p = head;
    QString s[10];
    for (int i = 0; i < 33; i++)
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
            QString all = "猪圈序号: 34\n此猪圈内猪的数量 : " + QString::number(p->number) + "\n种类数 : 黑猪 | 白猪 | 花白猪\n" + "               " + QString::number(heinum) + "       " + QString::number(bainum) + "        " + QString::number(huanum) + "\n                     ----详细数据----\n" + title;
                                    for (int k = 0; k < 10; k++)
                                    {
                                        all = all + "  " + QString::number(k) + "  " + s[k] + "\n";
                                    }
                                        QMessageBox::information(this, "查询结果", all, "返回游戏");}

void page2::on_pushButton_15_clicked()
{
    int bainum = 0, huanum = 0, heinum = 0;
     QString title = "  序号 | 体重 | 种类 | 天数 | 感染情况 | \n";
    p = head;
    QString s[10];
    for (int i = 0; i < 34; i++)
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
            QString all = "猪圈序号: 35\n此猪圈内猪的数量 : " + QString::number(p->number) + "\n种类数 : 黑猪 | 白猪 | 花白猪\n" + "               " + QString::number(heinum) + "       " + QString::number(bainum) + "        " + QString::number(huanum) + "\n                     ----详细数据----\n" + title;
                                    for (int k = 0; k < 10; k++)
                                    {
                                        all = all + "  " + QString::number(k) + "  " + s[k] + "\n";
                                    }
                                        QMessageBox::information(this, "查询结果", all, "返回游戏");}

void page2::on_pushButton_16_clicked()
{
    int bainum = 0, huanum = 0, heinum = 0;
     QString title = "  序号 | 体重 | 种类 | 天数 | 感染情况 | \n";
    p = head;
    QString s[10];
    for (int i = 0; i < 35; i++)
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
            QString all = "猪圈序号: 36\n此猪圈内猪的数量 : " + QString::number(p->number) + "\n种类数 : 黑猪 | 白猪 | 花白猪\n" + "               " + QString::number(heinum) + "       " + QString::number(bainum) + "        " + QString::number(huanum) + "\n                     ----详细数据----\n" + title;
                                    for (int k = 0; k < 10; k++)
                                    {
                                        all = all + "  " + QString::number(k) + "  " + s[k] + "\n";
                                    }
                                        QMessageBox::information(this, "查询结果", all, "返回游戏");}

void page2::on_pushButton_17_clicked()
{
    int bainum = 0, huanum = 0, heinum = 0;
     QString title = "  序号 | 体重 | 种类 | 天数 | 感染情况 | \n";
    p = head;
    QString s[10];
    for (int i = 0; i < 36; i++)
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
            QString all = "猪圈序号: 37\n此猪圈内猪的数量 : " + QString::number(p->number) + "\n种类数 : 黑猪 | 白猪 | 花白猪\n" + "               " + QString::number(heinum) + "       " + QString::number(bainum) + "        " + QString::number(huanum) + "\n                     ----详细数据----\n" + title;
                                    for (int k = 0; k < 10; k++)
                                    {
                                        all = all + "  " + QString::number(k) + "  " + s[k] + "\n";
                                    }
                                        QMessageBox::information(this, "查询结果", all, "返回游戏");}

void page2::on_pushButton_18_clicked()
{
    int bainum = 0, huanum = 0, heinum = 0;
     QString title = "  序号 | 体重 | 种类 | 天数 | 感染情况 | \n";
    p = head;
    QString s[10];
    for (int i = 0; i < 37; i++)
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
            QString all = "猪圈序号: 38\n此猪圈内猪的数量 : " + QString::number(p->number) + "\n种类数 : 黑猪 | 白猪 | 花白猪\n" + "               " + QString::number(heinum) + "       " + QString::number(bainum) + "        " + QString::number(huanum) + "\n                     ----详细数据----\n" + title;
                                    for (int k = 0; k < 10; k++)
                                    {
                                        all = all + "  " + QString::number(k) + "  " + s[k] + "\n";
                                    }
                                        QMessageBox::information(this, "查询结果", all, "返回游戏");}

void page2::on_pushButton_19_clicked()
{
    int bainum = 0, huanum = 0, heinum = 0;
     QString title = "  序号 | 体重 | 种类 | 天数 | 感染情况 | \n";
    p = head;
    QString s[10];
    for (int i = 0; i < 38; i++)
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
            QString all = "猪圈序号: 39\n此猪圈内猪的数量 : " + QString::number(p->number) + "\n种类数 : 黑猪 | 白猪 | 花白猪\n" + "               " + QString::number(heinum) + "       " + QString::number(bainum) + "        " + QString::number(huanum) + "\n                     ----详细数据----\n" + title;
                                    for (int k = 0; k < 10; k++)
                                    {
                                        all = all + "  " + QString::number(k) + "  " + s[k] + "\n";
                                    }
                                        QMessageBox::information(this, "查询结果", all, "返回游戏");}

void page2::on_pushButton_20_clicked()
{
    int bainum = 0, huanum = 0, heinum = 0;
     QString title = "  序号 | 体重 | 种类 | 天数 | 感染情况 | \n";
    p = head;
    QString s[10];
    for (int i = 0; i < 39; i++)
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
            QString all = "猪圈序号: 40\n此猪圈内猪的数量 : " + QString::number(p->number) + "\n种类数 : 黑猪 | 白猪 | 花白猪\n" + "               " + QString::number(heinum) + "       " + QString::number(bainum) + "        " + QString::number(huanum) + "\n                     ----详细数据----\n" + title;
                                    for (int k = 0; k < 10; k++)
                                    {
                                        all = all + "  " + QString::number(k) + "  " + s[k] + "\n";
                                    }
                                        QMessageBox::information(this, "查询结果", all, "返回游戏");}


