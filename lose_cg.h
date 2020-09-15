#ifndef LOSE_CG_H
#define LOSE_CG_H

#include <QMainWindow>

namespace Ui {
class lose_CG;
}

class lose_CG : public QMainWindow
{
    Q_OBJECT

public:
    explicit lose_CG(QWidget *parent = nullptr);
    ~lose_CG();

private:
    Ui::lose_CG *ui;
};

#endif // LOSE_CG_H
