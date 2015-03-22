#ifndef T_H_INCLUDED
#define T_H_INCLUDED
#include<iostream>
using namespace std;
struct Node//定义结点
{
    int number;//序号
    Node *next;
    int psw;//密码
};
class Joseph//定义单循环链表的ADT（没有用模板类，默认int型）
{
public:
        Node* Create(int n);//定义建立单链表的函数
        void Delete(Node *p,int m);//删除结点，出列
        Node* head;//指向第一个结点的指针
};


#endif // T_H_INCLUDED