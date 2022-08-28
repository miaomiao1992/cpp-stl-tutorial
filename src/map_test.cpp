//
// Created by 337238 on 2022/7/6.
//
#include <map>
#include <string>
#include <iostream>
#include <algorithm>
#include <functional>

void map_test() {
    // system("chcp 65001");

    std::cout << "[map tutorial]" << std::endl;

    //初始化
    std::map<std::string, int> map = {{"111", 1}};

    //增
    map.insert(std::make_pair("99", 99));//啰嗦写法
    map.insert({"000", 0});//简洁写法
    map.insert(std::pair("222", 2));
    map.insert(std::make_pair("333", 2));
    map.emplace("444", 4);//右值引用，完美转发，性能更牛逼

    std::cout << "after insert map key and value:";
    for (auto iter:map)
        std::cout << iter.first << "->" << iter.second << "; ";
    std::cout << std::endl;

    //删
    map.erase("000");//会返回1
    std::cout << "after erase map key and value:";
    for (auto iter:map)
        std::cout << iter.first << "->" << iter.second << "; ";
    std::cout << std::endl;

    //改
    map["333"] = 4;//写法1
    std::cout <<"after update the value of index \"333\" to 3 :"<<map["333"]<<std::endl;

    (* map.find("333") ).second=5;//写法2
    std::cout <<"after update the value of index \"333\" to 5 :"<<map["333"]<<std::endl;

    map.find("333")->second=6;//写法3
    std::cout <<"after update the value of index \"333\" to 6 :"<<map["333"]<<std::endl;

    //查
    if (map.end() != map.find("333")) {
        std::cout << "after update find key and value :333->" << map.find("333")->second << std::endl;
    }

    if (map.end() != map.find("222"))
        std::cout << "find key and value :222" << "->" << map.find("222")->second << std::endl;
    else
        std::cout << "cannot find key :222" << std::endl;


    std::cout << "traversal output method 1" << std::endl;
    for (auto iter = map.begin(); iter != map.end(); iter++) {
        std::cout << iter->first << "->" << iter->second << ";";
    }

    std::cout << std::endl;
    std::cout << "traversal output method 2" << std::endl;
    for (auto iter:map)
        std::cout << iter.first << "->" << iter.second << ";";

    std::cout << std::endl;


    for (auto iter:map)
        std::cout << iter.first << "->" << iter.second << ";";

    std::cout << std::endl;

    std::cout << std::endl;
}