#include <QtTest/QTest>
#include "test_math.h"
#include "mainwindow.h"


Test_math::Test_math(QObject *parent) : QObject(parent)
{
}

void Test_math::test_sum()
{
    QCOMPARE(sum(1,1), 2);
    QCOMPARE(sum(-5,0), -5);
    QCOMPARE(sum(2,2), 4);
    QCOMPARE(sum(100,111), 211);
    QCOMPARE(sum(-1,1), 0);
}

void Test_math::test_minus(){
    QCOMPARE(minus(1,1), 0);
    QCOMPARE(minus(5,2), 3);
}

void Test_math::test_devision(){
    QCOMPARE(devision(10,2), 5);
    QCOMPARE(devision(15,3), 5);
    QCOMPARE(devision(100,5), 20);
}

void Test_math::test_multiply(){
    QCOMPARE(multiply(2,2), 4);
    QCOMPARE(multiply(-1,1), -1);
}

void Test_math::test_solve(){
    QCOMPARE(solve(1,1, '+'), 2);
    QCOMPARE(solve(10,1, '-'), 9);
    QCOMPARE(solve(5,3, '*'), 15);
    QCOMPARE(solve(8,4, '/'), 2);
}
