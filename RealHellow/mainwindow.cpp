#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QPushButton>
#include <QMessageBox>

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
    QMessageBox msgBox;
    msgBox.setText("HelloWorld BOB450");
    msgBox.exec();
}



