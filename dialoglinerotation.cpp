#include "dialoglinerotation.h"
#include "ui_dialoglinerotation.h"

Dialoglinerotation::Dialoglinerotation(QWidget *parent, MainView* view) :
    QDialog(parent),
    ui(new Ui::Dialoglinerotation)
{
    ui->setupUi(this);
    this->view = view;
}

Dialoglinerotation::~Dialoglinerotation()
{
    delete ui;
}

void Dialoglinerotation::on_Dialoglinerotation_accepted()
{
    if(this->ui->doubleSpinBox_4->value() != 0 || this->ui->doubleSpinBox_5->value() != 0 || this->ui->doubleSpinBox_6->value() != 0){
        this->view->getScene()->cubeRotation(this->ui->doubleSpinBox->value(), this->ui->doubleSpinBox_2->value(),
                                            this->ui->doubleSpinBox_3->value(), this->ui->doubleSpinBox_4->value(),
                                            this->ui->doubleSpinBox_5->value(), this->ui->doubleSpinBox_6->value(),
                                            this->ui->doubleSpinBox_7->value());
        this->view->toggleAnimation();
    }
}
