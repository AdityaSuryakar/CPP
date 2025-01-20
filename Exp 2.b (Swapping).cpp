#include<iostream>
 int swapNums(int &num1,int &num2)
{
	int temp=num1;
	num1=num2;
	num2=temp;
}
using namespace std;
int main()
{
	int n1,n2;
	cout<<"Enter first number:";
	cin>>n1;
	cout<<"Enter Second number:";
	cin>>n2;
	cout << "Before swap: " << "\n";
	cout << n1 <<'\t'<<n2 << "\n";
	swapNums(n1,n2);
	cout << "After swap: " << "\n";
	cout << n1 <<'\t'<<n2 << "\n";
	return 0;
	
}
