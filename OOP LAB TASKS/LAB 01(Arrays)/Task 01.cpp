#include<iostream>
using namespace std;

int main()
{
	int a;
	int months[a];
	int average, totalsum=0;
	cout<<"Enter the months for which you want to take data : ";
	cin>>a;
	if(a<=12)
	{
		
	for(int i=0; i<a; i++)
	{
		cout<<"Enter the rain amount in "<<i+1<<" month : ";
	    cin>>months[i];
	}
	for(int j=0; j<a; j++)
	{
		cout<<"Rain for the month "<<j+1<<" is : "<<months[j]<<endl;
		totalsum += months[j];
	}
	average = totalsum/a;
	cout<<"Average amount of rain for the months are :"<<average;	
	}
	
	else
	{
		cout<<"Input Error";
	}
	
	return 0;
	
	
}
