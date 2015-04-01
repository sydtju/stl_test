#include<iostream>
#include<vector>
using namespace std;
//vector 是对数组的封装 顺序存储结果  内部使用的是
void testvector(){
	vector<int> avector;
	vector<int>::iterator pointer;
	avector.push_back(10);
	avector.push_back(9);
	avector.push_back(8);
	avector.push_back(7);
	avector.push_back(6);
	for(pointer=avector.begin();pointer!=avector.end();pointer++){
		cout<<*pointer<<"   ";
	}
	cout<<"\nvector的大小是："<<avector.size()<<endl;
	cout<<"\nvector的第一个元素是："<<avector.front()<<endl;
	cout<<"\nvector的第一个元素是："<<avector.front()<<endl;
	cout<<"\nvector的最后一个元素是："<<avector.back()<<endl;
	cout<<"\nvector删除最后一个元素后：";
	avector.erase(avector.begin()+3);//erase是删除元素后 指向下一个元素的位置  所以当删除最后一个元素的时候会出错
	for(pointer=avector.begin();pointer!=avector.end();pointer++){
		cout<<*pointer<<"   ";
	}
	avector.insert(avector.begin()+3,7);//在avector.begin()+3的前面插入一个数   
	cout<<"\nvector插入一个元素后：";
	for(pointer=avector.begin();pointer!=avector.end();pointer++){
		cout<<*pointer<<"   ";
	}
}
