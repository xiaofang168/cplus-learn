#include <iostream>
#include "test_01.h"

using namespace std;

int main() {
    // new的话需要手动调用delete释放内存
    CA ca;
    int a = ca.add(2, 8);
    Student student;
    std::cout << student.a << std::endl;
    cout << a << endl;
    cout << "Hello, World!" << endl;
    return 0;
}
