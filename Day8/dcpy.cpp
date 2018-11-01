#include<iostream>
#include<cstring>
using namespace std;
class Emp
{
	private:
	int empno;
	char *ename;
	public:
	Emp()
	{
		empno=0;
		ename=new char[20];
		strcpy(ename,"Nothing");
		cout<<"0 para constructor"<<endl;
	}
	Emp(const Emp &e)
	{
		empno=e.empno;
		ename=new char[strlen(e.ename)+1];
		strcpy(ename,e.ename);
		cout<<"Copy constructor"<<endl;
	}
	Emp & operator=(const Emp &e)
	{
		empno=e.empno;
		ename = new char[strlen(e.ename)+1];
		strcpy(ename,e.ename);
		cout<<"Assignment operator"<<endl;
		return *this;
	}
	void getdata()
	{
		cout<<"Input Empno  :: ";
		cin>>empno;
		cin.get();
		cout<<"Emp name  :: ";
		cin.getline(ename,20);
	}
	void showdata()
	{
		cout<<"Empno ::"<<empno<<endl;
		cout<<"ename ::"<<ename<<endl;
		
	}
	~Emp()
	{
		cout<<"Destructor"<<endl;
		delete[] ename;
	}
};
int main()
{
	Emp e1;
	e1.getdata();
	e1.showdata();
	Emp e2(e1); //copy constructor
	e2.showdata();
	Emp e3(e1); //copy constructor
	e3.showdata();
	Emp e4,e5;
	e5=e4=e1; //Assignment operator
	e4.showdata();
	e5.showdata();
	return 0;
}
