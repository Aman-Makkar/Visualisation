#ifndef DIALOGCUBE_H
#define DIALOGCUBE_H

#include <QDialog>
#include "mainview.h"

namespace Ui {
class Dialogcube;
}

class Dialogcube : public QDialog
{
    Q_OBJECT

public:
    explicit Dialogcube(QWidget *parent = 0, MainView* view = 0);
    ~Dialogcube();

private slots:
    void on_Dialogcube_accepted();

private:
    Ui::Dialogcube *ui;
    MainView* view;
};

#endif // DIALOGCUBE_H
