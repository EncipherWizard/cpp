#include<iostream>
#include<cstring>
using namespace std;
class Person
{
	private:
	char *name;
	public:
	Person()
	{
		name = new char[20];
		strcpy(name,"nothing");
		cout<<"In ) para constr"<<endl;
	}
	Person(const Person &p)
	{
		name = new char[strlen(p.name)+1];
		strcpy(name,p.name);
		cout<<"In Copy Constr"<<endl;
	}
	void getdata()
	{
		cout<<"Enter Name :: ";
		cin.getline(name,20);               
	}
	void show()
	{
		cout<<"Name is :: "<<name<<endl;
		cout<<"in show function"<<endl; 
	}
	~Person()
	{
		delete [] name;
		cout<<"In destructor"<<endl;
	}
};
int main()
{
	Person p1;
	p1.getdata();
	p1.show();
	Person p2(p1);
	p2.show();
	Person p3;
	p3=p2=p1;
	p3.show();
	return 0;
}
