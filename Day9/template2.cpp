#include<iostream>
using namespace std;
template<class T>
class Collection
{
	private:
	T arr[5];
	public:
	void set()
	{
		int i;
		cout<<"Enter five Elements"<<endl;
		for(i=0;i<5;i++)
		{
			cin>>arr[i];
		}
	}
	void show()
	{
		int i;
		cout<<"Elements entered"<<endl;
		for(i=0;i<5;i++)
		{
			cout<<arr[i]<<endl;;
		}
	}
		
};
int main()
{
	Collection <int> c1;
	c1.set();
	c1.show();
	Collection <char> c2;
	c2.set();
	c2.show();
	Collection <double> c3;
	c3.set();
	c3.show();
	return 0;
}
