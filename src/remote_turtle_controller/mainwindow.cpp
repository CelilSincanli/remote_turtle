#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_up_button_clicked()
{

}

void MainWindow::on_left_button_clicked()
{

}

void MainWindow::on_right_button_clicked()
{

}
