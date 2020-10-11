#include "gamewidget.h"
#include "ui_gamewidget.h"
#include<QPainter>
#include<QDebug>
#include<QPushButton>
#include<QLabel>
#include<QLineEdit>
#include<QString>
#include <cstdlib>
#include <ctime>
#include <widget.h>
#include<QStringList>
#include<QMessageBox>
extern int num;
int red;int black;
int redalive;int blackalive;
int abc;
//类

class person{
private:
int order;//序号
int vote1;//本轮投给谁
float vote2;//本轮被投了几票
float vote3;//本轮有多少投票权
bool color;//牌色 1为红,0为黑
bool eye;//本轮是否睁眼
bool alive;//是否死亡
public:
void setorder(int x){
    order=x;
}
int getorder(){
    return order;
}
void setvote1(int x){
    vote1=x;
}
void addvote2(){
    vote2=vote2+1;
}
void addvote2plus(float x){
    vote2=vote2+x;
}
float getvote2(){
    return vote2;
}
void clearvote2(){
    vote2=0;
}
void setvote3(float x){
    vote3=x;
}
void setcolor(bool x){
    color=x;
}
bool getcolor(){
    return color;
}
void seteye(bool x){
    eye=x;
}
bool geteye(){
    return eye;
}
void setalive(bool x){
    alive=x;
}
bool getalive(){
    return alive;
}
float getvote3(){
    return vote3;
}
};

//类
person village[8];

//构造
gamewidget::gamewidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::gamewidget)
{
    ui->setupUi(this);
    abc=0;
ui->comboBox1->hide();
ui->comboBox2->hide();
ui->comboBox3->hide();
ui->comboBox4->hide();
ui->comboBox5->hide();
ui->comboBox6->hide();
ui->comboBox7->hide();
ui->comboBox8->hide();


   ui->huancz1->hide();
   ui->huancz2->hide();
    ui->huancz3->hide();
     ui->huancz4->hide();
      ui->huancz5->hide();
       ui->huancz6->hide();
        ui->huancz7->hide();
         ui->huancz8->hide();

    ui->starttalk->hide();
    ui->pushButton_2->hide();
    ui->jipiao->hide();
    ui->close->hide();
    ui->startvote->hide();
    ui->left->hide();
    ui->right->hide();
    ui->night->hide();
    ui->day->hide();
ui->yincang1->hide();
ui->yincang2->hide();
ui->yincang3->hide();
ui->yincang4->hide();
ui->yincang5->hide();
ui->yincang6->hide();
ui->yincang7->hide();
ui->yincang8->hide();
ui->p1eye->hide();
ui->p2eye->hide();
ui->p3eye->hide();
ui->p4eye->hide();
ui->p5eye->hide();
ui->p6eye->hide();
ui->p7eye->hide();
ui->p8eye->hide();
    ui->lineEdit1->hide();
    ui->pb1->hide();
    ui->lineEdit2->hide();
    ui->pb2->hide();
    ui->lineEdit3->hide();
    ui->pb3->hide();
    ui->lineEdit4->hide();
    ui->pb4->hide();
    ui->lineEdit5->hide();
    ui->pb5->hide();
    ui->lineEdit6->hide();
    ui->pb6->hide();
    ui->lineEdit7->hide();
    ui->pb7->hide();
    ui->lineEdit8->hide();
    ui->pb8->hide();
   ui->next->hide();
}


gamewidget::~gamewidget()
{
    delete ui;
}
float czvote;
//选村长
void gamewidget::on_pushButton_clicked()
{   ui->pushButton_2->show();
    ui->starttalk->show();


   //ui->comboBox1->addItem("5");
    //ui->comboBox1->removeItem(3);
    //int l;QString a;
   //a=ui->comboBox1->currentText();
   //l=a.toInt();
   //qDebug()<<l;
     ui->comboBox1->show();

     ui->comboBox2->show();
     ui->comboBox3->show();
     ui->comboBox4->show();
     ui->comboBox5->show();
     ui->comboBox6->show();
     ui->comboBox7->show();
     ui->comboBox8->show();
if(num==6){ui->comboBox1->addItem("6");
ui->comboBox2->addItem("6");
ui->comboBox3->addItem("6");
ui->comboBox4->addItem("6");
ui->comboBox5->addItem("6");
ui->comboBox6->addItem("6");
ui->comboBox7->addItem("6");
ui->comboBox8->addItem("6");
}
if(num==7){
ui->comboBox1->addItem("6");ui->comboBox1->addItem("7");
ui->comboBox2->addItem("6");ui->comboBox2->addItem("7");
ui->comboBox3->addItem("6");ui->comboBox3->addItem("7");
ui->comboBox4->addItem("6");ui->comboBox4->addItem("7");
ui->comboBox5->addItem("6");ui->comboBox5->addItem("7");
ui->comboBox6->addItem("6");ui->comboBox6->addItem("7");
ui->comboBox7->addItem("6");ui->comboBox7->addItem("7");
ui->comboBox8->addItem("6");ui->comboBox8->addItem("7");
}
if(num==8){
    ui->comboBox1->addItem("6");ui->comboBox1->addItem("7");ui->comboBox1->addItem("8");
    ui->comboBox2->addItem("6");ui->comboBox2->addItem("7");ui->comboBox2->addItem("8");
    ui->comboBox3->addItem("6");ui->comboBox3->addItem("7");ui->comboBox3->addItem("8");
    ui->comboBox4->addItem("6");ui->comboBox4->addItem("7");ui->comboBox4->addItem("8");
    ui->comboBox5->addItem("6");ui->comboBox5->addItem("7");ui->comboBox5->addItem("8");
    ui->comboBox6->addItem("6");ui->comboBox6->addItem("7");ui->comboBox6->addItem("8");
    ui->comboBox7->addItem("6");ui->comboBox7->addItem("7");ui->comboBox7->addItem("8");
    ui->comboBox8->addItem("6");ui->comboBox8->addItem("7");ui->comboBox8->addItem("8");

}




    ui->widgetmain->hide();
    if(num==5){czvote=0.5;
    ui->board->setText("本轮3红牌2黑牌,村长0.5票");
    }
    if(num==6){czvote=1.5;
    ui->board->setText("本轮3红牌3黑牌,村长1.5票");
    }
    if(num==7){czvote=0.5;
    ui->board->setText("本轮4红牌3黑牌,村长0.5票");
    }
    if(num==8){czvote=1.5;
    ui->board->setText("本轮4红牌4黑牌,村长1.5票");
    }


    if(num%2==0){
    red=num/2; black=num/2;
    }
    else{
    red=(num+1)/2;black=(num-1)/2;	//设置人数
    }
    redalive=red;blackalive=black;

    int r[10],m,j;                       //整型数组和变量声明
     srand((int)time(NULL));              //设置系统时间为随机种子
     for(m=0;m<red;m++)                    //产生red个随机数
        {r[m]=rand()%num;                //得到随机数(范围在0-red之间)
         for(j=0;j<m;j++)                 //判断和前面的数是否重复
             if(r[m]==r[j]) {m--;break;}  //如果重复,重新产生随机数
        }





    for(int i=0;i<num;i++){
    village[i].setcolor(0);//全黑色；
    }
    for(int i=0;i<red;i++){
    village[r[i]].setcolor(1);//随机部分为红色；
    }
    for(int i=0;i<num;i++){
        village[i].setorder(i+1);//排序号
        village[i].seteye(0);//闭眼
        village[i].setvote3(1);//每人初始一票
        village[i].clearvote2();//清空被投票数
        village[i].setalive(1);
    }




    if(num==5){
        ui->player6->hide();
        ui->player7->hide();
        ui->player8->hide();
    }
    if(num==6){

        ui->player7->hide();
        ui->player8->hide();
    }
    if(num==7){

        ui->player8->hide();
    }

}


















