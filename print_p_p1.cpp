#include <iostream>

int main() {
    // 定义指针p, 指向值为10的存储区域
    int *p = new int(10);
    // 定义指针p1, 指向值为100的存储区域
    int *p1 = new int(100);

    // 修改存储区域的值
    *p = 20;
    *p1 = 200;

    // 打印p和p1的值及指向内存指针存储的值
    std::cout << "p address: " << p << ", value at p: " << *p << std::endl;
    std::cout << "p1 address: " << p1 << ", value at p1: " << *p1 << std::endl;

    // 将p的值赋值给p1
    p1 = p;

    // 打印赋值后的p和p1的值
    std::cout << "After assignment:" << std::endl;
    std::cout << "p address: " << p << ", value at p: " << *p << std::endl;
    std::cout << "p1 address: " << p1 << ", value at p1: " << *p1 << std::endl;

    // 释放动态分配的内存
    delete p;

    return 0;
}
