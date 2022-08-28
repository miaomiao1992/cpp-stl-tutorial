//
// Created by 337238 on 2022/7/6.
//
#include <vector>
#include <algorithm>
#include <iostream>

void vector_test() {
    std::cout << "[vector tutorial]" << std::endl;

    //初始化
    std::vector<int> vec = {3, 2, 1};

    //增
    vec.push_back(4);
    std::cout << "push_back 4; ";
    vec.push_back(5);
    std::cout << "push_back 5;" << std::endl << "vec after push_back: size =" << vec.size() << "; ";
    for (int i:vec)
        std::cout << i << " ";
    std::cout << std::endl;

    //删除第1个元素
    vec.erase(std::begin(vec) + 0);
    std::cout << "erase the first element: ";
    for (int i:vec)
        std::cout << i << " ";
    std::cout << std::endl;

    //修改第1个元素
    vec[0] = 99;
    std::cout << "update the first element to 99: ";
    for (int i:vec)
        std::cout << i << " ";
    std::cout << std::endl;

    //修改方法2
    vec.at(0) = 100;
    std::cout << "update the first element to 100: ";
    for (int i:vec)
        std::cout << i << " ";
    std::cout << std::endl;

    //修改方法3
    *(vec.begin() + 1) = 101;
    std::cout << "update the second element to 101: ";
    for (int i:vec)
        std::cout << i << " ";
    std::cout << std::endl;

    //排序
    std::cout << "vector before sort: ";
    for (int i:vec)
        std::cout << i << " ";
    std::cout << std::endl;

    std::sort(vec.begin(), vec.end(), [](int i1, int i2) {
        return i1 < i2;
    });

    std::cout << "vector after sort asc: ";
    for (int i:vec)
        std::cout << i << " ";

    std::cout << std::endl << std::endl;
}