#ifndef STARTGAME_H
#define STARTGAME_H
#include<piggame.h>
#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class StartGame; }
QT_END_NAMESPACE
class StartGame : public QMainWindow
{
    Q_OBJECT

public:
    StartGame(QWidget *parent = nullptr);
    ~StartGame();

private slots:
    void on_btn_start_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

private:
    Ui::StartGame *ui;
};

#endif // STARTGAME_H
