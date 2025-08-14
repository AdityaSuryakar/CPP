// Write a program to find the largest and smallest elements in an array.
#include<iostream>
using namespace std;

int main()
{
    int arr[5];
    int max,min, i;
    cout << "Enter 5 numbers:" << endl;
	for(i = 0; i < 5; i++)
    {
        cin >> arr[i];
        if(i == 0)  
        {
            max = arr[0];
            min = arr[0];
        }
        if(arr[i] > max)  
        {
            max = arr[i];
        }
        if(arr[i] < min)
        {
        	min = arr[i];
		}
    }
	cout << "The maximum number is: " << max << endl;
    cout << "The minimum number is: " << min << endl;
    
    return 0;
}
