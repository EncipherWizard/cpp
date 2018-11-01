#include<iostream>
using namespace std;
int *array(int a[],int size)
{
	int i;
	for(i=0;i<size;i++)
	{
		cout<<"Enter the values"<<endl;
		cin>>a[i];
		
	}
	int *ptr =a;
	return ptr;
}
int main()
{
	int no,arr[20];
	cout<<"Enter size of array"<<endl;
	cin>>no;
	int *pte=NULL;
	pte=array(arr,5);
	cout<<pte<<endl;
	return 0;
}
