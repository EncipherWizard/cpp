#include<iostream>
using namespace std;
template <class T>
class Stack
{
	private:
	T arr[5];
	int top;
	public:
	Stack()
	{
		top=-1;
	}
	void push(T el)
	{
		if(top<5)
		arr[++top]=el;
		else
		throw "Stack is full";
	}
	T pop()
	{
		if(top==-1)
		throw "Stack is empty";
		else
		arr[top--];
	}
};
int main()
{
	try
	{
		Stack <string> s1;
		s1.push("animesh");
		s1.push("anant");
		cout<<s1.pop()<<endl;
		s1.push("datta");
		s1.push("aaa");
		s1.push("bbb");
		cout<<s1.pop()<<endl;
		cout<<s1.pop()<<endl;
		cout<<s1.pop()<<endl;
		cout<<s1.pop()<<endl;
		cout<<s1.pop()<<endl;
		
	}
	catch(const char * msg)
	{
		cout<<msg<<endl;
		cout<<"End of main"<<endl;
	}
	return 0;
}
