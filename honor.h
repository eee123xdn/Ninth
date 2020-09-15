#ifndef HONOR_H
#define HONOR_H

#include <QMainWindow>

namespace Ui {
class honor;
}

class honor : public QMainWindow
{
    Q_OBJECT

public:
    explicit honor(QWidget *parent = nullptr);
    ~honor();

private slots:
    void on_pushButton_clicked();

private:
    Ui::honor *ui;
};

#endif // HONOR_H
