#ifndef GAMEWIDGET_H
#define GAMEWIDGET_H

#include <QWidget>


namespace Ui {
class gamewidget;
}

class gamewidget : public QWidget
{
    Q_OBJECT

public:
    explicit gamewidget(QWidget *parent = 0);
    ~gamewidget();

private slots:


    void on_pb1_clicked();

    void on_next_clicked();

    void on_pb2_clicked();

    void on_pb3_clicked();

    void on_pb4_clicked();

    void on_pb5_clicked();

    void on_pb6_clicked();

    void on_pb7_clicked();

    void on_pb8_clicked();

    void on_pushButton_clicked();



    void on_kanpai1_clicked();

    void on_yincang1_clicked();

    void on_kanpai2_clicked();



    void on_yincang2_clicked();

    void on_kanpai3_clicked();

    void on_yincang3_clicked();

    void on_kanpai4_clicked();

    void on_yincang4_clicked();

    void on_kanpai5_clicked();

    void on_yincang5_clicked();

    void on_kanpai6_clicked();

    void on_yincang6_clicked();

    void on_kanpai7_clicked();

    void on_yincang7_clicked();


    void on_kanpai8_clicked();

    void on_yincang8_clicked();
    void on_kanpiao_clicked();




    void on_pushButton_2_clicked();

    void on_starttalk_clicked();

    void on_p1eye_clicked();

    void on_p2eye_clicked();

    void on_night_clicked();

    void on_p3eye_clicked();

    void on_p4eye_clicked();

    void on_p5eye_clicked();

    void on_p6eye_clicked();

    void on_p7eye_clicked();

    void on_p8eye_clicked();

    void on_day_clicked();

    void on_left_clicked();

    void on_jipiao_clicked();

    void on_startvote_clicked();

    void on_close_clicked();

    void on_right_clicked();

    void on_huancz1_clicked();

    void on_huancz2_clicked();

    void on_huancz3_clicked();

    void on_huancz4_clicked();

    void on_huancz5_clicked();

    void on_huancz6_clicked();

    void on_huancz7_clicked();

    void on_huancz8_clicked();

private:
    Ui::gamewidget *ui;
};

#endif // GAMEWIDGET_H
