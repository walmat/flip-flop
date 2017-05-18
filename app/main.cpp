//
//  main.cpp
//
//  Created by Matthew Wall on 5/11/17.
//
//

#include "bot.h"
#include "loginwindow.h"
#include <QApplication>

using namespace std;

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    LoginWindow w;
    w.show();
    
    return a.exec();
}

