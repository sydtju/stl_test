#include<iostream>
#include<vector>
#include<list>
#include"vectortest.h"
using namespace std;
//STL 中的list 就是一 双向链表，可高效地进行插入删除元素   不支持随机访问
void listtest(){
	list<int> alist;
	list<int>::iterator it;
	alist.push_back(10);//会抛出异常
	alist.push_back(9);//
	alist.push_back(8);
	alist.push_front(11);
	for(it=alist.begin();it!=alist.end();++it){
		cout<<"  "<<*it;
	}
	//alist.erase(alist.end());
	alist.pop_front();
	alist.pop_front();
		for(it=alist.begin();it!=alist.end();++it){
		cout<<"  "<<*it;
	}
	cout<<endl;
}
void show_list(list<int> dat){
	list<int>::iterator it;
	cout<<"遍历结果如下："<<endl;
	for (it=dat.begin();it!=dat.end();++it)//迭代器不能直接加数字  只能是++ --
	{
		cout<<*it<<"  ";
	}
	cout<<"\nsize="<<dat.size()<<endl;
	cout<<"\nsize="<<sizeof(dat)<<endl;
	system("pause");
}
void list_test(){
	list<int> tlist;
	//tlist.push_back(1);
	show_list(tlist);
	tlist.push_back(1);
	show_list(tlist);
	tlist.push_back(2);
	show_list(tlist);
}
