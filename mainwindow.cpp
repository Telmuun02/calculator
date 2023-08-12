#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    result = 0;
    hariu = 0;
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_button1_clicked()
{
    QString num = "1";
    QString text = ui->textEdit->toPlainText();
    ui->textEdit->setText(text + num);
}

void MainWindow::on_button2_clicked()
{
    QString num = "2";
    QString text = ui->textEdit->toPlainText();
    ui->textEdit->setText(text + num);
}


void MainWindow::on_buttonAdd_clicked()
{
    result = ui->textEdit->toPlainText().toFloat();
    sign = "+";
    ui->textEdit->clear();
}


void MainWindow::on_buttonEqual_clicked()
{
    if(sign == "+"){
        result += ui->textEdit->toPlainText().toFloat();
    }else if(sign == "-"){
        result -= ui->textEdit->toPlainText().toFloat();
    }else if(sign == "*"){
        result *= ui->textEdit->toPlainText().toFloat();
    }else if(sign == "/"){
        result /= ui->textEdit->toPlainText().toFloat();
    }
    ui->textEdit->setText(QString::number(result));
}


void MainWindow::on_button3_clicked()
{
    QString num = "3";
    QString text = ui->textEdit->toPlainText();
    ui->textEdit->setText(text + num);
}


void MainWindow::on_button4_clicked()
{
    QString num = "4";
    QString text = ui->textEdit->toPlainText();
    ui->textEdit->setText(text + num);
}


void MainWindow::on_button5_clicked()
{
    QString num = "5";
    QString text = ui->textEdit->toPlainText();
    ui->textEdit->setText(text + num);
}


void MainWindow::on_button6_clicked()
{
    QString num = "6";
    QString text = ui->textEdit->toPlainText();
    ui->textEdit->setText(text + num);
}


void MainWindow::on_button7_clicked()
{
    QString num = "7";
    QString text = ui->textEdit->toPlainText();
    ui->textEdit->setText(text + num);
}


void MainWindow::on_button8_clicked()
{
    QString num = "8";
    QString text = ui->textEdit->toPlainText();
    ui->textEdit->setText(text + num);
}


void MainWindow::on_button9_clicked()
{
    QString num = "9";
    QString text = ui->textEdit->toPlainText();
    ui->textEdit->setText(text + num);
}


void MainWindow::on_buttonminus_clicked()
{
    result = ui->textEdit->toPlainText().toFloat();
    sign = "-";
    ui->textEdit->clear();
}




void MainWindow::on_buttonhuvaah_clicked()
{
    result = ui->textEdit->toPlainText().toFloat();
    sign = "/";
    ui->textEdit->clear();
}


void MainWindow::on_buttonmulti_clicked()
{
    result = ui->textEdit->toPlainText().toFloat();
    sign = "*";
    ui->textEdit->clear();
}


void MainWindow::on_button0_clicked()
{
    QString num = "0";
    QString text = ui->textEdit->toPlainText();
    ui->textEdit->setText(text + num);
}


void MainWindow::on_buttonC_clicked()
{
    ui->textEdit->clear();
}


void MainWindow::on_buttonCE_clicked()
{
    ui->textEdit->clear();
    result = 0;
    sign = "";
}

