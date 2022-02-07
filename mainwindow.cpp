#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "QDebug"



double sum(double first, double second)
{
    return first + second;
}

void sumTest(){
    double first = 5;
    double second = 2;
    double result = 7;
    if(result == sum(first,second))
    {
        qDebug()<<"Sum test is ok";
    }
    else
    {
        qDebug()<<"Sum test is bad";
    }
}

double minus(double first, double second)
{
    return first - second;
}

void minusTest(){
    double first = 5;
    double second = 2;
    double result = 3;
    if(result == minus(first,second))
    {
        qDebug()<<"Minus test is ok";
    }
    else
    {
        qDebug()<<"Minus test is bad";
    }
}

double multiply(double first, double second)
{
    return first * second;
}
void multiplyTest(){
    double first = 5;
    double second = 2;
    double result = 10;
    if(result == multiply(first,second))
    {
        qDebug()<<"Multiply test is ok";
    }
    else
    {
        qDebug()<<"Multiply test is bad";
    }
}

double devision(double first, double second)
{
    if(second == 0)
    {
        return 0;
    }
    return first / second;
}

void devisionTest(){
    double first = 10;
    double second = 2;
    double result = 5;
    if(result == devision(first,second))
    {
        qDebug()<<"Devision test is ok";
    }
    else
    {
        qDebug()<<"Devision test is bad";
    }
}

double solve(double first, double second, char op)
{
    double result = 0;
    switch (op) {
    case '+':
        result = sum(first, second);
        break;
    case '-':
        result = minus(first, second);
        break;
    case '*':
        result = multiply(first, second);
        break;
    case '/':
        result = devision(first, second);
        break;
    default:
        break;
    }
    return result;
}

void solveTest(){
    double first = 10;
    double second = 2;
    double result = 20;
    if(result == solve(first, second, '*'))
    {
        qDebug()<<"Solve method test is ok";
    }
    else
    {
        qDebug()<<"Solve method test is bad";
    }
}

double solveNumberFromUI(QLineEdit *first, QLineEdit *second, char op)
{
    double firstNumber = first->text().toDouble();
    double secondNumber = second->text().toDouble();
    return solve(firstNumber, secondNumber, op);
}

void MainWindow::on_buttonAdd_clicked()
{
    double result = solveNumberFromUI(ui->numberOneEdit, ui->numberTwoEdit, '+');
    ui->numberResultEdit->setText(QString::number(result));
}

void MainWindow::on_buttonMinus_clicked()
{
    double result = solveNumberFromUI(ui->numberOneEdit, ui->numberTwoEdit, '-');
    ui->numberResultEdit->setText(QString::number(result));
}

void MainWindow::on_buttonDev_clicked()
{
    double result = solveNumberFromUI(ui->numberOneEdit, ui->numberTwoEdit, '/');
    ui->numberResultEdit->setText(QString::number(result));
}

void MainWindow::on_buttonMul_clicked()
{
    double result = solveNumberFromUI(ui->numberOneEdit, ui->numberTwoEdit, '*');
    ui->numberResultEdit->setText(QString::number(result));
}


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    //sumTest();
    //minusTest();
    //multiplyTest();
    //devisionTest();
    //solveTest();
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}
