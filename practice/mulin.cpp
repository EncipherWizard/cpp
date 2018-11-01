#include<iostream>
using namespace std;
class Base
{
	private:
	int x;
	public:
	void show()
	{
		cout<<"x :: "<<x;
	}
};
class Base1
{
	private:
	int y;
	public:
	void show() 
	{
		cout<<"y :: "<<y;
	}
};
class Derived : public Base,public Base1
{
	private:
	int z;
	public:
	void show()
	{
		cout<<"z :: "<<z;
	}
	
};
int main()
{
	cout<<"SIze of derived"<<sizeof(Derived)<<endl;
	Derived d;
	//d.base1::show();
	return 0;
}
