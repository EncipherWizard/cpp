#include<iostream>
using namespace std;
class MyString
{
	private:
	char name[50];
	char sub[25];
	public:
	
	MyString()
	{
		name[0]='\0';
		cout<<"Base Constructor with 0 Parameter"<<endl;
	}

	MyString(char name[50])
	{	
		this->name[0]=name[0];
		cout<<"Base Constructor with 1 Parameter"<<endl;	
	}

	void getdata()
	{
		int i=0,k=0;

		cout<<"Enter Name"<<endl;
		while((name[i]=cin.get())!='\n')
		{
			i++;
		}
		name[i]='\0';

		cout<<"Enter a Substring"<<endl;
		while((sub[k]=cin.get())!='\n')		//insertion of substring
		{
			k++;
		}
		sub[k]='\0'; 

	}

	void showdata()
	{
		cout<<"Name :: "<<name<<endl;
	}

	void length()
	{
		int i=0,c=0;
		for(i=0;name[i]!='\0';i++)
		{
			c++;
		}
		cout<<"Length of the Name Entered :: "<<c<<endl;
	}

	void vowel()
	{
		int i,v=0;
		for(i=0;name[i]!='\0';i++)
		{
			if(name[i]=='a' || name[i]=='i' || name[i]=='o' || name[i]=='u' || name[i]=='e')
			{
				v++;
			}
		}
		cout<<"Number of vowels :: "<<v<<endl;
	}
	
	void subString()
	{
		int i=0,j=0;

 		while ((name[i] != '\0')||(sub[j] != '\0')) 
		{
	        	if (sub[j] != name[i]) 
			{
				i++;
				j = 0;
			}
			else 
			{
				j++;
				i++;
			}
		}
		if (sub[j] == '\0')
        	{
			cout<<"Substring is present"<<endl;
		}
		else
		{
			cout<<"Substring is Not Present"<<endl;
		}
	}
};
int main()
{
	MyString s1;
	s1.getdata();
	s1.showdata();
	s1.length();
	s1.vowel();
	s1.subString();
	return 0;
}
