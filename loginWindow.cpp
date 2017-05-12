#include "loginwindow.h"
#include "ui_mainwindow.h"

LoginWindow::LoginWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::LoginWindow)
{
    ui->setupUi(this);
}

LoginWindow::~LoginWindow()
{
    delete ui;
}

void LoginWindow::on_button_login_clicked()
{
    QString username = ui->username->text();
    QString password = ui->password->text();
}

void LoginWindow::on_password_returnPressed()
{
    connect(ui->password, SIGNAL(returnPressed()),ui->button_login,SIGNAL(clicked()));
}

void LoginWindow::on_button_register_clicked()
{
    RegisterWindow *registerWindow = new RegisterWindow();
    registerWindow->show(); //shows register page
    this->hide(); //hides main window
}
