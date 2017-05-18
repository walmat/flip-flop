#ifndef LOGINWINDOW_H
#define LOGINWINDOW_H

#include <QMainWindow>
#include "registerwindow.h"

namespace Ui {
class LoginWindow;
}

class LoginWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit LoginWindow(QWidget *parent = 0);
    ~LoginWindow();

private slots:
    void on_button_login_clicked();

    void on_password_returnPressed();

    void on_button_register_clicked();

private:
    Ui::LoginWindow *ui;
    RegisterWindow *registerWindow = new RegisterWindow();

};

#endif // LOGINWINDOW_H
