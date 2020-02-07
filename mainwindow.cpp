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

void MainWindow::scaleNumber(int val) {
    cout << "Scale 2 of that number is " + val*2 << endl;
}