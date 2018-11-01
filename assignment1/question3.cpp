#include<iostream>
using namespace std;
int main()
{
	int i,j,flag,number,prime;
	cout<<"Input Number"<<endl;
	cin>>number;
	
	for(i=2;i<=number;i++)
	{
		flag=0;
		for(j=2;j<=i;j++)
		{
			if(i%j==0)
			{
				flag++;
			}
		}
		if(flag==1)
		{
			prime=i;
		}
	}
	cout<<"Prime Number Before "<<number<<" = "<<prime<<endl;
	return 0;
}
