#include<iostream>
using namespace std;
int add(int x,int y)
{
	return (x+y);
}
int prod(int x,int y)
{
	return (x*y);
}
int main()
{
	int (*ptr) (int,int);
	ptr=add;
	cout<<"Sum :: "<<ptr(4,9)<<endl;
	ptr=prod;
	cout<<"Product :: "<<ptr(4,9)<<endl;
	return 0;
}
