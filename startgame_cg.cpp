#include "startgame_cg.h"
#include "ui_startgame_cg.h"

startgame_CG::startgame_CG(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::startgame_CG)
{
    ui->setupUi(this);
}

startgame_CG::~startgame_CG()
{
    delete ui;
}
