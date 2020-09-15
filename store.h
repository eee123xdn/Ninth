#ifndef STORE_H
#define STORE_H

#include <QMainWindow>

namespace Ui {
class store;
}

class store : public QMainWindow
{
    Q_OBJECT

public:
    explicit store(QWidget *parent = nullptr);
    ~store();
signals:
    void finish_buy();
public slots:
    bool check(int hei,int bai,int hua,bool yimiao,bool kangti,bool jiyin);
    void viewmoney();
private slots:
    void on_pushButton_2_clicked();

    void on_pushButton_clicked();

private:
    Ui::store *ui;
};

#endif // STORE_H
