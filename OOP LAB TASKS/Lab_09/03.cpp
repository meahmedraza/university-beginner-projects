#include <iostream>
using namespace std;
class Cylinder
{
protected:
int radius=0, height=0, Area=0;
const float pi= 3.14;
public:
void Calculate(int h, int r)
{
	height=h;
	radius=r;
}
};
class SmallCylinder: public Cylinder
{
public:
void Calculate()
{
	Area =(2*pi*radius*height)+(2*pi*radius*radius);
	cout<<"Area of Cyclinder is: "<<Area;
}
};

int main ()
{
SmallCylinder s1;
int num1,num2;
Cylinder * C1 = &s1;
cout<<"Enter the Radius: ";
cin>>num1;
cout<<"Enter the Height: ";
cin>>num2;
C1->Calculate(num1, num2);
s1.Calculate();
return 0;
}
