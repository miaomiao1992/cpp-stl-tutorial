//
// Created by 337238 on 2022/7/6.
//
#include <unordered_map>
#include <iostream>
#include <string>

void unordered_map_test() {
    std::cout << "[unordered_map tutorial]" << std::endl;
    std::unordered_map<std::string, int> map;

    //增
    map.insert(std::make_pair("111", 1));
    map.insert({"222", 2});
    map.emplace("333", 3);

    std::cout << "after insert and emplace:";
    for (auto iter:map)
        std::cout << iter.first << "->" << iter.second << "; ";

    std::cout << std::endl;

    //删除
    map.erase("111");
    std::cout << "after erase element of key \"111\":";
    for (auto iter:map)
        std::cout << iter.first << "->" << iter.second << "; ";

    std::cout << std::endl;

    //修改元素
    map["222"] = 3;//写法1
    std::cout << "after update the value of key\"222\" to 3 : " << map["222"];
    std::cout << std::endl;

    (*map.find("222")).second=4;//写法2
    std::cout << "after update the value of key\"222\" to 4 : " << map["222"];
    std::cout << std::endl;

    map.find("222")->second=5;//写法2
    std::cout << "after update the value of key\"222\" to 5 : " << map["222"];

    std::cout << std::endl<<std::endl;
}
