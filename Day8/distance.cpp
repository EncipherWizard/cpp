#include<iostream>
using namespace std;
class Distance
{
	private:
	double feet,inches;
	public:
	Distance()
	{
		feet=0;
		inches=0;
	}
	Distance(double feet,double inches)
	{
		this->feet=feet;
		this->inches=inches;
	}
	void show()
	{
		cout<<"feet :: "<<feet;
		cout<<"inches :: "<<inches<<endl;
	}
	void add(Distance obj1,Distance obj2)
	{
		feet=obj1.feet+obj2.feet;
		inches=obj1.inches+obj2.inches;
		if(inches>=12)
		{
			feet++;
			inches-=12;
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
		return temp;
	}
	Distance operator +(Distance d)
	{
		Distance temp;
		temp.feet=feet+d.feet;
		temp.inches=inches+d.inches;
		if(temp.inches>=12)
		{
			temp.feet++;
			temp.inches-=12;
		}
		return temp;
	}
	Distance operator +(double i)
	{
		Distance temp;
		temp.feet=feet;
		temp.inches=inches+i;
		if(temp.inches>=12)
		{
			temp.feet++;
			temp.inches-=12;
		}
		
		return temp;
	}
	Distance operator *(double i)
	{
		Distance temp;
		temp.feet=feet*i;
		temp.inches=inches*i;
		if(temp.inches>=12)
		{
			temp.feet++;
			temp.inches-=12;
		}
		return temp;
	}
	/*Distance operator \(Distance d)
	{
		Distance temp;
		temp.feet=feet/2;
		if(temp.inches<=12)
		{
			temp.inches+=12
		}
		temp.inches=inches+i;
		//temp.inches=inches+i;
		//temp.inches=inches\2;
		if(temp.inches>=12)
		{
			temp.feet++;
			temp.inches-=12;
		}
	
		return temp;
	}*/
};
int main()
{
	Distance d1(5,7.2);
	Distance d2(6,5.2);
	Distance d3;
	Distance d4;
	Distance d5;
	Distance d6;
	d3.add(d1,d2);
	d3.show();
	d4=d1.add(d2);
	d4.show();
	d5 = d1+d2;
	d5.show();
	d6=d1+7.2;
	d6.show();
	d6=d1+2;
	d6.show();
	return 0;
}
