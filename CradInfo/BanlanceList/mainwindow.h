#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QtSql/QSqlTableModel>
#include <QPrinter>
namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_pushButton_4_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_6_clicked();

    void on_pushButton_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_7_clicked();

    void on_pushButton_8_clicked();

    void on_pushButton_9_clicked();

private:
    Ui::MainWindow *ui;
    void init();
    QSqlTableModel *model;
    void setui();
    int Total_Pages;
    int Current_Pages;
    int Total_RecrodCount;     //总记录数
    enum{PageRecordCount = 12};//每页显示记录数
    void Get_Pages();
    void Update_Status();//设置按钮是否可用;
    void RecordQuery(int limitIndex);
    void printhtmltoPdf(const QString & html);//打印html到pdf
    void printhtmltoPrinter( const QString & html);//打印html到打印机
    void printData();//打印数据
};

#endif // MAINWINDOW_H
