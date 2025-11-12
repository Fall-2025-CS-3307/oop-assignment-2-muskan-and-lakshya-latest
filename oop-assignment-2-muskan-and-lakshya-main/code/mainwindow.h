#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

/**
 * @brief Main window for the marketplace app.
 * Displays a simple welcome interface for Assignment 2.
 */
class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void onLoginClicked();
    void onBrowseClicked();
    void onCartClicked();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H

