#include<iostream>
using namespace std;
int power(int base,int pow);
int sum=1;
int main()
{
	int number,p,answer;
	cout<< "Enter the base Number"<<endl;
	cin>>number;
	cout<< "Enter the Power"<<endl;
	cin>>p;
	answer = power(number,p);
	cout<<"Power ::"<<answer<<endl;	
	return 0;
}	
int power(int base,int pow)
{
	if(pow==0)
	{
		return sum;
	}
	else
	{
		sum=sum*base;
		pow--;
		power(base,pow);
	} 
		
}
