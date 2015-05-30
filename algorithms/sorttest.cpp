#include<iostream>
#include<utility>
#include<algorithm>
using namespace std;
bool com(int a,int b){
	return a>b;
}
int main(){
	int a[10]={1,2,3,6,7,8,9,4,5,0};
	sort(a,a+10);//默认是从小到大排列
	for(int i=0;i<10;i++)
		cout<<a[i];
	sort(a,a+10,com);//从大到小排列
	for(int i=0;i<10;i++)
		cout<<a[i];
	system("pause");
	return 0;
}
