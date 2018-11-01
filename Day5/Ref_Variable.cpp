#include<iostream>
using namespace std;
int main()
{
	int x = 5;
	int &y = x;
	cout<<"x :: "<<x<<endl;
	cout<<"y :: "<<y<<endl;
	
	y++;
	
	cout<<"x :: "<<x<<endl;
	cout<<"y :: "<<y<<endl;
	
	cout<<"Address of x :: "<<&x<<endl;
	cout<<"Address of y :: "<<&y<<endl;
	return 0;
}
