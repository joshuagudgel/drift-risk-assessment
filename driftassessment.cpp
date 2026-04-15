#include "driftassessment.h"
#include "ui_driftassessment.h"

driftassessment::driftassessment(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::driftassessment)
{
    ui->setupUi(this);
}

driftassessment::~driftassessment()
{
    delete ui;
}
