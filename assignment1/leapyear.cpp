#include<iostream>
using namespace std;
int main()
{
	int i,fyear,lyear,flag=0;
	cout<<"Enter First year"<<endl;
	cin>>fyear;
	cout<<"Enter Last year"<<endl;
	cin>>lyear;
	cout<<endl;
	cout<<"Leap Years Between :: "<<fyear<<"  and  "<<lyear<<endl<<endl;
	for(i=fyear;i<=lyear;i++)
	{
		if(i%4==0)
		{
			if(i%100==0)
			{
				if(i%400!=0)
				{
					continue;
				}
				else
				{	
					flag++;
					cout<<i<<endl;
				}
			}
			cout<<i<<endl;
		}
	}
	if(flag==0)
	{
		cout<<"Leap Year Not present between  "<<fyear<<"  and  "<<lyear<<endl;
	}
	return 0;
}
