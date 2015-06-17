#include<iostream>
#include<vector>
#include<list>
#include<deque>
#include"deque.h"
using namespace std;
/*deque: 是一个double-ended queue, 底层实现使用的是map的方式 与map容器不同  完全不是一个概念
    1)支持随即存取，也就是[]操作符，
    2)支持两端操作，push(pop)-back(front)，在两端操作上与list效率差不多

    因此在实际使用时，如何选择这三个容器中哪一个，应根据你的需要而定，一般应遵循下面的原则： 
    1、如果你需要高效的随即存取，而不在乎插入和删除的效率，使用vector 
    2、如果你需要大量的插入和删除，而不关心随即存取，则应使用list 
    3、如果你需要随即存取，而且关心两端数据的插入和删除，则应使用deque。 
    //deque做很多的操作的时候效率不高，例如，做排序的时候 需要转换成为vector来进行 然后转换为deque
*/

void dequetest(){
	deque<int> aque;
	deque<int>::iterator it;
	aque.push_back(10);
	aque.push_back(9);
	aque.push_back(8);
	aque.push_back(7);
	cout<<"deque中的元素是：\n";
	for(it=aque.begin();it!=aque.end();++it){
		cout<<"  "<<*it;
	}
	aque.pop_front();
	aque.pop_front();
	aque.pop_front();
	cout<<"\ndeque中的元素是：\n";
	for(it=aque.begin();it!=aque.end();++it){
		cout<<"  "<<*it;
	}
}
