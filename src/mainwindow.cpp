#include "../include/ros_qt5/mainwindow.h"



MainWindow::MainWindow(int argc, char** argv, QWidget *parent) :
    QMainWindow(parent),
    qnode(argc,argv),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    QObject::connect(&qnode, SIGNAL(rosShutdown()), this, SLOT(close()));
    qnode.init();
    // ======= Initialization ======= //

}

MainWindow::~MainWindow()
{
    delete ui;
}