void gamewidget::on_pb1_clicked()
{
    ui->pb1->hide();
    ui->lineEdit1->hide();
}


int now=0;
int i=0;
int count=0;
bool shunni=0;//0顺时针，1逆时针


void gamewidget::on_next_clicked()
{
   count++;
//5人场
   if(num==5&&shunni==0){
       i=count+now;  //count=1,now=4,a=0
       int a=i%num;
       if(a==1){
           ui->lineEdit1->hide();
          ui->pb1->hide();
          ui->pb2->show();
          ui->lineEdit2->show();
       }
       if(a==2){
           ui->lineEdit2->hide();
          ui->pb2->hide();
          ui->pb3->show();
          ui->lineEdit3->show();
       }
       if(a==3){
           ui->lineEdit3->hide();
          ui->pb3->hide();
          ui->pb4->show();
          ui->lineEdit4->show();
       }
       if(a==4){
           ui->lineEdit4->hide();
          ui->pb4->hide();
          ui->pb5->show();
          ui->lineEdit5->show();
       }
       if(a==0){
           ui->lineEdit5->hide();
          ui->pb5->hide();
          ui->pb1->show();
          ui->lineEdit1->show();
       }
   }
   if(num==5&&shunni==1){
       i=count+(num-now);    //count=1,now=1,i=1;a=4;
       int a=5-i%num;
       if(a==1){
           ui->lineEdit1->hide();
          ui->pb1->hide();
          ui->pb5->show();
          ui->lineEdit5->show();
       }
       if(a==2){
           ui->lineEdit2->hide();
          ui->pb2->hide();
          ui->pb1->show();
          ui->lineEdit1->show();
       }
       if(a==3){
           ui->lineEdit3->hide();
          ui->pb3->hide();
          ui->pb2->show();
          ui->lineEdit2->show();
       }
       if(a==4){
           ui->lineEdit4->hide();
          ui->pb4->hide();
          ui->pb3->show();
          ui->lineEdit3->show();
       }
       if(a==5){
           ui->lineEdit5->hide();
          ui->pb5->hide();
          ui->pb4->show();
          ui->lineEdit4->show();
       }

   }
   //六人场
   if(num==6&&shunni==0){
       i=count+now;
       int a=i%num;
       if(a==1){
           ui->lineEdit1->hide();
          ui->pb1->hide();
          ui->pb2->show();
          ui->lineEdit2->show();
       }
       if(a==2){
           ui->lineEdit2->hide();
          ui->pb2->hide();
          ui->pb3->show();
          ui->lineEdit3->show();
       }
       if(a==3){
           ui->lineEdit3->hide();
          ui->pb3->hide();
          ui->pb4->show();
          ui->lineEdit4->show();
       }
       if(a==4){
           ui->lineEdit4->hide();
          ui->pb4->hide();
          ui->pb5->show();
          ui->lineEdit5->show();
       }
       if(a==5){
           ui->lineEdit5->hide();
          ui->pb5->hide();
          ui->pb6->show();
          ui->lineEdit6->show();
       }
       if(a==6){
           ui->lineEdit6->hide();
          ui->pb6->hide();
          ui->pb1->show();
          ui->lineEdit1->show();
       }

   }
   if(num==6&&shunni==1){
       i=count+num-now;
       int a=6-i%num;
       if(a==1){
           ui->lineEdit1->hide();
          ui->pb1->hide();
          ui->pb6->show();
          ui->lineEdit6->show();
       }
       if(a==2){
           ui->lineEdit2->hide();
          ui->pb2->hide();
          ui->pb1->show();
          ui->lineEdit1->show();
       }
       if(a==3){
           ui->lineEdit3->hide();
          ui->pb3->hide();
          ui->pb2->show();
          ui->lineEdit2->show();
       }
       if(a==4){
           ui->lineEdit4->hide();
          ui->pb4->hide();
          ui->pb3->show();
          ui->lineEdit3->show();
       }
       if(a==5){
           ui->lineEdit5->hide();
          ui->pb5->hide();
          ui->pb4->show();
          ui->lineEdit4->show();
       }
       if(a==6){
           ui->lineEdit6->hide();
          ui->pb6->hide();
          ui->pb5->show();
          ui->lineEdit5->show();
       }
   }
  //七人场
   if(num==7&&shunni==0){
       i=count+now;
       int a=i%num;
       if(a==1){
           ui->lineEdit1->hide();
          ui->pb1->hide();
          ui->pb2->show();
          ui->lineEdit2->show();
       }
       if(a==2){
           ui->lineEdit2->hide();
          ui->pb2->hide();
          ui->pb3->show();
          ui->lineEdit3->show();
       }
       if(a==3){
           ui->lineEdit3->hide();
          ui->pb3->hide();
          ui->pb4->show();
          ui->lineEdit4->show();
       }
       if(a==4){
           ui->lineEdit4->hide();
          ui->pb4->hide();
          ui->pb5->show();
          ui->lineEdit5->show();
       }
       if(a==5){
           ui->lineEdit5->hide();
          ui->pb5->hide();
          ui->pb6->show();
          ui->lineEdit6->show();
       }
       if(a==6){
           ui->lineEdit6->hide();
          ui->pb6->hide();
          ui->pb7->show();
          ui->lineEdit7->show();
       }
       if(a==7){
           ui->lineEdit7->hide();
          ui->pb7->hide();
          ui->pb1->show();
          ui->lineEdit1->show();
       }
   }
   if(num==7&&shunni==1){
       i=count+num-now;
       int a=7-i%num;
       if(a==1){
           ui->lineEdit1->hide();
          ui->pb1->hide();
          ui->pb7->show();
          ui->lineEdit7->show();
       }
       if(a==2){
           ui->lineEdit2->hide();
          ui->pb2->hide();
          ui->pb1->show();
          ui->lineEdit1->show();
       }
       if(a==3){
           ui->lineEdit3->hide();
          ui->pb3->hide();
          ui->pb2->show();
          ui->lineEdit2->show();
       }
       if(a==4){
           ui->lineEdit4->hide();
          ui->pb4->hide();
          ui->pb3->show();
          ui->lineEdit3->show();
       }
       if(a==5){
           ui->lineEdit5->hide();
          ui->pb5->hide();
          ui->pb4->show();
          ui->lineEdit4->show();
       }
       if(a==6){
           ui->lineEdit6->hide();
          ui->pb6->hide();
          ui->pb5->show();
          ui->lineEdit5->show();
       }
       if(a==7){
           ui->lineEdit7->hide();
          ui->pb7->hide();
          ui->pb6->show();
          ui->lineEdit6->show();
       }
   }
//八人场
   if(num==8&&shunni==0){
       i=count+now;
       int a=i%num;
       if(a==1){
           ui->lineEdit1->hide();
          ui->pb1->hide();
          ui->pb2->show();
          ui->lineEdit2->show();
       }
       if(a==2){
           ui->lineEdit2->hide();
          ui->pb2->hide();
          ui->pb3->show();
          ui->lineEdit3->show();
       }
       if(a==3){
           ui->lineEdit3->hide();
          ui->pb3->hide();
          ui->pb4->show();
          ui->lineEdit4->show();
       }
       if(a==4){
           ui->lineEdit4->hide();
          ui->pb4->hide();
          ui->pb5->show();
          ui->lineEdit5->show();
       }
       if(a==5){
           ui->lineEdit5->hide();
          ui->pb5->hide();
          ui->pb6->show();
          ui->lineEdit6->show();
       }
       if(a==6){
           ui->lineEdit6->hide();
          ui->pb6->hide();
          ui->pb7->show();
          ui->lineEdit7->show();
       }
       if(a==7){
           ui->lineEdit7->hide();
          ui->pb7->hide();
          ui->pb8->show();
          ui->lineEdit8->show();
       }
       if(a==8){
           ui->lineEdit8->hide();
          ui->pb8->hide();
          ui->pb1->show();
          ui->lineEdit1->show();
       }

   }
   if(num==8&&shunni==1){
       i=count+num-now;
       int a=8-i%num;
       if(a==1){
           ui->lineEdit1->hide();
          ui->pb1->hide();
          ui->pb8->show();
          ui->lineEdit8->show();
       }
       if(a==2){
           ui->lineEdit2->hide();
          ui->pb2->hide();
          ui->pb1->show();
          ui->lineEdit1->show();
       }
       if(a==3){
           ui->lineEdit3->hide();
          ui->pb3->hide();
          ui->pb2->show();
          ui->lineEdit2->show();
       }
       if(a==4){
           ui->lineEdit4->hide();
          ui->pb4->hide();
          ui->pb3->show();
          ui->lineEdit3->show();
       }
       if(a==5){
           ui->lineEdit5->hide();
          ui->pb5->hide();
          ui->pb4->show();
          ui->lineEdit4->show();
       }
       if(a==6){
           ui->lineEdit6->hide();
          ui->pb6->hide();
          ui->pb5->show();
          ui->lineEdit5->show();
       }
       if(a==7){
           ui->lineEdit7->hide();
          ui->pb7->hide();
          ui->pb6->show();
          ui->lineEdit6->show();
       }
       if(a==8){
           ui->lineEdit8->hide();
          ui->pb8->hide();
          ui->pb7->show();
          ui->lineEdit7->show();
       }


   }



   if(count==num-1){
       ui->next->hide();
       ui->board->setText("本轮结束");
       count=0;
       if(abc==1)
       {ui->startvote->show();}

   }
}

