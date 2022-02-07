#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_buttonAdd_clicked();

    void on_buttonMinus_clicked();

    void on_buttonDev_clicked();

    void on_buttonMul_clicked();

private:
    Ui::MainWindow *ui;
};

double sum(double, double);
double minus(double, double);
double multiply(double, double);
double devision(double, double);
double solve(double, double, char);
#endif // MAINWINDOW_H
