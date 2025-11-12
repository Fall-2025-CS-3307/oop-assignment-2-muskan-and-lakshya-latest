/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QStackedWidget *stackedWidget;
    QWidget *loginPage;
    QVBoxLayout *loginLayout;
    QLabel *loginLabel;
    QLineEdit *loginEmail;
    QLineEdit *loginPassword;
    QPushButton *loginButton;
    QPushButton *showRegisterButton;
    QWidget *registerPage;
    QVBoxLayout *registerLayout;
    QLabel *registerLabel;
    QLineEdit *registerEmail;
    QLineEdit *registerPassword;
    QPushButton *registerButton;
    QPushButton *showLoginButton;
    QWidget *mainPage;
    QVBoxLayout *mainLayout;
    QLabel *mainLabel;
    QPushButton *browseButton;
    QPushButton *cartButton;
    QPushButton *logoutButton;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName("verticalLayout");
        stackedWidget = new QStackedWidget(centralwidget);
        stackedWidget->setObjectName("stackedWidget");
        loginPage = new QWidget();
        loginPage->setObjectName("loginPage");
        loginLayout = new QVBoxLayout(loginPage);
        loginLayout->setObjectName("loginLayout");
        loginLabel = new QLabel(loginPage);
        loginLabel->setObjectName("loginLabel");

        loginLayout->addWidget(loginLabel);

        loginEmail = new QLineEdit(loginPage);
        loginEmail->setObjectName("loginEmail");

        loginLayout->addWidget(loginEmail);

        loginPassword = new QLineEdit(loginPage);
        loginPassword->setObjectName("loginPassword");
        loginPassword->setEchoMode(QLineEdit::Password);

        loginLayout->addWidget(loginPassword);

        loginButton = new QPushButton(loginPage);
        loginButton->setObjectName("loginButton");

        loginLayout->addWidget(loginButton);

        showRegisterButton = new QPushButton(loginPage);
        showRegisterButton->setObjectName("showRegisterButton");

        loginLayout->addWidget(showRegisterButton);

        stackedWidget->addWidget(loginPage);
        registerPage = new QWidget();
        registerPage->setObjectName("registerPage");
        registerLayout = new QVBoxLayout(registerPage);
        registerLayout->setObjectName("registerLayout");
        registerLabel = new QLabel(registerPage);
        registerLabel->setObjectName("registerLabel");

        registerLayout->addWidget(registerLabel);

        registerEmail = new QLineEdit(registerPage);
        registerEmail->setObjectName("registerEmail");

        registerLayout->addWidget(registerEmail);

        registerPassword = new QLineEdit(registerPage);
        registerPassword->setObjectName("registerPassword");
        registerPassword->setEchoMode(QLineEdit::Password);

        registerLayout->addWidget(registerPassword);

        registerButton = new QPushButton(registerPage);
        registerButton->setObjectName("registerButton");

        registerLayout->addWidget(registerButton);

        showLoginButton = new QPushButton(registerPage);
        showLoginButton->setObjectName("showLoginButton");

        registerLayout->addWidget(showLoginButton);

        stackedWidget->addWidget(registerPage);
        mainPage = new QWidget();
        mainPage->setObjectName("mainPage");
        mainLayout = new QVBoxLayout(mainPage);
        mainLayout->setObjectName("mainLayout");
        mainLabel = new QLabel(mainPage);
        mainLabel->setObjectName("mainLabel");
        mainLabel->setAlignment(Qt::AlignHCenter);

        mainLayout->addWidget(mainLabel);

        browseButton = new QPushButton(mainPage);
        browseButton->setObjectName("browseButton");

        mainLayout->addWidget(browseButton);

        cartButton = new QPushButton(mainPage);
        cartButton->setObjectName("cartButton");

        mainLayout->addWidget(cartButton);

        logoutButton = new QPushButton(mainPage);
        logoutButton->setObjectName("logoutButton");

        mainLayout->addWidget(logoutButton);

        stackedWidget->addWidget(mainPage);

        verticalLayout->addWidget(stackedWidget);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "E-Commerce Marketplace", nullptr));
        loginLabel->setText(QCoreApplication::translate("MainWindow", "Login Page", nullptr));
        loginEmail->setPlaceholderText(QCoreApplication::translate("MainWindow", "Email", nullptr));
        loginPassword->setPlaceholderText(QCoreApplication::translate("MainWindow", "Password", nullptr));
        loginButton->setText(QCoreApplication::translate("MainWindow", "Login", nullptr));
        showRegisterButton->setText(QCoreApplication::translate("MainWindow", "Create Account", nullptr));
        registerLabel->setText(QCoreApplication::translate("MainWindow", "Register Page", nullptr));
        registerEmail->setPlaceholderText(QCoreApplication::translate("MainWindow", "Email", nullptr));
        registerPassword->setPlaceholderText(QCoreApplication::translate("MainWindow", "Password", nullptr));
        registerButton->setText(QCoreApplication::translate("MainWindow", "Register", nullptr));
        showLoginButton->setText(QCoreApplication::translate("MainWindow", "Back to Login", nullptr));
        mainLabel->setText(QCoreApplication::translate("MainWindow", "Welcome to the Marketplace!", nullptr));
        browseButton->setText(QCoreApplication::translate("MainWindow", "Browse Products", nullptr));
        cartButton->setText(QCoreApplication::translate("MainWindow", "View Cart", nullptr));
        logoutButton->setText(QCoreApplication::translate("MainWindow", "Logout", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
