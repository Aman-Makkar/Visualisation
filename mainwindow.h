#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include "mainview.h"
#include <QMainWindow>
#include "dialoglinerotation.h"
#include "dialogcube.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    void setView(MainView* view);
    ~MainWindow();
    MainView* getView();

private slots:
    void on_actionLine_Rotation_triggered();

    void on_actionView_Position_triggered();

    void on_actionDefault_Position_triggered();

private:
    Ui::MainWindow *ui;
    MainView* view;
    Dialoglinerotation *dline;
    Dialogcube *dialbox;
};

#endif // MAINWINDOW_H
