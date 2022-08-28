//
// Created by 337238 on 2022/7/6.
//
#include <iostream>
#include <queue>
void queue_test(){
    std::cout << "[queue tutorial]" << std::endl;

    //初始化
    std::queue<int> queue;

    //增
    queue.push(1);
    queue.emplace(2);
    std::cout << "after push and emplace: ";

    //先进先出
    for (int i = 0; i < queue.size()-1; i++){
        std::cout << queue.front() << " ";
        queue.pop();
    }
    std::cout << queue.front() << " ";

    std::cout << std::endl;

    std::cout << std::endl;

}