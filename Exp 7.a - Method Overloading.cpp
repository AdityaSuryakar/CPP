
#include<iostream>
using namespace std;
class Parent
{
	public:
		void f1()
		{
			cout<<"In parnet class"<<endl;
			
		}
};
class Child:public Parent
{
	public:
		void f1()
		{
			cout<<"In child class"<<endl;
		}
		
		
};
int main()
{
	Parent p;
	p.f1();
	Child c;
	c.f1();
}
