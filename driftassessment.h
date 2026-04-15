#ifndef DRIFTASSESSMENT_H
#define DRIFTASSESSMENT_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui {
class driftassessment;
}
QT_END_NAMESPACE

class driftassessment : public QMainWindow
{
    Q_OBJECT

public:
    explicit driftassessment(QWidget *parent = nullptr);
    ~driftassessment() override;

private:
    Ui::driftassessment *ui;
};
#endif // DRIFTASSESSMENT_H
