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

/**
 *Type is a place holder used by the function.
 */
template <typename T> inline T const& Max(T const& a, T const& b) {
    return a < b ? b:a;
}

/**
 *A class template:
 *  Provides specification for generating classes based on paramters
 */
template <class T> class MyTemplate{
T element;
public:
MyTemplate (T arg) {element=arg;}
T divideBy2() {return element/2;}
};

/**
 * Template Specialization
 *  defining different implementation for a specific type
 *
 */

template <> class MyTemplate <char> {
  char element;
public:
  MyTemplate(char arg) {element=arg;}
  char printElement() {return element;}
};

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

void MainWindow::compareValues() {
    qint64 string1 = ui->textEdit->toPlainText().toInt();
    qint64 string2 = ui->textEdit_2->toPlainText().toInt();
    ui->label->setText(QVariant(Max(string1, string2)).toString() + " Is greater");
}
