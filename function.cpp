#include "T-Joseph.h"
#include<iostream>
using namespace std;
Node* Joseph::Create(int n)
{	
	int k=1;
	cout<<"����������n��ͬѧ������"<<endl;
	//��������
	Node* s;
	Node* rear;//��βָ��
	s=new Node;
	head=NULL;
	while(k<=(n+1))//�û���������
	{
		if(head==NULL)
		{
			cin>>s->psw;//�����һ����� 
			s->number=k++;
			rear=s;
			head=s;
		}
		if(k==(n+1))//�����Ϊ0�Ľ����Ϊ������� 
		{
			rear->next=s;
			rear=s;
			s=new Node;//���β����� 
			s->psw=0;
			s->number=0;
			k++;
		}

		else
		{
			rear->next=s;
			rear=s;
			s=new Node;
			cin>>s->psw;
			s->number=k++;
		}
		
	}
	rear->next=head;//����ѭ������ 
	delete s; //ɾ�����һ��������� 
    return head;
}
void Joseph::Delete(Node *p,int m)
{
	Node *q;//���ù���ָ�� 
	Node *pre;
	pre=p;
	q=new Node;
	q->next=pre;//��ָ��q����
	cout<<"������n��ͬѧ�ĳ���˳��:"<<endl; 
	while(pre->next!=pre)//ѭ��ֱ��ʣ�����һ�����
	{
		for(int i=1;i<m;i++)
		{
			q=pre;
			pre=pre->next;//���α���
		}
		q->next=pre->next;
		cout<<pre->number<<" ";//˳�������ɾ���Ľ��
		m=pre->psw;//���ڵ�������Ϊ�µ�mֵ
		delete pre;
		pre=q->next;
	}
	cout<<pre->number<<endl;//ɾ�����ڵ�
}

