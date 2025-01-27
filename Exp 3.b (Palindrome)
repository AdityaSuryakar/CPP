// Write a program to check if a string is a palindrome.
#include<iostream>
#include<string>
using namespace std;

int main()
{
    string str1;
    cout<<"Enter the string:"<<endl;
    cin>>str1;
    int len = str1.length();
    bool isPalindrome = true;
	for(int i = 0; i < len / 2; i++)  
    {
        if(str1[i] != str1[len - i - 1])  
        {
            isPalindrome = false;
            break;  
        }
    }

    if(isPalindrome)
        cout << "String is Palindrome" << endl;
    else
        cout << "String is Not Palindrome" << endl;

    return 0;
}
