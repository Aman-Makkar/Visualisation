#ifndef DIALOGLINEROTATION_H
#define DIALOGLINEROTATION_H

#include <QDialog>
#include "mainview.h"

namespace Ui {
class Dialoglinerotation;
}

class Dialoglinerotation : public QDialog
{
    Q_OBJECT

public:
    explicit Dialoglinerotation(QWidget *parent = 0, MainView* view = 0);
    ~Dialoglinerotation();

private slots:
    void on_Dialoglinerotation_accepted();

private:
    Ui::Dialoglinerotation *ui;
    MainView* view;
};

#endif // DIALOGLINEROTATION_H
