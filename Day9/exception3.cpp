#include<iostream>
#include<cstring>
using namespace std;
class low_balance_exception : public exception
{
	public:
	char *what()
	{
		char *arr = new char [100];
		strcpy(arr,"insufficient balance");
		return arr;
	}
};
class Bank
{
	private:
	double balance;
	public:
	Bank()
	{
		balance=5000;
	}
	void withdraw(double amt)
	{
		if(amt>balance)
		throw "amount greater";
		else
		balance-=amt;
	}
	void show()
	{
		cout<<"Balance :: "<<balance;
	}
};
int main()
{
	Bank b;
	b.show();
	try
	{
		b.withdraw(6000);
		b.show();
	}
	catch(int i)
	{
		cout<<i<<endl;
	}
	catch(low_balance_exception &ex)
	{
		cout<<ex.what()<<endl;
	}
	catch(const char *msg)
	{
		cout<<msg<<endl;
	}
	cout<<"end of main"<<endl;
	return 0;
}
