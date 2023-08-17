#include "mainwindow.h"
#include <QApplication>
#include <QLabel>
int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
    QLabel *label = new QLabel("Remote Turtle");
    label->setWindowTitle("Remote Turtle");
    label->show();
    MainWindow w;
    w.show();

    return app.exec();
}
