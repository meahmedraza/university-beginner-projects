#include<iostream>
using namespace std;
int main()
{
	int size;
	cout<<"Enter the size of array : ";
	cin>>size;
	int arr[size];
	cout<<endl;
	
	cout<<"Enter Random numbers in the array : "<<endl;
	for(int i=0; i<size; i++)
	{
		cin>>arr[i];
	}
	cout<<"Even numbers in the array are : ";
	for(int i=0; i<size; i++)
	if(arr[i]%2==0)
	{
		
		cout<<arr[i]<<" ";
		
	}
	
	return 0;
}
