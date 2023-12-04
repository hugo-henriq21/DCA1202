#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include <cstdlib>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    connect(ui -> Quit,
            SIGNAL (clicked(bool)),
            this,
            SLOT(fechar()));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::fechar()
{
    exit(0);
}
