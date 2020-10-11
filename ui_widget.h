/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 5.9.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QGridLayout *gridLayout;
    QStackedWidget *stackedWidget;
    QWidget *cover;
    QVBoxLayout *verticalLayout_4;
    QWidget *widget;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer;
    QLabel *title;
    QSpacerItem *horizontalSpacer_2;
    QWidget *widget_2;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_5;
    QLabel *lunhuiyan;
    QSpacerItem *horizontalSpacer_3;
    QLabel *faguan;
    QSpacerItem *horizontalSpacer_4;
    QLabel *xielunyan;
    QSpacerItem *horizontalSpacer_6;
    QWidget *widget_3;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer_7;
    QPushButton *start;
    QSpacerItem *horizontalSpacer_8;
    QPushButton *over;
    QSpacerItem *horizontalSpacer_9;
    QWidget *rule;
    QVBoxLayout *verticalLayout_3;
    QWidget *widget_4;
    QHBoxLayout *horizontalLayout_4;
    QSpacerItem *horizontalSpacer_10;
    QLabel *title2;
    QSpacerItem *horizontalSpacer_11;
    QWidget *widget_5;
    QHBoxLayout *horizontalLayout_5;
    QLabel *rule2;
    QSpacerItem *horizontalSpacer_12;
    QPushButton *back1;
    QWidget *pick;
    QVBoxLayout *verticalLayout_2;
    QWidget *widget_6;
    QHBoxLayout *horizontalLayout_6;
    QSpacerItem *horizontalSpacer_14;
    QLabel *num;
    QSpacerItem *horizontalSpacer_13;
    QSpinBox *spinBox;
    QSpacerItem *horizontalSpacer_15;
    QWidget *widget_7;
    QHBoxLayout *horizontalLayout_7;
    QSpacerItem *horizontalSpacer_17;
    QPushButton *pushButton;
    QSpacerItem *horizontalSpacer_16;
    QPushButton *pushButton_2;
    QSpacerItem *horizontalSpacer_18;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QStringLiteral("Widget"));
        Widget->resize(1207, 615);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(Widget->sizePolicy().hasHeightForWidth());
        Widget->setSizePolicy(sizePolicy);
        gridLayout = new QGridLayout(Widget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        stackedWidget = new QStackedWidget(Widget);
        stackedWidget->setObjectName(QStringLiteral("stackedWidget"));
        cover = new QWidget();
        cover->setObjectName(QStringLiteral("cover"));
        verticalLayout_4 = new QVBoxLayout(cover);
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setContentsMargins(11, 11, 11, 11);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        widget = new QWidget(cover);
        widget->setObjectName(QStringLiteral("widget"));
        horizontalLayout_3 = new QHBoxLayout(widget);
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalSpacer = new QSpacerItem(411, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);

        title = new QLabel(widget);
        title->setObjectName(QStringLiteral("title"));
        title->setMinimumSize(QSize(300, 50));
        title->setMaximumSize(QSize(300, 50));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\215\216\346\226\207\347\220\245\347\217\200"));
        font.setPointSize(28);
        title->setFont(font);

        horizontalLayout_3->addWidget(title);

        horizontalSpacer_2 = new QSpacerItem(410, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_2);


        verticalLayout_4->addWidget(widget);

        widget_2 = new QWidget(cover);
        widget_2->setObjectName(QStringLiteral("widget_2"));
        horizontalLayout_2 = new QHBoxLayout(widget_2);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalSpacer_5 = new QSpacerItem(47, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_5);

        lunhuiyan = new QLabel(widget_2);
        lunhuiyan->setObjectName(QStringLiteral("lunhuiyan"));
        lunhuiyan->setMinimumSize(QSize(250, 200));
        lunhuiyan->setMaximumSize(QSize(250, 200));
        lunhuiyan->setPixmap(QPixmap(QString::fromUtf8(":/new/prefix1/lunhuiyan.jpg")));
        lunhuiyan->setScaledContents(true);

        horizontalLayout_2->addWidget(lunhuiyan);

        horizontalSpacer_3 = new QSpacerItem(47, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_3);

        faguan = new QLabel(widget_2);
        faguan->setObjectName(QStringLiteral("faguan"));
        faguan->setMinimumSize(QSize(0, 0));
        faguan->setMaximumSize(QSize(400, 400));
        faguan->setPixmap(QPixmap(QString::fromUtf8(":/new/prefix1/judger.jpg")));
        faguan->setScaledContents(true);

        horizontalLayout_2->addWidget(faguan);

        horizontalSpacer_4 = new QSpacerItem(46, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_4);

        xielunyan = new QLabel(widget_2);
        xielunyan->setObjectName(QStringLiteral("xielunyan"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(xielunyan->sizePolicy().hasHeightForWidth());
        xielunyan->setSizePolicy(sizePolicy1);
        xielunyan->setMinimumSize(QSize(250, 200));
        xielunyan->setMaximumSize(QSize(250, 200));
        xielunyan->setPixmap(QPixmap(QString::fromUtf8(":/new/prefix1/xielunyan.gif")));
        xielunyan->setScaledContents(true);

        horizontalLayout_2->addWidget(xielunyan);

        horizontalSpacer_6 = new QSpacerItem(47, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_6);


        verticalLayout_4->addWidget(widget_2);

        widget_3 = new QWidget(cover);
        widget_3->setObjectName(QStringLiteral("widget_3"));
        horizontalLayout = new QHBoxLayout(widget_3);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer_7 = new QSpacerItem(235, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_7);

        start = new QPushButton(widget_3);
        start->setObjectName(QStringLiteral("start"));
        start->setMinimumSize(QSize(200, 50));
        start->setMaximumSize(QSize(200, 50));
        QFont font1;
        font1.setFamily(QStringLiteral("AcadEref"));
        font1.setPointSize(16);
        start->setFont(font1);

        horizontalLayout->addWidget(start);

        horizontalSpacer_8 = new QSpacerItem(234, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_8);

        over = new QPushButton(widget_3);
        over->setObjectName(QStringLiteral("over"));
        QSizePolicy sizePolicy2(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(200);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(over->sizePolicy().hasHeightForWidth());
        over->setSizePolicy(sizePolicy2);
        over->setMinimumSize(QSize(200, 50));
        over->setMaximumSize(QSize(200, 50));
        QFont font2;
        font2.setFamily(QStringLiteral("AcadEref"));
        font2.setPointSize(18);
        over->setFont(font2);
        over->setFocusPolicy(Qt::WheelFocus);

        horizontalLayout->addWidget(over);

        horizontalSpacer_9 = new QSpacerItem(235, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_9);


        verticalLayout_4->addWidget(widget_3);

        stackedWidget->addWidget(cover);
        rule = new QWidget();
        rule->setObjectName(QStringLiteral("rule"));
        verticalLayout_3 = new QVBoxLayout(rule);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        widget_4 = new QWidget(rule);
        widget_4->setObjectName(QStringLiteral("widget_4"));
        horizontalLayout_4 = new QHBoxLayout(widget_4);
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalSpacer_10 = new QSpacerItem(467, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_10);

        title2 = new QLabel(widget_4);
        title2->setObjectName(QStringLiteral("title2"));
        title2->setFont(font);

        horizontalLayout_4->addWidget(title2);

        horizontalSpacer_11 = new QSpacerItem(466, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_11);


        verticalLayout_3->addWidget(widget_4);

        widget_5 = new QWidget(rule);
        widget_5->setObjectName(QStringLiteral("widget_5"));
        horizontalLayout_5 = new QHBoxLayout(widget_5);
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        rule2 = new QLabel(widget_5);
        rule2->setObjectName(QStringLiteral("rule2"));
        QFont font3;
        font3.setFamily(QString::fromUtf8("\345\215\216\346\226\207\347\220\245\347\217\200"));
        font3.setPointSize(12);
        rule2->setFont(font3);

        horizontalLayout_5->addWidget(rule2);

        horizontalSpacer_12 = new QSpacerItem(25, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_12);

        back1 = new QPushButton(widget_5);
        back1->setObjectName(QStringLiteral("back1"));
        back1->setFont(font1);

        horizontalLayout_5->addWidget(back1);


        verticalLayout_3->addWidget(widget_5);

        stackedWidget->addWidget(rule);
        pick = new QWidget();
        pick->setObjectName(QStringLiteral("pick"));
        verticalLayout_2 = new QVBoxLayout(pick);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        widget_6 = new QWidget(pick);
        widget_6->setObjectName(QStringLiteral("widget_6"));
        horizontalLayout_6 = new QHBoxLayout(widget_6);
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        horizontalSpacer_14 = new QSpacerItem(176, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_14);

        num = new QLabel(widget_6);
        num->setObjectName(QStringLiteral("num"));
        num->setFont(font);

        horizontalLayout_6->addWidget(num);

        horizontalSpacer_13 = new QSpacerItem(176, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_13);

        spinBox = new QSpinBox(widget_6);
        spinBox->setObjectName(QStringLiteral("spinBox"));
        spinBox->setMinimumSize(QSize(200, 40));
        spinBox->setMinimum(5);
        spinBox->setMaximum(8);

        horizontalLayout_6->addWidget(spinBox);

        horizontalSpacer_15 = new QSpacerItem(176, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_15);


        verticalLayout_2->addWidget(widget_6);

        widget_7 = new QWidget(pick);
        widget_7->setObjectName(QStringLiteral("widget_7"));
        horizontalLayout_7 = new QHBoxLayout(widget_7);
        horizontalLayout_7->setSpacing(6);
        horizontalLayout_7->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        horizontalSpacer_17 = new QSpacerItem(274, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_17);

        pushButton = new QPushButton(widget_7);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        QFont font4;
        font4.setFamily(QStringLiteral("AcadEref"));
        font4.setPointSize(20);
        pushButton->setFont(font4);

        horizontalLayout_7->addWidget(pushButton);

        horizontalSpacer_16 = new QSpacerItem(274, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_16);

        pushButton_2 = new QPushButton(widget_7);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setFont(font4);

        horizontalLayout_7->addWidget(pushButton_2);

        horizontalSpacer_18 = new QSpacerItem(274, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_18);


        verticalLayout_2->addWidget(widget_7);

        stackedWidget->addWidget(pick);

        gridLayout->addWidget(stackedWidget, 0, 0, 1, 1);


        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QApplication::translate("Widget", "Widget", Q_NULLPTR));
        title->setText(QApplication::translate("Widget", "<html><head/><body><p><span style=\" color:#55ffff;\">        \347\272\242\351\273\221\345\244\234\346\263\225\345\256\230</span></p></body></html>", Q_NULLPTR));
        lunhuiyan->setText(QString());
        faguan->setText(QString());
        xielunyan->setText(QString());
        start->setText(QApplication::translate("Widget", "\345\274\200\345\247\213\346\270\270\346\210\217", Q_NULLPTR));
        over->setText(QApplication::translate("Widget", "\351\200\200\345\207\272\346\270\270\346\210\217", Q_NULLPTR));
        title2->setText(QApplication::translate("Widget", "<html><head/><body><p><span style=\" color:#ff0000;\">\346\270\270\346\210\217\350\247\204\345\210\231</span></p></body></html>", Q_NULLPTR));
        rule2->setText(QApplication::translate("Widget", "<html><head/><body><p><span style=\" color:#ff0000;\">\346\270\270\346\210\217\350\247\204\345\210\231\357\274\232\357\274\210\345\237\272\346\234\254\350\246\201\346\261\202\357\274\211</span></p><p><span style=\" color:#ff0000;\">\350\256\276\345\256\232\347\216\251\345\256\266\344\272\272\346\225\260\357\274\232n</span></p><p><span style=\" color:#ff0000;\">\350\213\245\347\216\251\345\256\266\344\272\272\346\225\260\344\270\272\345\201\266\346\225\260\357\274\214\345\210\231\347\272\242\347\211\214\350\272\253\344\273\275\344\270\216\351\273\221\347\211\214\350\272\253\344\273\275\345\220\204\345\215\240\344\270\200\345\215\212\357\274\233\350\213\245\344\270\272\345\245\207\346\225\260\357\274\214\345\210\231\347\272\242\347\211\214\350\272\253\344\273\275\345\244\2321\357\274\233</span></p><p><span style=\" color:#ff0000;\">\344\275\277\347\224\250\346\214\207\345\256\232\350\214\203\345\233\264\347\232\204\351\232\217\346\234\272\346\225\260\346\236\204\351\200\240\346\226\271\346\263\225\357\274\214\344"
                        "\276\235\346\254\241\346\236\204\351\200\240\345\207\2721-n\344\271\213\351\227\264\344\270\215\351\207\215\345\244\215\347\232\204\351\232\217\346\234\272\346\225\260\357\274\214</span></p><p><span style=\" color:#ff0000;\">\346\214\211\347\205\247\345\207\272\347\216\260\347\232\204\351\232\217\346\234\272\346\225\260\347\273\231\350\257\245\347\216\251\345\256\266\345\217\221\350\272\253\344\273\275\357\274\214\350\257\245\347\216\251\345\256\266\347\232\204\350\272\253\344\273\275\351\232\217\346\234\272\344\275\206\346\200\273\344\275\223\346\273\241\350\266\263\350\247\204\345\210\2312\347\232\204\344\272\272\346\225\260\345\210\206\351\205\215\343\200\202</span></p><p><span style=\" color:#ff0000;\">\347\254\254\344\270\200\345\244\251\357\274\214\344\273\2161-n\345\217\267\347\216\251\345\256\266\351\241\272\345\272\217\345\217\221\350\250\200\357\274\214\351\234\200\350\246\201\346\230\276\347\244\272\345\275\223\345\211\215\345\217\221\350\250\200\347\216\251\345\256\266\344\275\215\347\275\256\343\200"
                        "\202</span></p><p><span style=\" color:#ff0000;\">\344\270\200\350\275\256\345\217\221\350\250\200\345\220\216\344\273\2161-n\345\217\267\351\241\272\345\272\217\346\212\225\347\245\250\351\200\211\344\270\276\346\235\221\351\225\277\357\274\214\345\276\227\347\245\250\346\234\200\345\244\232\347\232\204\347\216\251\345\256\266\345\275\223\351\200\211\346\235\221\351\225\277\357\274\214</span></p><p><span style=\" color:#ff0000;\">\350\213\245\346\200\273\344\272\272\346\225\260\344\270\272\345\201\266\346\225\260\357\274\214\346\235\221\351\225\277\346\213\245\346\234\2111.5\347\245\250\357\274\214\346\200\273\344\272\272\346\225\260\344\270\272\345\245\207\346\225\260\357\274\214\346\235\221\351\225\277\346\213\245\346\234\2110.5\347\245\250\343\200\202</span></p><p><span style=\" color:#ff0000;\">\347\231\275\345\244\251\357\274\232\346\235\221\351\225\277\345\206\263\345\256\232\344\273\216\346\235\221\351\225\277\345\267\246\350\276\271\346\210\226\350\200\205\345\217\263\350\276\271\345\274\200\345\247\213"
                        "\345\217\221\350\250\200\347\232\204\351\241\272\345\272\217\357\274\214\345\217\221\350\250\200\351\241\272\345\272\217\346\236\204\346\210\220\344\270\272k-1~\346\235\221\351\225\277k~k+1\347\232\204\345\233\236\347\216\257\357\274\214</span></p><p><span style=\" color:#ff0000;\">\346\234\200\345\220\216\344\273\2161-n\345\217\267\347\216\251\345\256\266\350\277\233\350\241\214\345\214\277\345\220\215\346\212\225\347\245\250\357\274\214\345\276\227\347\245\250\346\234\200\345\244\232\347\232\204\344\272\272\350\242\253\346\224\276\351\200\220\345\207\272\346\270\270\346\210\217\357\274\214\345\271\266\344\270\224\346\230\276\347\244\272\350\272\253\344\273\275\357\274\214\350\213\245\346\235\221\351\225\277\350\242\253\346\224\276\351\200\220\345\210\231\350\246\201\347\247\273\344\272\244\344\270\213\344\270\200\344\273\273\346\235\221\351\225\277\343\200\202</span></p><p><span style=\" color:#ff0000;\">\345\244\234\346\231\232\357\274\232\351\232\217\346\234\272\350\277\233\345\205\245\347\272\242\345\244\234"
                        "\346\210\226\351\273\221\345\244\234\357\274\214\346\211\200\346\234\211\347\216\251\345\256\266\345\217\257\344\273\245\350\207\252\347\224\261\347\235\201\347\234\274\343\200\202</span></p><p><span style=\" color:#ff0000;\">\347\272\242\345\244\234\346\227\266\357\274\232\347\235\201\347\234\274\347\232\204\347\272\242\347\211\214\344\270\272\345\201\266\346\225\260\345\210\231\347\254\254\344\272\214\345\244\251\346\235\221\351\225\277\346\213\245\346\234\2111\347\245\250\357\274\233\351\273\221\345\244\234\346\227\266\357\274\232\347\235\201\347\234\274\347\232\204\351\273\221\347\211\214\344\270\272\345\201\266\346\225\260\345\210\231\347\254\254\344\272\214\345\244\251\346\235\221\351\225\277\346\213\245\346\234\2111\347\245\250</span></p><p><span style=\" color:#ff0000;\">\346\270\270\346\210\217\347\273\223\346\235\237\357\274\232\346\211\200\346\234\211\347\232\204\347\272\242\347\211\214\346\210\226\350\200\205\346\211\200\346\234\211\347\232\204\351\273\221\347\211\214\350\242\253\346\224\276\351\200"
                        "\220\343\200\202</span></p><p><br/></p></body></html>", Q_NULLPTR));
        back1->setText(QApplication::translate("Widget", "\345\267\262\350\257\273\345\256\214", Q_NULLPTR));
        num->setText(QApplication::translate("Widget", "<html><head/><body><p><span style=\" color:#ff0000;\">\350\257\267\351\200\211\346\213\251\346\270\270\346\210\217\344\272\272\346\225\260\357\274\232</span></p></body></html>", Q_NULLPTR));
        pushButton->setText(QApplication::translate("Widget", "\351\230\205\350\257\273\350\247\204\345\210\231", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("Widget", "\351\200\211\346\213\251\345\256\214\346\210\220", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
