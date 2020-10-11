#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include"gamewidget.h"
namespace Ui {
class Widget;
}

class Widget : public QWidget
{
    Q_OBJECT

public:
    explicit Widget(QWidget *parent = 0);
    ~Widget();

private:
    Ui::Widget *ui;
   gamewidget gwidget;
   protected:
    void paintEvent(QPaintEvent*);
private slots:

    void on_over_clicked();
    void on_start_clicked();
    void on_pushButton_clicked();
    void on_back1_clicked();
    void on_pushButton_2_clicked();
};

#endif // WIDGET_H
