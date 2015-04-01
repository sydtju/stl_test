#include"stack.h"
#include<iostream>
#include<stack>
using namespace std;
void stacktest(){
	stack<int>  s0;
	int i=10;
	while(i){
		s0.push(i);
		i--;
	}
	cout<<"栈的大小是："<<s0.size()<<endl;
	cout<<"栈中的元素是："<<endl;
	while(!s0.empty()){
		cout<<"  "<<s0.top();
		s0.pop();
	}
	cout<<"\n出栈后，栈的大小是："<<s0.size()<<endl;

}
