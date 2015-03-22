#include "T-Joseph.h"
#include<iostream>
using namespace std;
Node* Joseph::Create(int n)
{	
	int k=1;
	cout<<"请依次输入n个同学的密码"<<endl;
	//待插入结点
	Node* s;
	Node* rear;//链尾指针
	s=new Node;
	head=NULL;
	while(k<=(n+1))//用户输入数量
	{
		if(head==NULL)
		{
			cin>>s->psw;//插入第一个结点 
			s->number=k++;
			rear=s;
			head=s;
		}
		if(k==(n+1))//把序号为0的结点作为结束结点 
		{
			rear->next=s;
			rear=s;
			s=new Node;//依次插入结点 
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
	rear->next=head;//构造循环链表 
	delete s; //删除最后一个结束结点 
    return head;
}
void Joseph::Delete(Node *p,int m)
{
	Node *q;//设置工作指针 
	Node *pre;
	pre=p;
	q=new Node;
	q->next=pre;//将指针q链接
	cout<<"以下是n个同学的出列顺序:"<<endl; 
	while(pre->next!=pre)//循环直到剩下最后一个结点
	{
		for(int i=1;i<m;i++)
		{
			q=pre;
			pre=pre->next;//依次报数
		}
		q->next=pre->next;
		cout<<pre->number<<" ";//顺序输出被删除的结点
		m=pre->psw;//将节点密码作为新的m值
		delete pre;
		pre=q->next;
	}
	cout<<pre->number<<endl;//删除最后节点
}

