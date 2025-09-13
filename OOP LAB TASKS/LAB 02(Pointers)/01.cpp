#include<iostream>
using namespace std;
int adder(int *a,int *b);
int main()
{
	int a,b, x;
	cout<<"Enter value in a : ";
	cin>>a;
	cout<<"Enter value in b : ";
	cin>>b;
	x = adder(&a,&b);
	
	cout<<"Sum of two number is : "<<x<<endl;

return 0;	

}

int adder(int*x, int*y)
{
	return (*x + *y);  
}
