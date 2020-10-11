#include "widget.h"
#include <QApplication>
#include<QSizePolicy>
#include<QPushButton>
#include<QLabel>
#include<QLineEdit>
#include<QString>
#include"gamewidget.h"
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Widget w;
    w.show();
w.setWindowTitle("红黑夜法官");









    return a.exec();
}
