#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <iostream>
using namespace std;

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

void MainWindow::printMessage(){
    cout << "My new Message" << endl;
}

void MainWindow::scaleNumber() {
    QString string1 = ui->textEdit->toPlainText();
    QString string2 = ui->textEdit_2->toPlainText();
    ui->label->setText(string1 + string2);
    cout << "Scale 2 of that number is "<< 200*2 << endl;
}
