#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent),
      ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    // Connect buttons
    connect(ui->loginButton,  &QPushButton::clicked, this, &MainWindow::onLoginClicked);
    connect(ui->browseButton, &QPushButton::clicked, this, &MainWindow::onBrowseClicked);
    connect(ui->cartButton,   &QPushButton::clicked, this, &MainWindow::onCartClicked);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::onLoginClicked()
{
    QMessageBox::information(this, "Login", "Login page would open here (mock).");
}

void MainWindow::onBrowseClicked()
{
    QMessageBox::information(this, "Browse Products", "Product catalog would appear here (mock).");
}

void MainWindow::onCartClicked()
{
    QMessageBox::information(this, "Cart", "Shopping cart window would open here (mock).");
}

