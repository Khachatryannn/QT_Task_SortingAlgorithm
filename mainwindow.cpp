// mainwindow.cpp
#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QPushButton>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
\
    QPushButton *sortButton = new QPushButton(ui->centralwidget);
    connect(sortButton, &QPushButton::clicked, this, &MainWindow::on_sortButton_clicked);

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_sortButton_clicked()
{

    qDebug() << "Sort button clicked!";
}
