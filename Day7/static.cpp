#include<iostream>
using namespace std;
class Emp
{
	private:
	int empno;
	public:
	static int count;
	Emp()
	{
		cout<<"In constructor"<<endl;
		empno=0;
	}
	void increase()
	{
		empno++;
		count++;
	}
	void show()
	{
		cout<<"empno :: "<<empno<<endl;
		cout<<"count :: "<<count<<endl;
	}
	static void showcount()
	{
		//empnno++;
		cout<<"In showcount Count :: "<<count<<endl;
	}
};
int Emp :: count = 0;
int main()
{
	cout<<"Count = "<<Emp::count<<endl;
	Emp::showcount;
	Emp e1,e2;
	e1.increase();//1
	e1.show();
	e2.increase();//1
	e2.show();
	cout<<"Size of emp :: "<<sizeof(Emp)<<endl;
	return 0;
}
