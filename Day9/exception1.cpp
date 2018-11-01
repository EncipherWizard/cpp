#include<iostream>
using namespace std;
int main()
{
	int a,b,c;
	cout<<"Input :: ";
	cin>>a>>b;
	
	try 
	{
		c=a/b;
		cout<<"c :: "<<c<<endl;
	}
	catch(exception &ex)
	{
		cout<<ex.what()<<endl;
	}
	cout<<"end of main"<<endl;
	return 0;
}
