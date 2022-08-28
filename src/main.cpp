#include <iostream>
#include "vector_test.cpp"
#include "unordered_map.cpp"
#include "map_test.cpp"
#include "stack_test.cpp"
#include "deque_test.cpp"
#include "unordered_set_test.cpp"
#include "queue_test.cpp"
#include "list_test.cpp"
#include "forward_list_test.cpp"
/**
 * 2022-07-11 标准容器库主要用法示范
 * @return
 */
int main() {

    vector_test();          //重点掌握   相当于Java ArrayList
    unordered_map_test();   //重点掌握   相当于Java HashMap
    unordered_set_test();   //重点掌握   相当于Java HashSet
    stack_test();           //重点掌握   基本容器，栈
    deque_test();           //重点掌握   基本容器，双向队列

    map_test();             //需要熟悉   红黑树，key是自动排序的，在某些场景很好用
    list_test();            //需要熟悉   相当于Java LinkedList，头尾增删性能比Vector好

    queue_test();           //需要了解   弱化版deque
    forward_list_test();    //需要了解   弱化版List
    return 0;
}
