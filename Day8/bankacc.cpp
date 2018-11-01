#include<iostream>
using namespace std;
class Bankaccount
{
	private:
	int accno;
	double balance;
	static double amount;
	public:
	Bankaccount()
	{
		accno=0;
		balance=0;
	}
	void withdraw(int w)
	{
		cout<<"Amount before withdraw :: "<<amount<<endl;
		amount=amount-w;
		cout<<"Amount after withdraw :: "<<amount<<endl;
	}
	void deposit(int d)
	{
		cout<<"Amount before deposit :: "<<amount<<endl;
		amount+=d;
		cout<<"Amount after deposit :: "<<amount<<endl;
	}
	void show()
	{
		cout<<"Balance is ::"<<amount<<endl;
	}
};
double Bankaccount :: amount=0;
int main()
{
	Bankaccount b1,b2,b3;
	b2.deposit(5000);
	b2.show();
	b1.withdraw(3000);
	b1.show();
	b3.deposit(10000);
	b3.show();
	return 0;
}
