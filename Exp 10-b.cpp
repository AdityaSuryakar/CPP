#include<iostream>
#include<stdexcept>
using namespace std;
int main() {
	int arr[5]={1,2,3,4,5};
	int index;
	cout<<"Enter the index"<<endl;
	cin>>index;
	try {
		if(index<0 || index >4)
		 throw out_of_range("Invalid Index");
		
		cout<<"Element at "<<index<<" is "<<arr[index]<<endl;
	}
	catch (out_of_range &str) {
		cout<<"Exception:"<<str.what()<<endl;
	}
	return 0;
}
