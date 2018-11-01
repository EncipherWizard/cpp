#include<iostream>
using namespace std;
class Student
{
	private:
	int rollno[5];
	int dd[5],mm[5],yyyy[5];
	double total_marks[5];
	public:
	Student()
	{
		rollno[0]='\0';
		dd[0]='\0';
		mm[0]='\0';
		yyyy[0]='\0';
		total_marks[0]='\0';
	}
	Student(int rollno[5],int dd[5],int mm[5],int yyyy[5],double total_marks[5])
	{
		this->rollno[0]=rollno[0];
		this->dd[0]=dd[0];
		this->mm[0]=mm[0];
		this->yyyy[0]=yyyy[0];
		this->total_marks[0]=total_marks[0];
	}
	void getdata()
	{
		int i=0;
		cout<<"Enter roll no ::"<<endl;
		for(i=0;i<5;i++)
		{
			cin>>rollno[i];
		}
		cout<<"Enter Marks ::"<<endl;
		for(i=0;i<5;i++)
		{
			cin>>total_marks[i];
		}
		cout<<"Enter date dd : mm : yyyy"<<endl;
		for(i=0;i<5;i++)
		{
			cout<<"dd : ";
			cin>>dd[i];
			cout<<"mm : ";
			cin>>mm[i];
			cout<<"yyyy : ";
			cin>>yyyy[i];
		}
	}
	void Student_sorting_rollno()
	{
		int i=0,j=0;
		for(i=0;i<5;i++)
		{
			for(j=i+1;j<5;j++)
			{
				if(rollno[i]>rollno[j])
				{
					int temp=0;
					temp=rollno[j];
					rollno[j]=rollno[i];
					rollno[i]=temp;
				}
			}
		}
		cout<<"Sorting On The Basis of Roll Number"<<endl;
		for(i=0;i<5;i++)
		{
			cout<<"Roll no :: "<<rollno[i]<<endl;
		}
	}
	
	void Student_sorting_Marks()
	{
		int i=0,j=0;
		for(i=0;i<5;i++)
		{
			for(j=i+1;j<5;j++)
			{
				if(total_marks[i]>total_marks[j])
				{
					int temp;
					temp=total_marks[j];
					total_marks[j]=total_marks[i];
					total_marks[i]=temp;
				}
			}
		}
		cout<<"Sorting On The Basis of Marks"<<endl;
		for(i=0;i<5;i++)
		{
			cout<<"Total Marks :: "<<total_marks[i]<<endl;
		}
	}
	
	void Student_sorting_DOB()
	{
		int i=0,j=0;
		for(i=0;i<5;i++)
		{
			for(j=i+1;j<5;j++)
			{
				if(yyyy[i]>yyyy[j])
				{
					int tempd=0,tempm=0,tempy=0;
					tempy=yyyy[j];
					yyyy[j]=yyyy[i];
					yyyy[i]=tempy;
					tempm=mm[j];
					mm[j]=mm[i];
					mm[i]=tempm;
					tempd=dd[j];
					dd[j]=dd[i];
					dd[i]=tempd;
				}
			}
		}
		for(i=0;i<5;i++)
		{
			for(j=i+1;j<5;j++)
			{
				if(mm[i]>mm[j] && yyyy[i]==yyyy[j])
				{
					int tempd=0,tempm=0;
					tempm=mm[j];
					mm[j]=mm[i];
					mm[i]=tempm;
					tempd=dd[j];
					dd[j]=dd[i];
					dd[i]=tempd;
				}
			}
		}
		for(i=0;i<5;i++)
		{
			for(j=i+1;j<5;j++)
			{
				if(dd[i]>dd[j] && yyyy[i]==yyyy[j])
				{
					int tempd=0;
					tempd=dd[j];
					dd[j]=dd[i];
					dd[i]=tempd;
				}
			}
		}
		cout<<"Sorted Date is "<<endl;
		for(i=0;i<5;i++)
		{
			cout<<"Date dd:mm:yyyy :: "<<dd[i]<<":"<<mm[i]<<":"<<yyyy[i]<<endl;
		}
	}
};
int main()
{
	Student s1;
	s1.getdata();
	s1.Student_sorting_rollno();
	s1.Student_sorting_Marks();
	s1.Student_sorting_DOB();
	return 0;
}
