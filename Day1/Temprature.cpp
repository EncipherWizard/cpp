#include<iostream>
using namespace std;
int main()
{
	float cel,fahrenheit;
	cout<<"Enter Temprature in Fahrenheit"<<endl;
	cin>>fahrenheit;
	cel = (5.0f/9.0f)*(fahrenheit-32);
	cout<<"Celcius :: "<<cel<<endl;
	return 0;

}