void gamewidget::on_pb2_clicked()
{
    ui->pb2->hide();
    ui->lineEdit2->hide();
}

void gamewidget::on_pb3_clicked()
{
    ui->pb3->hide();
    ui->lineEdit3->hide();
}

void gamewidget::on_pb4_clicked()
{
    ui->pb4->hide();
    ui->lineEdit4->hide();
}

void gamewidget::on_pb5_clicked()
{
    ui->pb5->hide();
    ui->lineEdit5->hide();
}

void gamewidget::on_pb6_clicked()
{
    ui->pb6->hide();
    ui->lineEdit6->hide();
}

void gamewidget::on_pb7_clicked()
{
    ui->pb7->hide();
    ui->lineEdit7->hide();
}

void gamewidget::on_pb8_clicked()
{
    ui->pb8->hide();
    ui->lineEdit8->hide();
}





void gamewidget::on_kanpai1_clicked()
{
    if(village[0].getcolor()==0){
        ui->p1color->setText("牌色：黑色");
    }
    else{
        ui->p1color->setText("牌色：红色");
    }
    ui->yincang1->show();
    ui->kanpai1->hide();
}

void gamewidget::on_yincang1_clicked()
{
    ui->p1color->setText("牌色：未知");
    ui->yincang1->hide();
}

