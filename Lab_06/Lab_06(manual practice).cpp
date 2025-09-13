#include <iostream>
using namespace std;
class Box
{
// Class definition at global scope
public:
// Constructor definition
Box(double lv=1.0, double bv=1.0, double hv=1.0)
{
cout << endl << "Constructor called.";
length = lv;
breadth = bv;
height = hv;
// Set values of
// data members
}
// Function to calculate the volume of a box
double Volume()
{
return length * breadth * height;
}
private:
double length; // Length of a box in inches
double breadth; // Breadth of a box in inches
double height; // Height of a box in inches
//Friend function
friend double BoxSurface(Box aBox);
};
// friend function to calculate the surface area of a Box object
double BoxSurface(Box aBox)
{
return 2.0*(aBox.length*aBox.breadth +
aBox.length*aBox.height +
aBox.height*aBox.breadth);
}
int main(void)
{
Box Match(2.2, 1.1, 0.5); // Declare Match box
Box Box2; // Declare Box2 - no initial values
cout << endl
<< "Volume of Match = "
<< Match.Volume();
cout << endl
<< "Surface area of Match = "
<< BoxSurface(Match);
cout << endl
<< "Volume of Box2 = "
<< Box2.Volume();
cout << endl
<< "Surface area of Box2 = "
<< BoxSurface(Box2);
cout << endl;
return 0;
}

