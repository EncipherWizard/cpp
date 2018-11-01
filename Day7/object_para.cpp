#include<iostream>
using namespace std;
class Distance
{
	private:
	int feet;
	double inches;
	public:
	Distance()
	{
		feet=0;
		inches=0;
 	                       }
	Distance(int feet,int inches)
	{
		this->feet=feet;
		this->inches=inches;
	}
	void add(Distance obj1,Distance obj2)
	{
		feet=obj1.feet+obj2.feet;
		inches=obj1.inches+obj2.inches;
		if(inches>=12)
		{
			feet++;
			inches -=12;
		}
	}
	Distance add(Distance d)
	{
		Distance temp;
		temp.feet=feet+d.feet;
		temp.inches=inches+d.inches;
		
		if(temp.inches>=12)
		{
			temp.feet++;
			temp.inches-=12;
		}
	}
	void show()
	{
		cout<<"Distance Feet :: "<<feet<<"  Inches :: "<<inches<<endl;
	}
};
int main()
{
	Distance d1(5,7.1);
	Distance d2(5,6.8);
	Distance d3;
	Distance d4;
	d3.add(d1,d2);
	d1.show();
	d2.show();
	d3.show();
	d4.show();
	return 0;
	
}
