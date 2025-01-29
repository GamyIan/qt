#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <string>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_submit_clicked()
{
    QString username=ui->user->toPlainText();
    QString password=ui->pass->toPlainText();
    if (username=="user" and password=="admin")
    {

    }
    else
    {
        ui->error->setText("Invalid Input");
    }


}

