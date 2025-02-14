#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include"funcdialog.h"
namespace Ui {
class Widget;
}

class Widget : public QWidget
{
    Q_OBJECT

public:
    explicit Widget(QWidget *parent = nullptr);
    ~Widget();

private slots:
    void on_pushButton_clicked();

private:
    Ui::Widget *ui;
    int times=0;
    FuncDialog *func=new FuncDialog(this);
};

#endif // WIDGET_H
