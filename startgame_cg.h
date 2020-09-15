#ifndef STARTGAME_CG_H
#define STARTGAME_CG_H

#include <QMainWindow>

namespace Ui {
class startgame_CG;
}

class startgame_CG : public QMainWindow
{
    Q_OBJECT

public:
    explicit startgame_CG(QWidget *parent = nullptr);
    ~startgame_CG();

private:
    Ui::startgame_CG *ui;
};

#endif // STARTGAME_CG_H
