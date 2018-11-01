#include<iostream>
using namespace std;
template<class T>
class Sort
{
	private:
	T arr[5];
	public:
	void get()
	{
		int i;
		cout<<"Enter five elements"<<endl;
		for(i=0;i<5;i++)
		{
			cin>>arr[i];
		}
	}
	void show()
	{
		int i;
		cout<<"Entered Elements are"<<endl;
		for(i=0;i<5;i++)
		{
			cout<<arr[i];
			cout<<endl;
		}
	}
	void sort()
	{
		int i,j;
		T temp;
		for(i=1;i<5;i++)
		{
			for(j=0;j<5;j++)
			{
				if(arr[i]<arr[j])
				{
					temp=arr[i];
					arr[i]=arr[j];
					arr[j]=temp;
				}
			}
		}
	}
};
int main()
{
	Sort <int> s1;
	s1.get();
	s1.sort();
	s1.show();
	Sort <double> s2;
	s2.get();
	s2.sort();
	s2.show();
	Sort <float> s3;
	s3.get();
	s3.sort();
	s3.show();	
	Sort <char> s4;
	s4.get();
	s4.sort();
	s4.show();
	return 0;
}
