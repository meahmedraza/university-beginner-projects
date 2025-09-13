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
virtual int area()
{
   return 0;
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
CPolygon polygon;
//CPolygon * ptr_polygon1 = &rectangle;
//CPolygon * ptr_polygon2 = &triangle;
//CPolygon * ptr_polygon3 = &polygon;
//ptr_polygon1->setup(2,2);
//ptr_polygon2->setup(2,2);
//ptr_polygon3->setup(2,2);
rectangle.setup(4,4);
triangle.setup(2,2);
polygon.setup(1,1);
cout << rectangle.area()<< endl;
cout << triangle.area()<< endl;
cout << polygon.area()<< endl;
return 0;
}

