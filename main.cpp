#include "T-Joseph.h"
#include "function.cpp"
#include<iostream>
using namespace std;
int main()
{
	int m,n;
	Joseph js;//����һ��Joseph�����
	cout<<"�������ʼֵm"<<endl;
	cin>>m;
	cout<<"������ͬѧ����n"<<endl;
	cin>>n;
	js.head=js.Create(n);
	js.Delete(js.head,m);
	return 0;
}

