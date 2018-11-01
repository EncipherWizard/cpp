#include<iostream>
using namespace std;
template<class T1,class T2>
T2 add(T1 a,T2 b)
{
	return(a+b);
}
int main()
{
	cout<<add(2,8)<<endl;
	cout<<add(2.4,8.6)<<endl;
	cout<<add(2,8.6)<<endl;
	cout<<add('A','\b')<<endl;
	return 0;
}
