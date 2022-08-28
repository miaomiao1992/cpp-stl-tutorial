//
// Created by 337238 on 2022/7/6.
//
#include <iostream>
#include <list>

//骚操作，你懂的，性能堪忧
namespace std {
    template<class T>
    T &get(std::list<T> &list, size_t index) {
        auto iter = list.begin();
        for (int i = 0; i < index; i++) {
            iter++;
        }
        return *iter;
    }
}


void list_test() {
    std::cout << "[list tutorial]" << std::endl;

    //初始化
    std::list<int> list = {0, 1, 2};

    //增，不支持随机位置插入，只能头插或者尾插
    list.push_front(-1);
    list.push_back(3);
    list.emplace_back(4);
    list.emplace(list.begin(), -2);
    list.emplace_front(-3);
    list.insert(list.begin(), -4);

    std::cout << "after push_front , push_back and emplace : ";
    for (auto item:list) {
        std::cout << item << " ";
    }
    std::cout << std::endl;

    //删除1
    list.erase(list.begin());
    std::cout << "after erase the first element : ";
    for (auto item:list) {
        std::cout << item << " ";
    }
    std::cout << std::endl;

    //删除2
    list.pop_back();
    list.pop_front();
    std::cout << "after erase the first and the last element : ";
    for (auto item:list) {
        std::cout << item << " ";
    }
    std::cout << std::endl;

    //遍历读取
    std::cout << "遍历读取:";
    for (auto iter = list.begin(); iter != list.end(); iter++) {
        std::cout << *iter << " ";
    }
    std::cout << std::endl;

    //随机读取，自己封装一下，不到万不得已，不要使用
    std::cout << "the first element : " << std::get(list, 0) << std::endl;
    std::cout << "the second element : " << std::get(list, 1) << std::endl;

    //随机修改，自己封装一下，不到万不得已，不要使用
    std::get(list, 0) = -99;
    std::cout << "after update : ";
    for (auto iter = list.begin(); iter != list.end(); iter++) {
        std::cout << *iter << " ";
    }
    std::cout << std::endl;

    std::cout << std::endl;
}
