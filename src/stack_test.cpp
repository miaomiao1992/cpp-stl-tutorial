//
// Created by 337238 on 2022/7/6.
//
#include <string>
#include <stack>
#include <iostream>

void stack_test()
{
    std::cout << "[stack tutorial]" << std::endl;
    std::stack<int> stack;

    stack.push(1);
    std::cout<<"after push 1 and top:"<<stack.top()<<std::endl;

    stack.push(2);
    std::cout<<"after push 2 and top:"<<stack.top()<<std::endl;

    stack.push(3);
    std::cout<<"after push 3 and top:"<<stack.top()<<std::endl;

    stack.pop();
    std::cout<<"after pop 3 and top:"<<stack.top()<<std::endl;

    //添加栈顶元素
    stack.emplace(-1);//右值引用，完美转发，性能更牛逼
    std::cout<<"after push value -1 and top:"<<stack.top()<<std::endl;

    //依次pop
    std::cout<<"pop all elements:";
    while(stack.size()>1)
    {
        std::cout<<stack.top()<<" ";
        stack.pop();
    }
    std::cout<<stack.top()<<std::endl;

    std::cout<<std::endl;
}