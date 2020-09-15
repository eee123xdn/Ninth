#ifndef WIN_CG_H
#define WIN_CG_H

#include <QMainWindow>

namespace Ui {
class win_cg;
}

class win_cg : public QMainWindow
{
    Q_OBJECT

public:
    explicit win_cg(QWidget *parent = nullptr);
    ~win_cg();

private:
    Ui::win_cg *ui;
};

#endif // WIN_CG_H
