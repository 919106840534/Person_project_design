/********************************************************************************
** Form generated from reading UI file 'gamewidget.ui'
**
** Created by: Qt User Interface Compiler version 5.9.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GAMEWIDGET_H
#define UI_GAMEWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_gamewidget
{
public:
    QPushButton *next;
    QWidget *player3;
    QLabel *p3name;
    QLabel *p3tou;
    QLabel *p3alive;
    QLabel *p3id;
    QLabel *p3color;
    QLabel *p3canyu;
    QPushButton *p3eye;
    QLabel *label_3;
    QPushButton *kanpai3;
    QPushButton *yincang3;
    QPushButton *huancz3;
    QComboBox *comboBox3;
    QWidget *widget3;
    QLineEdit *lineEdit3;
    QPushButton *pb3;
    QWidget *player4;
    QLabel *p4name;
    QLabel *p4tou;
    QLabel *p4alive;
    QLabel *p4id;
    QLabel *p4color;
    QLabel *p4canyu;
    QPushButton *p4eye;
    QLabel *label_4;
    QPushButton *kanpai4;
    QPushButton *yincang4;
    QPushButton *huancz4;
    QComboBox *comboBox4;
    QWidget *widget4;
    QLineEdit *lineEdit4;
    QPushButton *pb4;
    QWidget *player5;
    QLabel *p5name;
    QLabel *p5tou;
    QLabel *p5alive;
    QLabel *p5id;
    QLabel *p5color;
    QLabel *p5canyu;
    QPushButton *p5eye;
    QLabel *label_5;
    QPushButton *kanpai5;
    QPushButton *yincang5;
    QPushButton *huancz5;
    QComboBox *comboBox5;
    QWidget *widget5;
    QLineEdit *lineEdit5;
    QPushButton *pb5;
    QWidget *player6;
    QLabel *p6name;
    QLabel *p6tou;
    QLabel *p6alive;
    QLabel *p6id;
    QLabel *p6color;
    QLabel *p6canyu;
    QPushButton *p6eye;
    QLabel *label_6;
    QPushButton *kanpai6;
    QPushButton *yincang6;
    QPushButton *huancz6;
    QComboBox *comboBox6;
    QWidget *widget6;
    QLineEdit *lineEdit6;
    QPushButton *pb6;
    QWidget *player7;
    QLabel *p7name;
    QLabel *p7tou;
    QLabel *p7alive;
    QLabel *p7id;
    QLabel *p7color;
    QLabel *p7canyu;
    QPushButton *p7eye;
    QLabel *label_7;
    QPushButton *kanpai7;
    QPushButton *yincang7;
    QPushButton *huancz7;
    QComboBox *comboBox7;
    QWidget *widget7;
    QLineEdit *lineEdit7;
    QPushButton *pb7;
    QWidget *player1;
    QLabel *p1name;
    QLabel *p1tou;
    QLabel *p1alive;
    QLabel *p1id;
    QLabel *p1color;
    QLabel *p1canyu;
    QPushButton *p1eye;
    QLabel *label;
    QPushButton *yincang1;
    QPushButton *kanpai1;
    QPushButton *huancz1;
    QComboBox *comboBox1;
    QWidget *widget1;
    QLineEdit *lineEdit1;
    QPushButton *pb1;
    QWidget *player2;
    QLabel *p2name;
    QLabel *p2tou;
    QLabel *p2alive;
    QLabel *p2id;
    QLabel *p2color;
    QLabel *p2canyu;
    QPushButton *p2eye;
    QLabel *label_2;
    QPushButton *kanpai2;
    QPushButton *yincang2;
    QPushButton *huancz2;
    QComboBox *comboBox2;
    QWidget *widget2;
    QLineEdit *lineEdit2;
    QPushButton *pb2;
    QLabel *board;
    QLabel *zhuyi;
    QPushButton *kanpiao;
    QWidget *widgetmain;
    QPushButton *pushButton;
    QWidget *player8;
    QLabel *p8name;
    QLabel *p8tou;
    QLabel *p8alive;
    QLabel *p8id;
    QLabel *p8color;
    QLabel *p8canyu;
    QPushButton *p8eye;
    QLabel *label_8;
    QPushButton *kanpai8;
    QPushButton *yincang8;
    QPushButton *huancz8;
    QComboBox *comboBox8;
    QWidget *widget8;
    QLineEdit *lineEdit8;
    QPushButton *pb8;
    QPushButton *pushButton_2;
    QPushButton *starttalk;
    QPushButton *night;
    QPushButton *day;
    QPushButton *left;
    QPushButton *right;
    QPushButton *jipiao;
    QPushButton *startvote;
    QPushButton *close;

    void setupUi(QWidget *gamewidget)
    {
        if (gamewidget->objectName().isEmpty())
            gamewidget->setObjectName(QStringLiteral("gamewidget"));
        gamewidget->resize(1241, 1253);
        next = new QPushButton(gamewidget);
        next->setObjectName(QStringLiteral("next"));
        next->setGeometry(QRect(680, 270, 121, 31));
        player3 = new QWidget(gamewidget);
        player3->setObjectName(QStringLiteral("player3"));
        player3->setGeometry(QRect(910, 10, 311, 231));
        p3name = new QLabel(player3);
        p3name->setObjectName(QStringLiteral("p3name"));
        p3name->setGeometry(QRect(30, 20, 72, 15));
        p3tou = new QLabel(player3);
        p3tou->setObjectName(QStringLiteral("p3tou"));
        p3tou->setGeometry(QRect(0, 90, 131, 91));
        p3tou->setPixmap(QPixmap(QString::fromUtf8(":/new/prefix1/daitu.jpg")));
        p3tou->setScaledContents(true);
        p3alive = new QLabel(player3);
        p3alive->setObjectName(QStringLiteral("p3alive"));
        p3alive->setGeometry(QRect(140, 110, 91, 16));
        p3id = new QLabel(player3);
        p3id->setObjectName(QStringLiteral("p3id"));
        p3id->setGeometry(QRect(140, 140, 91, 16));
        p3color = new QLabel(player3);
        p3color->setObjectName(QStringLiteral("p3color"));
        p3color->setGeometry(QRect(140, 170, 91, 16));
        p3canyu = new QLabel(player3);
        p3canyu->setObjectName(QStringLiteral("p3canyu"));
        p3canyu->setGeometry(QRect(140, 10, 111, 20));
        p3eye = new QPushButton(player3);
        p3eye->setObjectName(QStringLiteral("p3eye"));
        p3eye->setGeometry(QRect(0, 190, 93, 28));
        label_3 = new QLabel(player3);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(160, 200, 72, 16));
        kanpai3 = new QPushButton(player3);
        kanpai3->setObjectName(QStringLiteral("kanpai3"));
        kanpai3->setGeometry(QRect(220, 170, 91, 23));
        yincang3 = new QPushButton(player3);
        yincang3->setObjectName(QStringLiteral("yincang3"));
        yincang3->setGeometry(QRect(220, 170, 91, 23));
        huancz3 = new QPushButton(player3);
        huancz3->setObjectName(QStringLiteral("huancz3"));
        huancz3->setGeometry(QRect(220, 100, 71, 41));
        comboBox3 = new QComboBox(player3);
        comboBox3->setObjectName(QStringLiteral("comboBox3"));
        comboBox3->setGeometry(QRect(220, 200, 61, 22));
        comboBox3->setMaxVisibleItems(8);
        widget3 = new QWidget(player3);
        widget3->setObjectName(QStringLiteral("widget3"));
        widget3->setGeometry(QRect(10, 20, 291, 80));
        lineEdit3 = new QLineEdit(widget3);
        lineEdit3->setObjectName(QStringLiteral("lineEdit3"));
        lineEdit3->setGeometry(QRect(100, 30, 181, 31));
        pb3 = new QPushButton(widget3);
        pb3->setObjectName(QStringLiteral("pb3"));
        pb3->setGeometry(QRect(0, 30, 93, 28));
        player4 = new QWidget(gamewidget);
        player4->setObjectName(QStringLiteral("player4"));
        player4->setGeometry(QRect(890, 240, 331, 251));
        p4name = new QLabel(player4);
        p4name->setObjectName(QStringLiteral("p4name"));
        p4name->setGeometry(QRect(20, 30, 72, 15));
        p4tou = new QLabel(player4);
        p4tou->setObjectName(QStringLiteral("p4tou"));
        p4tou->setGeometry(QRect(0, 100, 121, 101));
        p4tou->setPixmap(QPixmap(QString::fromUtf8(":/new/prefix1/kakaxi.jpg")));
        p4tou->setScaledContents(true);
        p4alive = new QLabel(player4);
        p4alive->setObjectName(QStringLiteral("p4alive"));
        p4alive->setGeometry(QRect(130, 110, 91, 16));
        p4id = new QLabel(player4);
        p4id->setObjectName(QStringLiteral("p4id"));
        p4id->setGeometry(QRect(130, 140, 81, 16));
        p4color = new QLabel(player4);
        p4color->setObjectName(QStringLiteral("p4color"));
        p4color->setGeometry(QRect(130, 160, 81, 16));
        p4canyu = new QLabel(player4);
        p4canyu->setObjectName(QStringLiteral("p4canyu"));
        p4canyu->setGeometry(QRect(150, 30, 111, 20));
        p4eye = new QPushButton(player4);
        p4eye->setObjectName(QStringLiteral("p4eye"));
        p4eye->setGeometry(QRect(20, 210, 93, 28));
        label_4 = new QLabel(player4);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(160, 200, 72, 16));
        kanpai4 = new QPushButton(player4);
        kanpai4->setObjectName(QStringLiteral("kanpai4"));
        kanpai4->setGeometry(QRect(230, 170, 91, 23));
        yincang4 = new QPushButton(player4);
        yincang4->setObjectName(QStringLiteral("yincang4"));
        yincang4->setGeometry(QRect(230, 170, 91, 23));
        huancz4 = new QPushButton(player4);
        huancz4->setObjectName(QStringLiteral("huancz4"));
        huancz4->setGeometry(QRect(230, 110, 71, 41));
        comboBox4 = new QComboBox(player4);
        comboBox4->setObjectName(QStringLiteral("comboBox4"));
        comboBox4->setGeometry(QRect(230, 200, 61, 22));
        comboBox4->setMaxVisibleItems(8);
        widget4 = new QWidget(player4);
        widget4->setObjectName(QStringLiteral("widget4"));
        widget4->setGeometry(QRect(0, 40, 331, 80));
        lineEdit4 = new QLineEdit(widget4);
        lineEdit4->setObjectName(QStringLiteral("lineEdit4"));
        lineEdit4->setGeometry(QRect(120, 20, 181, 31));
        pb4 = new QPushButton(widget4);
        pb4->setObjectName(QStringLiteral("pb4"));
        pb4->setGeometry(QRect(10, 20, 93, 28));
        player5 = new QWidget(gamewidget);
        player5->setObjectName(QStringLiteral("player5"));
        player5->setGeometry(QRect(870, 490, 351, 251));
        p5name = new QLabel(player5);
        p5name->setObjectName(QStringLiteral("p5name"));
        p5name->setGeometry(QRect(30, 0, 72, 15));
        p5tou = new QLabel(player5);
        p5tou->setObjectName(QStringLiteral("p5tou"));
        p5tou->setGeometry(QRect(10, 70, 131, 111));
        p5tou->setPixmap(QPixmap(QString::fromUtf8(":/new/prefix1/mingren.jpg")));
        p5tou->setScaledContents(true);
        p5alive = new QLabel(player5);
        p5alive->setObjectName(QStringLiteral("p5alive"));
        p5alive->setGeometry(QRect(150, 80, 91, 20));
        p5id = new QLabel(player5);
        p5id->setObjectName(QStringLiteral("p5id"));
        p5id->setGeometry(QRect(150, 100, 81, 16));
        p5color = new QLabel(player5);
        p5color->setObjectName(QStringLiteral("p5color"));
        p5color->setGeometry(QRect(150, 120, 81, 16));
        p5canyu = new QLabel(player5);
        p5canyu->setObjectName(QStringLiteral("p5canyu"));
        p5canyu->setGeometry(QRect(140, 0, 91, 20));
        p5eye = new QPushButton(player5);
        p5eye->setObjectName(QStringLiteral("p5eye"));
        p5eye->setGeometry(QRect(10, 190, 93, 28));
        label_5 = new QLabel(player5);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(180, 190, 72, 16));
        kanpai5 = new QPushButton(player5);
        kanpai5->setObjectName(QStringLiteral("kanpai5"));
        kanpai5->setGeometry(QRect(230, 120, 91, 23));
        yincang5 = new QPushButton(player5);
        yincang5->setObjectName(QStringLiteral("yincang5"));
        yincang5->setGeometry(QRect(230, 120, 91, 23));
        huancz5 = new QPushButton(player5);
        huancz5->setObjectName(QStringLiteral("huancz5"));
        huancz5->setGeometry(QRect(230, 70, 71, 41));
        comboBox5 = new QComboBox(player5);
        comboBox5->setObjectName(QStringLiteral("comboBox5"));
        comboBox5->setGeometry(QRect(240, 180, 61, 22));
        comboBox5->setMaxVisibleItems(8);
        widget5 = new QWidget(player5);
        widget5->setObjectName(QStringLiteral("widget5"));
        widget5->setGeometry(QRect(10, 10, 321, 80));
        lineEdit5 = new QLineEdit(widget5);
        lineEdit5->setObjectName(QStringLiteral("lineEdit5"));
        lineEdit5->setGeometry(QRect(130, 20, 181, 31));
        pb5 = new QPushButton(widget5);
        pb5->setObjectName(QStringLiteral("pb5"));
        pb5->setGeometry(QRect(0, 20, 93, 28));
        player6 = new QWidget(gamewidget);
        player6->setObjectName(QStringLiteral("player6"));
        player6->setGeometry(QRect(450, 480, 341, 221));
        p6name = new QLabel(player6);
        p6name->setObjectName(QStringLiteral("p6name"));
        p6name->setGeometry(QRect(40, 10, 72, 15));
        p6tou = new QLabel(player6);
        p6tou->setObjectName(QStringLiteral("p6tou"));
        p6tou->setGeometry(QRect(20, 70, 131, 111));
        p6tou->setPixmap(QPixmap(QString::fromUtf8(":/new/prefix1/peien.jpg")));
        p6tou->setScaledContents(true);
        p6alive = new QLabel(player6);
        p6alive->setObjectName(QStringLiteral("p6alive"));
        p6alive->setGeometry(QRect(160, 90, 91, 20));
        p6id = new QLabel(player6);
        p6id->setObjectName(QStringLiteral("p6id"));
        p6id->setGeometry(QRect(160, 120, 81, 16));
        p6color = new QLabel(player6);
        p6color->setObjectName(QStringLiteral("p6color"));
        p6color->setGeometry(QRect(160, 150, 81, 16));
        p6canyu = new QLabel(player6);
        p6canyu->setObjectName(QStringLiteral("p6canyu"));
        p6canyu->setGeometry(QRect(150, 10, 91, 20));
        p6eye = new QPushButton(player6);
        p6eye->setObjectName(QStringLiteral("p6eye"));
        p6eye->setGeometry(QRect(20, 190, 93, 28));
        label_6 = new QLabel(player6);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(180, 190, 72, 16));
        kanpai6 = new QPushButton(player6);
        kanpai6->setObjectName(QStringLiteral("kanpai6"));
        kanpai6->setGeometry(QRect(250, 140, 91, 23));
        yincang6 = new QPushButton(player6);
        yincang6->setObjectName(QStringLiteral("yincang6"));
        yincang6->setGeometry(QRect(250, 140, 91, 23));
        huancz6 = new QPushButton(player6);
        huancz6->setObjectName(QStringLiteral("huancz6"));
        huancz6->setGeometry(QRect(260, 70, 71, 41));
        comboBox6 = new QComboBox(player6);
        comboBox6->setObjectName(QStringLiteral("comboBox6"));
        comboBox6->setGeometry(QRect(260, 190, 61, 22));
        comboBox6->setMaxVisibleItems(8);
        widget6 = new QWidget(player6);
        widget6->setObjectName(QStringLiteral("widget6"));
        widget6->setGeometry(QRect(20, 0, 331, 80));
        lineEdit6 = new QLineEdit(widget6);
        lineEdit6->setObjectName(QStringLiteral("lineEdit6"));
        lineEdit6->setGeometry(QRect(130, 30, 171, 31));
        pb6 = new QPushButton(widget6);
        pb6->setObjectName(QStringLiteral("pb6"));
        pb6->setGeometry(QRect(10, 30, 93, 28));
        player7 = new QWidget(gamewidget);
        player7->setObjectName(QStringLiteral("player7"));
        player7->setGeometry(QRect(50, 480, 371, 241));
        p7name = new QLabel(player7);
        p7name->setObjectName(QStringLiteral("p7name"));
        p7name->setGeometry(QRect(40, 20, 72, 15));
        p7tou = new QLabel(player7);
        p7tou->setObjectName(QStringLiteral("p7tou"));
        p7tou->setGeometry(QRect(10, 70, 131, 111));
        p7tou->setPixmap(QPixmap(QString::fromUtf8(":/new/prefix1/xiaoying.jpg")));
        p7tou->setScaledContents(true);
        p7alive = new QLabel(player7);
        p7alive->setObjectName(QStringLiteral("p7alive"));
        p7alive->setGeometry(QRect(160, 90, 91, 20));
        p7id = new QLabel(player7);
        p7id->setObjectName(QStringLiteral("p7id"));
        p7id->setGeometry(QRect(160, 130, 81, 16));
        p7color = new QLabel(player7);
        p7color->setObjectName(QStringLiteral("p7color"));
        p7color->setGeometry(QRect(160, 160, 81, 16));
        p7canyu = new QLabel(player7);
        p7canyu->setObjectName(QStringLiteral("p7canyu"));
        p7canyu->setGeometry(QRect(160, 20, 91, 20));
        p7eye = new QPushButton(player7);
        p7eye->setObjectName(QStringLiteral("p7eye"));
        p7eye->setGeometry(QRect(20, 190, 93, 28));
        label_7 = new QLabel(player7);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(200, 190, 72, 16));
        kanpai7 = new QPushButton(player7);
        kanpai7->setObjectName(QStringLiteral("kanpai7"));
        kanpai7->setGeometry(QRect(230, 140, 91, 23));
        yincang7 = new QPushButton(player7);
        yincang7->setObjectName(QStringLiteral("yincang7"));
        yincang7->setGeometry(QRect(230, 140, 91, 23));
        huancz7 = new QPushButton(player7);
        huancz7->setObjectName(QStringLiteral("huancz7"));
        huancz7->setGeometry(QRect(230, 90, 71, 41));
        comboBox7 = new QComboBox(player7);
        comboBox7->setObjectName(QStringLiteral("comboBox7"));
        comboBox7->setGeometry(QRect(270, 190, 61, 22));
        comboBox7->setMaxVisibleItems(8);
        widget7 = new QWidget(player7);
        widget7->setObjectName(QStringLiteral("widget7"));
        widget7->setGeometry(QRect(30, 20, 331, 80));
        lineEdit7 = new QLineEdit(widget7);
        lineEdit7->setObjectName(QStringLiteral("lineEdit7"));
        lineEdit7->setGeometry(QRect(140, 20, 181, 31));
        pb7 = new QPushButton(widget7);
        pb7->setObjectName(QStringLiteral("pb7"));
        pb7->setGeometry(QRect(0, 20, 93, 28));
        player1 = new QWidget(gamewidget);
        player1->setObjectName(QStringLiteral("player1"));
        player1->setGeometry(QRect(50, 20, 391, 241));
        p1name = new QLabel(player1);
        p1name->setObjectName(QStringLiteral("p1name"));
        p1name->setGeometry(QRect(20, 10, 72, 15));
        p1tou = new QLabel(player1);
        p1tou->setObjectName(QStringLiteral("p1tou"));
        p1tou->setGeometry(QRect(0, 80, 151, 111));
        p1tou->setPixmap(QPixmap(QString::fromUtf8(":/new/prefix1/zuozhu.jpg")));
        p1tou->setScaledContents(true);
        p1alive = new QLabel(player1);
        p1alive->setObjectName(QStringLiteral("p1alive"));
        p1alive->setGeometry(QRect(160, 100, 91, 20));
        p1id = new QLabel(player1);
        p1id->setObjectName(QStringLiteral("p1id"));
        p1id->setGeometry(QRect(160, 130, 81, 16));
        p1color = new QLabel(player1);
        p1color->setObjectName(QStringLiteral("p1color"));
        p1color->setGeometry(QRect(160, 160, 81, 16));
        p1canyu = new QLabel(player1);
        p1canyu->setObjectName(QStringLiteral("p1canyu"));
        p1canyu->setGeometry(QRect(130, 10, 91, 20));
        p1eye = new QPushButton(player1);
        p1eye->setObjectName(QStringLiteral("p1eye"));
        p1eye->setGeometry(QRect(20, 200, 93, 28));
        label = new QLabel(player1);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(180, 210, 72, 16));
        yincang1 = new QPushButton(player1);
        yincang1->setObjectName(QStringLiteral("yincang1"));
        yincang1->setGeometry(QRect(240, 160, 91, 23));
        kanpai1 = new QPushButton(player1);
        kanpai1->setObjectName(QStringLiteral("kanpai1"));
        kanpai1->setGeometry(QRect(240, 160, 91, 23));
        huancz1 = new QPushButton(player1);
        huancz1->setObjectName(QStringLiteral("huancz1"));
        huancz1->setGeometry(QRect(250, 90, 71, 41));
        comboBox1 = new QComboBox(player1);
        comboBox1->setObjectName(QStringLiteral("comboBox1"));
        comboBox1->setGeometry(QRect(250, 210, 61, 22));
        comboBox1->setMaxVisibleItems(8);
        widget1 = new QWidget(player1);
        widget1->setObjectName(QStringLiteral("widget1"));
        widget1->setGeometry(QRect(0, 30, 401, 80));
        lineEdit1 = new QLineEdit(widget1);
        lineEdit1->setObjectName(QStringLiteral("lineEdit1"));
        lineEdit1->setGeometry(QRect(150, 10, 171, 31));
        pb1 = new QPushButton(widget1);
        pb1->setObjectName(QStringLiteral("pb1"));
        pb1->setGeometry(QRect(20, 10, 93, 28));
        player2 = new QWidget(gamewidget);
        player2->setObjectName(QStringLiteral("player2"));
        player2->setGeometry(QRect(470, 20, 341, 241));
        p2name = new QLabel(player2);
        p2name->setObjectName(QStringLiteral("p2name"));
        p2name->setGeometry(QRect(50, 20, 72, 15));
        p2tou = new QLabel(player2);
        p2tou->setObjectName(QStringLiteral("p2tou"));
        p2tou->setGeometry(QRect(10, 80, 141, 121));
        p2tou->setPixmap(QPixmap(QString::fromUtf8(":/new/prefix1/woailuo.jpg")));
        p2tou->setScaledContents(true);
        p2alive = new QLabel(player2);
        p2alive->setObjectName(QStringLiteral("p2alive"));
        p2alive->setGeometry(QRect(160, 120, 91, 20));
        p2id = new QLabel(player2);
        p2id->setObjectName(QStringLiteral("p2id"));
        p2id->setGeometry(QRect(160, 150, 81, 16));
        p2color = new QLabel(player2);
        p2color->setObjectName(QStringLiteral("p2color"));
        p2color->setGeometry(QRect(160, 180, 81, 16));
        p2canyu = new QLabel(player2);
        p2canyu->setObjectName(QStringLiteral("p2canyu"));
        p2canyu->setGeometry(QRect(210, 10, 91, 20));
        p2eye = new QPushButton(player2);
        p2eye->setObjectName(QStringLiteral("p2eye"));
        p2eye->setGeometry(QRect(10, 210, 93, 28));
        label_2 = new QLabel(player2);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(180, 210, 72, 16));
        kanpai2 = new QPushButton(player2);
        kanpai2->setObjectName(QStringLiteral("kanpai2"));
        kanpai2->setGeometry(QRect(250, 160, 91, 23));
        yincang2 = new QPushButton(player2);
        yincang2->setObjectName(QStringLiteral("yincang2"));
        yincang2->setGeometry(QRect(250, 160, 91, 23));
        huancz2 = new QPushButton(player2);
        huancz2->setObjectName(QStringLiteral("huancz2"));
        huancz2->setGeometry(QRect(250, 90, 71, 41));
        comboBox2 = new QComboBox(player2);
        comboBox2->setObjectName(QStringLiteral("comboBox2"));
        comboBox2->setGeometry(QRect(250, 210, 61, 22));
        comboBox2->setMaxVisibleItems(8);
        widget2 = new QWidget(player2);
        widget2->setObjectName(QStringLiteral("widget2"));
        widget2->setGeometry(QRect(0, 10, 341, 80));
        lineEdit2 = new QLineEdit(widget2);
        lineEdit2->setObjectName(QStringLiteral("lineEdit2"));
        lineEdit2->setGeometry(QRect(140, 30, 191, 31));
        pb2 = new QPushButton(widget2);
        pb2->setObjectName(QStringLiteral("pb2"));
        pb2->setGeometry(QRect(10, 30, 93, 28));
        board = new QLabel(gamewidget);
        board->setObjectName(QStringLiteral("board"));
        board->setGeometry(QRect(90, 760, 701, 251));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\215\216\346\226\207\347\220\245\347\217\200"));
        font.setPointSize(36);
        board->setFont(font);
        zhuyi = new QLabel(gamewidget);
        zhuyi->setObjectName(QStringLiteral("zhuyi"));
        zhuyi->setGeometry(QRect(60, 730, 1101, 41));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\345\215\216\346\226\207\347\220\245\347\217\200"));
        font1.setPointSize(28);
        zhuyi->setFont(font1);
        kanpiao = new QPushButton(gamewidget);
        kanpiao->setObjectName(QStringLiteral("kanpiao"));
        kanpiao->setGeometry(QRect(470, 280, 75, 23));
        widgetmain = new QWidget(gamewidget);
        widgetmain->setObjectName(QStringLiteral("widgetmain"));
        widgetmain->setGeometry(QRect(460, 260, 341, 221));
        pushButton = new QPushButton(widgetmain);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(80, 60, 181, 91));
        player8 = new QWidget(gamewidget);
        player8->setObjectName(QStringLiteral("player8"));
        player8->setGeometry(QRect(60, 270, 361, 221));
        p8name = new QLabel(player8);
        p8name->setObjectName(QStringLiteral("p8name"));
        p8name->setGeometry(QRect(40, 10, 72, 15));
        p8tou = new QLabel(player8);
        p8tou->setObjectName(QStringLiteral("p8tou"));
        p8tou->setGeometry(QRect(0, 60, 151, 111));
        p8tou->setPixmap(QPixmap(QString::fromUtf8(":/new/prefix1/you.jpg")));
        p8tou->setScaledContents(true);
        p8alive = new QLabel(player8);
        p8alive->setObjectName(QStringLiteral("p8alive"));
        p8alive->setGeometry(QRect(180, 70, 91, 20));
        p8id = new QLabel(player8);
        p8id->setObjectName(QStringLiteral("p8id"));
        p8id->setGeometry(QRect(180, 110, 81, 16));
        p8color = new QLabel(player8);
        p8color->setObjectName(QStringLiteral("p8color"));
        p8color->setGeometry(QRect(180, 150, 81, 16));
        p8canyu = new QLabel(player8);
        p8canyu->setObjectName(QStringLiteral("p8canyu"));
        p8canyu->setGeometry(QRect(170, 10, 91, 20));
        p8eye = new QPushButton(player8);
        p8eye->setObjectName(QStringLiteral("p8eye"));
        p8eye->setGeometry(QRect(10, 180, 93, 28));
        label_8 = new QLabel(player8);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(180, 190, 72, 16));
        kanpai8 = new QPushButton(player8);
        kanpai8->setObjectName(QStringLiteral("kanpai8"));
        kanpai8->setGeometry(QRect(250, 130, 91, 23));
        yincang8 = new QPushButton(player8);
        yincang8->setObjectName(QStringLiteral("yincang8"));
        yincang8->setGeometry(QRect(250, 130, 91, 23));
        huancz8 = new QPushButton(player8);
        huancz8->setObjectName(QStringLiteral("huancz8"));
        huancz8->setGeometry(QRect(250, 80, 71, 41));
        comboBox8 = new QComboBox(player8);
        comboBox8->setObjectName(QStringLiteral("comboBox8"));
        comboBox8->setGeometry(QRect(250, 190, 61, 22));
        comboBox8->setMaxVisibleItems(8);
        widget8 = new QWidget(player8);
        widget8->setObjectName(QStringLiteral("widget8"));
        widget8->setGeometry(QRect(10, 10, 351, 80));
        lineEdit8 = new QLineEdit(widget8);
        lineEdit8->setObjectName(QStringLiteral("lineEdit8"));
        lineEdit8->setGeometry(QRect(150, 20, 171, 31));
        pb8 = new QPushButton(widget8);
        pb8->setObjectName(QStringLiteral("pb8"));
        pb8->setGeometry(QRect(10, 20, 93, 28));
        pushButton_2 = new QPushButton(gamewidget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(470, 320, 111, 23));
        starttalk = new QPushButton(gamewidget);
        starttalk->setObjectName(QStringLiteral("starttalk"));
        starttalk->setGeometry(QRect(470, 320, 111, 23));
        night = new QPushButton(gamewidget);
        night->setObjectName(QStringLiteral("night"));
        night->setGeometry(QRect(470, 360, 75, 23));
        day = new QPushButton(gamewidget);
        day->setObjectName(QStringLiteral("day"));
        day->setGeometry(QRect(580, 360, 75, 23));
        left = new QPushButton(gamewidget);
        left->setObjectName(QStringLiteral("left"));
        left->setGeometry(QRect(710, 310, 81, 21));
        right = new QPushButton(gamewidget);
        right->setObjectName(QStringLiteral("right"));
        right->setGeometry(QRect(710, 340, 81, 23));
        jipiao = new QPushButton(gamewidget);
        jipiao->setObjectName(QStringLiteral("jipiao"));
        jipiao->setGeometry(QRect(470, 430, 101, 23));
        startvote = new QPushButton(gamewidget);
        startvote->setObjectName(QStringLiteral("startvote"));
        startvote->setGeometry(QRect(480, 400, 75, 23));
        close = new QPushButton(gamewidget);
        close->setObjectName(QStringLiteral("close"));
        close->setGeometry(QRect(1020, 780, 131, 81));

        retranslateUi(gamewidget);

        QMetaObject::connectSlotsByName(gamewidget);
    } // setupUi

    void retranslateUi(QWidget *gamewidget)
    {
        gamewidget->setWindowTitle(QApplication::translate("gamewidget", "Form", Q_NULLPTR));
        next->setText(QApplication::translate("gamewidget", "\344\270\213\344\270\200\344\275\215", Q_NULLPTR));
        p3name->setText(QApplication::translate("gamewidget", "player3", Q_NULLPTR));
        p3tou->setText(QString());
        p3alive->setText(QApplication::translate("gamewidget", "\347\212\266\346\200\201\357\274\232\345\255\230\346\264\273", Q_NULLPTR));
        p3id->setText(QApplication::translate("gamewidget", "\350\272\253\344\273\275\357\274\232\346\235\221\346\260\221", Q_NULLPTR));
        p3color->setText(QApplication::translate("gamewidget", "\347\211\214\350\211\262\357\274\232\346\234\252\347\237\245", Q_NULLPTR));
        p3canyu->setText(QApplication::translate("gamewidget", "\345\217\202\344\270\216\346\234\254\350\275\256\346\270\270\346\210\217", Q_NULLPTR));
        p3eye->setText(QApplication::translate("gamewidget", "\347\235\201\347\234\274", Q_NULLPTR));
        label_3->setText(QApplication::translate("gamewidget", "\346\234\254\350\275\256\346\212\225\347\273\231\357\274\232", Q_NULLPTR));
        kanpai3->setText(QApplication::translate("gamewidget", "\346\237\245\347\234\213\347\211\214\350\211\262", Q_NULLPTR));
        yincang3->setText(QApplication::translate("gamewidget", "\351\232\220\350\227\217\347\211\214\350\211\262", Q_NULLPTR));
        huancz3->setText(QApplication::translate("gamewidget", "\347\247\273\344\272\244\346\235\221\351\225\277", Q_NULLPTR));
        comboBox3->clear();
        comboBox3->insertItems(0, QStringList()
         << QApplication::translate("gamewidget", "1", Q_NULLPTR)
         << QApplication::translate("gamewidget", "2", Q_NULLPTR)
         << QApplication::translate("gamewidget", "3", Q_NULLPTR)
         << QApplication::translate("gamewidget", "4", Q_NULLPTR)
         << QApplication::translate("gamewidget", "5", Q_NULLPTR)
        );
        pb3->setText(QApplication::translate("gamewidget", "\347\273\223\346\235\237\345\217\221\350\250\200", Q_NULLPTR));
        p4name->setText(QApplication::translate("gamewidget", "player4", Q_NULLPTR));
        p4tou->setText(QString());
        p4alive->setText(QApplication::translate("gamewidget", "\347\212\266\346\200\201\357\274\232\345\255\230\346\264\273", Q_NULLPTR));
        p4id->setText(QApplication::translate("gamewidget", "\350\272\253\344\273\275\357\274\232\346\235\221\346\260\221", Q_NULLPTR));
        p4color->setText(QApplication::translate("gamewidget", "\347\211\214\350\211\262\357\274\232\346\234\252\347\237\245", Q_NULLPTR));
        p4canyu->setText(QApplication::translate("gamewidget", "\345\217\202\344\270\216\346\234\254\350\275\256\346\270\270\346\210\217", Q_NULLPTR));
        p4eye->setText(QApplication::translate("gamewidget", "\347\235\201\347\234\274", Q_NULLPTR));
        label_4->setText(QApplication::translate("gamewidget", "\346\234\254\350\275\256\346\212\225\347\273\231\357\274\232", Q_NULLPTR));
        kanpai4->setText(QApplication::translate("gamewidget", "\346\237\245\347\234\213\347\211\214\350\211\262", Q_NULLPTR));
        yincang4->setText(QApplication::translate("gamewidget", "\351\232\220\350\227\217\347\211\214\350\211\262", Q_NULLPTR));
        huancz4->setText(QApplication::translate("gamewidget", "\347\247\273\344\272\244\346\235\221\351\225\277", Q_NULLPTR));
        comboBox4->clear();
        comboBox4->insertItems(0, QStringList()
         << QApplication::translate("gamewidget", "1", Q_NULLPTR)
         << QApplication::translate("gamewidget", "2", Q_NULLPTR)
         << QApplication::translate("gamewidget", "3", Q_NULLPTR)
         << QApplication::translate("gamewidget", "4", Q_NULLPTR)
         << QApplication::translate("gamewidget", "5", Q_NULLPTR)
        );
        lineEdit4->setText(QString());
        pb4->setText(QApplication::translate("gamewidget", "\347\273\223\346\235\237\345\217\221\350\250\200", Q_NULLPTR));
        p5name->setText(QApplication::translate("gamewidget", "player5", Q_NULLPTR));
        p5tou->setText(QString());
        p5alive->setText(QApplication::translate("gamewidget", "\347\212\266\346\200\201\357\274\232\345\255\230\346\264\273", Q_NULLPTR));
        p5id->setText(QApplication::translate("gamewidget", "\350\272\253\344\273\275\357\274\232\346\235\221\346\260\221", Q_NULLPTR));
        p5color->setText(QApplication::translate("gamewidget", "\347\211\214\350\211\262\357\274\232\346\234\252\347\237\245", Q_NULLPTR));
        p5canyu->setText(QApplication::translate("gamewidget", "\345\217\202\344\270\216\346\234\254\350\275\256\346\270\270\346\210\217", Q_NULLPTR));
        p5eye->setText(QApplication::translate("gamewidget", "\347\235\201\347\234\274", Q_NULLPTR));
        label_5->setText(QApplication::translate("gamewidget", "\346\234\254\350\275\256\346\212\225\347\273\231\357\274\232", Q_NULLPTR));
        kanpai5->setText(QApplication::translate("gamewidget", "\346\237\245\347\234\213\347\211\214\350\211\262", Q_NULLPTR));
        yincang5->setText(QApplication::translate("gamewidget", "\351\232\220\350\227\217\347\211\214\350\211\262", Q_NULLPTR));
        huancz5->setText(QApplication::translate("gamewidget", "\347\247\273\344\272\244\346\235\221\351\225\277", Q_NULLPTR));
        comboBox5->clear();
        comboBox5->insertItems(0, QStringList()
         << QApplication::translate("gamewidget", "1", Q_NULLPTR)
         << QApplication::translate("gamewidget", "2", Q_NULLPTR)
         << QApplication::translate("gamewidget", "3", Q_NULLPTR)
         << QApplication::translate("gamewidget", "4", Q_NULLPTR)
         << QApplication::translate("gamewidget", "5", Q_NULLPTR)
        );
        pb5->setText(QApplication::translate("gamewidget", "\347\273\223\346\235\237\345\217\221\350\250\200", Q_NULLPTR));
        p6name->setText(QApplication::translate("gamewidget", "player6", Q_NULLPTR));
        p6tou->setText(QString());
        p6alive->setText(QApplication::translate("gamewidget", "\347\212\266\346\200\201\357\274\232\345\255\230\346\264\273", Q_NULLPTR));
        p6id->setText(QApplication::translate("gamewidget", "\350\272\253\344\273\275\357\274\232\346\235\221\346\260\221", Q_NULLPTR));
        p6color->setText(QApplication::translate("gamewidget", "\347\211\214\350\211\262\357\274\232\346\234\252\347\237\245", Q_NULLPTR));
        p6canyu->setText(QApplication::translate("gamewidget", "\345\217\202\344\270\216\346\234\254\350\275\256\346\270\270\346\210\217", Q_NULLPTR));
        p6eye->setText(QApplication::translate("gamewidget", "\347\235\201\347\234\274", Q_NULLPTR));
        label_6->setText(QApplication::translate("gamewidget", "\346\234\254\350\275\256\346\212\225\347\273\231\357\274\232", Q_NULLPTR));
        kanpai6->setText(QApplication::translate("gamewidget", "\346\237\245\347\234\213\347\211\214\350\211\262", Q_NULLPTR));
        yincang6->setText(QApplication::translate("gamewidget", "\351\232\220\350\227\217\347\211\214\350\211\262", Q_NULLPTR));
        huancz6->setText(QApplication::translate("gamewidget", "\347\247\273\344\272\244\346\235\221\351\225\277", Q_NULLPTR));
        comboBox6->clear();
        comboBox6->insertItems(0, QStringList()
         << QApplication::translate("gamewidget", "1", Q_NULLPTR)
         << QApplication::translate("gamewidget", "2", Q_NULLPTR)
         << QApplication::translate("gamewidget", "3", Q_NULLPTR)
         << QApplication::translate("gamewidget", "4", Q_NULLPTR)
         << QApplication::translate("gamewidget", "5", Q_NULLPTR)
        );
        pb6->setText(QApplication::translate("gamewidget", "\347\273\223\346\235\237\345\217\221\350\250\200", Q_NULLPTR));
        p7name->setText(QApplication::translate("gamewidget", "player7", Q_NULLPTR));
        p7tou->setText(QString());
        p7alive->setText(QApplication::translate("gamewidget", "\347\212\266\346\200\201\357\274\232\345\255\230\346\264\273", Q_NULLPTR));
        p7id->setText(QApplication::translate("gamewidget", "\350\272\253\344\273\275\357\274\232\346\235\221\346\260\221", Q_NULLPTR));
        p7color->setText(QApplication::translate("gamewidget", "\347\211\214\350\211\262\357\274\232\346\234\252\347\237\245", Q_NULLPTR));
        p7canyu->setText(QApplication::translate("gamewidget", "\345\217\202\344\270\216\346\234\254\350\275\256\346\270\270\346\210\217", Q_NULLPTR));
        p7eye->setText(QApplication::translate("gamewidget", "\347\235\201\347\234\274", Q_NULLPTR));
        label_7->setText(QApplication::translate("gamewidget", "\346\234\254\350\275\256\346\212\225\347\273\231\357\274\232", Q_NULLPTR));
        kanpai7->setText(QApplication::translate("gamewidget", "\346\237\245\347\234\213\347\211\214\350\211\262", Q_NULLPTR));
        yincang7->setText(QApplication::translate("gamewidget", "\351\232\220\350\227\217\347\211\214\350\211\262", Q_NULLPTR));
        huancz7->setText(QApplication::translate("gamewidget", "\347\247\273\344\272\244\346\235\221\351\225\277", Q_NULLPTR));
        comboBox7->clear();
        comboBox7->insertItems(0, QStringList()
         << QApplication::translate("gamewidget", "1", Q_NULLPTR)
         << QApplication::translate("gamewidget", "2", Q_NULLPTR)
         << QApplication::translate("gamewidget", "3", Q_NULLPTR)
         << QApplication::translate("gamewidget", "4", Q_NULLPTR)
         << QApplication::translate("gamewidget", "5", Q_NULLPTR)
        );
        pb7->setText(QApplication::translate("gamewidget", "\347\273\223\346\235\237\345\217\221\350\250\200", Q_NULLPTR));
        p1name->setText(QApplication::translate("gamewidget", "player1", Q_NULLPTR));
        p1tou->setText(QString());
        p1alive->setText(QApplication::translate("gamewidget", "\347\212\266\346\200\201\357\274\232\345\255\230\346\264\273", Q_NULLPTR));
        p1id->setText(QApplication::translate("gamewidget", "\350\272\253\344\273\275\357\274\232\346\235\221\346\260\221", Q_NULLPTR));
        p1color->setText(QApplication::translate("gamewidget", "\347\211\214\350\211\262\357\274\232\346\234\252\347\237\245", Q_NULLPTR));
        p1canyu->setText(QApplication::translate("gamewidget", "\345\217\202\344\270\216\346\234\254\350\275\256\346\270\270\346\210\217", Q_NULLPTR));
        p1eye->setText(QApplication::translate("gamewidget", "\347\235\201\347\234\274", Q_NULLPTR));
        label->setText(QApplication::translate("gamewidget", "\346\234\254\350\275\256\346\212\225\347\273\231\357\274\232", Q_NULLPTR));
        yincang1->setText(QApplication::translate("gamewidget", "\351\232\220\350\227\217\347\211\214\350\211\262", Q_NULLPTR));
        kanpai1->setText(QApplication::translate("gamewidget", "\346\237\245\347\234\213\347\211\214\350\211\262", Q_NULLPTR));
        huancz1->setText(QApplication::translate("gamewidget", "\347\247\273\344\272\244\346\235\221\351\225\277", Q_NULLPTR));
        comboBox1->clear();
        comboBox1->insertItems(0, QStringList()
         << QApplication::translate("gamewidget", "1", Q_NULLPTR)
         << QApplication::translate("gamewidget", "2", Q_NULLPTR)
         << QApplication::translate("gamewidget", "3", Q_NULLPTR)
         << QApplication::translate("gamewidget", "4", Q_NULLPTR)
         << QApplication::translate("gamewidget", "5", Q_NULLPTR)
        );
        pb1->setText(QApplication::translate("gamewidget", "\347\273\223\346\235\237\345\217\221\350\250\200", Q_NULLPTR));
        p2name->setText(QApplication::translate("gamewidget", "player2", Q_NULLPTR));
        p2tou->setText(QString());
        p2alive->setText(QApplication::translate("gamewidget", "\347\212\266\346\200\201\357\274\232\345\255\230\346\264\273", Q_NULLPTR));
        p2id->setText(QApplication::translate("gamewidget", "\350\272\253\344\273\275\357\274\232\346\235\221\346\260\221", Q_NULLPTR));
        p2color->setText(QApplication::translate("gamewidget", "\347\211\214\350\211\262\357\274\232\346\234\252\347\237\245", Q_NULLPTR));
        p2canyu->setText(QApplication::translate("gamewidget", "\345\217\202\344\270\216\346\234\254\350\275\256\346\270\270\346\210\217", Q_NULLPTR));
        p2eye->setText(QApplication::translate("gamewidget", "\347\235\201\347\234\274", Q_NULLPTR));
        label_2->setText(QApplication::translate("gamewidget", "\346\234\254\350\275\256\346\212\225\347\273\231\357\274\232", Q_NULLPTR));
        kanpai2->setText(QApplication::translate("gamewidget", "\346\237\245\347\234\213\347\211\214\350\211\262", Q_NULLPTR));
        yincang2->setText(QApplication::translate("gamewidget", "\351\232\220\350\227\217\347\211\214\350\211\262", Q_NULLPTR));
        huancz2->setText(QApplication::translate("gamewidget", "\347\247\273\344\272\244\346\235\221\351\225\277", Q_NULLPTR));
        comboBox2->clear();
        comboBox2->insertItems(0, QStringList()
         << QApplication::translate("gamewidget", "1", Q_NULLPTR)
         << QApplication::translate("gamewidget", "2", Q_NULLPTR)
         << QApplication::translate("gamewidget", "3", Q_NULLPTR)
         << QApplication::translate("gamewidget", "4", Q_NULLPTR)
         << QApplication::translate("gamewidget", "5", Q_NULLPTR)
        );
        pb2->setText(QApplication::translate("gamewidget", "\347\273\223\346\235\237\345\217\221\350\250\200", Q_NULLPTR));
        board->setText(QApplication::translate("gamewidget", "<html><head/><body><p><span style=\" font-size:36pt;\">\347\202\271\345\207\273\345\274\200\345\247\213\346\270\270\346\210\217\350\277\233\350\241\214\346\270\270\346\210\217</span></p></body></html>", Q_NULLPTR));
        zhuyi->setText(QApplication::translate("gamewidget", "<html><head/><body><p><span style=\" color:#ff5500;\">\346\263\250\346\204\217\357\274\201\346\257\217\344\270\252\347\216\251\345\256\266\346\257\217\346\212\212\346\270\270\346\210\217\345\217\252\350\203\275\347\234\213\344\270\200\346\254\241\350\207\252\345\267\261\347\232\204\347\211\214\350\211\262</span></p></body></html>", Q_NULLPTR));
        kanpiao->setText(QApplication::translate("gamewidget", "\344\270\212\345\270\235\347\234\213\347\245\250", Q_NULLPTR));
        pushButton->setText(QApplication::translate("gamewidget", "\345\274\200\345\247\213\346\270\270\346\210\217\n"
"\357\274\210\347\253\236\351\200\211\346\235\221\351\225\277\357\274\211", Q_NULLPTR));
        p8name->setText(QApplication::translate("gamewidget", "player8", Q_NULLPTR));
        p8tou->setText(QString());
        p8alive->setText(QApplication::translate("gamewidget", "\347\212\266\346\200\201\357\274\232\345\255\230\346\264\273", Q_NULLPTR));
        p8id->setText(QApplication::translate("gamewidget", "\350\272\253\344\273\275\357\274\232\346\235\221\346\260\221", Q_NULLPTR));
        p8color->setText(QApplication::translate("gamewidget", "\347\211\214\350\211\262\357\274\232\346\234\252\347\237\245", Q_NULLPTR));
        p8canyu->setText(QApplication::translate("gamewidget", "\345\217\202\344\270\216\346\234\254\350\275\256\346\270\270\346\210\217", Q_NULLPTR));
        p8eye->setText(QApplication::translate("gamewidget", "\347\235\201\347\234\274", Q_NULLPTR));
        label_8->setText(QApplication::translate("gamewidget", "\346\234\254\350\275\256\346\212\225\347\273\231\357\274\232", Q_NULLPTR));
        kanpai8->setText(QApplication::translate("gamewidget", "\346\237\245\347\234\213\347\211\214\350\211\262", Q_NULLPTR));
        yincang8->setText(QApplication::translate("gamewidget", "\351\232\220\350\227\217\347\211\214\350\211\262", Q_NULLPTR));
        huancz8->setText(QApplication::translate("gamewidget", "\347\247\273\344\272\244\346\235\221\351\225\277", Q_NULLPTR));
        comboBox8->clear();
        comboBox8->insertItems(0, QStringList()
         << QApplication::translate("gamewidget", "1", Q_NULLPTR)
         << QApplication::translate("gamewidget", "2", Q_NULLPTR)
         << QApplication::translate("gamewidget", "3", Q_NULLPTR)
         << QApplication::translate("gamewidget", "4", Q_NULLPTR)
         << QApplication::translate("gamewidget", "5", Q_NULLPTR)
        );
        pb8->setText(QApplication::translate("gamewidget", "\347\273\223\346\235\237\345\217\221\350\250\200", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("gamewidget", "\350\256\241\347\245\250\357\274\210\346\235\221\351\225\277\344\270\212\344\273\273\357\274\211", Q_NULLPTR));
        starttalk->setText(QApplication::translate("gamewidget", "\345\274\200\345\247\213\345\217\221\350\250\200", Q_NULLPTR));
        night->setText(QApplication::translate("gamewidget", "\350\277\233\345\244\234\346\231\232", Q_NULLPTR));
        day->setText(QApplication::translate("gamewidget", "\350\277\233\347\231\275\345\244\251", Q_NULLPTR));
        left->setText(QApplication::translate("gamewidget", "\346\235\221\351\225\277\345\267\246\345\217\221\350\250\200", Q_NULLPTR));
        right->setText(QApplication::translate("gamewidget", "\346\235\221\351\225\277\345\217\263\345\217\221\350\250\200", Q_NULLPTR));
        jipiao->setText(QApplication::translate("gamewidget", "\350\256\241\347\245\250\357\274\210\346\224\276\351\200\220\357\274\211", Q_NULLPTR));
        startvote->setText(QApplication::translate("gamewidget", "\346\212\225\347\245\250\345\274\200\345\247\213", Q_NULLPTR));
        close->setText(QApplication::translate("gamewidget", "\346\270\270\346\210\217\347\273\223\346\235\237", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class gamewidget: public Ui_gamewidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GAMEWIDGET_H