void gamewidget::on_kanpai2_clicked()
{
    if(village[1].getcolor()==0){
        ui->p2color->setText("牌色：黑色");
    }
    else{
        ui->p2color->setText("牌色：红色");
    }
    ui->yincang2->show();
    ui->kanpai2->hide();
}


void gamewidget::on_yincang2_clicked()
{
    ui->p2color->setText("牌色：未知");
    ui->yincang2->hide();
}

void gamewidget::on_kanpai3_clicked()
{
    if(village[2].getcolor()==0){
        ui->p3color->setText("牌色：黑色");
    }
    else{
        ui->p3color->setText("牌色：红色");
    }
    ui->yincang3->show();
    ui->kanpai3->hide();
}

void gamewidget::on_yincang3_clicked()
{
    ui->p3color->setText("牌色：未知");
    ui->yincang3->hide();
}

void gamewidget::on_kanpai4_clicked()
{
    if(village[3].getcolor()==0){
        ui->p4color->setText("牌色：黑色");
    }
    else{
        ui->p4color->setText("牌色：红色");
    }
    ui->yincang4->show();
    ui->kanpai4->hide();
}

void gamewidget::on_yincang4_clicked()
{
    ui->p4color->setText("牌色：未知");
    ui->yincang4->hide();
}

void gamewidget::on_kanpai5_clicked()
{
    if(village[4].getcolor()==0){
        ui->p5color->setText("牌色：黑色");
    }
    else{
        ui->p5color->setText("牌色：红色");
    }
    ui->yincang5->show();
    ui->kanpai5->hide();
}

void gamewidget::on_yincang5_clicked()
{
    ui->p5color->setText("牌色：未知");
    ui->yincang5->hide();
}

void gamewidget::on_kanpai6_clicked()
{
    if(village[5].getcolor()==0){
        ui->p6color->setText("牌色：黑色");
    }
    else{
        ui->p6color->setText("牌色：红色");
    }
    ui->yincang6->show();
    ui->kanpai6->hide();
}

void gamewidget::on_yincang6_clicked()
{
    ui->p6color->setText("牌色：未知");
    ui->yincang6->hide();
}

void gamewidget::on_kanpai7_clicked()
{
    if(village[6].getcolor()==0){
        ui->p7color->setText("牌色：黑色");
    }
    else{
        ui->p7color->setText("牌色：红色");
    }
    ui->yincang7->show();
    ui->kanpai7->hide();
}

void gamewidget::on_yincang7_clicked()
{
    ui->p7color->setText("牌色：未知");
    ui->yincang7->hide();
}


void gamewidget::on_kanpai8_clicked()
{
    if(village[7].getcolor()==0){
        ui->p8color->setText("牌色：黑色");
    }
    else{
        ui->p8color->setText("牌色：红色");
    }
    ui->yincang8->show();
    ui->kanpai8->hide();
}

void gamewidget::on_yincang8_clicked()
{
    ui->p8color->setText("牌色：未知");
    ui->yincang8->hide();
}


void gamewidget::on_kanpiao_clicked()
{   qDebug()<<"村长有"<<village[now-1].getvote3()<<endl;
    qDebug()<<"p1被票："<<village[0].getvote2()<<endl;
    qDebug()<<"p2被票："<<village[1].getvote2()<<endl;
    qDebug()<<"p3被票："<<village[2].getvote2()<<endl;
    qDebug()<<"p4被票："<<village[3].getvote2()<<endl;
    qDebug()<<"p5被票："<<village[4].getvote2()<<endl;
    qDebug()<<"p6被票："<<village[5].getvote2()<<endl;
    qDebug()<<"p7被票："<<village[6].getvote2()<<endl;
    qDebug()<<"p8被票："<<village[7].getvote2()<<endl;
}





