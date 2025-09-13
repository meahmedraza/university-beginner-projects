#include<iostream>
using namespace std;
int main()
{
	int min, max;
	
	cout<<"Enter the minimum number : ";
	cin>>min;
	cout<<"Enter the maximum number : ";
	cin>>max; 
	int min_arr[min];
	int max_arr[max];
	cout<<"Minmum numbers stored in the array are :";
	for(int i=0; i<=min; i++)
	{
	   min_arr[i]=i;
	   cout<<min_arr[i]<<" ";
	}
	cout<<endl;
	cout<<"Maximum numbers stored in the array are :";
	for(int i=min+1; i<=max; i++)
	{
		
		max_arr[i-min]=i;
		cout<<max_arr[i-min]<<" ";
	}
	
	return 0;
}
