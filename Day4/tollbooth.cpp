#include<iostream>
using namespace std;
class Tollbooth
{
	private:
	int total_cars=0;
	int total_money=0;
	const int toll_fee = 50;
	public:
	
	Tollbooth()
	{
		total_cars=0;
		total_money=0;
	}
	
	Tollbooth(int total_cars,int total_money)
	{
		this->total_cars=total_cars;
		this->total_money=total_money;
	}
	
/*	void getdata()
	{
		
	}
*/

	void payingcar()
	{
		cout<<"Paying Car"<<endl<<endl;
		total_money=total_money+toll_fee;
		total_cars++;			 
	}
	
	void nopaycar()
	{
		cout<<"No Pay Car"<<endl<<endl;
		total_cars++;
	}
	
	void showdata()
	{
		cout<<"Total No. of Cars  ::  "<<total_cars<<endl<<endl;
		cout<<"Total No. of Money  ::  "<<total_money<<endl<<endl;
	}
	
};//end of class Tollbooth

int main()
{
	Tollbooth t1;
	int choice=0;
	do
	{	
		cout<<"Select the suitable Choice"<<endl<<endl;
		cout<<"Select 1 for Paying Car"<<endl<<endl;
		cout<<"Select 2 for No Pay Car"<<endl<<endl;
		cout<<"Select 3 To show Total number of cars and Total Number Money Collected"<<endl<<endl;
		cout<<"Select 4 for Exit"<<endl<<endl;
		cin>>choice;
		switch(choice)
		{
			case 1:
			{
				t1.payingcar();
				break;
			}
			case 2:
			{
				t1.nopaycar();
				break;
			}
			case 3:
			{
				t1.showdata();
				break;
			}
			case 4:
			{
				cout<<"GoodBye"<<endl;
				break;
			}
		
		}	
	}while(choice!=4);//Switch Over
	return 0;
}//End of Main Fuction
