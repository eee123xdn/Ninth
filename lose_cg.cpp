#include "lose_cg.h"
#include "ui_lose_cg.h"

lose_CG::lose_CG(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::lose_CG)
{
    ui->setupUi(this);
}

lose_CG::~lose_CG()
{
    delete ui;
}
