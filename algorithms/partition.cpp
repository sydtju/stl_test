//partition源码
void swap(int &a,int &b){
	int temp=a;
	a=b;
	b=temp;
}
bool istrue(int d){
	return d%2==0?true:false;
}
void partition(vector<int>&dat,int start0,int end0,bool (*fun)(int d)){
	int start=start0;
	int end=end0; 
	//int temp=dat[start];
	while (true)
	 {
		 while (true)
			 if (start==end)
			 {
				 return;
			 }
			 else if (fun(dat[start]))
			 {
				 start++;
			 }
			 else
				 break;
		 --end;
		 while (true)
		 {
			 if (start==end)
			 {
				 return;
			 }
			 else if(!fun(dat[end])){
				--end;
			 }
			 else
				 break;
		 }
		 swap(dat[start],dat[end]);
	 }
}
