#include<iostream>
using namespace std;

class Employee
{
	private:
	int empid;
	char name[20];
	double basic_sal;
	public:
	double gross_sal;
	Employee()
	{
		empid=0;
		name[0]='\0';
		basic_sal=0.00;
		cout<<"Base Constructor with 0 Parameter"<<endl;
	}
	Employee(int eid,char fname[20],double sal)
	{
		empid=eid;
		name[0]=fname[0];
		basic_sal=sal;
		cout<<"Base Constructor with 3 Parameter"<<endl;
	}
	void getdata()
	{
		int i=0;		
		cout<<"Enter Employee ID"<<endl;
		cin>>empid;
		cout<<"Enter Employee Name"<<endl;
		
		while((name[i]=cin.get())!='\n')
		{
			i++;
		}
		name[i]='\0';
		cout<<"Enter The Basic Salary"<<endl;
		cin>>basic_sal;
	}
	void showdata()
	{
		cout<<"Employee Name :: "<<name<<endl;
		cout<<"Employee ID :: "<<empid<<endl;
		cout<<"Employee Basic Salary"<<basic_sal<<endl;
	}
	double gross_salary()
	{
		double hra,da;
		da=1.18*(basic_sal);
		hra=0.1*(basic_sal+da);
		if(hra>=8000)
			hra=8000;
		gross_sal=basic_sal+da+hra;
		return gross_sal;
	}
};
class Manager : public Employee
{
	private:
	double allowance;
	public:
	Manager()
	{
		allowance=0.00;
		cout<<"Derived Constructor with 0 Parameter"<<endl;
	}
	Manager(double all)
	{
		allowance=all;
		cout<<"Derived Constructor with 1 Parameter"<<endl;
	}
	void manager_gross_salary(double sal)
	{
		double mgross_sal;
		mgross_sal=sal+allowance;
		cout<<"Manager Gross Salary"<<mgross_sal<<endl;
	}

};
int main()
{
	double all;
	cout<<"Enter Allowance"<<endl;
	cin>>all;
	Manager m1(all);
	Employee e1;
	e1.getdata();
	e1.showdata();
	double salary = e1.gross_salary();
	m1.manager_gross_salary(salary);	
	return 0;
}
