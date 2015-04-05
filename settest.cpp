#include <iostream>
#include <set>
#include<utility>
using namespace std;
void settest(){
	set<int> settest;
	set<int>::iterator it;
	set<int>::iterator it1;
	pair<set<int>::iterator,bool> insetr_pair;
	if (settest.begin()==settest.end())
	{
		cout<<"this is empty!\n";
	}
	for (int i=1;i<10;i++)
	{
		insetr_pair=settest.insert(i);
		if(insetr_pair.second==true) cout<<"success"<<endl;//不支持数组插入
		else  cout<<"fail!"<<endl;
	}

	for(it=settest.begin();it!=settest.end();it++)
		cout<<"  "<<*it;
	it=settest.find(4);
	if(it!=settest.end()) cout<<"\n存在这个元素"<<endl;
	else cout<<"\n不存在这个元素"<<endl;
	int n=settest.erase(4);
	cout<<n<<endl;
	it=settest.begin();
	it1=settest.end();
	settest.erase(it);//这里是空类型 不会有返回值
	//settest.erase(it,it1);//这样用会出现异常  应该是删除完之后 end()指向删除元素的后一个元素  
	settest.clear();
	if (settest.begin()==settest.end())
	{
		cout<<"this is empty!\n";
	}
}
