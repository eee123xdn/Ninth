#ifndef CONFIG_H
#define CONFIG_H

#include <QMainWindow>

namespace Ui {
class config;
}

class config : public QMainWindow
{
    Q_OBJECT

public:
    explicit config(QWidget *parent = nullptr);
    ~config();
signals:
    void change_BGM_and_BGPIC();
private slots:
    void on_pushButton_3_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_4_clicked();

    void on_btn_save_clicked();

private:
    Ui::config *ui;
};

#endif // CONFIG_H
