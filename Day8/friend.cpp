#include<iostream>
using namespace std;
class Test
{
	private:
	int x;
	public:
	Test()
	{
		x=0;
	}
	void show()
	{
		cout<<"X :: "<<x<<endl;
	}
	friend void fun(Test);
};
void fun(Test t)
{
	t.x++;
	cout<<"t1.x :: "<<t.x<<endl;	
}
int main()
{
	Test t1;
	t1.show();
	fun(t1);
	return 0;
}
