#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <iostream>
#include <string>

using namespace std;
template <typename T> QString Swap(T &n1, T&n2) {
    T temp;
    temp = n1;
    n1 = n2;
    n2 = temp;
    return n1 + " " + n2;
}
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

void MainWindow::swapNumbers() {
    QString string1 = ui->textEdit->toPlainText();
    QString string2 = ui->textEdit_2->toPlainText();
    QString Mswap = Swap(string1, string2);
    ui->label->setText(Mswap);
    cout << "Swap of the two values"<< to_string(575) << endl;
}
