#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
    ui = nullptr;
}

void MainWindow::on_btnCount_clicked()
{
    x++;
    ui->lineEdit->setText(QString::number(x));
}


void MainWindow::on_btnReset_clicked()
{
    x = 0;
    ui->lineEdit->setText(QString::number(x));
}

