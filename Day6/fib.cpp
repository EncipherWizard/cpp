#include<iostream>
using namespace std;
int * fib(int n)
{
	int i=0,*p;
	p= new int[n];
	*(p+0)=0;
	*(p+1)=1;
	cout<<"Fibonanci Series"<<endl;
	for(i=2;i<n;i++)
	{
		*(p+i)=*(p+i-1)+*(p+i-2);
	}
	return p;
}
int main()
{
	int num,*ptr,i=0;
	cout<<"Enter Number"<<endl;
	cin>>num;
	ptr=fib(num);
	for(i=0;i<num;i++)
	{
		cout<<*(ptr+i)<<endl;
	}
	return 0;
}

