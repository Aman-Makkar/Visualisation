#include "dialogcube.h"
#include "ui_dialogcube.h"

Dialogcube::Dialogcube(QWidget *parent, MainView* view) :
    QDialog(parent),
    ui(new Ui::Dialogcube)
{
    ui->setupUi(this);
    this->view = view;
}

Dialogcube::~Dialogcube()
{
    delete ui;
}

void Dialogcube::on_Dialogcube_accepted()
{
    this->view->getScene()->updateView(ui->doubleSpinBox->value(), ui->doubleSpinBox_2->value(),
                   ui->doubleSpinBox_3->value(), ui->doubleSpinBox_4->value()
                   , ui->doubleSpinBox_5->value(), ui->doubleSpinBox_6->value());
    this->close();
}
