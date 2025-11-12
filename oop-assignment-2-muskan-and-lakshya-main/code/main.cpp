/**
 * @file main.cpp
 * @brief Entry point for the E-Commerce Marketplace application.
 *
 * Initializes the Qt application and shows the main window.
 */

#include "mainwindow.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);

    MainWindow w;
    w.show();

    return app.exec();
}

