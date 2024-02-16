#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    connect(ui->N0, &QPushButton::clicked, this, &MainWindow::numClickHandler);
    connect(ui->N9, &QPushButton::clicked, this, &MainWindow::numClickHandler);
    connect(ui->N8, &QPushButton::clicked, this, &MainWindow::numClickHandler);
    connect(ui->N7, &QPushButton::clicked, this, &MainWindow::numClickHandler);
    connect(ui->N6, &QPushButton::clicked, this, &MainWindow::numClickHandler);
    connect(ui->N5, &QPushButton::clicked, this, &MainWindow::numClickHandler);
    connect(ui->N4, &QPushButton::clicked, this, &MainWindow::numClickHandler);
    connect(ui->N3, &QPushButton::clicked, this, &MainWindow::numClickHandler);
    connect(ui->N2, &QPushButton::clicked, this, &MainWindow::numClickHandler);
    connect(ui->N1, &QPushButton::clicked, this, &MainWindow::numClickHandler);

    connect(ui->enter, &QPushButton::clicked, this, &MainWindow::clearAndEnterHandler);
    connect(ui->clear, &QPushButton::clicked, this, &MainWindow::clearAndEnterHandler);

    connect(ui->div, &QPushButton::clicked, this, &MainWindow::addSubMulDevHandler);
    connect(ui->mul, &QPushButton::clicked, this, &MainWindow::addSubMulDevHandler);
    connect(ui->sub, &QPushButton::clicked, this, &MainWindow::addSubMulDevHandler);
    connect(ui->add, &QPushButton::clicked, this, &MainWindow::addSubMulDevHandler);
}

MainWindow::~MainWindow()
{
    delete ui;
    ui = nullptr;
}

void MainWindow::numClickHandler()
{
    QPushButton *button = qobject_cast<QPushButton*>(sender());
    if (!button) return;
    QString name = button->objectName();
    qDebug() << "Button name: " << name;
    QString num = button->text();

    if (state == 1){
        n1 += num;
        ui->lineEdit1->setText(n1);
    }
    else if(state == 2){
        n2 += num;
        ui->lineEdit2->setText(n2);
    }
}

void MainWindow::clearAndEnterHandler()
{
    if (state == 2){
        float num1 = n1.toFloat();
        float num2 = n2.toFloat();
        float result = 0.0;
        switch (operand) {
        case 1:
            result = num1 + num2;
            break;
        case 2:
            result = num1 - num2;
            break;
        case 3:
            result = num1 * num2;
            break;
        case 4:
            if (num2 != 0){
                result = num1 / num2;
            } else {
                qDebug() << "Error: can't devide by zero";
            }
            break;
        default:
            qDebug() << "Error";
        }
        qDebug()<<"number 1 = "<<n1<<" and number 2 = "<<n2;
        ui->lineResult->setText(QString::number(result));
    } else {
        resetLineEdits();
        n1.clear();
        n2.clear();
        state = 1;
    }
}

void MainWindow::addSubMulDevHandler()
{
    QPushButton *clickedButton = qobject_cast<QPushButton *>(sender());
    if (!clickedButton) return;
    QString buttonText = clickedButton->text();
    qDebug() << "Operand button: " << buttonText;
    if (buttonText == "+"){
        operand = 1;
    }
    else if (buttonText == "-"){
        operand = 2;
    }
    else if (buttonText == "*"){
        operand = 3;
    }
    else if (buttonText == "/"){
        operand = 4;
    }
    state = 2;
    ui->lineEdit2->setFocus();
}

void MainWindow::resetLineEdits()
{
    ui->lineEdit1->clear();
    ui->lineEdit2->clear();
    ui->lineResult->clear();
    state = 1;
}

void MainWindow::on_N1_clicked()
{

}


void MainWindow::on_N2_clicked()
{

}


void MainWindow::on_N3_clicked()
{

}


void MainWindow::on_N4_clicked()
{

}


void MainWindow::on_N5_clicked()
{

}


void MainWindow::on_N6_clicked()
{

}


void MainWindow::on_N7_clicked()
{

}


void MainWindow::on_N8_clicked()
{

}


void MainWindow::on_N9_clicked()
{

}


void MainWindow::on_N0_clicked()
{

}


void MainWindow::on_add_clicked()
{

}


void MainWindow::on_sun_clicked()
{

}


void MainWindow::on_mul_clicked()
{

}


void MainWindow::on_div_clicked()
{

}


void MainWindow::on_clear_clicked()
{
    state=1;
}


void MainWindow::on_enter_clicked()
{
    state=2;
}

