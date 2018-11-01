#include<iostream>
using namespace std;
class Test
{
	public:
	int y;
	void show()
	{
		cout<<"In show function"<<endl;
		int y=0;
		cout<<"y :: "<<this->y<<endl;
		//here this is a implicit function
	}
};
int main()
{
	int *p1;
	int x=5;
	p1=&x;
	
	Test *p2;
	Test t1;
	p2=&t1;
	
	cout<<"x = "<<*p1<<endl; //* this is called as dereference operator
	
	p2->y=12;
	(*p2).show();
	cout<<"Y from main"<<p2->y<<endl;
}
