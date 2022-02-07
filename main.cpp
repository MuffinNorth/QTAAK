#include "mainwindow.h"
#include <QApplication>
#include <QtTest/QTest>
#include "test_math.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QTest::qExec(new Test_math);
    MainWindow w;
    w.show();

    return a.exec();
}