void gamewidget::on_pushButton_2_clicked()
{   abc=1;
    QString a;int l;
    a=ui->comboBox1->currentText();l=a.toInt();
    village[0].setvote1(l);village[l-1].addvote2plus(village[0].getvote3()); ui->comboBox1->hide();

    a=ui->comboBox2->currentText();l=a.toInt();
    village[1].setvote1(l);village[l-1].addvote2plus(village[1].getvote3()); ui->comboBox2->hide();

    a=ui->comboBox3->currentText();l=a.toInt();
    village[2].setvote1(l);village[l-1].addvote2plus(village[2].getvote3()); ui->comboBox3->hide();

    a=ui->comboBox4->currentText();l=a.toInt();
    village[3].setvote1(l);village[l-1].addvote2plus(village[3].getvote3()); ui->comboBox4->hide();

    a=ui->comboBox5->currentText();l=a.toInt();
    village[4].setvote1(l);village[l-1].addvote2plus(village[4].getvote3()); ui->comboBox5->hide();
    if(num==6){
        a=ui->comboBox6->currentText();l=a.toInt();
        village[5].setvote1(l);village[l-1].addvote2plus(village[5].getvote3()); ui->comboBox6->hide();
    }
    if(num==7){
        a=ui->comboBox6->currentText();l=a.toInt();
        village[5].setvote1(l);village[l-1].addvote2plus(village[5].getvote3()); ui->comboBox6->hide();
        a=ui->comboBox7->currentText();l=a.toInt();
        village[6].setvote1(l);village[l-1].addvote2plus(village[6].getvote3()); ui->comboBox7->hide();
    }
    if(num==8){
        a=ui->comboBox6->currentText();l=a.toInt();
        village[5].setvote1(l);village[l-1].addvote2plus(village[5].getvote3()); ui->comboBox6->hide();
        a=ui->comboBox7->currentText();l=a.toInt();
        village[6].setvote1(l);village[l-1].addvote2plus(village[6].getvote3()); ui->comboBox7->hide();
        a=ui->comboBox8->currentText();l=a.toInt();
        village[7].setvote1(l);village[l-1].addvote2plus(village[7].getvote3()); ui->comboBox8->hide();
    }



    ui->night->show();

    float max;int k=0;max=village[0].getvote2();
    for(int i=1;i<num;i++){
        if(village[i].getvote2()>max){
            max=village[i].getvote2();k=i;
        }
    }
    if(k==0){ui->p1id->setText("身份：村长"); ui->board->setText("player1成为村长");now=1;village[0].setvote3(czvote);}
    if(k==1){ui->p2id->setText("身份：村长"); ui->board->setText("player2成为村长");now=2;village[1].setvote3(czvote);}
    if(k==2){ui->p3id->setText("身份：村长"); ui->board->setText("player3成为村长");now=3;village[2].setvote3(czvote);}
    if(k==3){ui->p4id->setText("身份：村长"); ui->board->setText("player4成为村长");now=4;village[3].setvote3(czvote);}
    if(k==4){ui->p5id->setText("身份：村长"); ui->board->setText("player5成为村长");now=5;village[4].setvote3(czvote);}
    if(k==5){ui->p6id->setText("身份：村长"); ui->board->setText("player6成为村长");now=6;village[5].setvote3(czvote);}
    if(k==6){ui->p7id->setText("身份：村长"); ui->board->setText("player7成为村长");now=7;village[6].setvote3(czvote);}
    if(k==7){ui->p8id->setText("身份：村长"); ui->board->setText("player8成为村长");now=8;village[7].setvote3(czvote);}
    ui->pushButton_2->hide();
}

void gamewidget::on_starttalk_clicked()
{

    ui->lineEdit1->show();
    ui->pb1->show();
    ui->starttalk->hide();
    ui->next->show();
}

void gamewidget::on_p1eye_clicked()
{
    village[0].seteye(1);
    ui->p1eye->hide();
}

void gamewidget::on_p2eye_clicked()
{
     village[1].seteye(1);
      ui->p2eye->hide();
}
bool redorblack;//晚上是什么夜
void gamewidget::on_night_clicked()
{    int g;
    for(int i=0;i<num;i++){
        village[i].clearvote2();
        village[i].seteye(0);
    }
    srand(int(time(0)));
    g=rand()%2;
     if(g==1) {redorblack=1;ui->board->setText("今晚是红夜");}
     if(g==0) {redorblack=0;ui->board->setText("今晚是黑夜");}
    if(village[0].getalive()==1) {ui->p1eye->show();}
   if(village[1].getalive()==1) {ui->p2eye->show();}
   if(village[2].getalive()==1) {ui->p3eye->show();}
   if(village[3].getalive()==1) {ui->p4eye->show();}
   if(village[4].getalive()==1) {ui->p5eye->show();}
   if(village[5].getalive()==1) {ui->p6eye->show();}
   if(village[6].getalive()==1) {ui->p7eye->show();}
   if(village[7].getalive()==1) {ui->p8eye->show();}
     ui->day->show();
     ui->night->hide();
}

void gamewidget::on_p3eye_clicked()
{
      village[2].seteye(1);
       ui->p3eye->hide();
}

void gamewidget::on_p4eye_clicked()
{
     village[3].seteye(1);
      ui->p4eye->hide();
}

void gamewidget::on_p5eye_clicked()
{
    village[4].seteye(1);
     ui->p5eye->hide();
}

void gamewidget::on_p6eye_clicked()
{
    village[5].seteye(1);
     ui->p6eye->hide();
}

void gamewidget::on_p7eye_clicked()
{
    village[6].seteye(1);
     ui->p7eye->hide();
}

void gamewidget::on_p8eye_clicked()
{
    village[7].seteye(1);
     ui->p8eye->hide();
}

void gamewidget::on_day_clicked()
{
    ui->p1eye->hide();
    ui->p2eye->hide();
    ui->p3eye->hide();
    ui->p4eye->hide();
    ui->p5eye->hide();
    ui->p6eye->hide();
    ui->p7eye->hide();
    ui->p8eye->hide();
    int b=0;int r=0;
        for(int i=0;i<num;i++){
           if(village[i].getcolor()==0&&village[i].geteye()==1)
            {b++;}
           if(village[i].getcolor()==1&&village[i].geteye()==1)
            {r++;}
        }
        if(redorblack==0&&b%2==0){czvote=1;}
        if(redorblack==1&&r%2==0){czvote=1;}
        village[now-1].setvote3(czvote);
        ui->day->hide();

        ui->board->setText("请村长选择从左或右发言");
        ui->left->show();
        ui->right->show();




}

