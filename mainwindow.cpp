#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

void MainWindow::setView(MainView* view)
{
    this->view = view;
}

MainView* MainWindow::getView() {
   return this->view;
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_actionLine_Rotation_triggered()
{
    dline = new Dialoglinerotation(this, this->view);
    dline->show();
}

void MainWindow::on_actionView_Position_triggered()
{
    dialbox = new Dialogcube(this, this->view);
    dialbox->show();
}

void MainWindow::on_actionDefault_Position_triggered()
{
    this->view->getScene()->defaultPosition();
    this->view->updateGL();
}
