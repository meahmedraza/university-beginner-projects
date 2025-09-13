#include<iostream>
using namespace std;
void sort(int* arr, int size);
int main()
{
	int size;
	cout<<"Enter the size of array : ";
	cin>>size;
	cout<<endl;
	int arr[size];
	for(int i=0; i<size; i++)
	{
		cout<<"Enter the value at index "<<i<<":";
		cin>>arr[i];
	}
	
	sort(arr,size);
	for(int i=0; i<size; i++)
	{
		cout<<arr[i]<<" ";
	}
	return 0;
}

void sort(int* arr, int size)
{
	for(int i=0; i<size; i++)
	{
		for(int j=0; j<size; j++)
		{
			if(*(arr+i)<*(arr+j))
			{
				int temp = *(arr+i);
				*(arr+i)= *(arr+j);
				*(arr+j)=temp;
			}
			
			}
			
		}
	}

