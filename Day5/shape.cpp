#include<iostream>
using namespace std;
class Shape
{
	protected:
	double dim1,dim2;
	public:
	
	Shape()
	{
		dim1=dim2=0.0;
	}
	
	Shape(double dim1,double dim2)
	{
		this->dim1=dim1;
		this->dim2=dim2;
	}
	
	void getdata()
	{
		cout<<"Enter Dimension 1 :: ";
		cin>>dim1;
		cout<<"Enter Dimension 2 :: ";
		cin>>dim2;
		cout<<endl<<endl;
	}
	
	void showdata()
	{
		cout<<"Dimension 1  ::"<<dim1<<endl;
		cout<<"Dimension 2  ::"<<dim2<<endl<<endl;
	}
	
	virtual void area() =0;
};
class Rectangle : public Shape
{
	public:
	void area()
	{
		int ar;
		Shape::getdata();
		Shape::showdata();
		ar=dim1*dim2;
		cout<<"Area of the Rectangle :: "<<ar<<endl<<endl;
	}
};
class Triangle : public Shape
{
	public:
	void area()
	{
		int ar;
		Shape::getdata();
		Shape::showdata();
		ar=0.5*dim1*dim2;
		cout<<"Area of the Triangle :: "<<ar<<endl<<endl;
	}
};
int main()
{
	Shape *s;
	int choice=0;	
	do
	{	
		cout<<"Select the suitable Choice"<<endl<<endl;
		cout<<"Select 1 for Rectangle"<<endl<<endl;
		cout<<"Select 2 for Triangle"<<endl<<endl;
		cout<<"Select 3 for Exit"<<endl<<endl;
		cin>>choice;
		switch(choice)
		{
			case 1:
			{
				s= new Rectangle;
				s->area();
				break;
			}
			case 2:
			{
				s= new Triangle;
				s->area();
				break;
			}
			case 3:
			{
				cout<<endl<<"GoodBye"<<endl;
				break;
			}
		
		}	
	}while(choice!=3);//Switch Over
	return 0;
}
