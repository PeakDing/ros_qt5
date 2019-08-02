#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "ui_mainwindow.h"
#include <../include/ros_qt5/qnode.h>
#include <QTimer>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(int argc, char** argv, QWidget *parent = NULL);
    ~MainWindow();

private:
    Ui::MainWindow *ui;
    qt_test::QNode qnode;

};

#endif // MAINWINDOW_H
