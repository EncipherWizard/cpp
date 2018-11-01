#include<iostream>
using namespace std;
int main()
{
	try
	{
		int rollno;
		cout<<"enter roll number";
		cin>>rollno;
		if(rollno<=0)
		throw -5;
	}
	catch(const char *msg)
	{
		cout<<msg<<endl;
		cout<<"End of main"<<endl;
	}
	return 0;
}
