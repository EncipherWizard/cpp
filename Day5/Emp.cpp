#include<iostream>
using namespace std;
class Emp
{
	protected:
	int empno;
	char *ename;
	int *deptno;
	public:
	int deptno1;
	
	/*Emp()
	{
		empno=0;
		*ename='\0';
		*deptno=0;
	}
	
	Emp(int empno,char ename,int deptno)
	{
		this->empno=empno;
		this->ename=&ename;
		this->deptno=&deptno;
	}
	*/
	virtual void getdata()
	{
		cout<<"In Emp get data"<<endl<<endl;
		ename= new char[21];
		cout<<"Enter Employee Number"<<endl;
		cin>>empno;
		cout<<"Enter Name"<<endl;
		
		int i=0;
		cin.get();
		while((*(ename+i)=cin.get())!='\n')
		{
			i++;
		}
		*(ename+i)='\0';
		
		cout<<"Enter Department Number"<<endl;
		cin>>deptno1;
		deptno=&deptno1;
		
		
	}
	
	virtual void showdata()
	{
		cout<<"In Emp show data"<<endl<<endl;
		cout<<"Employee Number :: "<<empno<<endl;
		cout<<"Name :: "<<ename<<endl;
		cout<<"Department Number :: "<<*deptno<<endl;
		
	}
	~Emp()
	{
		cout<<"Destructer of Emp"<<endl;
		delete [] ename;
	}
};

class PermanentEmp : public Emp
{
	private:
	double basic_salary;
	public:
	/*PermanentEmp()
	{
		basic_salary=0;
	}
	PermanentEmp(double basic_salary)
	{
		this->basic_salary=basic_salary;
	}
	*/
	void getdata()
	{
		cout<<"In Permanent get data"<<endl<<endl;
		Emp::getdata();
		cout<<"Enter Salary in Permanent"<<endl;
		cin>>basic_salary;
	}
	void showdata()
	{
		cout<<"In Permanent get data"<<endl<<endl;
		Emp::showdata();
		cout<<"Basic Salary :: "<<basic_salary<<endl;
	}
};
class Contract : public Emp
{
	private:
	double daily_salary;
	public:
/*	Contract()
	{
		daily_salary=0;
	}
	Contract(double daily_salary)
	{
		this->daily_salary=daily_salary;
	}
*/	void getdata()
	{
		cout<<"In Contract get data"<<endl<<endl;
		Emp::getdata();
		cout<<"Enter Daily Salary"<<endl;
		cin>>daily_salary;
	}
	void showdata()
	{
		cout<<"In Contract get data"<<endl<<endl;
		Emp::showdata();
		cout<<"Daily Salary :: "<<daily_salary<<endl;
	}
};
int main()
{
	Emp *e;
	
	e=new PermanentEmp();
	e->getdata();
	e->showdata();
	
	e=new Contract();
	e->getdata();
	e->showdata();
	
	return 0;
}
