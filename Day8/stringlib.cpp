#include<iostream>
#include<cstring>
using namespace std;

char *getfullname(char *f,char *l)
{
	char *temp;
	temp=new char(strlen(f)+strlen(l)+2);
	strcpy(temp,f);
	strcat(temp," ");
	strcat(temp,l);
	return temp;
}
int main()
{
	char fname[20],lname[20];
	char *fullname;
	
	cout<<"Enter First Name ::";
	cin.getline(fname,20);
	cout<<"Enter Last Name ::";
	cin.getline(lname,20);
	
	fullname = getfullname(fname,lname);
	cout<<"Full Name is :: "<<fullname<<endl;
	
	delete [] fullname;
	return 0;
}
