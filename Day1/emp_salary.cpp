#include<iostream>
using namespace std;
class Employee
{
	private:
	int empid;
	string name;
	double basic_sal;
	public:
	Employee()
	{
		empid;
		name;
		basic_sal;
	}
	Employee(int eid,string n,double sal)
	{
		empid=eid;
		name=n;
		basic_sal=sal;
	}
	void getdata(int eid,string n,double sal)
	{
		empid=eid;
		name=n;
		basic_sal=sal;
	}
	void showdata()
	{
		cout<<"Employee id  :: "<<empid<<endl;
		cout<<"Employee name  :: "<<name<<endl;
		cout<<"Basic Salary  :: "<<basic_sal<<endl;
	}
	void salary(int basic_sal)
	{
		int da,hra,gross_salary;
		da=1.18*basic_sal;
		hra=0.1*(basic_sal+da);
		gross_salary=basic_sal+da+hra;
		cout<<"Gross Salary :: "<<gross_salary<<endl;
		cout<<"DA :: "<<da<<endl;
		cout<<"HRA :: "<<hra<<endl;
	}
};
int main()
{
	int empid_1;
	string name_1;
	double basic_sal_1;
	Employee e1;
	cout<<"Enter Employee ID"<<endl;
	cin>>empid_1;
	cout<<"Enter Name"<<endl;
	cin>>name_1;
	cout<<"Enter Basic Salary"<<endl;
	cin>>basic_sal_1;
	e1.getdata(empid_1,name_1,basic_sal_1);
	e1.showdata();
	e1.salary(basic_sal_1);
	return 0;
}
