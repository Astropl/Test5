#include "addanalyser.h"
#include "ui_addanalyser.h"

addanalyser::addanalyser(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::addanalyser)
{
    ui->setupUi(this);
}

addanalyser::~addanalyser()
{
    delete ui;
}
