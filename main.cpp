#include "T-Joseph.h"
#include "function.cpp"
#include<iostream>
using namespace std;
int main()
{
	int m,n;
	Joseph js;//定义一个Joseph类对象
	cout<<"请输入初始值m"<<endl;
	cin>>m;
	cout<<"请输入同学总数n"<<endl;
	cin>>n;
	js.head=js.Create(n);
	js.Delete(js.head,m);
	return 0;
}

