#ifndef TEST_MATH_H
#define TEST_MATH_H

#include<QObject>

class Test_math : public QObject
{
    Q_OBJECT
public:
    explicit Test_math(QObject *parent = 0);
private slots:
    void test_sum();
    void test_minus();
    void test_multiply();
    void test_devision();
    void test_solve();
};

#endif // TEST_MATH_H
