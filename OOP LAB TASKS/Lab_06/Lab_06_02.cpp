#include <iostream>
using namespace std;
class CalculateArea
{
private:
double length; 
double breadth; 
double area; 

public:

CalculateArea(double lv=1.0, double bv=1.0, double ar=0)
{
cout << endl << "Constructor called.";
length = lv;
breadth = bv;
area = ar;
}

double Area()
{
cout<<endl<<"Enter length: ";
cin>>length;
cout<<"Enter breadth: ";
cin>>breadth;
return area = length * breadth ;
}
friend double CalculateAreaSurface(CalculateArea aCalculateArea);
};
double CalculateAreaSurface(CalculateArea aCalculateArea)
{
return (aCalculateArea.length*aCalculateArea.breadth );
}
int main(void)
{
CalculateArea aCalculateArea(0,0); 
cout << "Area is = "<< aCalculateArea.Area();
cout <<endl;
return 0;
}