void gamewidget::on_left_clicked()
{   ui->next->show();
    ui->left->hide();
    ui->right->hide();

    shunni=1;
    if((now-1)==1){
        ui->lineEdit1->show();
        ui->pb1->show();
    }
    if((now-1)==2){
        ui->lineEdit2->show();
        ui->pb2->show();
    }
    if((now-1)==3){
        ui->lineEdit3->show();
        ui->pb3->show();
    }
    if((now-1)==4){
        ui->lineEdit4->show();
        ui->pb4->show();
    }
    if((now-1)==5){
        ui->lineEdit5->show();
        ui->pb5->show();
    }
    if((now-1)==6){
        ui->lineEdit6->show();
        ui->pb6->show();
    }
    if((now-1)==7){
        ui->lineEdit7->show();
        ui->pb7->show();
    }
    if((now-1)==0){
        if(num==5){ ui->lineEdit5->show();
            ui->pb5->show();}
        if(num==6){ ui->lineEdit6->show();
            ui->pb6->show();}
        if(num==7){ ui->lineEdit7->show();
            ui->pb7->show();}
        if(num==8){ ui->lineEdit8->show();
            ui->pb8->show();}
    }
}

void gamewidget::on_jipiao_clicked()
{   ui->jipiao->hide();
    QString a;int l;
        a=ui->comboBox1->currentText();l=a.toInt();
        village[0].setvote1(l);village[l-1].addvote2plus(village[0].getvote3()); ui->comboBox1->hide();

        a=ui->comboBox2->currentText();l=a.toInt();
        village[1].setvote1(l);village[l-1].addvote2plus(village[1].getvote3()); ui->comboBox2->hide();

        a=ui->comboBox3->currentText();l=a.toInt();
        village[2].setvote1(l);village[l-1].addvote2plus(village[2].getvote3()); ui->comboBox3->hide();

        a=ui->comboBox4->currentText();l=a.toInt();
        village[3].setvote1(l);village[l-1].addvote2plus(village[3].getvote3()); ui->comboBox4->hide();

        a=ui->comboBox5->currentText();l=a.toInt();
        village[4].setvote1(l);village[l-1].addvote2plus(village[4].getvote3()); ui->comboBox5->hide();
        if(num==6){
            a=ui->comboBox6->currentText();l=a.toInt();
            village[5].setvote1(l);village[l-1].addvote2plus(village[5].getvote3()); ui->comboBox6->hide();
        }
        if(num==7){
            a=ui->comboBox6->currentText();l=a.toInt();
            village[5].setvote1(l);village[l-1].addvote2plus(village[5].getvote3()); ui->comboBox6->hide();
            a=ui->comboBox7->currentText();l=a.toInt();
            village[6].setvote1(l);village[l-1].addvote2plus(village[6].getvote3()); ui->comboBox7->hide();
        }
        if(num==8){
            a=ui->comboBox6->currentText();l=a.toInt();
            village[5].setvote1(l);village[l-1].addvote2plus(village[5].getvote3()); ui->comboBox6->hide();
            a=ui->comboBox7->currentText();l=a.toInt();
            village[6].setvote1(l);village[l-1].addvote2plus(village[6].getvote3()); ui->comboBox7->hide();
            a=ui->comboBox8->currentText();l=a.toInt();
            village[7].setvote1(l);village[l-1].addvote2plus(village[7].getvote3()); ui->comboBox8->hide();
        }



    float max;int k=0;max=village[0].getvote2();
    for(int i=1;i<num;i++){
        if(village[i].getvote2()>max){
            max=village[i].getvote2();k=i;
        }
    }
    if(k==0){ui->p1alive->setText("状态：死亡"); ui->board->setText("player1被放逐");village[0].setalive(0);village[0].setvote3(0);ui->p1id->setText("身份：村民");
        ui->widget1->hide();
        for(int i=0;i<num;i++){
            a=ui->comboBox1->itemText(i);
            if(a=="1"){
                ui->comboBox1->removeItem(i);
                ui->comboBox2->removeItem(i);
                ui->comboBox3->removeItem(i);
                ui->comboBox4->removeItem(i);
                ui->comboBox5->removeItem(i);
                ui->comboBox6->removeItem(i);
                ui->comboBox7->removeItem(i);
                ui->comboBox8->removeItem(i);

            }
        }
        if(village[0].getcolor()==1){ui->p1color->setText("牌色：红色");redalive=redalive-1;}if(village[0].getcolor()==0){ui->p1color->setText("牌色：黑色");blackalive=blackalive-1;}}

    if(k==1){ui->p2alive->setText("状态：死亡"); ui->board->setText("player2被放逐");village[1].setalive(0);village[1].setvote3(0);ui->p2id->setText("身份：村民");
        ui->widget2->hide();
        for(int i=0;i<num;i++){
            a=ui->comboBox1->itemText(i);
            if(a=="2"){
                ui->comboBox1->removeItem(i);
                ui->comboBox2->removeItem(i);
                ui->comboBox3->removeItem(i);
                ui->comboBox4->removeItem(i);
                ui->comboBox5->removeItem(i);
                ui->comboBox6->removeItem(i);
                ui->comboBox7->removeItem(i);
                ui->comboBox8->removeItem(i);

            }
        }
    if(village[1].getcolor()==1){ui->p2color->setText("牌色：红色");redalive=redalive-1;}if(village[1].getcolor()==0){ui->p2color->setText("牌色：黑色");blackalive=blackalive-1;}}

    if(k==2){ui->p3alive->setText("状态：死亡"); ui->board->setText("player3被放逐");village[2].setalive(0);village[2].setvote3(0);ui->p3id->setText("身份：村民");
        ui->widget3->hide();
        for(int i=0;i<num;i++){
            a=ui->comboBox1->itemText(i);
            if(a=="3"){
                ui->comboBox1->removeItem(i);
                ui->comboBox2->removeItem(i);
                ui->comboBox3->removeItem(i);
                ui->comboBox4->removeItem(i);
                ui->comboBox5->removeItem(i);
                ui->comboBox6->removeItem(i);
                ui->comboBox7->removeItem(i);
                ui->comboBox8->removeItem(i);

            }
        }
   if(village[2].getcolor()==1){ui->p3color->setText("牌色：红色");redalive=redalive-1;}if(village[2].getcolor()==0){ui->p3color->setText("牌色：黑色");blackalive=blackalive-1;} }

    if(k==3){ui->p4alive->setText("状态：死亡"); ui->board->setText("player4被放逐");village[3].setalive(0);village[3].setvote3(0);ui->p4id->setText("身份：村民");
        ui->widget4->hide();
        for(int i=0;i<num;i++){
            a=ui->comboBox1->itemText(i);
            if(a=="4"){
                ui->comboBox1->removeItem(i);
                ui->comboBox2->removeItem(i);
                ui->comboBox3->removeItem(i);
                ui->comboBox4->removeItem(i);
                ui->comboBox5->removeItem(i);
                ui->comboBox6->removeItem(i);
                ui->comboBox7->removeItem(i);
                ui->comboBox8->removeItem(i);

            }
        }
   if(village[3].getcolor()==1){ui->p4color->setText("牌色：红色");redalive=redalive-1;}if(village[3].getcolor()==0){ui->p4color->setText("牌色：黑色");blackalive=blackalive-1;} }

    if(k==4){ui->p5alive->setText("状态：死亡"); ui->board->setText("player5被放逐");village[4].setalive(0);village[4].setvote3(0);ui->p5id->setText("身份：村民");
        ui->widget5->hide();
        for(int i=0;i<num;i++){
            a=ui->comboBox1->itemText(i);
            if(a=="5"){
                ui->comboBox1->removeItem(i);
                ui->comboBox2->removeItem(i);
                ui->comboBox3->removeItem(i);
                ui->comboBox4->removeItem(i);
                ui->comboBox5->removeItem(i);
                ui->comboBox6->removeItem(i);
                ui->comboBox7->removeItem(i);
                ui->comboBox8->removeItem(i);

            }
        }
   if(village[4].getcolor()==1){ui->p5color->setText("牌色：红色");redalive=redalive-1;}if(village[4].getcolor()==0){ui->p5color->setText("牌色：黑色");blackalive=blackalive-1;} }

    if(k==5){ui->p6alive->setText("状态：死亡"); ui->board->setText("player6被放逐");village[5].setalive(0);village[5].setvote3(0);ui->p6id->setText("身份：村民");
        ui->widget6->hide();
        for(int i=0;i<num;i++){
            a=ui->comboBox1->itemText(i);
            if(a=="6"){
                ui->comboBox1->removeItem(i);
                ui->comboBox2->removeItem(i);
                ui->comboBox3->removeItem(i);
                ui->comboBox4->removeItem(i);
                ui->comboBox5->removeItem(i);
                ui->comboBox6->removeItem(i);
                ui->comboBox7->removeItem(i);
                ui->comboBox8->removeItem(i);

            }
        }
    if(village[5].getcolor()==1){ui->p6color->setText("牌色：红色");redalive=redalive-1;}if(village[5].getcolor()==0){ui->p6color->setText("牌色：黑色");blackalive=blackalive-1;}}

    if(k==6){ui->p7alive->setText("状态：死亡"); ui->board->setText("player7被放逐");village[6].setalive(0);village[6].setvote3(0);ui->p7id->setText("身份：村民");
        ui->widget7->hide();
        for(int i=0;i<num;i++){
            a=ui->comboBox1->itemText(i);
            if(a=="7"){
                ui->comboBox1->removeItem(i);
                ui->comboBox2->removeItem(i);
                ui->comboBox3->removeItem(i);
                ui->comboBox4->removeItem(i);
                ui->comboBox5->removeItem(i);
                ui->comboBox6->removeItem(i);
                ui->comboBox7->removeItem(i);
                ui->comboBox8->removeItem(i);

            }
        }
   if(village[6].getcolor()==1){ui->p7color->setText("牌色：红色");redalive=redalive-1;}if(village[6].getcolor()==0){ui->p7color->setText("牌色：黑色");blackalive=blackalive-1;} }

    if(k==7){ui->p8alive->setText("状态：死亡"); ui->board->setText("player8被放逐");village[7].setalive(0);village[7].setvote3(0);ui->p8id->setText("身份：村民");
        ui->widget8->hide();
        for(int i=0;i<num;i++){
            a=ui->comboBox1->itemText(i);
            if(a=="8"){
                ui->comboBox1->removeItem(i);
                ui->comboBox2->removeItem(i);
                ui->comboBox3->removeItem(i);
                ui->comboBox4->removeItem(i);
                ui->comboBox5->removeItem(i);
                ui->comboBox6->removeItem(i);
                ui->comboBox7->removeItem(i);
                ui->comboBox8->removeItem(i);

            }
        }
   if(village[7].getcolor()==1){ui->p8color->setText("牌色：红色");redalive=redalive-1;}if(village[7].getcolor()==0){ui->p8color->setText("牌色：黑色");blackalive=blackalive-1;} }



    if(blackalive==0){ui->close->show();
        QMessageBox message(QMessageBox::NoIcon, "游戏结束", "红牌获胜!");
        message.setIconPixmap(QPixmap(":/new/prefix1/goupai.png"));
        message.exec();}
    if(redalive==0){ui->close->show();
        QMessageBox message(QMessageBox::NoIcon, "游戏结束", "红牌获胜!");
        message.setIconPixmap(QPixmap(":/new/prefix1/goupai.png"));
        message.exec();}
    if(k!=now-1){ui->night->show();}
    if(k==now-1){
        if(village[0].getalive()==1){ui->huancz1->show();}
        if(village[1].getalive()==1){ui->huancz2->show();}
        if(village[2].getalive()==1){ui->huancz3->show();}
        if(village[3].getalive()==1){ui->huancz4->show();}
        if(village[4].getalive()==1){ui->huancz5->show();}
        if(village[5].getalive()==1){ui->huancz6->show();}
        if(village[6].getalive()==1){ui->huancz7->show();}
        if(village[7].getalive()==1){ui->huancz8->show();}
    }

}

