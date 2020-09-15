#include "win_cg.h"
#include "ui_win_cg.h"

win_cg::win_cg(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::win_cg)
{
    ui->setupUi(this);
}

win_cg::~win_cg()
{
    delete ui;
}
