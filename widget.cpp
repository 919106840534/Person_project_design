 #include "widget.h"
#include "ui_widget.h"
#include<QPainter>
#include<QMovie>
#include<QPushButton>
#include<QLabel>
#include<QLineEdit>
#include<QString>
int num=0;
Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
ui->stackedWidget->setCurrentIndex(0);

QMovie*mymovie=new QMovie(":/new/prefix1/xielunyan.gif");
ui->xielunyan->setMovie(mymovie);
mymovie->start();


gwidget.setWindowTitle("红黑夜法官");









}

Widget::~Widget()
{
    delete ui;
}
void Widget::paintEvent(QPaintEvent *){
   QPainter p;
   p.begin(this);
   p.drawPixmap(0,0,width(),height(),QPixmap(":/new/prefix1/beijing.jpg"));


}





void Widget::on_over_clicked()
{
    this->close();
}

void Widget::on_start_clicked()
{
    ui->stackedWidget->setCurrentIndex(2);
}

void Widget::on_pushButton_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);
}

void Widget::on_back1_clicked()
{
    ui->stackedWidget->setCurrentIndex(2);
}

void Widget::on_pushButton_2_clicked()
{
    this->hide();
   gwidget.show();
num=(ui->spinBox->value());

}
