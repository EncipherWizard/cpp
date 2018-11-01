#include<iostream>
using namespace std;
int main()
{
	int i,number,number1,flag,flag1,flag2,flag3,count=0;
	cout<<"Enter Number To be Swapped"<<endl;
	cin>>number;
	
	flag=number;
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
	flag=number;  //restoring the number
	flag=flag/10; //reducing the units place
	
	for(i=0;i<count-1;i++)
	{
		arr[i]=flag%10;
		flag=flag/10;
	}//storing the remaining digits in the array
	
	number1=0;// initializing a new number
	
	number1=(number1*10)+flag1;//storing the first number
	
	for(i=count-3;i>=0;i--)
	{
		number1=(number1*10)+arr[i];
	}// storing the remaining numbers 
	number1=(number1*10)+flag2;//storing the last digit
		
	cout<<"Swapped Number :: "<<number1<<endl;
	return 0;
}
