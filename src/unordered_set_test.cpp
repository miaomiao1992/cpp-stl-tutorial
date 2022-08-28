//
// Created by 337238 on 2022/7/6.
//

#include <unordered_set>
#include <iostream>
#include <string>

void unordered_set_test() {
    std::cout << "[unordered_set]" << std::endl;
    //初始化
    std::unordered_set<std::string> set = {"0", "1", "2"};

    //增
    set.emplace("3");

    for (auto item:set)
        std::cout << item << ";";
    std::cout << std::endl;

    //删除方法1
    set.erase("0");
    for (auto item:set)
        std::cout << item << ";";
    std::cout << std::endl;

    //删除方法2
    set.emplace("0");
    set.erase(set.find("0"));
    for (auto item:set)
        std::cout << item << ";";
    std::cout << std::endl;

    std::cout << std::endl << std::endl;


}