void gamewidget::on_startvote_clicked()         //裂开
{
   if(village[0].getalive()==1) {ui->comboBox1->show();}
    if(village[1].getalive()==1) {ui->comboBox2->show();}
     if(village[2].getalive()==1) {ui->comboBox3->show();}
      if(village[3].getalive()==1) {ui->comboBox4->show();}
       if(village[4].getalive()==1) {ui->comboBox5->show();}
        if(village[5].getalive()==1) {ui->comboBox6->show();}
         if(village[6].getalive()==1) {ui->comboBox7->show();}
          if(village[7].getalive()==1) {ui->comboBox8->show();}

    ui->startvote->hide();
    ui->jipiao->show();
}

void gamewidget::on_close_clicked()
{
    this->close();
}

void gamewidget::on_right_clicked()
{
    ui->next->show();
        ui->left->hide();
        ui->right->hide();

        shunni=0;
        if((now+1)==2){
            ui->lineEdit2->show();
            ui->pb2->show();
        }
        if((now+1)==3){
            ui->lineEdit3->show();
            ui->pb3->show();
        }
        if((now+1)==4){
            ui->lineEdit4->show();
            ui->pb4->show();
        }
        if((now+1)==5){
            ui->lineEdit5->show();
            ui->pb5->show();
        }
        if(num==5&&now+1==6){
            ui->lineEdit1->show();
            ui->pb1->show();
        }
        if(num==6&&now+1==7){
            ui->lineEdit1->show();
            ui->pb1->show();
        }
        if(num==7&&now+1==8){
            ui->lineEdit1->show();
            ui->pb1->show();
        }
        if(num==8&&now+1==9){
            ui->lineEdit1->show();
            ui->pb1->show();
        }
}

