//
// Created by 337238 on 2022/7/6.
//
#include <iostream>
#include <forward_list>

void forward_list_test() {
    std::cout << "[forward_list tutorial]" << std::endl;
    std::forward_list<int> list = {0, 1, 2};

    //增，只能头插
    list.push_front(-1);
    list.emplace_front(-2);
    list.emplace_after(list.begin(),-3);

    std::cout<<"after push_front and emplace :";
    for (auto item:list) {
        std::cout << item << " ";
    }
    std::cout << std::endl;

    //删，只能删除头部元素
    list.pop_front();
    std::cout<<"after push_front : ";
    for (auto item:list) {
        std::cout << item << " ";
    }
    std::cout << std::endl;


    //排序
    list.sort([](int i1,int i2){
        return i1>i2;
    });

    std::cout<<"after sort : ";
    for (auto item:list) {
        std::cout << item << " ";
    }
    std::cout << std::endl;

    std::cout << std::endl;

}