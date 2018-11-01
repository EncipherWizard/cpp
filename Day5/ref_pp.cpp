#include<iostream>
using namespace std;
void swap(int &x,int &y)
{
	int temp
	temp=x;
	x=y;
	y=temp;
	cout<<"Address of y"<<&y;
	cout<<"Address of x"<<&x;	
}                  
int main()
{
	int num1,num2
	cout<<"Enter First Number"<<endl;
	cin>>num1;
	cout<<"Enter Second Number"<<endl;
	cin>>num2;
	swap(num1,num2);
	cout 
	return 0;
	
}
