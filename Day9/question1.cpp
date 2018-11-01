#include<iostream>
using namespace std;
int main()
{
	int i,num,flag,flag1,flag2,flag3,count=0;
	cout<<"Enter Number"<<endl;
	cin>>num;
	
	flag=num;
	flag1=flag%10; //finding last digit stored in flag 1
	flag=flag/10; //reducing the number by unit
	count=1;
	 
	while(flag!=0)
	{
		count++;
		flag2=flag%10;
		flag=flag/10;
	}	//finding the first digit of the number stored in flag 2
	
	int arr[count];//creating a array of counted no. of digits
	flag=num;  //restoring the number
	flag=flag/10; //reducing the units place
	
	for(i=0;i<count-1;i++)
	{
		arr[i]=flag%10;
		flag=flag/10;
	}//storing the remaining digits in the array
	
	int num1=0;// initializing a new number
	
	num1=(num1*10)+flag1;//storing the first number
	
	for(i=count-3;i>=0;i--)
	{
		num1=(num1*10)+arr[i];
	}// storing the remaining numbers 
	num1=(num1*10)+flag2;//storing the last digit
		
	cout<<"Swapped:"<<num1<<endl;
	return 0;
}
