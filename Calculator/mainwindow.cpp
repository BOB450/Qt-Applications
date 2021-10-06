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

  QString  textvalue = ui->lineEdit->displayText();
  QString  textvalue2 = ui->lineEdit_2->displayText();



    double b = textvalue.toDouble();
    double s = textvalue2.toDouble();
    double ansb = b + s;
    QString ans = QString().asprintf("%0.4f", ansb);
    QString v = "The Answer is: ";
    QMessageBox msgBox;
    msgBox.setText( ans);
    msgBox.exec();
}


