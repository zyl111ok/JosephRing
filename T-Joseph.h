#ifndef T_H_INCLUDED
#define T_H_INCLUDED
#include<iostream>
using namespace std;
struct Node//������
{
    int number;//���
    Node *next;
    int psw;//����
};
class Joseph//���嵥ѭ�������ADT��û����ģ���࣬Ĭ��int�ͣ�
{
public:
        Node* Create(int n);//���彨��������ĺ���
        void Delete(Node *p,int m);//ɾ����㣬����
        Node* head;//ָ���һ������ָ��
};


#endif // T_H_INCLUDED