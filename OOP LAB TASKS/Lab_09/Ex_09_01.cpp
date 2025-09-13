#include <iostream>
using namespace std;
class CPolygon
{
protected:
int width, height;
public:
void setup (int first, int second)
{
width= first;
height= second;
}
};
class CRectangle: public CPolygon
{
public:
int area()
{
return (width * height);
}
};
class CTriangle: public CPolygon
{
public:
int area()
{
return (width * height / 2);
}
};
int main ()
{
CRectangle rectangle;
CTriangle triangle;

//CPolygon * ptr_polygon1 = &rectangle;
//CPolygon * ptr_polygon2 = &triangle;
rectangle.setup(2,2);
triangle.setup(2,2);

cout <<"Rectangle area is: "<<rectangle.area () << endl;
cout <<"Triangle area is: "<<triangle.area () << endl;
return 0;
}

