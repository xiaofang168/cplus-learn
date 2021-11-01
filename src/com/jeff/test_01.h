//
// Created by didi on 2021/11/1.
//
// 如果没有定义头文件则定义头文件，可以防止头文件被多次编译（文件标识符）
#ifndef TEST_TEST_01_H
#define TEST_TEST_01_H

// 定义接口
class CA {
private:
    double r;
public:
    CA();//构造函数
    int ca_var;

    int add(int a, int b);

    int add(int a);
};

// 声明结构体
struct Student {
    int a = 10;
};

#endif //TEST_TEST_01_H
