#include <QApplication>
#include <../include/ros_qt5/mainwindow.h>

int main(int argc, char *argv[])
{
    QApplication a(argc,argv);
    MainWindow w(argc,argv);
    w.show();
    return a.exec();

}