void gamewidget::on_huancz1_clicked()
{
    ui->p1id->setText("身份：村长");
    ui->board->setText("player1成为新村长");
    now=1;
    village[0].setvote3(czvote);
    ui->huancz1->hide();
    ui->huancz2->hide();
    ui->huancz3->hide();
    ui->huancz4->hide();
    ui->huancz5->hide();
    ui->huancz6->hide();
    ui->huancz7->hide();
    ui->huancz8->hide();
    ui->night->show();

}

void gamewidget::on_huancz2_clicked()
{
    ui->p2id->setText("身份：村长");
    ui->board->setText("player2成为新村长");
    now=2;
    village[1].setvote3(czvote);
    ui->huancz1->hide();
    ui->huancz2->hide();
    ui->huancz3->hide();
    ui->huancz4->hide();
    ui->huancz5->hide();
    ui->huancz6->hide();
    ui->huancz7->hide();
    ui->huancz8->hide();
    ui->night->show();
}

void gamewidget::on_huancz3_clicked()
{
    ui->p3id->setText("身份：村长");
    ui->board->setText("player3成为新村长");
    now=3;
    village[2].setvote3(czvote);
    ui->huancz1->hide();
    ui->huancz2->hide();
    ui->huancz3->hide();
    ui->huancz4->hide();
    ui->huancz5->hide();
    ui->huancz6->hide();
    ui->huancz7->hide();
    ui->huancz8->hide();
    ui->night->show();
}

void gamewidget::on_huancz4_clicked()
{
    ui->p4id->setText("身份：村长");
    ui->board->setText("player4成为新村长");
    now=4;
    village[3].setvote3(czvote);
    ui->huancz1->hide();
    ui->huancz2->hide();
    ui->huancz3->hide();
    ui->huancz4->hide();
    ui->huancz5->hide();
    ui->huancz6->hide();
    ui->huancz7->hide();
    ui->huancz8->hide();
    ui->night->show();
}

void gamewidget::on_huancz5_clicked()
{
    ui->p5id->setText("身份：村长");
    ui->board->setText("player5成为新村长");
    now=5;
    village[4].setvote3(czvote);
    ui->huancz1->hide();
    ui->huancz2->hide();
    ui->huancz3->hide();
    ui->huancz4->hide();
    ui->huancz5->hide();
    ui->huancz6->hide();
    ui->huancz7->hide();
    ui->huancz8->hide();
    ui->night->show();
}

void gamewidget::on_huancz6_clicked()
{
    ui->p6id->setText("身份：村长");
    ui->board->setText("player6成为新村长");
    now=6;
    village[5].setvote3(czvote);
    ui->huancz1->hide();
    ui->huancz2->hide();
    ui->huancz3->hide();
    ui->huancz4->hide();
    ui->huancz5->hide();
    ui->huancz6->hide();
    ui->huancz7->hide();
    ui->huancz8->hide();
    ui->night->show();
}
void gamewidget::on_huancz7_clicked()
{
    ui->p7id->setText("身份：村长");
    ui->board->setText("player7成为新村长");
    now=7;
    village[6].setvote3(czvote);
    ui->huancz1->hide();
    ui->huancz2->hide();
    ui->huancz3->hide();
    ui->huancz4->hide();
    ui->huancz5->hide();
    ui->huancz6->hide();
    ui->huancz7->hide();
    ui->huancz8->hide();
    ui->night->show();
}
void gamewidget::on_huancz8_clicked()
{
    ui->p8id->setText("身份：村长");
    ui->board->setText("player8成为新村长");
    now=8;
    village[7].setvote3(czvote);
    ui->huancz1->hide();
    ui->huancz2->hide();
    ui->huancz3->hide();
    ui->huancz4->hide();
    ui->huancz5->hide();
    ui->huancz6->hide();
    ui->huancz7->hide();
    ui->huancz8->hide();
    ui->night->show();
}
