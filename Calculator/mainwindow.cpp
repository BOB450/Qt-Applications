#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <string>
#include <QPushButton>
#include <QMessageBox>
#include <QLineEdit>

using namespace std;

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(ui->pushButton, &QPushButton::pressed, this, &MainWindow::pushButton);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::pushButton()
{
    float x,y,a;
    QLineEdit lable1;
    QLineEdit lable2;

    a = x * y;
    QString s = QString::number(a);
    QString b = "The Answer is: ";
    QString ans = b + s;
    QMessageBox msgBox;
    msgBox.setText( ans );
    msgBox.exec();
}


