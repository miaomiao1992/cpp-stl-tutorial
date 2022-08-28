//
// Created by 337238 on 2022/7/6.
//
#include <iostream>
#include <deque>

void deque_test() {
    std::cout << "[deque tutorial]" << std::endl;

    //初始化
    std::deque<int> deque = {1, 2, 3};

    //在尾部添加元素
    deque.push_back(4);
    deque.emplace_back(5);//右值引用，完美转发，性能更牛逼

    std::cout << "after push_back and emplace_back: ";
    for (int i = 0; i < deque.size(); i++)
        std::cout << deque.at(i) << " ";
    std::cout << std::endl;

    //在任意位置添加元素
    deque.insert(deque.begin() + 0, 0);//装逼写法
    std::cout << "after insert: ";
    for (int i = 0; i < deque.size(); i++)
        std::cout << deque.at(i) << " ";
    std::cout << std::endl;

    //删除元素
    deque.erase(deque.begin() + 0);
    std::cout << "after erase the element of index 0: ";
    for (int i = 0; i < deque.size(); i++)
        std::cout << deque.at(i) << " ";
    std::cout << std::endl;

    //修改元素
    deque.at(0)=100;
    std::cout << "after update the element of index 0 to 100: ";
    for (int i = 0; i < deque.size(); i++)
        std::cout << deque.at(i) << " ";
    std::cout << std::endl;

    //在头部添加元素
    deque.push_front(-1);
    std::cout << "after push_front -1:";
    for (int i = 0; i < deque.size(); i++)
        std::cout << deque.at(i) << " ";
    std::cout << std::endl;

    //删除元素
    deque.pop_back();//弹出尾部元素
    deque.pop_front();//弹出头部元素

    std::cout << "after pop_back and pop_front: ";
    for(auto item:deque)
       std::cout<<item<<" ";
    std::cout << std::endl;

    std::cout << std::endl;
}