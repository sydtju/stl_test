#include<iostream>
#include<map>
#include <string>
#include<utility>
#include "mapt.h"
using namespace std;
int maptest(){
	map<int,string> maptest;
	map<int,string>::iterator it;
	if(maptest.begin()==maptest.end())//end指向的最后一个元素的下一个元素
	    {cout<<"map是空的！\n";}
	maptest.insert(pair<int,string>(1,"wangwang"));
	maptest.insert(pair<int,string>(2,"xiaoming"));
	maptest.insert(pair<int,string>(3,"xiaogang"));
	maptest.insert(map<int,string>::value_type(4,"xiaoli"));//insert键值插入 键值相同无效

	pair<map<int,string>::iterator,bool> insert_pair;//pair是结构体  都是公共元素public
	insert_pair=maptest.insert(map<int,string>::value_type(5,"liuliu"));
	if(insert_pair.second==true) 
	    cout<<"insert operation is successful!"<<endl;
	maptest[10]="xiaowang";//数组插入直接覆盖
	for(it=maptest.begin();it!=maptest.end();it++){
		  cout<<it->first<<"  "<<it->second<<endl;
	}
	it=maptest.find(1);//返回的是键值所在的迭代器
	if(it!=maptest.end()){
		  cout<<it->first<<"  "<<it->second<<endl;
	}
	else{
		  cout<<"rescult is no find!\n"<<endl;
	}
	cout<<"当前map中的元素个数是："<<maptest.size()<<endl;
	cout<<"当前map中";
	if (maptest.count(2))//count返回的是  是否存在键值
	{
		cout<<"存在";
	}
	else{
		cout<<"不存在";
	}
	int n;
	n=maptest.erase(5);//删除成功返回1  不成功返回0
	if (n)
	{
		cout<<"erase is successful!\n";
	}
	else{
		cout<<"erase is fail!";
	}
	maptest.erase(maptest.begin(),maptest.end());//成片删除  是前开后闭的区间
	if(maptest.begin()==maptest.end())//end指向的最后一个元素的下一个元素
	{cout<<"map是空的！\n";}
	return 0;
}
