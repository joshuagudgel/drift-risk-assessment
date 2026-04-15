#include "driftassessment.h"
#include "ui_driftassessment.h"

driftassessment::driftassessment(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::driftassessment)
{
    ui->setupUi(this);
    
    // signals/slots
    connect(ui->tempComboBox, &QComboBox::currentIndexChanged, this, &driftassessment::evaluateRisk);
    connect(ui->windComboBox, &QComboBox::currentIndexChanged, this, &driftassessment::evaluateRisk);
    connect(ui->humComboBox, &QComboBox::currentIndexChanged, this, &driftassessment::evaluateRisk);
    connect(ui->tractorSpeedComboBox, &QComboBox::currentIndexChanged, this, &driftassessment::evaluateRisk);
    connect(ui->pressAltComboBox, &QComboBox::currentIndexChanged, this, &driftassessment::evaluateRisk);
    connect(ui->dropletComboBox, &QComboBox::currentIndexChanged, this, &driftassessment::evaluateRisk);
    
    // initialize summary label
    evaluateRisk();
}

driftassessment::~driftassessment()
{
    delete ui;
}

void driftassessment::evaluateRisk()
{
    int totalScore = 0;
    totalScore += (ui->tempComboBox->currentIndex());
    totalScore += (ui->windComboBox->currentIndex());
    totalScore += (ui->humComboBox->currentIndex());
    totalScore += (ui->tractorSpeedComboBox->currentIndex());
    totalScore += (ui->pressAltComboBox->currentIndex());
    totalScore += (ui->dropletComboBox->currentIndex());
    updateDisplay(totalScore);
}

void driftassessment::updateDisplay(int score)
{
    if(score > 8)
    {
        ui->summaryLabel->setText("Dangerous Conditions");
    }
    else if (score > 4)
    {
        ui->summaryLabel->setText("Exercise Caution");
    }
    else
    {
        ui->summaryLabel->setText("Low Risk");
    }
}