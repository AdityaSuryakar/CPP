#include<iostream>
int factorial(int n)
{
	if(n==0)
	{
		return 1;
	}
	else
	{
		return(n*factorial(n-1));
	}
}
using namespace std;
int main()
{
	int n1;
	cout<<"Enter first number:";
	cin>>n1;
	int result = factorial(n1); 
	
    cout << "The factorial is: " << result << endl;
	return 0;
}
