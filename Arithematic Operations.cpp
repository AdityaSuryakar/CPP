#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	char operation;
	int num1;
	int num2;

	{
		std::cout<<"Enter num1 ";
		std::cin>>num1;
		std::cout<<"Enter the arithematic operator(+,-,*,/)\n ";
		std::cin>>operation;
		std::cout<<"Enter num2 ";
		std::cin>>num2;
	}
	switch (operation)
	{
		case '+':
			std::cout<<"Result: "<<num1+num2<<endl;
			break;
		case '-':
			std::cout<<"Result: "<<num1-num2<<endl;
			break;
		case '*':
			std::cout<<"Result: "<<num1*num2<<endl;
			break;
		case '/':
			std::cout<<"Result: "<<num1/num2<<endl;
			break;
		default:
			std::cout<<"Error: Invalid Operator"<<endl;
			break;	
		}
		return 0;
}
