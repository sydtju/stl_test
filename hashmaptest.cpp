#include <hash_map>
#include "hash_map.h"
#include<iostream>
#include<string>
//#include <uitility>
using namespace std;
void hashtest(){
	hash_map<int,int> hmap;
	hash_map<int,int>::iterator it;
	pair<hash_map<int,int>::iterator,bool> insert_pair;
	insert_pair=hmap.insert(pair<int,int>(1,12));
	if (insert_pair.second==true)
	{
		cout<<"插入操作是成功的"<<endl;
	}
	hmap.insert(pair<int,int>(2,12));
	hmap.insert(pair<int,int>(3,13));
	hmap.insert(pair<int,int>(4,14));
	hmap[5]=15;
	hmap[5]=150;//数组插入是可以覆盖的
	int n;
	n=hmap.erase(5);
	if (n)
	{
		cout<<"删除是成功的！"<<endl;
	}
	for(it=hmap.begin();it!=hmap.end();it++)
		cout<<" "<<it->first<<"  is  "<<it->second<<endl;
	if(hmap.find(4)!=hmap.end()){
		cout<<"4 是存在的"<<endl;
	}
	else
	{
		cout<<"4是不存在的"<<endl;
	}
	if(hmap.find(6)!=hmap.end()){
		cout<<"6 是存在的"<<endl;
	}
	else
	{
		cout<<"6是不存在的"<<endl;
	}
	hash_map<int,string> student;
	hash_map<int,string>::iterator it_temp;
	pair<hash_map<int,string>::iterator,bool> insert_pair_temp;
	insert_pair_temp=student.insert(pair<int,string>(1,"wwwwwww"));
	if (insert_pair_temp.second==true)
	{
		cout<<"insert student is success!"<<endl;
	}
	n=student.count(1);
	if (n)
	{
		cout<<"1 在student中是存在的"<<endl;
	}
}
